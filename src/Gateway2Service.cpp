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



/*****************************************************************************
*  Gateway2Service                                                           *
*                                                                            *
*  This file is part of project "studienarbeit_gateway"                      *
*                                                                            *
*  This program is free software; you can redistribute it and/or modify      *
*  it                                                                        *
*                                                                            *
*  @file     Gateway2Service.cpp                                             *
*  @brief    this is a template for building a Gateway to transform          *
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




//add headfile in this position
#include "studienarbeit_gateway/Gateway2Method.h"




/** this function is a switch to turn Gateway off
 * @param sig, when the user give "ctrl-c" through keyboard, the gateway will be turned off
 * no return
 */
UA_Boolean running = true;
static void stopHandler(int sig) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "received ctrl-c");
    running = false; // turn opc ua server off
    ros::shutdown(); //turn ros node off
}



/*@brief DefinitionBank2Method is a structure that can store the definition of ROS Service through analyzing ros srv-message */
typedef struct _DefinitionBank2Method{
	std::string dataname;  /*name of a variable in srv-message*/
	std::string datatype;  /*type of a variable in srv-message*/
	UA_Int32 datalvl;	   /*datalvl describes the position of a variable*/
	UA_Int32 isscalar;		/* if a variable is scalar, isscalar=1, or isscalar =0*/
	UA_Int32 isvariable;	/* if a variable is variant, isvariable=1, if isvariable=0, this variable is a structure*/
	UA_Int32 isinput;		/* if a varaible is a input of a service, isinput=1; if this variable is a output, then isinput=0*/
	std::string argumentname;	/*argumentname will show the whole name of a variable, if "res" is the name of structure,
	                             example : "a" is a member of this structure,then the argumentname is res.a */

}DefinitionBank2Method;


/** structure _TransitionBank is a structure that contains the build-in datatype of opc ua.
 * In the assignment process the value will be assigned at first in transbank through conversion.
 * example, supposed there was a parameter in request of a ros service: int32 x
 *  the process is:
 *  transbank.trans_int32=req.x;
 *  UA_Variant_setScalarCopy(&input[0], &transbank.trans_int32.x, &UA_TYPES[UA_TYPES_INT32]);
 */
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
/*@brief charToStr   conversion of datatype from "char" to "std::string"
 *@param char * contentChar  the conten of a string
 *@param return is data with "std::string" type, the content is same
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


/*@brief  modify the Content In File
@param fileName, name of the file to modify;
@param lineNum, number of the line in this file;
@param content, the content that to cover a line in the file
@retval no return
*/
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
 *@brief method GetSrvfromService: Get the name of the message-type of a ROS Service. Input is the name of a ROS Service
 *@brief this Service must be registered in ROS Master, output is srvname.
 *@param servicename: name of a ROS Service
 *@param srvname: name of the srv-type of the given ROS Service
 */

static void GetSrvfromService(char servicename[],char srvname[]){
	char s1[300]="rosservice type ";
	strcat(s1,servicename);
	GetCommandResult(s1,1,srvname);
}

/**
 *@brief method GetSrvDefbySrvname  get the definition of a srv-type, this function is only for Debug.
 *@brief this function will show thedefinition of the srv-type for checking
 *@param srvname The name of a srv-type
 *@param srvtype The definition of the srv-type
 *@return No return
 */

static void GetSrvDefbySrvname(char srvname[],char srvtype[]){
	char s1[300]="rossrv show ";
	strcat(s1,srvname);
	GetCommandResult(s1,0,srvtype);
}

/**
 * @brief method GetSrvDef : Get the input and output of the definition of a srv-message and store them separately
 * @param srvname The name of a srv-type
 * @param request Array of string, every entry contains a parameter request of a srv-type
 * @param count2request Record the amount of parameter in request
 * @param response Array of string, every entry contains information of a parameter of response in a srv-type
 * @param count2response Record the amount of parameter in response
 * @return No return
 */
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

/**
 * @brief Analyze the definition of the message-type.
 * @param request A String array that save the definition of request of a ROS Service
 * @param count2request Amount of the parameter in request
 * @param response A string array that contain the definition of the response of a ROS Service
 * @param count2response Amount of the parameter in response
 * @param bank, Contains the information of definition. like: datatype, dataname
 */
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

/** set NodeId of datatype in an argument
 * @param type Shows the type of a parameter in srv-message
 * @return NodeId of a datatype
 */
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

/** make Divide a database into two, One for inputarguments and the other for outputarguments
 * @param bank, A structure that contains all the parameter (both in request and response) in a srv-message
 * @param count2service, Amount of parameters in a service, including request and response
 * @param inputargumentbank, This structure contains only the necessary information to build inputarguments in a method
 * @param count2input, Amount of parameters as input
 * @param outputargumentbank, This structure contains only the necessary information to build outputarguments in a method
 * @param count2output, Amount of parameters as output
 * no return
 */
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

/** there is a OPC UA Method in Gateway, the name of the parameter in this method should be showed in detail, for example srv->kos.x
 * @param argumentbank Contains the information necessary to build an argument
 * @param count2argument Amount of the parameters in input or output.
 * no return
 */
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

/** method callback of a opc ua method
 *	in this callback function the gateway will call a ros service by start a ros client node.
 *	//<<OPCUAInput_TO_ROSRequest>> after this line, the program Werkzeug2Service will write the code for the transform process
 *	from opc ua input to ros request
 *	//<<ROSResponse_TO_OPCUAOutput>> after this line, the program Werkzeug2Service will write the code for the transform process
 *	from ros response to opc ua output
 */
static UA_StatusCode Methodcallback(UA_Server *server,
        const UA_NodeId *sessionId, void *sessionContext,
        const UA_NodeId *methodId, void *methodContext,
        const UA_NodeId *objectId, void *objectContext,
        size_t inputSize, const UA_Variant *input,
        size_t outputSize, UA_Variant *output){
    ros::NodeHandle n;//define a ros node
    ros::ServiceClient client; //set ros client node

//<<OPCUAInput_TO_ROSRequest>>
client = n.serviceClient<studienarbeit_gateway::Gateway2Method>("service1");
studienarbeit_gateway::Gateway2Method srv;

trans_bank.trans_int64=*(UA_Int64*)input[0].data;
srv.request.a=trans_bank.trans_int64;

trans_bank.trans_int64=*(UA_Int64*)input[1].data;
srv.request.b=trans_bank.trans_int64;



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
trans_bank.trans_int64=srv.response.sum;
UA_Variant_setScalarCopy(&output[0], &trans_bank.trans_int64, &UA_TYPES[UA_TYPES_INT64]);


	return UA_STATUSCODE_GOOD;
}

/** function setArgument
 * the user give argumentbank and count2argument. the argument will be set after this function
 * @brief this function set a argument of a opc ua method. both of input and output can be set by this function
 * @param argument Is an Array of inputargument or outputargument
 * @param count2argument Is amount of the effect parameters in the array of arguments
 * @param argumentbank Is an array of structure that contains the information to set a argument
 * no return
 */
static void setArgument(UA_Argument argument[],UA_Int32 count2argument,DefinitionBank2Method *argumentbank){

	for(UA_Int32 i=0;i<count2argument;i++){
		UA_Argument_init(&argument[i]);
		argument[i].description=UA_LOCALIZEDTEXT("en-US",(char*)argumentbank[i].argumentname.c_str());
		argument[i].name=UA_STRING((char*)argumentbank[i].argumentname.c_str());
	    argument[i].dataType = setNodeIdInArgument(argumentbank[i].datatype);

	    if(argumentbank[i].isscalar==1) argument[i].valueRank = -1; /* scalar */
	}

}

/**
 * @brief this function is used to set a opc ua method with defalt setting. the name of the method is same as the ros service
 * @param methodattribute Is the location of a methodattribute
 * @param servicename Is the name of a ROS Service given by the user
 */
static void setMethodAttributes(UA_MethodAttributes * methodattribute,char * servicename){
	* methodattribute = UA_MethodAttributes_default;
	methodattribute->description = UA_LOCALIZEDTEXT("en-US", servicename);
	methodattribute->displayName = UA_LOCALIZEDTEXT("en-US", servicename);
	methodattribute->executable = true;
	methodattribute->userExecutable = true;
}

/** Creation of an information model for mapping the ROS service
 * @brief add a opc ua method node in the gateway
 * @param server Is location of OPC UA Server
 * @param inputargumentbank Is an array of structure that contains the information of inputarguments
 * @param count2input Is the amount of parameters in input
 * @param outputargumentbank Is an array of structure that contains the information of outputarguments
 * @param count2output Is the amount of parameters in output
 * @param srvicename Is name of the ROS Service that will be transformed in this Gateway
 */
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
    ros::NodeHandle n;/*create a node*/

	UA_Int32 count2request=0,count2response=0;/*number that record the amount of parameters in a ros service*/

	char srvname[300]; /*name of srv-type*/
	char srvtype[10240]; /*definition of srv-message*/
	std::string tmp[100];
	std::string request[50];/*definition of request of a ros service*/
	std::string response[50]; /*definition of response*/
	DefinitionBank2Method bank[100];// Wenn 100 nicht ausreichend ist, kann es noch größer eingestelllt werden.
	DefinitionBank2Method inputargumentbank[50]; /*database to save information for setting inputarguments*/
	DefinitionBank2Method outputargumentbank[50]; /*database to save information for setting outputarguments*/
	UA_Int32 count2input=0,count2output=0; /*number that record the amount of parameters in input and output*/

// <<Position To define servicename>>
char servicename[300]="service1";



	/*show the information of the ros service*/
	std::cout<<"das anzurufende Service ist:"<<servicename<<"\n";
	GetSrvfromService(servicename,srvname); /*get the message type of the ROS Service*/
	std::cout<<"das srvname ist:"<<srvname<<"\n";
	GetSrvDefbySrvname(srvname,srvtype); /*get the definition of the message type in ROS Service*/
	std::cout<<"das srvtype ist:\n"<<srvtype<<"\n";

	/*get the definition and devide the information into two parts: input and output*/
	GetSrvDef(srvname,request,&count2request,response,&count2response);
	UA_Int32 count2service=count2request+count2response;

#if 0
	/*this part is used to check, if the process before works correctly*/
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

	/*set opc ua method
	 * analyse the ROS Service and get the definition
	 */
	/*get definition of message type*/
	GetDefinitionBank2Method(request,count2request,response,count2response,bank);
	/*devide the saved information into two parts: input and output
	 * get the amount of the parameters*/
	makeArgumentbank(bank,count2service,inputargumentbank,&count2input,outputargumentbank,&count2output);
	makeargumentname(inputargumentbank,count2input);/*get the name of the parameters in input*/
	makeargumentname(outputargumentbank,count2output);/*get the name of the parameters in output*/

	//Bis Jetzt sind alle Input und Output sortiert.
#if 0
	/*this part is used to check, if the process before works correctly*/
	std::cout<<"*******************************************************************\n";
	std::cout<<"datatype     "<<"dataname        "<<"datalvl     "<<"\n";
	for(UA_Int32 i=0;i<count2input;i++){
		std::cout<<inputargumentbank[i].datatype<<"              "<<inputargumentbank[i].dataname<<"             "<< inputargumentbank[i].datalvl<<"\n";
	}
	for(UA_Int32 i=0;i<count2output;i++){
		std::cout<<outputargumentbank[i].datatype<<"              "<<outputargumentbank[i].dataname<<"             "<< outputargumentbank[i].datalvl<<"\n";
	}
#endif

	/*add method into opc ua server*/
	addMethodInServer(server,inputargumentbank,count2input,
			outputargumentbank,	count2output,servicename);

    signal(SIGINT, stopHandler); /*switch to turn off this programm*/
    signal(SIGTERM, stopHandler);/*switch to turn off this programm*/

    UA_StatusCode retval = UA_Server_run(server, &running);
    UA_Server_delete(server);
    UA_ServerConfig_delete(config);
    return (int)retval;


}
