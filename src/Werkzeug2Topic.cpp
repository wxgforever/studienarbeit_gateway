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
#include <assert.h>
#include "open62541.h"
#include <fstream>






/*****************************************************************************
*  Werkzeug2Topic                                                            *
*                                                                            *
*  This file is part of project "studienarbeit_gateway"                      *
*                                                                            *
*  This program is free software; you can redistribute it and/or modify      *
*  it                                                                        *
*                                                                            *
*  @file     Werkzeug2Topic.cpp                                              *
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



/************************************************************************/
/*@brief charToStr   conversion of datatype from "char" to "std::string"
 *@param char * contentChar  the conten of a string
 *@param return is data with "std::string" type, the content is same
*/
/************************************************************************/
std::string charToStr(char * contentChar) {
	std::string tempStr;
	for (int i = 0; contentChar[i] != '\0'; i++) {
		tempStr += contentChar[i];
	}
	return tempStr;
}

/************************************************************************/
/*@brief  modify the Content In File
@param fileName, name of the file to modify;
@param lineNum, number of the line in this file;
@param content, the content that to cover a line in the file
@retval no return
*/
/************************************************************************/
void modifyContentInFile(char *fileName,int lineNum,std::string content)
{

	std::fstream in;
	char line[1024]={'\0'};
	in.open(fileName);
	int i=0;
	std::string tempStr;
	while(in.getline(line,sizeof(line)))
	{
		i++;
		if(lineNum!=i)
		{
			tempStr+=charToStr(line);
		}
		else
		{

	       tempStr+=content;
		}
		tempStr+='\n';
	}
	in.close();
	std::fstream out;
	out.open(fileName);
	out.flush();
	out<<tempStr;
	out.close();

}

/**
 *@brief addContentInFile: add conten into a file
*@param fileName index1
*@param lineNum  number of the line to add content
*@param content the content
*@return no return
*/
void addContentInFile(char *fileName,int lineNum,std::string content)
{

	std::fstream in;
	char line[1024]={'\0'};
	in.open(fileName);
	int i=0;
	std::string tempStr;
	while(in.getline(line,sizeof(line)))
	{
		i++;
		if(lineNum!=i)
		{
			tempStr+=charToStr(line);
		}
		else
		{
			tempStr+=charToStr(line);
	       tempStr+=content;
		}
		tempStr+='\n';
	}
	in.close();
	std::fstream out;
	out.open(fileName);
	out.flush();
	out<<tempStr;
	out.close();
}


/**
 *@brief findtheline: Find a line with specific content in a specific file
*@param fileName name of a file
*@param lineNum number of the line to find (output)
*@param content the specific content of the line, this content is defined by "std::string"
*@return no return
*/
static void findtheline(char *fileName, int *lineNum, std::string content){
	/**
	 *
	 */
	std::fstream in;
	char line[1024] = { '\0' };
	in.open(fileName);
	int i = 0;
	std::string tempStr;
	while (in.getline(line, sizeof(line))) {
		i++;
		tempStr=charToStr(line);
		if(tempStr==content){
			*lineNum=i;
		}
	}
	in.close();

}

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
 * @brief treatment of string to make code for including headfile
 * @param msgname Is name of a ros message-type
 * @param Head Is a string that contains the code for including a headfile for the given msgname
 * example: if the msgname is "studienarbeit_gateway/test"
 * the code to include the headfile of this msg-type is "#include \"studienarbeit_gateway\""
 */
static void makeHeadFile(char * msgname,std::string * Head){
	*Head="";
	std::string begin="#include \"";
	std::string end=".h\"\n";

	*Head=*Head+begin;
	Head->append(msgname);
	Head->append(end);

}

/**
 * @brief this function is used to add headfile into the source code of Gateway2Topic
 * @param head Contains the code to include a headfile
 * 	// <<add headfile in this place>> this line in the source code works as a navigation
 */
static void addHeadFile(std::string Head){
	// <<add headfile in this place>>
	char * head=(char*)Head.c_str();
	char file2[]="Gateway2Topic.cpp";
	std::string position="// <<add headfile in this place>>";
	int line;
	findtheline(file2,&line,position);

	addContentInFile(file2,line++,"\n");
	addContentInFile(file2,line,head);
	addContentInFile(file2,line++,"\n");
}


/**
 * @brief treatment of string. this function is used to make thie first line of the callback function
 * @param topicname Is name of a ros topic given by user
 * @param firstline Contains the firstline of a callback funtion
 */
static void makeFirstLineofCallback(char * topicname,std::string * firstline){ //第一行，外加定义一个identifier
	std::string makeid="	Identifier id;\n";
	*firstline="";
	*firstline=topicname;
	int offindex = firstline->find_first_of("/",0);

	firstline->replace(offindex,1,"::");

	firstline->append("::ConstPtr& msg) {\n");
	firstline->insert(0,"void ROSCallback(const ");
	firstline->append(makeid);

}

/**
 * @brief treatment of string to make code for assignment process for variant in datatype of string
 * the process for string is different as numbers
 * @param ss is the name of a string variable, in this function ss will be changed into a part in the code of assignment process
 * no return
 */
static void treatment2stringAssignment(std::string *ss){
	//将 string转换为char指针的格式
	std::string s1;
	std::string left="UA_STRING((char*)";
	std::string right=".c_str())";
	s1.append(left);
	s1.append(*ss);
	s1.append(right);
	*ss=s1;
}

/**
 * @brief this function is used to make code for a assignment process
 * @param bank Is an array of structure DefinitionBank2Topic, this structure contains the necessary information to bulid this assignment process
 * @param count2message Shows the amount of the parameters in the message
 * @param AssignmentRightPart Contains the left part of the code that builds a assignment process
 * @param count2variant Is the amount of the variable. in this process this parameter will be assigned to record the amount of variable.
 * the line that defines a structure will be not counted in this parameter
 */
static void makeStringAssignmentRightPart(DefinitionBank2Topic * bank,int count2message,std::string AssignmentRightPart[],int * count2Variant){
	std::string currentlvl[10];
	std::string ss;
	currentlvl[0] = "msg->";
	int count1;
	for (int i = 0; i < count2message; i++) {
		ss="";
		if (bank[i].isvariable == 1) {

			ss.insert(0,bank[i].dataname);
			for(int j=bank[i].datalvl-1;j>=0;j--){

				if(j!=0) ss.insert(0,".");
				ss.insert(0,currentlvl[j]);
			}
			//UA_STRING((char*)m->dim.label.c_str());
			if(bank[i].datatype=="char"||bank[i].datatype=="string") treatment2stringAssignment(&ss);

			ss.append(";\n");
			AssignmentRightPart[count1]=ss;
			count1++;
			}

		if (bank[i].isvariable == 0) {
			currentlvl[bank[i].datalvl] = bank[i].dataname;
		}
	}
	*count2Variant=count1;
}


/**
 * @brief this function extract the information of the variable in the definition of message
 * @param bank Is an array of structure DefinitionBank2Topic
 * @param count2message Is the amount of the parameters in a ros message
 * @param variantbank Is an array of structure DefinitionBank2Topic, this array saves only the information of variable
 * no return
 */
static void makeVariantBank2Topic(DefinitionBank2Topic bank[],int count2message,DefinitionBank2Topic variantbank[]){

	//和datenbank同样的数据类型，这个bank只存储变量的信息
	int count1=0;
	for(int i=0;i<count2message;i++){
		if(bank[i].isvariable==1){
			variantbank[count1]=bank[i];
			count1++;
		}
	}
}

/**
 * @brief this function makes the left part of the code to the assignment process
 * that transform the data in the ros message into a opc ua object
 * @param variantbank Is an array of DefinitionBank2Topic, which contains only the informaiton of variablew
 * @param count2Variant Shows the amount of the variant in a ros message, this also determines the amount of opc ua variable node
 * @param AssignmentLeftpart Is an array of string. Every entry contains the left part of the code for the assignment process
 */
static void makeStringAssignmentLeftPart(DefinitionBank2Topic variantbank[],int count2Variant, std::string AssignmentLeftPart[]){
	for(int i=0;i<count2Variant;i++){
		if(variantbank[i].datatype=="bool") AssignmentLeftPart[i]="id.ua_boolean =";
		if (variantbank[i].datatype == "byte") AssignmentLeftPart[i]="id.ua_byte =";
		if ((variantbank[i].datatype == "char") || (variantbank[i].datatype == "string")) AssignmentLeftPart[i]="id.ua_string =";

		if ((variantbank[i].datatype == "int8") || (variantbank[i].datatype == "int16")) AssignmentLeftPart[i]="id.ua_int16 =";
		if(variantbank[i].datatype=="int32") AssignmentLeftPart[i]="id.ua_int32 =";
		if(variantbank[i].datatype=="int64") AssignmentLeftPart[i]="id.ua_int64 =";
		if ((variantbank[i].datatype == "uint8") || (variantbank[i].datatype == "uint16")) AssignmentLeftPart[i]="id.ua_uint16 =";
		if(variantbank[i].datatype=="uint32") AssignmentLeftPart[i]="id.ua_uint32 =";
		if(variantbank[i].datatype=="uint64") AssignmentLeftPart[i]="id.ua_uint64 =";
		if(variantbank[i].datatype=="float32") AssignmentLeftPart[i]="id.ua_float32 =";
		if(variantbank[i].datatype=="float64") AssignmentLeftPart[i]="id.ua_double =";
		if(variantbank[i].datatype=="time") AssignmentLeftPart[i]="id.ua_datatime =";
	}

}


/**
 * @brief this function makes the complete code for assignment process from ROS to OPC UA.
 * this function will put the left and right part built before together
 * @param AssignmentLeftPart Is an array of string that is built through function "makeStringAssignmentLeftPart()"
 * @param AssignmentRightPart Is an array of string that is built throught function "makeStringAssignmentRightPart()"
 * @param Assignment Is an array of string. This is the result of this function.
 * hinweise: Assignment= LeftPart + RightPart
 * @param count2variant Is amount of the variant in a ros message.
 */
static void makeStringAssignment(std::string AssignmentLeftPart[],std::string AssignmentRightPart[],
		std::string Assignment[],int count2variant){
	for(int i=0;i<count2variant;i++){
		Assignment[i].append(AssignmentLeftPart[i]);
		Assignment[i].append(AssignmentRightPart[i]);
	}
}


/**
 * @brief this function makes the code for the assignment process in OPC UA. this process is "UA_Variant_setScalar()"
 * @param variantbank Is an array of DefinitionBank2Topic
 * @param count2Variant Is the amount of the variable. This parameter shows how much variable there is in the ros message.
 * @prarm setscalar Is an array of string. This array is assigned by this function
 *
 */
static void makeStringSetScalar(DefinitionBank2Topic variantbank[],int count2Variant,std::string setscalar[]){
	//该函数用来制作 setscalar字符串
	// this function is used to making code for setscalar process
	std::string set_string = "	UA_Variant_setScalar(&myVar, &id.ua_string, &UA_TYPES[UA_TYPES_STRING]);";
	std::string set_int16  = "	UA_Variant_setScalar(&myVar, &id.ua_int16, &UA_TYPES[UA_TYPES_INT16]);";
	std::string set_uint16 = "	UA_Variant_setScalar(&myVar, &id.ua_uint16, &UA_TYPES[UA_TYPES_UINT16]);"	;
	std::string set_int32  = "	UA_Variant_setScalar(&myVar, &id.ua_int32, &UA_TYPES[UA_TYPES_INT32]);";
	std::string set_uint32 = "	UA_Variant_setScalar(&myVar, &id.ua_uint32, &UA_TYPES[UA_TYPES_UINT32]);";
	std::string set_int64  = "	UA_Variant_setScalar(&myVar, &id.ua_int64, &UA_TYPES[UA_TYPES_INT64]);";
	std::string set_uint64 = "	UA_Variant_setScalar(&myVar, &id.ua_uint64, &UA_TYPES[UA_TYPES_UINT64]);";
	std::string set_float  = "	UA_Variant_setScalar(&myVar, &id.ua_float, &UA_TYPES[UA_TYPES_FLOAT]);";
	std::string set_double = "	UA_Variant_setScalar(&myVar, &id.ua_double, &UA_TYPES[UA_TYPES_DOUBLE]);";
	std::string set_datatime= "	UA_Variant_setScalar(&myVar, &id.ua_datatime, &UA_TYPES[UA_TYPES_DATATIME]);";
	std::string set_byte	= "	UA_Variant_setScalar(&myVar, &id.ua_byte, &UA_TYPES[UA_TYPES_BYTE]);";
	std::string set_boolean ="	UA_Variant_setScalar(&myVar, &id.ua_boolean, &UA_TYPES[UA_TYPES_BOOLEAN]);";
	for (int i=0;i<count2Variant;i++){
		if(variantbank[i].datatype=="bool") setscalar[i]=set_boolean;
		if (variantbank[i].datatype == "byte") setscalar[i]=set_byte;
		if ((variantbank[i].datatype == "char") || (variantbank[i].datatype == "string")) setscalar[i]=set_string;
		if ((variantbank[i].datatype == "int8") || (variantbank[i].datatype == "int16")) setscalar[i]=set_int16;
		if(variantbank[i].datatype=="int32") setscalar[i]=set_int32;
		if(variantbank[i].datatype=="int64") setscalar[i]=set_int64;
		if ((variantbank[i].datatype == "uint8") || (variantbank[i].datatype == "uint16")) setscalar[i]=set_uint16;
		if(variantbank[i].datatype=="uint32") setscalar[i]=set_uint32;
		if(variantbank[i].datatype=="uint64") setscalar[i]=set_uint64;
		if(variantbank[i].datatype=="float32") setscalar[i]=set_float;
		if(variantbank[i].datatype=="float64") setscalar[i]=set_double;
		if(variantbank[i].datatype=="time") setscalar[i]=set_datatime;
		setscalar[i].append("\n");
	}
}

/**
 * @brief The ROS Node that works like a subscriber has a callback function.
 * In this callback function the data will be transport into OPC UA Object. This process is realized by function "UA_Server_writeValue"
 * the task of this function is to make this code
 * @param variantbank
 * @param count2Variant
 * @param writevariable Is an array of string. This Array will be assigned by this function,
 * and this array contains the code for the writing process in OPC UA Server
 * no return
 */
static void makeStringWriteVariable(DefinitionBank2Topic variantbank[],int count2Variant,std::string writevariable[]){
	//这一行用来制作 UA_Server_writeValue
	//UA_Server_writeValue(server, UA_NODEID_STRING(1,"label"), myVar);
	std::string leftpart="UA_Server_writeValue(server, UA_NODEID_STRING(1,\"";
	std::string rightpart="\"), myVar);\n";
	for(int i=0;i<count2Variant;i++){
		writevariable[i].append(leftpart);
		writevariable[i].append(variantbank[i].nodeidname);
		writevariable[i].append(rightpart);
	}
}

/**
 * @brief copy the content of file1 to file2
 * @param file2 Is the name of a file that will be fill out
 * @param file1 Is the name of a file of a template
 */
static void copyfile(char * file2,char * file1){//copy 1 and paste on 2
	FILE * fp1=fopen(file1,"r");
	FILE * fp2=fopen(file2,"w");

	char ch;
	while( (ch=fgetc(fp1) )!= EOF )
	    fputc(ch,fp2);
	fclose(fp1);
	fclose(fp2);

}


/**
 * @brief this function finish the task to write the whole callback function into the source code "Gateway2Topic.cpp"
 * @param variantbank Is an array of DefinitionBank2Topic
 * @param count2variant Is the amount of variable in this process
 * @param Assignment Is an array of string that contains the code for the assignment process
 * @param setcalar Contains the code for the process setscalar
 * @param writevariable Contains the code for the process "UA_Server_writeVariable". the process to refresh the value of the opc ua variable
 * @param firstline Contains the firstline of the built callback function
 */
static void makeContent2Callback(DefinitionBank2Topic * variantbank,int count2variant,std::string Assignment[],
		std::string setscalar[],std::string writevariable[],std::string firstline){
	char file2[]="Gateway2Topic.cpp";
	char file1[]="Gateway2Topic_vorlag.cpp";
	copyfile(file2,file1);
	std::string var_give="UA_Variant myVar;\n";
	std::string var_init="UA_Variant_init(&myVar);\n";
	//std::cout<<var_give;
	int line;
	std::string position2callback="//<<write callback function in this postition>>";

	char filename[]="Gateway2Topic.cpp";
	findtheline(filename,&line,position2callback);
	addContentInFile(filename,line++,"\n");
	addContentInFile(filename,line++,firstline);
	addContentInFile(filename,line++,var_give);
	for(int i=0;i<count2variant;i++){
		addContentInFile(filename,line++,"\n");
		addContentInFile(filename,line++,var_init);
		addContentInFile(filename,line++,Assignment[i]);
		addContentInFile(filename,line++,setscalar[i]);
		addContentInFile(filename,line++,writevariable[i]);
		//std::cout<<var_init;
		//std::cout<<Assignment[i];
		//std::cout<<setscalar[i]<<writevariable[i];
	}
	addContentInFile(filename,line++,"}");
}


/** define the name of the rostopic in  "Gateway2Service.cpp"
 * @param topicname Is name of a ROS topic
 */
static void givetopicname(char topicname[]){
	//    strcpy(topic,"chatter");

	std::string pos1="// <<position to give topicname>>";
	std::string s1=charToStr(topicname);
	std::string s2;//code to write
	char file[]="Gateway2Topic.cpp";
	int line;
	findtheline(file,&line,pos1);
	std::stringstream ss;
	ss.clear(); ss.str("");
	ss<<"strcpy(topic,\""<<s1<<"\");\n";
	s2=ss.str();
	addContentInFile(file,line++,"\n");
	addContentInFile(file,line++,s2);

}

/** compiling the ROS Workspace
 * @param dir Is the direction of workspace to compile
 * @param command Is the command to compile.
 * In this project, the used build-in system is catkin_make. so the command should be "catkin_make"
 * If you use "catkin build" to build a ros workspace, the code in this part should be changed.
 */
static void Kompilieren(std::string dir,std::string command) {

	char * dir_char=(char*)dir.c_str();
	char * command_char=(char*)command.c_str();

	if (chdir(dir_char) == -1) {
		perror("chdir");
		exit(1);
	}
	system(command_char);

}





int main() {

	std::string currentTopicList; /*create a string to save the list of the current topic in ROS Master*/
	GetCommandResult("rostopic list",0,&currentTopicList);/*get the current topic in ROS Master*/
	std::cout<<"current topics are : \n"<<currentTopicList;

	std::string dir2workspace;/*create a string to save the direction of the ROS workspace*/
	std::cout<<"bitte geben Sie den Pfad von workspace(Beispiel: /home/user/workspace)\n";
	std::cin>>dir2workspace;/*get the direction of ROS workspace*/

	UA_Int32 count2message=0;/*create a int variant to count the amount of the parameters in the ROS message*/

	char topicname[300]; /*create a array of char to save the name of the topic*/
	std::cout<<"bitte geben Sie den Namen eines Topic in the list"<<std::endl;
	scanf("%s",topicname); /*get the name of the topic*/


	std::string packagename="studienarbeit_gateway"; /*the packagename is studienarbeit_gateway, please not modify it*/
	std::string packagelocation; /*a string to save the direction of the ROS package*/

	char msgname[300]; /*save name of message type*/
	char msgtype[10240]; /*save the definition of the message type*/
	std::string tmp[100];
	std::string message[50];/*save the definition of message type. every entry will save a line of the whole definition*/
	std::string Head; /*save code for headfile*/
	std::string firstline; /*save the code for the first line of the callback function building in the Gateway2Topic.cpp*/
	std::string AssignmentLeftPart[30]; //save the right part of the code for the assignment process
	std::string AssignmentRightPart[30];//save the right part of the code for the assignment process  msg->dim.label;
	std::string Assignment[30];/*this string combine the left part and the right part of the code for assignment process together*/
	std::string writevariable[30]; /*this array of string save the code for the process: UA_Server_writeValue */
	std::string setscalar[30]; /*this array of string save the code for the process: UA_Variant_setscalarcopy*/
	int count2variant=0; /*int variant to record the amount of the parameters in the ROS message*/

	DefinitionBank2Topic bank[100];// if the amount of the parameters is more than 100, this length of this array can be modified much longer

	DefinitionBank2Topic variantbank[100];// save only the information of parameters

	/*analyse process of ROS Topics*/
	GetMsgfromTopic(topicname,msgname); // get name of message type
	GetMsgDefbyMsgname(msgname,msgtype); /*get definition of message type*/
	GetMsgDef(msgname,message,&count2message); /*get the definition of messaget line by line, get the amount of the parameters*/
	GetDefinitionBank2Topic(message,count2message,bank); /*analyze the definition , then set data model(bank)*/
	GetNodeIdNameInBank(bank,count2message);/*set the nodeidname of each parameters*/

	makeHeadFile(msgname,&Head); /*make code for adding headfile*/
	makeFirstLineofCallback(msgname,&firstline);/*make code for the first line of callback function in Gateway*/

	/*make code for the assignment process*/
	makeStringAssignmentRightPart(bank,count2message,AssignmentRightPart,&count2variant);
	makeVariantBank2Topic(bank,count2message,variantbank);
	makeStringAssignmentLeftPart(variantbank,count2variant,AssignmentLeftPart);
	makeStringAssignment(AssignmentLeftPart,AssignmentRightPart,Assignment,count2variant);
	makeStringSetScalar(variantbank,count2variant,setscalar);
	makeStringWriteVariable(variantbank,count2variant,writevariable);

	/* copy the conten of Gateway2Topic_vorlag.cpp into Gateway2Topic.cpp
	 * write the code built by this programm into Gateway2Topic.cpp*/
	makeContent2Callback(variantbank,count2variant,Assignment,setscalar,writevariable,firstline);
	addHeadFile(Head);/*write the code for adding headfile into Gateway2Topic.cpp*/
	givetopicname(topicname);/*set the topic name in Gateway2Topic*/
	Kompilieren(dir2workspace,"catkin_make"); /*compile*/


	return 0;
}






