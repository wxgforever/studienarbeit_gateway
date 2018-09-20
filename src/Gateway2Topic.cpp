#include <stdio.h>
#include <unistd.h>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>
#include <signal.h>
#include <queue>
#include <iostream>
#include <boost/thread/thread.hpp>
#include <assert.h>
#include "ros/ros.h"
#include "open62541.h"


// <<add headfile in this place>>
#include "studienarbeit_gateway/test.h"




/*****************************************************************************
*  Gateway2Topic                                                             *
*                                                                            *
*  This file is part of project "studienarbeit_gateway"                      *
*                                                                            *
*  This program is free software; you can redistribute it and/or modify      *
*  it                                                                        *
*                                                                            *
*  @file     Gateway2Topic                                                   *
*  @brief    source code of a program to build a gateway for transform       *
*            ros service into a opc ua method                                *
*                                                                            *
*                                                                            *
*  @author   Xiaoguo Wang                                                    *
*  @email    wxgforever@foxmail.com                                          *
*  @version  1.0.0.0                                                         *
*                                                                            *
*----------------------------------------------------------------------------*
*  Remark         : Description                                              *
*----------------------------------------------------------------------------*
*  Change History :                                                          *
*  <Date>     | <Version> | <Author>       | <Description>                   *
*----------------------------------------------------------------------------*
*  2018/08/18 | 1.0.0.0   | Xiaoguo Wang   | source code                     *
*----------------------------------------------------------------------------*
*                                                                            *
*****************************************************************************/


#define Test_Zahl 100

UA_Server *server;
char topic[200]; //name of topic

UA_Int32 count=0;// record the amount of the variable

UA_Boolean running = true;


/* Build Instructions (Linux)
 * - gcc -std=c99 -c open62541.c
 * - g++ Werkzeug2Topic.cpp open62541.o -o Werkzeug2Topic */


/*@brief DefinitionBank2Topic is a structure that can store the definition of ROS Topic through analyzing ros srv-message */
typedef struct _DefinitionBank2Topic {
	std::string dataname; /*name of a variable in srv-message*/
	std::string datatype;  /*type of a variable in srv-message*/
	std::string nodeidname; /*the nodeid of the variable to show the value of message in a ros topics is set by UA_STRING(0,nodeidname)*/
	int datalvl; /*datalvl describes the position of a variable*/
	int isscalar; /* if a variable is scalar, isscalar=1, or isscalar =0*/
	int isvariable; /* if a variable is variant, isvariable=1, if isvariable=0, this variable is a structure*/

} DefinitionBank2Topic;
DefinitionBank2Topic bank[100];

/** union _Identifier
 * _Identifier is a union that contains the build-in datatype of opc ua.
 * the function of this union are transition variables to set the type of a variant
 */
typedef union _Identifier {
	UA_Boolean ua_boolean; //true or false
	UA_SByte ua_sbyte;  //-128~127
	UA_Byte ua_byte; //0-255
	UA_Int16 ua_int16; //-32768~32767
	UA_Int32 ua_int32;
	UA_Int64 ua_int64;
	UA_UInt16 ua_uint16;
	UA_UInt32 ua_uint32;
	UA_UInt64 ua_uint64;
	UA_Float ua_float;
	UA_Double ua_double;
	UA_String ua_string;
	UA_DateTime ua_datetime;
} Identifier;

Identifier ua_identifier;


/**
 *GetCommandResult: Give a character array as a system command, get the result of the command, command and a are input, result is output
 *
*@param command: the content of a command
*@param a: parameter for the conditional judgment,
*			a=0: Do not make any changes to the results
*			a=1: Delete line breaks("\n") in the returned result, so that the result can be directly used
*@param result: result of the command
*@return no return
*/
static void GetCommandResult(char command[], bool a, char result[]) { // a等于1则去掉换行，a等于0 则不去掉换行
	char Dir[10240]="";
	FILE *fp = NULL;
	fp = popen(command, "r");
	if (fp == NULL) {
		exit(1);
	}
	fread(Dir, 10240, 1, fp);
	if (a == true) {
		int j = 0;
		for (int i = 0; i < strlen(Dir); i++)
			if (Dir[i] != '\n')
				Dir[j++] = Dir[i];
		Dir[j] = '\0';
	}
	pclose(fp);
	strcpy(result,Dir);
}

/**
 * this is a redefine of the method "GetCommandResult", the function is same. In this function the type of the result is std::string
 * so that with the function "GetCommandResult", The result can be assigned to a data of type std::string or char
 */
static void GetCommandResult(std::string command,bool a, std::string * result){
	char Dir[10240]="";
	FILE *fp = NULL;
	fp = popen((char*)command.c_str(), "r");
	if (fp == NULL) {
		exit(1);
	}
	fread(Dir, 10240, 1, fp);
	if (a == true) {
		int j = 0;
		for (int i = 0; i < strlen(Dir); i++)
			if (Dir[i] != '\n')
				Dir[j++] = Dir[i];
		Dir[j] = '\0';
	}
	pclose(fp);
	*result=Dir;

}

/**
 * @brief get the direction of the this package.
 * this function give the command "rospack find <packagename>", and the result is the direction of this package
 * @param packagename Is name of a ros package
 * @param packagelocation Is direction of a ros package. this parameter is the result of this function
 */
static void GetPackageLocation(std::string packagename, std::string * packagelocation){
	std::string s1="rospack find ";
	s1=s1+packagename;
	GetCommandResult(s1,1,packagelocation);
}


/**
 * @brief this function can get the message-type of a ros topic
 * @param topicname Is name of a ros topic
 * @param msgname Is name of a ros message-type, msgname is assigned by this function
 */
static void GetMsgfromTopic(char topicname[],char msgname[]){
	char s1[300]="rostopic type ";
	strcat(s1,topicname);
	GetCommandResult(s1,1,msgname);
}


/**
 * @brief this function can show and print the definition of a ros message-type
 * this function is used for checking the program
 * @param msgname Is name of a ros topic
 * @param msgtype Contains the definition of a message-type. msgtype will be assigned by this function
 */
static void GetMsgDefbyMsgname(char msgname[],char msgtype[]){//该函数作用只是用来展示获得的信息是对的
	char s1[300]="rosmsg show ";
	strcat(s1,msgname);
	GetCommandResult(s1,0,msgtype);
}

/**
 * @brief GetMsgDef can get the definition of a ros message-type and save every line of the definition in an array of string
 * this funciton can also record the amount of the parameters in a ros message-type
 * @param msgname Is name of a ros topic
 * @param message Is an Array of string that can save the definition of ros message-type. every entry will obtain a line in the definition
 * @param count2message Is a number to record the amount of the parameters in a ros messagetype
 * PS: msgname is input. Array of string message and count2message will be assigned by this function
 */
static void GetMsgDef(char msgname[],std::string message[],int *count2message){
	int Lid=0;
	int count=0;
	std::string tmp[100];
	char s1[300]="rosmsg show ";
	strcat(s1,msgname);
	std::cout<<"s1在这里"<<s1<<"\n";
	FILE *fp = NULL;
	fp = popen(s1, "r");
	if (fp == NULL) {
		exit(1);
	}

	int Grenze=0;
	char Buf[1024];
	while (fgets(Buf, 1024, fp)) {
		int j = 0;
		for (int i = 0; i < strlen(Buf); i++)
			if (Buf[i] != '\n')
				Buf[j++] = Buf[i];
		Buf[j] = '\0';

		tmp[Lid] = Buf;
		Lid++;
	}
	Lid--;
	fclose(fp);
	std::cout << "行数是:" << Lid << "\n";


	std::string::size_type idx;
	for(int i=0;i<Lid;i++){
		idx=tmp[i].find("=",0);
		if(idx == std::string::npos){
		message[count]=tmp[i];
		count++;
		}
	}

	*count2message=count;
}

/** function- GetDefinitionBank2Topc
 * @brief to build a opc ua informationsmodell for mapping ros topic. the necessary information will be saved into a database
 * structure DefinitionBank2Topic is set to finish this tasks.
 * this function can analyze the definition of a ros msg-type and put the information for build a ros object in structure DefinitionBank2Topic
 * @param message Is an array that contains the definition of a ros msg-type
 * @param count2message Shows how many parameters are in this msg-type
 * @param bank Is an Array that will be assigned by this function. every entry contains the information a parameter in ros msg-type
 */
static void GetDefinitionBank2Topic(std::string message[], UA_Int32 count2message, DefinitionBank2Topic * bank) {
	//更新换代以后可以判断是否是结构体或者变量  Jetzt kann die Funktion unterscheiden, ob es ein Variant oder ein Name von Object ist. 2018.7.6
	/*Die Definition der Daten, die von Service übertragen werden, kann mit dieser Funktion analysiert werden,
	 * und eine Struktur im Form von " DefinitionBank2Method" speichert alle benötige Informationen
	 *
	 */
	std::stringstream is;
	std::string tmp;

	for(UA_Int32 i=0;i<count2message;i++){
		is.clear();
		is.str("");
		tmp="";


		is<<message[i];
		is >> bank[i].datatype >> bank[i].dataname;
		tmp=message[i];
		bank[i].datalvl = tmp.find_first_not_of(' ', 0) / 2 + 1;	//获得数据在结构体中的等级
		std::string::size_type idx;
		idx = tmp.find("[]", 0);

		bank[i].isscalar = (idx == std::string::npos) ? 1 : 0;
		if (bank[i].isscalar == 0) {
			//****清除掉"[]"    einfach "[]" Eckeklammer wegwerfen
			bank[i].datatype.erase(bank[i].datatype.length() - 2,bank[i].datatype.length() - 1);
		}
	}
	for(int i=0;i<count2message;i++){
		if (i == (count2message - 1)) {
			bank[i].isvariable = 1;
		} else if (bank[i].datalvl < bank[i + 1].datalvl) {
			bank[i].isvariable = 0;
		} else
			bank[i].isvariable = 1;
	}


}

/**
 * @brief this function is used to get the nodeidname of a paramteter this nodeidname will be used to define the NodeId of a opc ua variable
 * @param bank Is an array. Every entry contains the information necessary to define a opc ua variable
 * @param count2message
 * in this function the nodeidname will be assigned.
 * name of a variable can be "x" and the nodeidname show the navigation of this varialbe "msg.kos.x"
 */
static void GetNodeIdNameInBank(DefinitionBank2Topic *bank,int count2message){
	std::string currentlvl[10];
	std::string ss;
	currentlvl[0] = "msg->";

	for (int i = 0; i < count2message; i++) {
		ss="";
		if (bank[i].isvariable == 1) {

			ss.insert(0,bank[i].dataname);
			for(int j=bank[i].datalvl-1;j>=0;j--){

				if(j!=0) ss.insert(0,".");
				ss.insert(0,currentlvl[j]);
			}

			bank[i].nodeidname=ss;
			}

		if (bank[i].isvariable == 0) {
			ss.insert(0,bank[i].dataname);
			for(int j=bank[i].datalvl-1;j>=0;j--){

				if(j!=0) ss.insert(0,".");
				ss.insert(0,currentlvl[j]);
			}

			bank[i].nodeidname=ss;

			currentlvl[bank[i].datalvl] = bank[i].dataname;
		}
	}

}

/**
 * @brief this function can set UA_VariantAttribute and return a variable in datatype UA_VariableAttributes
 * this function finishes the fundamental setting of a UA_VariableAttributes including: description, displayName, accessLevel, and datatype.
 * @param dataname Is name of a parameter
 * @param type Is type of a parameter
 */
static UA_VariableAttributes setVariantAttributes(std::string dataname,
		std::string type) {

	//将variableattribute设置好，返回出来的东西可以直接加入到addvariable里边
	UA_VariableAttributes attr = UA_VariableAttributes_default;
	char * tmpName = (char *) dataname.c_str();
	attr.description = UA_LOCALIZEDTEXT("en-US", tmpName);
	attr.displayName = UA_LOCALIZEDTEXT("en-US", tmpName);
	attr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

	if (type == "bool") {
		ua_identifier.ua_boolean = 0;
		UA_Variant_setScalar(&attr.value, &ua_identifier.ua_boolean,
				&UA_TYPES[UA_TYPES_BOOLEAN]);
		attr.dataType = UA_TYPES[UA_TYPES_BOOLEAN].typeId;
	}
	if (type == "byte") {
		ua_identifier.ua_byte = 0;
		UA_Variant_setScalar(&attr.value, &ua_identifier.ua_byte,
				&UA_TYPES[UA_TYPES_BYTE]);
		attr.dataType = UA_TYPES[UA_TYPES_BYTE].typeId;
	}
	if ((type == "char") || (type == "string")) {
		UA_String ua_string = UA_STRING("zuobiaoxi");
		UA_Variant_setScalar(&attr.value, &ua_string,
				&UA_TYPES[UA_TYPES_STRING]);
		attr.dataType = UA_TYPES[UA_TYPES_STRING].typeId;

	}
	if ((type == "int8") || (type == "int16")) {
		ua_identifier.ua_int16 = 0;
		UA_Variant_setScalar(&attr.value, &ua_identifier.ua_int16,
				&UA_TYPES[UA_TYPES_INT16]);
		attr.dataType = UA_TYPES[UA_TYPES_INT16].typeId;
	}
	if (type == "int32") {
		ua_identifier.ua_int32 = 0;
		UA_Variant_setScalar(&attr.value, &ua_identifier.ua_int32,
				&UA_TYPES[UA_TYPES_INT32]);
		attr.dataType = UA_TYPES[UA_TYPES_INT32].typeId;

	}
	if (type == "int64") {
		ua_identifier.ua_int64 = 0;
		UA_Variant_setScalar(&attr.value, &ua_identifier.ua_int64,
				&UA_TYPES[UA_TYPES_INT64]);
		attr.dataType = UA_TYPES[UA_TYPES_INT64].typeId;
	}

	if (type == "uint32") {
		ua_identifier.ua_uint32 = 0;
		UA_Variant_setScalar(&attr.value, &ua_identifier.ua_uint32,
				&UA_TYPES[UA_TYPES_UINT32]);
		attr.dataType = UA_TYPES[UA_TYPES_UINT32].typeId;

	}
	if ((type == "uint16") || (type == "uint8")) {
		ua_identifier.ua_uint16 = 0;
		UA_Variant_setScalar(&attr.value, &ua_identifier.ua_uint16,
				&UA_TYPES[UA_TYPES_UINT16]);
		attr.dataType = UA_TYPES[UA_TYPES_UINT16].typeId;

	}
	if (type == "uint64") {
		ua_identifier.ua_uint64 = 0;
		UA_Variant_setScalar(&attr.value, &ua_identifier.ua_uint64,
				&UA_TYPES[UA_TYPES_UINT64]);
		attr.dataType = UA_TYPES[UA_TYPES_UINT64].typeId;
	}

	if(type=="float32"){
		ua_identifier.ua_float = 0;
		UA_Variant_setScalar(&attr.value, &ua_identifier.ua_float,
				&UA_TYPES[UA_TYPES_FLOAT]);
		attr.dataType = UA_TYPES[UA_TYPES_FLOAT].typeId;
	}

	if (type == "float64") {
		ua_identifier.ua_double = 0;
		UA_Variant_setScalar(&attr.value, &ua_identifier.ua_double,
				&UA_TYPES[UA_TYPES_DOUBLE]);
		attr.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;

	}

	if (type == "time") {
		ua_identifier.ua_datetime = 0;
		UA_Variant_setScalar(&attr.value, &ua_identifier.ua_datetime,
				&UA_TYPES[UA_TYPES_DATETIME]);
		attr.dataType = UA_TYPES[UA_TYPES_DATETIME].typeId;

	}
	if (type == "duration") {

	}
	return attr;
}

/**
 * @brief Add an object node that has the same name as the ros topic into opc ua server.
 * In this function the naming rules of NodeId is : UA_NODEID_STRING(1,topicname)
 * @param server An OPC UA Server
 * @param topicname Name of a ros topic
 * no return
 */
static void addTopicAsObjectInServer(UA_Server * server, char * topicname) {
	UA_NodeId topicId; /* get the nodeid assigned by the server */
	UA_ObjectAttributes topicAttr = UA_ObjectAttributes_default;
	topicAttr.displayName = UA_LOCALIZEDTEXT("en-US", topicname);
	UA_NodeId testId = UA_NODEID_STRING(1, topicname);
	UA_Server_addObjectNode(server, testId,
			UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
			UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
			UA_QUALIFIEDNAME(1, topicname),
			UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE), topicAttr, NULL,
			&topicId);
}

/**
 * @brief Add Variable node in OPC UA Server.
 *  Add the reference between object node and variable node. object node is parent node for a variable node.
 *  @param server An OPC UA Server
 *  @param dataname The data name
 *  @param nodeidname Identifier of a nodeid.
 *  the naming rules of Varaible node is: UA_NODEID_STRING(1,nodeidname)
 *  @param datatype Shows the data type
 *  @param objectnodeidname The Identifier of an object node
 */
static void addVariableToObject(UA_Server * server, std::string dataname,std::string nodeidname,
		std::string datatype, std::string objectnodeidname) {

	/* Define the attribute of the myInteger variable node */
	UA_VariableAttributes attr = setVariantAttributes(dataname, datatype);
	char * tmpname = (char *) dataname.c_str();//这个id是添加进服务器的id，需要扩成成为完整的，和上一层的关系用一个点相连，应该会好点
	// better,if the nodeidname can describe the position of a varaible in a structure
	char * tmpobject = (char *) objectnodeidname.c_str();
	/* Add the variable node to the information model */
	UA_NodeId myIntegerNodeId = UA_NODEID_STRING(1, (char *) nodeidname.c_str());
	UA_QualifiedName myIntegerName = UA_QUALIFIEDNAME(1, tmpname);
	//to be continue
	UA_NodeId parentNodeId = UA_NODEID_STRING(1, tmpobject);

	UA_NodeId parentReferenceNodeId = UA_NODEID_NUMERIC(0,
			UA_NS0ID_HASCOMPONENT);
	UA_Server_addVariableNode(server, myIntegerNodeId, parentNodeId,
			parentReferenceNodeId, myIntegerName,
			UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), attr, NULL,
			NULL);

}

/**
 * @brief Add an object node in OPC UA Server and add the reference between two object node: add an object node to a parent object node
 *
 * @param server An OPC UA Server
 * @param objectname  name of a object node
 * @param objectnodeidname Identifier of a object node, this parameter defines a NodeId, like:  UA_NODEID_STRING(1,objectnodeidname)
 */
static void addObjectToParentobject(UA_Server * server, std::string objectname,std::string objectnodeidname,
		std::string parentnodeidname) {
	UA_ObjectAttributes attr = UA_ObjectAttributes_default;
	attr.displayName = UA_LOCALIZEDTEXT("en-US", (char*) objectname.c_str());
	UA_NodeId parentId = UA_NODEID_STRING(1, (char*)parentnodeidname.c_str());
	UA_NodeId objectNodeId = UA_NODEID_STRING(1, (char*) objectnodeidname.c_str());

	UA_Server_addObjectNode(server, objectNodeId,
	                            parentId,
	                            UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
								UA_QUALIFIEDNAME(1, (char *) objectname.c_str()), UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE),
	                            attr, NULL, NULL);
}

/**
 * @brief Add an OPC UA informationsmodel for mapping a ros topic in OPC UA Server
 * The process is: adding all the node built before in OPC UA Server
 * @param server An OPC UA Server in Gateway
 * @param bank An array of DefinitionBank2Topic that contains the information of a ros topic
 * @param amount Is amount of variable. This number shows the effect entry in bank
 * @param topicname Name of the ros topic. An object node that has the same name will be added in OPC UA Server in the Gateway
 */
static void addTopicToServer(UA_Server * server, DefinitionBank2Topic bank[],
		int amount, char topicname[]) {

	addTopicAsObjectInServer(server, topicname); /*add an object named topicname in opc ua server*/

	std::string currentlvl[10]; /*Navigation*/
	currentlvl[0] = topicname;


	/* add the informationsmodel in opc ua server, this model has the same data structure as a ros topic */
	for (int i = 0; i < amount; i++) {

		if (bank[i].isvariable == 1) {
			//std::cout << "variant  " << bank[i].dataname << "  in  "<< currentlvl[bank[i].datalvl - 1] << "   \n" << std::endl;
			if (bank[i].datatype != "string")
				addVariableToObject(server, bank[i].dataname,bank[i].nodeidname, bank[i].datatype,
						currentlvl[bank[i].datalvl - 1]);
			if ((bank[i].datatype == "string")||(bank[i].datatype=="char")){
			    char *tmpName=(char*)bank[i].dataname.c_str();
			    char *tmpObject=(char*)currentlvl[bank[i].datalvl - 1].c_str();
			    UA_VariableAttributes attr = UA_VariableAttributes_default;
			    UA_String ss = UA_STRING("");
			    UA_Variant_setScalar(&attr.value, &ss, &UA_TYPES[UA_TYPES_STRING]);
			    attr.displayName = UA_LOCALIZEDTEXT("en-US", tmpName);

			    UA_NodeId parentId=UA_NODEID_STRING(1,tmpObject);
			    UA_NodeId valId=UA_NODEID_STRING(1,(char*)bank[i].nodeidname.c_str());
			    UA_Server_addVariableNode(server, valId, parentId,
			                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
			                              UA_QUALIFIEDNAME(1, tmpName),
			                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), attr, NULL, NULL);
			}
		}
		if (bank[i].isvariable == 0) {
		//	std::cout << "structure  " << bank[i].dataname << "  in  "<< currentlvl[bank[i].datalvl - 1] << "   \n" << std::endl;
			addObjectToParentobject(server, bank[i].dataname,bank[i].nodeidname,
					currentlvl[bank[i].datalvl - 1]);
			currentlvl[bank[i].datalvl] = bank[i].nodeidname;
		}

	}
}



//<<write callback function in this postition>>
void ROSCallback(const studienarbeit_gateway::test::ConstPtr& msg) {
	Identifier id;UA_Variant myVar;

UA_Variant_init(&myVar);
id.ua_string =UA_STRING((char*)msg->dim.label.c_str());
	UA_Variant_setScalar(&myVar, &id.ua_string, &UA_TYPES[UA_TYPES_STRING]);
UA_Server_writeValue(server, UA_NODEID_STRING(1,"msg->dim.label"), myVar);

UA_Variant_init(&myVar);
id.ua_uint32 =msg->dim.size;
	UA_Variant_setScalar(&myVar, &id.ua_uint32, &UA_TYPES[UA_TYPES_UINT32]);
UA_Server_writeValue(server, UA_NODEID_STRING(1,"msg->dim.size"), myVar);

UA_Variant_init(&myVar);
id.ua_uint32 =msg->dim.stride;
	UA_Variant_setScalar(&myVar, &id.ua_uint32, &UA_TYPES[UA_TYPES_UINT32]);
UA_Server_writeValue(server, UA_NODEID_STRING(1,"msg->dim.stride"), myVar);

UA_Variant_init(&myVar);
id.ua_double =msg->object.kos.x;
	UA_Variant_setScalar(&myVar, &id.ua_double, &UA_TYPES[UA_TYPES_DOUBLE]);
UA_Server_writeValue(server, UA_NODEID_STRING(1,"msg->object.kos.x"), myVar);

UA_Variant_init(&myVar);
id.ua_double =msg->object.kos.y;
	UA_Variant_setScalar(&myVar, &id.ua_double, &UA_TYPES[UA_TYPES_DOUBLE]);
UA_Server_writeValue(server, UA_NODEID_STRING(1,"msg->object.kos.y"), myVar);

UA_Variant_init(&myVar);
id.ua_double =msg->object.kos.z;
	UA_Variant_setScalar(&myVar, &id.ua_double, &UA_TYPES[UA_TYPES_DOUBLE]);
UA_Server_writeValue(server, UA_NODEID_STRING(1,"msg->object.kos.z"), myVar);

UA_Variant_init(&myVar);
id.ua_string =UA_STRING((char*)msg->object.name.c_str());
	UA_Variant_setScalar(&myVar, &id.ua_string, &UA_TYPES[UA_TYPES_STRING]);
UA_Server_writeValue(server, UA_NODEID_STRING(1,"msg->object.name"), myVar);

UA_Variant_init(&myVar);
id.ua_int64 =msg->object.group;
	UA_Variant_setScalar(&myVar, &id.ua_int64, &UA_TYPES[UA_TYPES_INT64]);
UA_Server_writeValue(server, UA_NODEID_STRING(1,"msg->object.group"), myVar);

UA_Variant_init(&myVar);
id.ua_string =UA_STRING((char*)msg->ichbinString.c_str());
	UA_Variant_setScalar(&myVar, &id.ua_string, &UA_TYPES[UA_TYPES_STRING]);
UA_Server_writeValue(server, UA_NODEID_STRING(1,"msg->ichbinString"), myVar);

UA_Variant_init(&myVar);
id.ua_int64 =msg->ichbinZahl;
	UA_Variant_setScalar(&myVar, &id.ua_int64, &UA_TYPES[UA_TYPES_INT64]);
UA_Server_writeValue(server, UA_NODEID_STRING(1,"msg->ichbinZahl"), myVar);
}









/**
 * @brief this function is a switch to turn Gateway off
 * @param sig, when the user give "ctrl-c" through keyboard, the gateway will be turned off
 * no return
 */
static void stopHandler(int sig) {
	UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "received ctrl-c");
	running = false;
	ros::shutdown();
}





void threads_Server_run() {


    UA_ServerConfig *config = UA_ServerConfig_new_default();
    server= UA_Server_new(config);


    /*add information model for mapping ros topic in opc ua server */
    addTopicToServer(server,bank,count,topic);


    UA_StatusCode retval = UA_Server_run(server, &running);
    UA_Server_delete(server);
    UA_ServerConfig_delete(config);

}






//----------------------------------------------------------------功能函数部分------Ende




int main(int argc, char **argv) {
	/*default setting*/
	ros::init(argc, argv, "Gateway2topic");
	ros::NodeHandle n;
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

// <<position to give topicname>>
strcpy(topic,"chatter");



    /*analyse a ros topic*/
	char msgname[300];
	char msgtype[10240];
	std::string tmp[100];
	std::string message[50];

	GetMsgfromTopic(topic,msgname);
	GetMsgDefbyMsgname(msgname,msgtype);
	GetMsgDef(msgname,message,&count);
	GetDefinitionBank2Topic(message,count,bank);
	GetNodeIdNameInBank(bank,count);


	/*add thread opc ua sever*/
    boost::thread thrd(&threads_Server_run);

    /*define subscriber*/
	ros::Subscriber sub = n.subscribe("chatter", 1000, ROSCallback); // ROSCallback is written by the tool "Werkzeug2Topic"



    ros::spin();

    thrd.join();



	return 0;
}

