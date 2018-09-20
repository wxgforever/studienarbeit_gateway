#include <stdio.h>
#include "open62541.h"
#include "ros/ros.h"
#include <assert.h>
#include <boost/thread/thread.hpp>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <queue>
#include <signal.h>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <unistd.h>


//add headfile in this position



UA_Boolean running = true;
static void stopHandler(int sig) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "received ctrl-c");
    running = false;
    ros::shutdown();
}



typedef struct _DefinitionBank2Method{
	std::string dataname;
	std::string datatype;
	UA_Int32 datalvl;
	UA_Int32 isscalar;
	UA_Int32 isvariable;
	UA_Int32 isinput;
	std::string argumentname;
}DefinitionBank2Method;

typedef struct _TransitionBank{
	UA_Boolean trans_boolean;
	UA_SByte trans_sbyte;
	UA_Byte trans_byte;
	UA_Int16 trans_int16;
	UA_UInt16 trans_uint16;
	UA_Int32 trans_int32;
	UA_UInt32 trans_uint32;
	UA_Int64 trans_int64;
	UA_UInt64 trans_uint64;
	UA_Float trans_float;
	UA_Double trans_double;
	UA_StatusCode trans_statuscode;
	UA_String trans_string;
	UA_DateTime trans_datetime;
	UA_DateTimeStruct trans_datetimestruct;
	UA_Guid trans_guid;
	UA_ByteString trans_bytestring;
	UA_NodeId trans_nodeid;
}TransitionBank;

TransitionBank trans_bank;

/************************************************************************/
/* char*tostr  字符串转化str类型
输入：char * 字符串地址
无输出
返回值： str类型的字符串
*/
/************************************************************************/
std::string charToStr(char * contentChar)
{
	std::string tempStr;
	for (int i=0;contentChar[i]!='\0';i++)
	{
		tempStr+=contentChar[i];
	}
	return tempStr;
}

/************************************************************************/
/* 修改文件某行内容
 输入：文件名 fileName   行号   lineNum ,修改的内容 content
 输出：文件名 fileName
 无返回值
 tip：1,lineNum从第一行开始 2.content需要加上换行符
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

static void GetCommandResult(char command[], bool a, char result[]) {
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

static void GetSrvfromService(char servicename[],char srvname[]){
	char s1[300]="rosservice type ";
	strcat(s1,servicename);
	GetCommandResult(s1,1,srvname);
}

static void GetSrvDefbySrvname(char srvname[],char srvtype[]){
	char s1[300]="rossrv show ";
	strcat(s1,srvname);
	GetCommandResult(s1,0,srvtype);
}

static void GetSrvDef(char srvname[],std::string request[],int *count2request,std::string response[],int * count2response){
	int Lid=0;
	int count1=0;
	int count2=0;
	std::string tmp[100];
	char s1[300]="rossrv show ";
	strcat(s1,srvname);
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
		if(Buf[0]=='-'){
			Grenze=Lid;
		}
		tmp[Lid] = Buf;
		Lid++;
	}
	Lid--;
	fclose(fp);

	std::string::size_type idx;
	for(int i=0;i<Lid;i++){
		if(i<Grenze) {
			idx=tmp[i].find("=",0);
			if(idx == std::string::npos){
			request[count1]=tmp[i];
			count1++;
			}
		}

		if(i>Grenze) {
			idx=tmp[i].find("=",0);
			if(idx == std::string::npos){
			response[count2]=tmp[i];
			count2++;
			}
		}
	}

	*count2request=count1;
	*count2response=count2;
}

static void GetDefinitionBank2Method(std::string request[], UA_Int32 count2request,std::string response[], UA_Int32 count2response, DefinitionBank2Method * bank) {
	/*Die Definition der Daten, die von Service übertragen werden, kann mit dieser Funktion analysiert werden,
	 * und eine Struktur im Form von " DefinitionBank2Method" speichert alle benötige Informationen
	 *
	 */
	std::stringstream is;
	std::string tmp;

	for(UA_Int32 i=0;i<(count2request+count2response);i++){
		is.clear();
		is.str("");
		tmp="";

		if(i<count2request) {
			bank[i].isinput=1;
			is<<request[i];
			is >> bank[i].datatype >> bank[i].dataname;
			tmp=request[i];
		}
		if(i>=count2request){
			bank[i].isinput=0;
			is<<response[i-count2request];
			is >> bank[i].datatype >> bank[i].dataname;
			tmp=response[i-count2request];
		}

		bank[i].datalvl = tmp.find_first_not_of(' ', 0) / 2 + 1;
		std::string::size_type idx;
		idx = tmp.find("[]", 0);

		bank[i].isscalar = (idx == std::string::npos) ? 1 : 0;
		if (bank[i].isscalar == 0) {
			bank[i].datatype.erase(bank[i].datatype.length() - 2,bank[i].datatype.length() - 1);
		}

		if (i == (count2request - 1)||i==(count2request+count2response)) {
			bank[i].isvariable = 1;
		} else if (bank[i].datalvl < bank[i + 1].datalvl) {
			bank[i].isvariable = 0;
		} else
			bank[i].isvariable = 1;
	}
}

static UA_NodeId setNodeIdInArgument(std::string type){
	UA_NodeId nodeid;
	if (type == "bool") {
		nodeid = UA_TYPES[UA_TYPES_BOOLEAN].typeId;
	}
	if (type == "byte") {
		nodeid = UA_TYPES[UA_TYPES_BYTE].typeId;
	}
	if ((type == "char") || (type == "string")) {
		nodeid = UA_TYPES[UA_TYPES_STRING].typeId;
	}
	if ((type == "int8") || (type == "int16")) {

		nodeid = UA_TYPES[UA_TYPES_INT16].typeId;
	}
	if (type == "int32") {
		nodeid = UA_TYPES[UA_TYPES_INT32].typeId;
	}
	if (type == "int64") {
		nodeid = UA_TYPES[UA_TYPES_INT64].typeId;
	}

	if (type == "uint32") {
		nodeid = UA_TYPES[UA_TYPES_UINT32].typeId;
	}

	if ((type == "uint16") || (type == "uint8")) {
		nodeid = UA_TYPES[UA_TYPES_UINT16].typeId;
	}

	if (type == "uint64") {
		nodeid = UA_TYPES[UA_TYPES_UINT64].typeId;
	}

	if ((type == "float32") || (type == "float64")) {
		nodeid = UA_TYPES[UA_TYPES_DOUBLE].typeId;
	}

	if (type == "time") {
		nodeid = UA_TYPES[UA_TYPES_DATETIME].typeId;
	}

	if (type == "duration") {

	}
	return nodeid;
}

static void makeArgumentbank(DefinitionBank2Method bank[],int count2service,DefinitionBank2Method inputargumentbank[],
    UA_Int32 * count2input,DefinitionBank2Method outputargumentbank[],UA_Int32 * count2output){

	UA_Int32 count1=0;
	UA_Int32 count2=0;
	for(int i=0;i<count2service;i++){
		if(bank[i].isvariable==1&&bank[i].isinput==1){
			inputargumentbank[count1]=bank[i];
			count1++;
		}
	}
	*count2input=count1;

	for(int i=0;i<count2service;i++){
		if(bank[i].isvariable==1&&bank[i].isinput==0){
			outputargumentbank[count2]=bank[i];
			count2++;
		}
	}
	*count2output=count2;
}

static void makeargumentname(DefinitionBank2Method * argumentbank, UA_Int32 count2argument){
	std::string currentlvl[10];
	std::string ss;
	currentlvl[0] = "srv->";

	for (int i = 0; i < count2argument; i++) {
		ss="";
		if (argumentbank[i].isvariable == 1) {

			ss.insert(0,argumentbank[i].dataname);
			for(int j=argumentbank[i].datalvl-1;j>=0;j--){

				if(j!=0) ss.insert(0,".");
				ss.insert(0,currentlvl[j]);
			}

			argumentbank[i].argumentname=ss;
			}

		if (argumentbank[i].isvariable == 0) {
			ss.insert(0,argumentbank[i].dataname);
			for(int j=argumentbank[i].datalvl-1;j>=0;j--){

				if(j!=0) ss.insert(0,".");
				ss.insert(0,currentlvl[j]);
			}

			argumentbank[i].argumentname=ss;

			currentlvl[argumentbank[i].datalvl] = argumentbank[i].dataname;
		}
	}


}

static UA_StatusCode Methodcallback(UA_Server *server,
        const UA_NodeId *sessionId, void *sessionContext,
        const UA_NodeId *methodId, void *methodContext,
        const UA_NodeId *objectId, void *objectContext,
        size_t inputSize, const UA_Variant *input,
        size_t outputSize, UA_Variant *output){
    ros::NodeHandle n;
    ros::ServiceClient client;

//<<OPCUAInput_TO_ROSRequest>>


    if (client.call(srv))
    {
      ROS_INFO("Successfully calling method");
    }
    else
    {
      ROS_ERROR("Failed to call service");
      return 1;
    }

//<<ROSResponse_TO_OPCUAOutput>>


	return UA_STATUSCODE_GOOD;
}

static void setArgument(UA_Argument argument[],UA_Int32 count2argument,DefinitionBank2Method *argumentbank){

	for(UA_Int32 i=0;i<count2argument;i++){
		UA_Argument_init(&argument[i]);
		argument[i].description=UA_LOCALIZEDTEXT("en-US",(char*)argumentbank[i].argumentname.c_str());
		argument[i].name=UA_STRING((char*)argumentbank[i].argumentname.c_str());
	    argument[i].dataType = setNodeIdInArgument(argumentbank[i].datatype);

	    if(argumentbank[i].isscalar==1) argument[i].valueRank = -1; /* scalar */
	}

}

static void setMethodAttributes(UA_MethodAttributes * methodattribute,char * servicename){
	* methodattribute = UA_MethodAttributes_default;
	methodattribute->description = UA_LOCALIZEDTEXT("en-US", servicename);
	methodattribute->displayName = UA_LOCALIZEDTEXT("en-US", servicename);
	methodattribute->executable = true;
	methodattribute->userExecutable = true;
}


static void addMethodInServer(UA_Server * server,DefinitionBank2Method * inputargumentbank,UA_Int32 count2input,
		DefinitionBank2Method * outputargumentbank,	UA_Int32 count2output,char * servicename){

	UA_Argument inputarguments[100];
	UA_Argument outputarguments[100];
	UA_MethodAttributes method=UA_MethodAttributes_default;

		setArgument(inputarguments,count2input,inputargumentbank);

		setArgument(outputarguments,count2output,outputargumentbank);
	setMethodAttributes(&method,servicename);
    UA_Server_addMethodNode(server, UA_NODEID_STRING(1, servicename),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                            UA_QUALIFIEDNAME(1, servicename),
                            method, &Methodcallback,
                            count2input, inputarguments, count2output, outputarguments,
                            NULL, NULL);

}



int main(int argc, char **argv){
    UA_ServerConfig *config = UA_ServerConfig_new_default();
    UA_Server *server = UA_Server_new(config);

    ros::init(argc, argv, "Gateway2Service");
    ros::NodeHandle n;

	UA_Int32 count2request=0,count2response=0;


	char srvname[300];
	char srvtype[10240];
	std::string tmp[100];
	std::string request[50];
	std::string response[50];
	DefinitionBank2Method bank[100];// Wenn 100 nicht ausreichend ist, kann es noch größer eingestelllt werden.
	DefinitionBank2Method inputargumentbank[50];
	DefinitionBank2Method outputargumentbank[50];
	UA_Int32 count2input=0,count2output=0;

// <<Position To define servicename>>


	std::cout<<"das anzurufende Service ist:"<<servicename<<"\n";

	GetSrvfromService(servicename,srvname);
	std::cout<<"das srvname ist:"<<srvname<<"\n";
	GetSrvDefbySrvname(srvname,srvtype);
	std::cout<<"das srvtype ist:\n"<<srvtype<<"\n";


	GetSrvDef(srvname,request,&count2request,response,&count2response);
	UA_Int32 count2service=count2request+count2response;

#if 1
	std::cout<<"Input hat "<<count2request<<" Zelle"<<"\n";
	std::cout<<"Input ist:\n";
	for(int i=0;i<count2request;i++){
		std::cout<<request[i]<<"\n";

	}

	std::cout<<"Output hat "<<count2response<<" Zelle"<<"\n";
	std::cout<<"Output ist:\n";
	for(int i=0;i<count2response;i++){
		std::cout<<response[i]<<"\n";
	}
#endif

	GetDefinitionBank2Method(request,count2request,response,count2response,bank);
	makeArgumentbank(bank,count2service,inputargumentbank,&count2input,outputargumentbank,&count2output);
	makeargumentname(inputargumentbank,count2input);
	makeargumentname(outputargumentbank,count2output);

	//Bis Jetzt sind alle Input und Output sortiert.

	std::cout<<"*******************************************************************\n";
	std::cout<<"datatype     "<<"dataname        "<<"datalvl     "<<"\n";
	for(UA_Int32 i=0;i<count2input;i++){
		std::cout<<inputargumentbank[i].datatype<<"              "<<inputargumentbank[i].dataname<<"             "<< inputargumentbank[i].datalvl<<"\n";
	}
	for(UA_Int32 i=0;i<count2output;i++){
		std::cout<<outputargumentbank[i].datatype<<"              "<<outputargumentbank[i].dataname<<"             "<< outputargumentbank[i].datalvl<<"\n";
	}


	addMethodInServer(server,inputargumentbank,count2input,
			outputargumentbank,	count2output,servicename);

    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_StatusCode retval = UA_Server_run(server, &running);
    UA_Server_delete(server);
    UA_ServerConfig_delete(config);
    return (int)retval;


}
