#include <stdio.h>
#include "open62541.h"
#include "open62541.h"
#include <assert.h>
#include <cassert>
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
*  Werkzeug2Service                                                          *
*                                                                            *
*  This file is part of project "studienarbeit_gateway"                      *
*                                                                            *
*  This program is free software; you can redistribute it and/or modify      *
*  it                                                                        *
*                                                                            *
*  @file     Werkzeug2Service.cpp                                            *
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
			idx=tmp[i].find("=",0);//if there is any "=", it means this line defines a enum variant
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
static void GetDefinitionBank2Method(std::string request[], UA_Int32 count2request,std::string response[],
		UA_Int32 count2response, DefinitionBank2Method * bank) {

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

/** make assignment process for string in gateway
 * Assignment for data in string type is different from assignment for numbers.
 * @param ss, the name of a parameter in string type.
 * example:    before method ss is "name";
 * 			   after  method ss will be "UA_STRING((char*)name.c_str());
 */
static void treatment2stringAssignment(std::string *ss){

	std::string s1;
	std::string left="UA_STRING((char*)";
	std::string right=".c_str())";
	s1.append(left);
	s1.append(*ss);
	s1.append(right);
	*ss=s1;
}




/** Create a code that contains a header file
 * @param srvname, The typename of a srv-message
 * @param Head, The Code that will be write into gateway to include the headfile for that srv-message
 * @example:  if srvname is "studienarbeit_gateway/test", the Head will be "#include \"studienarbeit_gateway/test.h\""
 * no return
 */
static void makeHeadFile(char * srvname,std::string * Head){
	*Head="";
	std::string begin="#include \"";
	std::string end=".h\"\n";

	*Head=*Head+begin;
	Head->append(srvname);
	Head->append(end);

}

/** put the code to include headfile into source code of Gateway
 *	@param Head, Contains the content to include a headfile
 */
static void addHeadFile(std::string Head){
	char * head=(char*)Head.c_str();
	char file2[]="Gateway2Service.cpp";
	int line;
	std::string position="//add headfile in this position";
	findtheline(file2,&line,position);
	addContentInFile(file2,line++,"\n");
	addContentInFile(file2,line,head);
	addContentInFile(file2,line++,"\n");
}

/** treatment of string to make code
 * this method is built to make the first line of a callback function in gateway
 * @param servicename, Name of a ROS Service
 * @param firstline, first line of a Callbackfunction
 *
 */
static void makeFirstLineofCallback(char * servicename,std::string * firstline){ //第一行，外加定义一个identifier

	*firstline="";
	*firstline=servicename;
	int offindex = firstline->find_first_of("/",0);

	firstline->replace(offindex,1,"::");

}


/** treatment of string to make code
 * this method can make code to take the value of the inputarguments
 * @param inputargumentbank Contains the information of inputargument in a method
 * @param count2input Shows the amount of parameters in input
 * @param InputAssignment Contains the content of the code make by this function
 * no return
 */
static void makeInputAssignment(DefinitionBank2Method *inputargumentbank,UA_Int32 count2input,std::string InputAssignment[]){

	//trans_bank.trans_int16 = *(UA_Int32*)input[0].data;
	std::stringstream ss;
	std::string s1="].data;\n";
	for(int i=0;i<count2input;i++){
		ss.clear();
		ss.str("");
		if(inputargumentbank[i].datatype=="int32") ss<<"trans_bank.trans_int32=*(UA_Int32*)input[";
		if(inputargumentbank[i].datatype=="int16"||inputargumentbank[i].datatype=="int8") ss<<"trans_bank.trans_int16=*(UA_Int16*)input[";
		if(inputargumentbank[i].datatype=="int64") ss<<"trans_bank.trans_int64=*(UA_Int64*)input[";
		if(inputargumentbank[i].datatype=="bool") ss<<"trans_bank.trans_bool=*(UA_Boolean*)input[";
		if(inputargumentbank[i].datatype=="byte") ss<<"trans_bank.trans_byte=*(UA_Byte*)input[";
		if(inputargumentbank[i].datatype=="char"||inputargumentbank[i].datatype=="string") ss<<"trans_bank.trans_string=*(UA_String*)input[";
		if(inputargumentbank[i].datatype=="uint8"||inputargumentbank[i].datatype=="uint16") ss<<"trans_bank.trans_uint16=*(UA_UInt16*)input[";
		if(inputargumentbank[i].datatype=="uint32") ss<<"trans_bank.trans_uint32=*(UA_UInt32*)input[";
		if(inputargumentbank[i].datatype=="uint64") ss<<"trans_bank.trans_uint64=*(UA_UInt64*)input[";
		if(inputargumentbank[i].datatype=="float32") ss<<"trans_bank.trans_float=*(UA_Float*)input[";
		if(inputargumentbank[i].datatype=="float64") ss<<"trans_bank.trans_double=*(UA_Double*)input[";
		ss<<i;
		ss<<s1;
		InputAssignment[i]=ss.str();
	}
}

/** make the code to set ROS Client
 * @param srvname Is name of a srv-message
 * @param servicename Is name of a ROS Service, whose messagetype is srvname
 * @param clientsetting Is a string that contains the content of setting ROS Client. This string is made by this function
 * no return
 */
static void makeClientSettingInCallback(std::string srvname,std::string servicename,std::string * clientsetting){
	// client = n.serviceClient<studienarbeit_gateway::Gateway2Method>("Gateway");

	std::stringstream ss;
	ss.clear();
	ss.str("");
	std::string s1="client = n.serviceClient<";
	std::string s2=">(\"";
	std::string s3="\");\n";


	int offindex = srvname.find_first_of("/",0);

	srvname.replace(offindex,1,"::");

	ss<<s1<<srvname<<s2<<servicename<<s3;
	*clientsetting=ss.str();


}

/** treatment of string to make code for define a srv in callback function in opc ua method
 * @param srvname Is name of the srv-message
 * @param srvsetting contains the content of the code to define a variant that in the same type as the srv-message
 * example:  srvname is  "studienarbeit_gateway/Gateway2Method"
 * after treatment the srvsetting is "studienarbeit_gateway::Gateway2Method srv;"
 * no return
 */
static void makeSrvInCallback(std::string srvname,std::string * srvsetting){
	// Ziel:   studienarbeit_gateway::Gateway2Method srv;

	std::string s1=" srv;\n";
	int offindex = srvname.find_first_of("/",0);

	srvname.replace(offindex,1,"::");
	srvsetting->append(srvname);
	srvsetting->append(s1);
}


/** treatment of string to make code for a assignment process.
 * In this process, the value of input in OPC UA Method is assigned to the request of a ROS Service.
 * @param inputargumentbank Contains the information of inputargument
 * @param count2input Is the amount of the parameters in input
 * @param AssignmentfromInput2ROSRequest Contains the code made in this function.
 * example: the result of this function can be like : srv.request.a=trans_bank.trans_int64;
 */
static void makeAssignmentfromInput2ROSResquest(DefinitionBank2Method *inputargumentbank,int count2input,std::string AssignmentfromInput2ROSRequest[]){

	//srv.request.a=trans_bank.trans_int64;
	std::string s1="srv.request.";
	std::string set_int16="=trans_bank.trans_int16;\n";
	std::string set_int32="=trans_bank.trans_int32;\n";
	std::string set_int64="=trans_bank.trans_int64;\n";
	std::string set_uint16="=trans_bank.trans_uint16;\n";
	std::string set_uint32="=trans_bank.trans_uint32;\n";
	std::string set_uint64="=trans_bank.trans_uint64;\n";
	std::string set_float32="=trans_bank.trans_float;\n";
	std::string set_float64="=trans_bank.trans_double;\n";
	std::string set_time="=trans_bank.trans_datetime;\n";
	std::string set_string="=(char*)trans_bank.trans_string.data;\n";
	std::stringstream ss;
	for(int i=0;i<count2input;i++){
		ss.clear();
		ss.str("");
		if(inputargumentbank[i].datatype=="int8"||inputargumentbank[i].datatype=="int16") ss<<s1<<inputargumentbank[i].dataname<<set_int16;
		if(inputargumentbank[i].datatype=="int32") ss<<s1<<inputargumentbank[i].dataname<<set_int32;
		if(inputargumentbank[i].datatype=="int64") ss<<s1<<inputargumentbank[i].dataname<<set_int64;
		if(inputargumentbank[i].datatype=="uint8"||inputargumentbank[i].datatype=="uint16") ss<<s1<<inputargumentbank[i].dataname<<set_uint16;
		if(inputargumentbank[i].datatype=="uint32") ss<<s1<<inputargumentbank[i].dataname<<set_uint32;
		if(inputargumentbank[i].datatype=="uint64") ss<<s1<<inputargumentbank[i].dataname<<set_uint64;
		if(inputargumentbank[i].datatype=="float32") ss<<s1<<inputargumentbank[i].dataname<<set_float32;
		if(inputargumentbank[i].datatype=="float64") ss<<s1<<inputargumentbank[i].dataname<<set_float64;
		if(inputargumentbank[i].datatype=="time") ss<<s1<<inputargumentbank[i].dataname<<set_time;
	    if(inputargumentbank[i].datatype=="string"||inputargumentbank[i].datatype=="char") ss<<s1<<inputargumentbank[i].dataname<<set_string;
		AssignmentfromInput2ROSRequest[i]=ss.str();
	}

}

/** treatment of string to make code for the assignment process to get the value of response of a service.
 * @param outputargumentbank contains the information of the outputargument
 * @param count2output Is the amount of parameters in output of opc ua methode
 * @param AssignmentfromROSResponse2Output Contains the code made by this treatment process
 * example trans_bank.trans_int16=srv.response.x;
 * no return
 */
static void makeAssignmentfromROSResponse2Output(DefinitionBank2Method *outputargumentbank,
		int count2output,std::string AssignmentfromROSResponse2Output[]){
		std::string s1="srv.response.";
		std::string set_int16="trans_bank.trans_int16=";
		std::string set_int32="trans_bank.trans_int32=";
		std::string set_int64="trans_bank.trans_int64=";
		std::string set_uint16="trans_bank.trans_uint16=";
		std::string set_uint32="trans_bank.trans_uint32=";
		std::string set_uint64="trans_bank.trans_uint64=";
		std::string set_float32="trans_bank.trans_float=";
		std::string set_float64="trans_bank.trans_double=";
		std::string set_time="trans_bank.trans_datetime=";
		std::string set_string="trans_bank.trans_string=";
		std::stringstream ss;

		for(int i=0;i<count2output;i++){
			std::string dataname=s1;
			dataname.append(outputargumentbank[i].dataname);
			std::string s4=";";
			ss.clear();
			ss.str("");
			if(outputargumentbank[i].datatype=="int8"||outputargumentbank[i].datatype=="int16") ss<<set_int16<<dataname<<s4;
			if(outputargumentbank[i].datatype=="int32") ss<<set_int32<<dataname<<s4;
			if(outputargumentbank[i].datatype=="int64") ss<<set_int64<<dataname<<s4;
			if(outputargumentbank[i].datatype=="uint8"||outputargumentbank[i].datatype=="uint16") ss<<set_uint16<<dataname<<s4;
			if(outputargumentbank[i].datatype=="uint32") ss<<set_uint32<<dataname<<s4;
			if(outputargumentbank[i].datatype=="uint64") ss<<set_uint64<<dataname<<s4;
			if(outputargumentbank[i].datatype=="float32") ss<<set_float32<<dataname<<s4;
			if(outputargumentbank[i].datatype=="float64") ss<<set_float64<<dataname<<s4;
			if(outputargumentbank[i].datatype=="time") ss<<set_time<<dataname<<s4;
			if(outputargumentbank[i].datatype=="string"||outputargumentbank[i].datatype=="char") {
				treatment2stringAssignment(&dataname);
				ss<<set_string<<dataname<<s4;
			}
		    AssignmentfromROSResponse2Output[i]=ss.str();
		}
}


/** treatment of string to make code for assignment process.
 * In this process, the value in response of a ROS Service will be assigned to the outputarguments of opc ua method
 * @param outputargumentbank contains the information of the outputargument
 * @param count2output Is the amount of parameters in output of opc ua methode
 * @param Contains the code made by this treatment process
 * example: UA_Variant_setScalarCopy(&output[0], &srv.response.sum, &UA_TYPES[UA_TYPES_INT32]);
 * no return
 */
static void makeOutputAssignment(DefinitionBank2Method *outputargumentbank,int count2output,
		std::string Outputassignment[]){

	//Ziel:  UA_Variant_setScalarCopy(&output[0], &srv.response.sum, &UA_TYPES[UA_TYPES_INT32]);
	std::string s1="UA_Variant_setScalarCopy(&output[";
	std::string s2="], &";
	std::stringstream ss;

	std::string set_string = "trans_bank.trans_string, &UA_TYPES[UA_TYPES_STRING]);\n";
	std::string set_int16  = "trans_bank.trans_int16, &UA_TYPES[UA_TYPES_INT16]);\n";
	std::string set_uint16 = "trans_bank.trans_uint16, &UA_TYPES[UA_TYPES_UINT16]);\n"	;
	std::string set_int32  = "trans_bank.trans_int32, &UA_TYPES[UA_TYPES_INT32]);\n";
	std::string set_uint32 = "trans_bank.trans_uint32, &UA_TYPES[UA_TYPES_UINT32]);\n";
	std::string set_int64  = "trans_bank.trans_int64, &UA_TYPES[UA_TYPES_INT64]);\n";
	std::string set_uint64 = "trans_bank.trans_uint64, &UA_TYPES[UA_TYPES_UINT64]);\n";
	std::string set_float  = "trans_bank.trans_float, &UA_TYPES[UA_TYPES_FLOAT]);\n";
	std::string set_double = "trans_bank.trans_double, &UA_TYPES[UA_TYPES_DOUBLE]);\n";
	std::string set_datetime= "trans_bank.trans_datatime, &UA_TYPES[UA_TYPES_DATETIME]);\n";
	std::string set_byte	= "trans_bank.trans_byte, &UA_TYPES[UA_TYPES_BYTE]);\n";
	std::string set_boolean ="trans_bank.trans_boolean, &UA_TYPES[UA_TYPES_BOOLEAN]);\n";
	std::string dataname;

	for(int i=0;i<count2output;i++){
		ss.clear();
		ss.str("");
		ss<<s1<<i<<s2;
		if(outputargumentbank[i].datatype=="int8"||outputargumentbank[i].datatype=="int16") ss<<set_int16;
		if(outputargumentbank[i].datatype=="int32") ss<<set_int32;
		if(outputargumentbank[i].datatype=="int64") ss<<set_int64;
		if(outputargumentbank[i].datatype=="uint8"||outputargumentbank[i].datatype=="uint16")ss<<set_uint16;
		if(outputargumentbank[i].datatype=="uint32") ss<<set_uint32;
		if(outputargumentbank[i].datatype=="uint64") ss<<set_uint64;
		if(outputargumentbank[i].datatype=="float32") ss<<set_float;
		if(outputargumentbank[i].datatype=="float64") ss<<set_double;
		if(outputargumentbank[i].datatype=="char"||outputargumentbank[i].datatype=="string") ss<<set_string;
		if(outputargumentbank[i].datatype=="time") ss<<set_datetime;
		if(outputargumentbank[i].datatype=="byte") ss<<set_byte;
		if(outputargumentbank[i].datatype=="bool") ss<<set_boolean;
		Outputassignment[i]=ss.str();


	}
}

/** copy the content of file1 to file2
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

/** make callback function and write it into "Gateway2Service.cpp"
 * @param count2input Is amount of parameters in input
 * @param inputassignment Contains a single part process in callback: input--->transbank
 * @param AssignmentfromInput2ROSRequet Contains the process: transbank ----> request
 * @param count2ouput Is amount of parameters in output
 * @param outputassignment Contains a sfingle part process in callback : response ------> transbank
 * @param AssignmentfromROSResponse2Output Contains the code for a single process:  transbank------> output
 * @param clientsetting Contains the code to set ROS Client in Gateway
 * @param srvsetting Contains the code to define a variant in type of srv-message
 * no return
 */
static void makeContent2Callback(int count2input,std::string inputassignment[],std::string AssignmentfromInput2ROSRequest[],
		int count2output,std::string outputassignment[],std::string AssignmentfromROSResponse2Output[],
		std::string clientsetting,std::string srvsetting){
	char file2[]="Gateway2Service.cpp";
	char file1[]="Gateway2Service_vorlag.cpp";
	copyfile(file2,file1);


	int line1;
	int line2;
	std::string position2callback1="//<<OPCUAInput_TO_ROSRequest>>";
	std::string position2callback2="//<<ROSResponse_TO_OPCUAOutput>>";
	char filename[]="Gateway2Service.cpp";
	findtheline(filename,&line1,position2callback1);

	addContentInFile(filename,line1++,"\n");
	addContentInFile(filename,line1++,clientsetting);
	addContentInFile(filename,line1++,srvsetting);
//add input
	for(int i=0;i<count2input;i++){
		addContentInFile(filename,line1++,"\n");
		addContentInFile(filename,line1++,inputassignment[i]);
		addContentInFile(filename,line1++,AssignmentfromInput2ROSRequest[i]);

	}

//add output
	findtheline(filename,&line2,position2callback2);
	for(int i=0;i<count2output;i++){
		addContentInFile(filename,line2++,"\n");
		addContentInFile(filename,line2++,AssignmentfromROSResponse2Output[i]);
		addContentInFile(filename,line2++,outputassignment[i]);
	}
}

/** define the name of the service into "Gateway2Service.cpp"
 * @param servicename Is name of a ROS service
 */
static void giveservicename(char servicename[]){

	//	char servicename[300]="Gateway2";
	std::string pos1="// <<Position To define servicename>>";
	std::string s1=charToStr(servicename);
	std::string s2;//code to write
	char file[]="Gateway2Service.cpp";
	int line=0;
	findtheline(file,&line,pos1);
	std::stringstream ss;
	ss.clear(); ss.str("");
	ss<<"char servicename[300]=\""<<s1<<"\";\n";
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
	system(command_char);/*do the linux command catkin_make in ROS workpsace*/

}




int main(){
	/*print the list of ROS Service that is rigistered in ROS Master*/
	std::string currentServiceList; //create a string to save the list of the current service in ROS
	GetCommandResult("rosservice list",0,&currentServiceList); /*give the command "rosservice list" to get the list of service*/
	std::cout<<"current service are : \n"<<currentServiceList;

	UA_Int32 count2request=0,count2response=0;// record the amount of input and output
	std::string dir2workspace;// direction of ROS workspace
//	std::string dir2workspace="/home/wxg/catkin_ws";

	std::cout<<"bitte geben Sie den Pfad von workspace(Beispiel: /home/user/workspace)\n";
	std::cin>>dir2workspace;/*get the direction of the ROS workspace from the  user*/

	char servicename[300];/*name of a ROS Service*/
	std::cout<<"bitte geben Sie den Name eines Service in the list \n";
	scanf("%s",servicename);
	std::cout<<"das anzurufende Service ist:"<<servicename<<"\n";

	/*define necessary variant to analyze ROS Service*/
	char srvname[300]; //save the name of the name of the message type of the ROS Service
	char srvtype[10240]; /*save the definition of the messagetype*/

	std::string request[50];/*save the definition of the request of ROS Service*/
	std::string response[50]; /*save the definition of the response of ROS Service*/
	DefinitionBank2Method bank[100];// Wenn 100 nicht ausreichend ist, kann es noch größer eingestelllt werden.

	/*argumentbank is used to save the definition of the requst and response of a ROS Service
	 * and to set the argument of a OPC UA method*/
	DefinitionBank2Method inputargumentbank[50];//Nur einzelne Variablen. array of structure to save the definiton of request.
	DefinitionBank2Method outputargumentbank[50];//Nur einzelne Variablen
	UA_Int32 count2input=0,count2output=0; /*integer to count the amount of the parameters in ROS Service*/

	GetSrvfromService(servicename,srvname);/*get the name of the message type */
	std::cout<<"das srvname ist:"<<srvname<<"\n";
	GetSrvDefbySrvname(srvname,srvtype); /*get the definition*/
	std::cout<<"das srvtype ist:\n"<<srvtype<<"\n";

	/*devide the definition of the message into two parts: request and response
	 * the int variant count2request and count2response will be also assigned*/
	GetSrvDef(srvname,request,&count2request,response,&count2response);
	UA_Int32 count2service=count2request+count2response; /*the total amount of parameters in ROS Service*/

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
	/*analyse process*/
	/*get the definition*/
	GetDefinitionBank2Method(request,count2request,response,count2response,bank);
	/*treat the definition and get argumentbank*/
	makeArgumentbank(bank,count2service,inputargumentbank,&count2input,outputargumentbank,&count2output);

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

	/*process to make necessary code
	 * these string are created to save the necessary code
	 */
	std::string clientsetting; /*this string save the code for setting ROS Client Node*/
	std::string srvsetting; /*this string save the code to create a variable in message type of the ROS Service*/
	std::string AssignmentfromInput2ROSRequest[50]; /*code for assignment process from input of OPC UA method to ROS Request*/
	std::string AssignmentfromROSResponse2Output[50]; /*code for assignment process from  ROS response to the output of OPC UA method*/
	std::string inputassignment[50]; /*array of string to save code for the assignmentprocess of inputargument*/
	std::string outputassignment[50]; /*array of string to save code for the assignmentprocess of outputargument*/
	std::string Head;/*string to save code for headfile*/

	makeHeadFile(srvname,&Head);/*make code for headfile*/
	makeClientSettingInCallback(srvname,servicename,&clientsetting);/*make code for setting ROS Client in Callbackfunction of OPC UA Method*/
	makeSrvInCallback(srvname,&srvsetting);/*make code to create a variant in message type of the ROS Service*/
	makeInputAssignment(inputargumentbank,count2input,inputassignment);/*make code for assginment process*/
	makeAssignmentfromInput2ROSResquest(inputargumentbank,count2input,AssignmentfromInput2ROSRequest);/*make code for assignment process*/
	makeAssignmentfromROSResponse2Output(outputargumentbank,count2output,AssignmentfromROSResponse2Output); /*make code for assignment process*/
	makeOutputAssignment(outputargumentbank,count2output,outputassignment);/*make code for ouput assignment process*/
	makeargumentname(inputargumentbank,count2input);/*set name of parameter in input argument*/
	makeargumentname(outputargumentbank,count2output);/*set name of parameter in outputargument*/
#if 0
	/*this part is used to check, if the process before works correctly*/
	std::cout<<Head;
	std::cout<<clientsetting;
	std::cout<<srvsetting;

	for(int i=0;i<count2input;i++){
		std::cout<<inputassignment[i];
		std::cout<<AssignmentfromInput2ROSRequest[i];
	}
	for(int i=0;i<count2output;i++){
		std::cout<<outputassignment[i];
	}
#endif

	/*	copy the content of Gateway2Service_vorlag into Gateway2Service
	 * 	write the code built before into the Gateway2Service.cpp
	 * 	write code for adding headfile into Gateway2Service.cpp
	 */
	makeContent2Callback(count2input,inputassignment,AssignmentfromInput2ROSRequest,
			count2output,outputassignment,AssignmentfromROSResponse2Output,clientsetting,srvsetting);
	addHeadFile(Head);/*write code for adding headfile into Gateway2Service.cpp*/

	giveservicename(servicename);/*let the Gateway2Service know, which ROS Service to transform*/
	Kompilieren(dir2workspace,"catkin_make");/*compile the ROS workspace*/

	return 0;
}
