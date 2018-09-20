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





#define Test_Zahl 100

UA_Server *server;
char topic[200];

UA_Int32 count2message=0;

UA_Boolean running = true;


//****************************************************************Part 3 功能函数部分  开始



/* Build Instructions (Linux)
 * - gcc -std=c99 -c open62541.c
 * - g++ server.cpp open62541.o -o server */

typedef struct _DefinitionBank2Topic {
	std::string dataname; //存储变量名
	std::string nodeidname;
	std::string datatype; //存储变量的定义类型
	int datalvl; //判断属于第几级的变量
	int isscalar; //判断是否属于是array还是scalar 等于1说明是scalar,0说明是array
	int isvariable;  //等于1是变量，等于0说明是结构体名字

} DefinitionBank2Topic;

DefinitionBank2Topic bank[100];

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

typedef union _ROS_Identifer {

} ROS_Identifer;


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
		Dir[j] = '\0';	//将popen返回值的换行符去掉
	}
	pclose(fp);
	strcpy(result,Dir);
}

static void GetMsgfromTopic(char topicname[],char msgname[]){
	char s1[300]="rostopic type ";
	strcat(s1,topicname);
	GetCommandResult(s1,1,msgname);
}

static void GetMsgDefbyMsgname(char msgname[],char msgtype[]){//该函数作用只是用来展示获得的信息是对的
	char s1[300]="rosmsg show ";
	strcat(s1,msgname);
	GetCommandResult(s1,0,msgtype);
}

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
		count++;}
	}

	*count2message=count;
}


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

static void addVariableToObject(UA_Server * server, std::string dataname,std::string nodeidname,
		std::string datatype, std::string objectnodeidname) {

	/* Define the attribute of the myInteger variable node */
	UA_VariableAttributes attr = setVariantAttributes(dataname, datatype);
	char * tmpname = (char *) dataname.c_str();//这个id是添加进服务器的id，需要扩成成为完整的，和上一层的关系用一个点相连，应该会好点
	char * tmpobject = (char *) objectnodeidname.c_str();
	/* Add the variable node to the information model */
	UA_NodeId myIntegerNodeId = UA_NODEID_STRING(1, (char *) nodeidname.c_str());
	UA_QualifiedName myIntegerName = UA_QUALIFIEDNAME(1, tmpname);
	//有待
	UA_NodeId parentNodeId = UA_NODEID_STRING(1, tmpobject);

	UA_NodeId parentReferenceNodeId = UA_NODEID_NUMERIC(0,
			UA_NS0ID_HASCOMPONENT);
	UA_Server_addVariableNode(server, myIntegerNodeId, parentNodeId,
			parentReferenceNodeId, myIntegerName,
			UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), attr, NULL,
			NULL);

}

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

static void addTopicToServer(UA_Server * server, DefinitionBank2Topic bank[],
		int amount, char topicname[]) {	//弄清楚了变量添加的逻辑，接下来就是将输出命令改为添加服务器变量的命令
	/*
	 * 第一步加入一个topic名字的object到server里边
	 * 添加变量或者结构体层层加入
	 */
	addTopicAsObjectInServer(server, topicname);

	std::string currentlvl[10];
	currentlvl[0] = topicname;

	for (int i = 0; i < amount; i++) {

		if (bank[i].isvariable == 1) {
			std::cout << "变量  " << bank[i].dataname << "  加入到了  "
					<< currentlvl[bank[i].datalvl - 1] << "   \n" << std::endl;
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
			std::cout << "结构体  " << bank[i].dataname << "  加入到了  "
					<< currentlvl[bank[i].datalvl - 1] << "   \n" << std::endl;
			addObjectToParentobject(server, bank[i].dataname,bank[i].nodeidname,
					currentlvl[bank[i].datalvl - 1]);
			currentlvl[bank[i].datalvl] = bank[i].nodeidname;
		}

	}
}



void update(UA_Server * server, DefinitionBank2Topic bank, void * m){//实现setscalar和UA_Server_write的功能
	UA_String s;
    UA_String_init(&s); /* _init zeroes out the entire memory of the datatype */
    char *test = "test";
    s.length = strlen(test);
    s.data = (UA_Byte*)test;

}



//Schreiben Sie bitte die CallbackFunktion!









static void stopHandler(int sig) {
	UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "received ctrl-c");
	running = false;
	ros::shutdown();
}





void threads_Server_run() {


    UA_ServerConfig *config = UA_ServerConfig_new_default();
     server= UA_Server_new(config);



	//分析是结构体还是变量，分析是否是array，分析节点的级别  到这里，节点的级别也以及是否是结构体都已经分析完毕，接下来可以添加变量了

     addTopicToServer(server,bank,count2message,topic);
	//变量已经加入到服务器里边了2018.06.29,接下来解决如何传递变量的问题,可能用用到setNodeContext


    UA_StatusCode retval = UA_Server_run(server, &running);
    UA_Server_delete(server);
    UA_ServerConfig_delete(config);

}






//----------------------------------------------------------------功能函数部分------Ende




int main(int argc, char **argv) {
	ros::init(argc, argv, "Gateway2topic");
	ros::NodeHandle n;
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

// <<position to give topicname>>


	char msgname[300];
	char msgtype[10240];
	std::string tmp[100];
	std::string message[50];

	GetMsgfromTopic(topic,msgname);
	GetMsgDefbyMsgname(msgname,msgtype);
	GetMsgDef(msgname,message,&count2message);
	GetDefinitionBank2Topic(message,count2message,bank);
	GetNodeIdNameInBank(bank,count2message);

	for (int i = 0; i < count2message; i++) {

		std::cout << "变量的名字是：" << bank[i].dataname << "\n";
		std::cout << "变量的类型是:" << bank[i].datatype << "\n";
		std::cout << "变量的等级是:" << bank[i].datalvl << "\n";
		std::cout << "变量是scalar吗:" << bank[i].isscalar << "\n";
		std::cout << "变量是结构吗:" << bank[i].isvariable <<"\n";
		std::cout << "变量的nodeidname是:" << bank[i].nodeidname << "\n";
	}

    boost::thread thrd(&threads_Server_run);

	ros::Subscriber sub = n.subscribe("chatter", 1000, ROSCallback);
	printf("%d",sub);


    ros::spin();

    thrd.join();



	return 0;
}

