#include <stdio.h>
#include "open62541.h"
#include <assert.h>
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
*  Werkzeug2UA_Method                                                        *
*                                                                            *
*  This file is part of project "studienarbeit_gateway"                      *
*                                                                            *
*  This program is free software; you can redistribute it and/or modify      *
*  it                                                                        *
*                                                                            *
*  @file     Werkzeug2UA_Method                                              *
*  @brief    source code of a program to build a gateway for transform       *
*            an OPC UA Method in a ROS Service                               *
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


/*@brief DefinitionBank2Method is a structure that can store the definition of message during the communication
 * through analyzing opc ua method node
 */

typedef struct _DefinitionBank {
	std::string dataname; /*name of a method nodeid*/
	std::string nodeidname; /* identifer of a NodeId */
	std::string datatype; /* data type */
	UA_Int32 datalvl;	   /*datalvl describes the position of a variable*/
	UA_Int32 isscalar;		/* if a variable is scalar, isscalar=1, or isscalar =0*/
	UA_Int32 isvariable;	/* if a variable is single parameter, isvariable=1, if isvariable=0, this variable is a structure*/
	UA_Int32 isinput;		/* if a varaible is a input of a service, isinput=1; if this variable is a output, then isinput=0*/
	UA_ReferenceDescription ref;

} DefinitionBank;

/** structure _TransitionBank is a structure that contains the build-in datatype of opc ua.
 * In the assignment process the value will be assigned at first in transbank through conversion.
 * example, supposed there was a parameter in request of a ros service: int32 x
 *  the process is:
 *  transbank.trans_int32=req.x;
 *  UA_Variant_setScalarCopy(&input[0], &transbank.trans_int32.x, &UA_TYPES[UA_TYPES_INT32]);
 */
typedef struct _TransitionBank {
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
} TransitionBank;


/** structure Argument
 * @brief the function of this structure is to save the information of the arguments in a OPC UA Method
 */
typedef struct _ArgumentBank {
	UA_Argument inputargument[100]; // save input argument, defalut length is 100. If 100 is not enough, you can change the length
	UA_Int32 count2inputargument; // record the amount of the argument in input
	UA_Argument outputargument[100]; // save output argument, defalut length is 100. If 100 is not enough, you can change the length
	UA_Int32 count2outputargument; // record the amount of the argument in output
} ArgumentBank;


/*
 * Die Methode unten dienen als die Bearbeitungsprozess zur Erstellung der "string" und zur Einschreiben des Codes
 */

/** copy the content of file1 to file2
 * @param file2 Is the name of a file that will be fill out
 * @param file1 Is the name of a file of a template
 */
static void copyfile(char * file2, char * file1) { //copy 1 and paste on 2
	FILE * fp1 = fopen(file1, "r");
	FILE * fp2 = fopen(file2, "w");

	char ch;
	while ((ch = fgetc(fp1)) != EOF)
		fputc(ch, fp2);
	fclose(fp1);
	fclose(fp2);

}

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

/*@brief  modify the Content In File
@param fileName, name of the file to modify;
@param lineNum, number of the line in this file;
@param content, the content that to cover a line in the file
@retval no return
*/
void modifyContentInFile(char *fileName, int lineNum, std::string content) {
	std::fstream in;
	char line[1024] = { '\0' };
	in.open(fileName);
	int i = 0;
	std::string tempStr;
	while (in.getline(line, sizeof(line))) {
		i++;
		if (lineNum != i) {
			tempStr += charToStr(line);
		} else {

			tempStr += content;
		}
		tempStr += '\n';
	}
	in.close();
	std::fstream out;
	out.open(fileName);
	out.flush();
	out << tempStr;
	out.close();

}

/**
 *@brief addContentInFile: add conten into a file
*@param fileName index1
*@param lineNum  number of the line to add content
*@param content the content
*@return no return
*/
void addContentInFile(char *fileName, int lineNum, std::string content) {
	std::fstream in;
	char line[1024] = { '\0' };
	in.open(fileName);
	int i = 0;
	std::string tempStr;
	while (in.getline(line, sizeof(line))) {
		i++;
		if (lineNum != i) {
			tempStr += charToStr(line);
		} else {
			tempStr += charToStr(line);
			tempStr += content;
		}
		tempStr += '\n';
	}
	in.close();
	std::fstream out;
	out.open(fileName);
	out.flush();
	out << tempStr;
	out.close();

}

/**
 *@brief findtheline: Find a line with specific content in a specific file
*@param fileName name of a file
*@param lineNum number of the line to find (output)
*@param content the specific content of the line, this content is defined by "std::string"
*@return no return
*/
static void findtheline(char *fileName, int *lineNum,
		std::string content) {
	std::fstream in;
	char line[1024] = { '\0' };
	in.open(fileName);
	int i = 0;
	std::string tempStr;
	while (in.getline(line, sizeof(line))) {
		i++;
		tempStr = charToStr(line);
		if (tempStr == content) {
			*lineNum = i;
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
	char Dir[10240] = "";
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
	strcpy(result, Dir);
}


/**
 * this is a redefine of the method "GetCommandResult", the function is same. In this function the type of the result is std::string
 * so that with the function "GetCommandResult", The result can be assigned to a data of type std::string or char
 */
static void GetCommandResult(std::string command, bool a,
		std::string * result) {
	char Dir[10240] = "";
	FILE *fp = NULL;
	fp = popen((char*) command.c_str(), "r");
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
	*result = Dir;

}

/**
 * @brief get the direction of the this package.
 * this function give the command "rospack find <packagename>", and the result is the direction of this package
 * @param packagename Is name of a ros package
 * @param packagelocation Is direction of a ros package. this parameter is the result of this function
 */
static void GetPackageLocation(std::string packagename,
		std::string * packagelocation) {
	std::string s1 = "rospack find ";
	s1 = s1 + packagename;
	GetCommandResult(s1, 1, packagelocation);
}

/**
 * @brief browseObject --- browse opc ua server and find the method in opc ua server
 * @param client An OPC UA Client
 * @param bReq Request to browse OPC UA Node
 * @param bResp Response of browse process
 * @param bank An array of DefinitionBank
 * @param count2nodeinobject An number that record the amount of the opc ua node in opc ua server
 */
static void browseObject(UA_Client * client, UA_BrowseRequest bReq,
		UA_BrowseResponse bResp, DefinitionBank bank[],
		int * count2nodeinobject) {
	int count = 0;
	/* Browse some objects */
	printf("Browsing nodes in objects folder:\n");
	UA_BrowseRequest_init(&bReq);
	bReq.requestedMaxReferencesPerNode = 0;
	bReq.nodesToBrowse = UA_BrowseDescription_new();
	bReq.nodesToBrowseSize = 1;
	bReq.nodesToBrowse[0].nodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER); /* browse objects folder */
	bReq.nodesToBrowse[0].resultMask = UA_BROWSERESULTMASK_ALL; /* return everything */
	bResp = UA_Client_Service_browse(client, bReq);
	printf("%-9s %-16s %-16s %-16s %16s %16s\n", "NAMESPACE", "NODEID",
			"BROWSE NAME", "DISPLAY NAME", "NODECLASS","IDENTIFIERTYPE");
	for (size_t i = 0; i < bResp.resultsSize; ++i) {
		for (size_t j = 0; j < bResp.results[i].referencesSize; ++j) {
			/*i ist 0; j ist 0~5*/
			UA_ReferenceDescription *ref = &(bResp.results[i].references[j]);
			if (ref->nodeId.nodeId.identifierType == UA_NODEIDTYPE_NUMERIC) {
				printf("%-9d %-16d %-16.*s %-16.*s %12d %16d\n",
						ref->nodeId.nodeId.namespaceIndex,
						ref->nodeId.nodeId.identifier.numeric,
						(int) ref->browseName.name.length,
						ref->browseName.name.data,
						(int) ref->displayName.text.length,
						ref->displayName.text.data, ref->nodeClass,(int)ref->nodeId.nodeId.identifierType);
				bank[count].ref = bResp.results[i].references[j];
				count++;
				//          printf("i is %-16d j is %-16d\n",i,j);

			} else if (ref->nodeId.nodeId.identifierType
					== UA_NODEIDTYPE_STRING) {
				printf("%-9d %-16.*s %-16.*s %-16.*s %12d %16d\n",
						ref->nodeId.nodeId.namespaceIndex,
						(int) ref->nodeId.nodeId.identifier.string.length,
						ref->nodeId.nodeId.identifier.string.data,
						(int) ref->browseName.name.length,
						ref->browseName.name.data,
						(int) ref->displayName.text.length,
						ref->displayName.text.data, ref->nodeClass,(int)ref->nodeId.nodeId.identifierType);
				bank[count].ref = bResp.results[i].references[j];
				count++;
				//        printf("i is %-16d j is %-16d\n",i,j);
			}
			/* TODO: distinguish further types */
		}
	}
	*count2nodeinobject = count;

}

/**
 * @brief browse a method node to get the NodeId of the input and ouput argument
 * @param client An OPC UA Client
 * @param bResp Request of a browse process
 * @param nodeidToMetho NodeId of an OPC UA Method to broswe
 * @param argumentnodeid An array of NodeId. this array will be assigned by this function.
 * This array records the NodeId of input and ouput argument
 */
static void browseMethod(UA_Client * client, UA_BrowseResponse bResp,
		UA_NodeId nodeidToMethod, UA_NodeId argumentnodeid[]) {
	UA_Int32 count = 0;
	UA_BrowseRequest bReq;
	UA_BrowseRequest_init(&bReq);
	/* Browse some objects */
	printf("Browsing nodes in objects folder:\n");
	UA_BrowseRequest_init(&bReq);
	bReq.requestedMaxReferencesPerNode = 0;
	bReq.nodesToBrowse = UA_BrowseDescription_new();
	bReq.nodesToBrowseSize = 1;
	bReq.nodesToBrowse[0].nodeId = nodeidToMethod; /* browse objects folder */
	bReq.nodesToBrowse[0].resultMask = UA_BROWSERESULTMASK_ALL; /* return everything */
	bResp = UA_Client_Service_browse(client, bReq);
	printf("%-9s %-16s %-16s %-16s %16s %16s\n", "NAMESPACE", "NODEID",
			"BROWSE NAME", "DISPLAY NAME", "NODECLASS","IDENTIFIERTYPE");
	for (size_t i = 0; i < bResp.resultsSize; ++i) {
		for (size_t j = 0; j < bResp.results[i].referencesSize; ++j) {
			/*i ist 0; j ist 0~5*/
			UA_ReferenceDescription *ref = &(bResp.results[i].references[j]);
			if (ref->nodeId.nodeId.identifierType == UA_NODEIDTYPE_NUMERIC) {
				printf("%-9d %-16d %-16.*s %-16.*s %12d %16d\n",
						ref->nodeId.nodeId.namespaceIndex,
						ref->nodeId.nodeId.identifier.numeric,
						(int) ref->browseName.name.length,
						ref->browseName.name.data,
						(int) ref->displayName.text.length,
						ref->displayName.text.data, ref->nodeClass,(int)ref->nodeId.nodeId.identifierType);
				argumentnodeid[count] = ref->nodeId.nodeId;
				count++;

			} else if (ref->nodeId.nodeId.identifierType
					== UA_NODEIDTYPE_STRING) {
				printf("%-9d %-16.*s %-16.*s %-16.*s %12d %16d\n",
						ref->nodeId.nodeId.namespaceIndex,
						(int) ref->nodeId.nodeId.identifier.string.length,
						ref->nodeId.nodeId.identifier.string.data,
						(int) ref->browseName.name.length,
						ref->browseName.name.data,
						(int) ref->displayName.text.length,
						ref->displayName.text.data, ref->nodeClass,(int)ref->nodeId.nodeId.identifierType);
				argumentnodeid[count] = ref->nodeId.nodeId;
				count++;
			}
			/* TODO: distinguish further types */
		}
	}

}

/**read Argument
 * @brief Read the argument in an OPC UA Method and save the definition of arguments in an array
 * @param client An OPC UA Client
 * @param argumentnodeid NodeId of input or output
 * @param count2argument Amount of the parameters in input or output of an OPC UA Method
 * @param argument An array of UA_Argument to save the definition of argument.
 * @param val A variant in data type of UA_Variant
 */
static void readArgument(UA_Client * client, UA_NodeId argumentnodeid,
		UA_Int32 * count2argument, UA_Argument argument[],UA_Variant *val) {

	UA_StatusCode retval = UA_Client_readValueAttribute(client, argumentnodeid,val);
	*count2argument = (int) val->arrayLength;

	if (retval == UA_STATUSCODE_GOOD&& val->type == &UA_TYPES[UA_TYPES_EXTENSIONOBJECT]) {

		UA_ExtensionObject * value;
		value = (UA_ExtensionObject *) val->data;

		for (int i = 0; i < (int) val->arrayLength; i++) {
			argument[i] = *(UA_Argument *) value[i].content.decoded.data;

		}

		/* argumentnodeid[0] is NodeId of inputarguments
		 * argumentnodeid[1] is NodeId of outputarguments
		 */
	}
}

/** GetArgument
 * @brief Get the argument in a method and put the information into a structure "argumentbank"
 * @param client OPC UA Client
 * @param nodeidToMethod Is NodeId of an OPC UA Method
 * @param argumentbank A structure to save the definition of argument in input and output of an OPC UA Method
 */
static void GetArgument(UA_Client * client, UA_NodeId nodeidToMethod, ArgumentBank * argumentbank) {

	UA_Variant * val = UA_Variant_new();
	UA_Int32 count2input;
	UA_Int32 count2output;
	UA_NodeId argumentnodeid[5];

	UA_BrowseResponse bResp;
	browseMethod(client, bResp, nodeidToMethod, argumentnodeid);

	readArgument(client, argumentnodeid[0], &count2input,
			argumentbank->inputargument,val);
	readArgument(client, argumentnodeid[1], &count2output,
			argumentbank->outputargument,val);


	argumentbank->count2inputargument = count2input;
	argumentbank->count2outputargument = count2output;

//	UA_Variant_delete(val);  //this problem should be solved


}

/** getSrvDefinition
 * @brief this function is used to make code to define a parameter in a srv-message type
 * example : for a argument named "x" in type of "float" in an OPC UA Method
 * this function will make code to define a same parameter in a ros srv-message type: float32 x
 * this example means a variant named x in type of float32
 *
 * @param argument An argument in a method
 * @param definition An String, the code built by this function is assigned in this string.
 */
static void getSrvDefinition(UA_Argument argument, std::string * definition) {
	std::stringstream ss;
	const UA_DataType* dataType;
	std::string dataname;
	std::string s1 = " ";
	std::string s2 = "\n";
	std::string s3;

	dataType = UA_findDataType(&argument.dataType);

	ss.clear();
	ss.str();
	char* name=(char*)argument.name.data;
	dataname = name;

	if (dataType == (&UA_TYPES[UA_TYPES_BOOLEAN]))
		ss << "bool";
	if (dataType == (&UA_TYPES[UA_TYPES_SBYTE]))
		ss << "byte";
	if (dataType == (&UA_TYPES[UA_TYPES_BYTE]))
		ss << "byte";
	if (dataType == (&UA_TYPES[UA_TYPES_INT16]))
		ss << "int16";
	if (dataType == (&UA_TYPES[UA_TYPES_UINT16]))
		ss << "uint16";
	if (dataType == (&UA_TYPES[UA_TYPES_INT32]))
		ss << "int32";
	if (dataType == (&UA_TYPES[UA_TYPES_UINT32]))
		ss << "uint32";
	if (dataType == (&UA_TYPES[UA_TYPES_INT64]))
		ss << "int64";
	if (dataType == (&UA_TYPES[UA_TYPES_UINT64]))
		ss << "uint64";
	if (dataType == (&UA_TYPES[UA_TYPES_FLOAT]))
		ss << "float32";
	if (dataType == (&UA_TYPES[UA_TYPES_DOUBLE]))
		ss << "float64";
	if (dataType == (&UA_TYPES[UA_TYPES_STRING]))
		ss << "string";
	if (dataType == (&UA_TYPES[UA_TYPES_DATETIME]))
		ss << "time";
	ss << s1 << dataname << s2;
	s3 = ss.str();
	*definition = s3;

}

/** makeDefinitionOfService
 * @brief make an array of string, every entry has a line of the code to define a variable in srv-message
 * the process to make code is realized by function "getSrvDefinition"
 * @param argumentbank A structure that contains the definition of arguments
 * @param request An array assigned by this function to save the code to define the request in a srv=message type
 * @param response An array assigned by this function to save the code to define the response in a srv-message type
 */
static void makeDefinitionOfService(ArgumentBank argumentbank,
		std::string request[], std::string response[]) {
	for (int i = 0; i < argumentbank.count2inputargument; i++) {
		getSrvDefinition(argumentbank.inputargument[i], &request[i]);
	}
	for (int i = 0; i < argumentbank.count2outputargument; i++) {
		getSrvDefinition(argumentbank.outputargument[i], &response[i]);
	}

}

/** put DefinitionInSrvFile
 * @brief write code to define a srv-message type into a srv-file
 *
 * @param argumentbank a structure that contains definition of arguments in input and output of a OPC UA Method
 * according to the element "count2inputargument" and "count2outputargument" in argumentbank, this function will
 * write the  content in the string array "request" and "response"
 *
 * @param argumentbank A structure that contains the definition of arguments
 * @param request A string array that contains the code to define variable in request of a ROS Service
 * @param response A string array that contains the code to define variable in response of a ROS Service
 * @param packagelocation Direction of ROS Package built in this project (studienarbeit_gateway)
 */
static void putDefinitionInSrvFile(ArgumentBank argumentbank,std::string request[],std::string response[],std::string packagelocation){
	//#Postition To write Request
	//#Position To write Response
	std::string msgname="/srv/Method1.srv";
	std::string vorlag="/srv/vorlag.srv";
	vorlag.insert(0,packagelocation);
	std::string s1;
	s1=msgname;
	s1.insert(0,packagelocation);
	char * filename=(char*)s1.c_str();
	char * vorlagname=(char*)vorlag.c_str();
	std::cout<<"the name of the file:"<<filename<<"\n";
    copyfile(filename,vorlagname);
    std::string symbol2request="#Postition To write Request";
    std::string symbol2response="#Position To write Response";
    int lineRequest;
    int lineResponse;
    findtheline(filename,&lineRequest,symbol2request);
    findtheline(vorlagname,&lineResponse,symbol2response);
	addContentInFile(filename,lineRequest++,"\n");
    for(int i=0;i<argumentbank.count2inputargument;i++){

    	addContentInFile(filename,lineRequest++,request[i]);
    }
	addContentInFile(filename,lineResponse++,"\n");
    for(int i=0;i<argumentbank.count2inputargument;i++){

    	addContentInFile(filename,lineResponse++,response[i]);
    }

}


/** makeAssignmentfromROSRequestToInput
 * @brief Treatment of string to make code for the assignment process in callback function in a ROS Service
 *	example: this function make code like : transbank.trans_int32=req.a;
 * @param argumentbank  A structure that contains the definition of arguments
 * @param assignmentfromROSRequestToInput Array of string that obtains the code built by this function
 */
static void makeAssignmentfromROSRequestToInput(ArgumentBank argumentbank,
		std::string assignmentfromROSRequestToInput[]) {
	/*
	 * The goal of this method is to generate a sentence that converts the ros request into the inputarguments of the OPC UA method.
	 * E.g: 	transbank.trans_int32=req.a;
	 */
	std::stringstream ss;
	const UA_DataType* dataType;
	std::string dataname;
	std::string s1 = "transbank.trans_";
	std::string s2 = "=req.";
	std::string s3 = ";\n";



	for (UA_Int32 i = 0; i < argumentbank.count2inputargument; i++) {
		dataType = UA_findDataType(&argumentbank.inputargument[i].dataType);
		dataname=(char*)argumentbank.inputargument[i].name.data;
		ss.clear();
		ss.str("");
		ss<<s1;
		if (dataType == (&UA_TYPES[UA_TYPES_BOOLEAN]))
			ss << "bool"<<s2<<dataname<<s3;
		if (dataType == (&UA_TYPES[UA_TYPES_SBYTE]))
			ss << "byte"<<s2<<dataname<<s3;
		if (dataType == (&UA_TYPES[UA_TYPES_BYTE]))
			ss << "byte"<<s2<<dataname<<s3;
		if (dataType == (&UA_TYPES[UA_TYPES_INT16]))
			ss << "int16"<<s2<<dataname<<s3;
		if (dataType == (&UA_TYPES[UA_TYPES_UINT16]))
			ss << "uint16"<<s2<<dataname<<s3;
		if (dataType == (&UA_TYPES[UA_TYPES_INT32]))
			ss << "int32"<<s2<<dataname<<s3;
		if (dataType == (&UA_TYPES[UA_TYPES_UINT32]))
			ss << "uint32"<<s2<<dataname<<s3;
		if (dataType == (&UA_TYPES[UA_TYPES_INT64]))
			ss << "int64"<<s2<<dataname<<s3;
		if (dataType == (&UA_TYPES[UA_TYPES_UINT64]))
			ss << "uint64"<<s2<<dataname<<s3;
		if (dataType == (&UA_TYPES[UA_TYPES_FLOAT]))
			ss << "float32"<<s2<<dataname<<s3;
		if (dataType == (&UA_TYPES[UA_TYPES_DOUBLE]))
			ss << "float64"<<s2<<dataname<<s3;
		if (dataType == (&UA_TYPES[UA_TYPES_STRING])) {
			//transbank.trans_string=UA_STRING((char*)req.a.c_str());
			ss << "string"<<"=UA_STRING((char*)req."<<dataname<<".c_str());\n";
		}

		if (dataType == (&UA_TYPES[UA_TYPES_DATETIME]))
			ss << "time"<<s2<<dataname<<s3;

		assignmentfromROSRequestToInput[i]=ss.str();

	}

}

/** makeInputAssignment
 * @brief Treatment of string to make code for the assignment process in Gateway take the value of request
 * and assign the value into input of opc ua method
 * example: UA_Variant_setScalarCopy(&input[0], &srv.response.sum, &UA_TYPES[UA_TYPES_INT32]);
 * @param argumentbank A structure that contains the definition of arguments
 * @param inputassignment Array of string that obtains the code built in this function
 */
static void makeInputAssignment(ArgumentBank argumentbank,std::string inputassignment[]){
	//将从Service中获得的值set到output中
	//        UA_Variant_setScalarCopy(&input[0], &srv.response.sum, &UA_TYPES[UA_TYPES_INT32]);

	const UA_DataType* dataType;
	std::string s1="UA_Variant_setScalarCopy(&input[";
	std::string s2="], &";
	std::stringstream ss;

	std::string set_string = "transbank.trans_string, &UA_TYPES[UA_TYPES_STRING]);\n";
	std::string set_int16  = "transbank.trans_int16, &UA_TYPES[UA_TYPES_INT16]);\n";
	std::string set_uint16 = "transbank.trans_uint16, &UA_TYPES[UA_TYPES_UINT16]);\n"	;
	std::string set_int32  = "transbank.trans_int32, &UA_TYPES[UA_TYPES_INT32]);\n";
	std::string set_uint32 = "transbank.trans_uint32, &UA_TYPES[UA_TYPES_UINT32]);\n";
	std::string set_int64  = "transbank.trans_int64, &UA_TYPES[UA_TYPES_INT64]);\n";
	std::string set_uint64 = "transbank.trans_uint64, &UA_TYPES[UA_TYPES_UINT64]);\n";
	std::string set_float  = "transbank.trans_float, &UA_TYPES[UA_TYPES_FLOAT]);\n";
	std::string set_double = "transbank.trans_double, &UA_TYPES[UA_TYPES_DOUBLE]);\n";
	std::string set_datetime= "transbank.trans_datatime, &UA_TYPES[UA_TYPES_DATETIME]);\n";
	std::string set_byte	= "transbank.trans_byte, &UA_TYPES[UA_TYPES_BYTE]);\n";
	std::string set_boolean ="transbank.trans_boolean, &UA_TYPES[UA_TYPES_BOOLEAN]);\n";
	std::string dataname;

	for(int i=0;i<argumentbank.count2inputargument;i++){
		dataType = UA_findDataType(&argumentbank.inputargument[i].dataType);

		ss.clear();
		ss.str("");
		ss<<s1<<i<<s2;
		if(dataType == (&UA_TYPES[UA_TYPES_INT16])) ss<<set_int16;
		if (dataType == (&UA_TYPES[UA_TYPES_INT32])) ss<<set_int32;
		if (dataType == (&UA_TYPES[UA_TYPES_INT64])) ss<<set_int64;
		if (dataType == (&UA_TYPES[UA_TYPES_UINT16])) ss<<set_uint16;
		if (dataType == (&UA_TYPES[UA_TYPES_UINT32])) ss<<set_uint32;
		if (dataType == (&UA_TYPES[UA_TYPES_UINT64])) ss<<set_uint64;
		if (dataType == (&UA_TYPES[UA_TYPES_FLOAT]))ss<<set_float;
		if (dataType == (&UA_TYPES[UA_TYPES_DOUBLE])) ss<<set_double;
		if (dataType == (&UA_TYPES[UA_TYPES_STRING])) ss<<set_string;
		if (dataType == (&UA_TYPES[UA_TYPES_DATETIME])) ss<<set_datetime;
		if (dataType == (&UA_TYPES[UA_TYPES_BYTE])) ss<<set_byte;
		if (dataType == (&UA_TYPES[UA_TYPES_BOOLEAN])) ss<<set_boolean;
		inputassignment[i]=ss.str();
		//将来自serviced的输出 传递到opcua的callback函数里边

	}
}


/** makeOutputAssignment
 * @brief Treatment of string to make code for the assignment process in Gateway from output of opc ua method to response ros service
 * example: transbank.trans_int32=*(UA_Int32*)output[0].data;
 * @param argumentbank A structure that contains the definition of arguments
 * @param outputputassignment Array of string that obtains the code built in this function
 */
static void makeOutputAssignment(ArgumentBank argumentbank,std::string outputassignment[]){
	// Ziel:   transbank.trans_int32=*(UA_Int32*)output[0].data;
	std::stringstream ss;
	const UA_DataType* dataType;


	std::string s1 = "].data;\n";

	for(int i=0;i<argumentbank.count2outputargument;i++){
		dataType = UA_findDataType(&argumentbank.outputargument[i].dataType);
		ss.clear();
		ss.str("");
		if(dataType == (&UA_TYPES[UA_TYPES_INT16])) ss<<"transbank.trans_int16=*(UA_Int16*)output[";
		if(dataType == (&UA_TYPES[UA_TYPES_INT32])) ss<<"transbank.trans_int32=*(UA_Int32*)output[";
		if(dataType == (&UA_TYPES[UA_TYPES_INT64])) ss<<"transbank.trans_int64=*(UA_Int64*)output[";
		if(dataType == (&UA_TYPES[UA_TYPES_BOOLEAN])) ss<<"transbank.trans_bool=*(UA_Boolean*)output[";
		if(dataType == (&UA_TYPES[UA_TYPES_BYTE])) ss<<"transbank.trans_byte=*(UA_Byte*)output[";
		if(dataType == (&UA_TYPES[UA_TYPES_STRING])) ss<<"transbank.trans_string=*(UA_String*)output[";
		if(dataType == (&UA_TYPES[UA_TYPES_UINT16])) ss<<"transbank.trans_uint16=*(UA_UInt16*)output[";
		if(dataType == (&UA_TYPES[UA_TYPES_UINT32])) ss<<"transbank.trans_uint32=*(UA_UInt32*)output[";
		if(dataType == (&UA_TYPES[UA_TYPES_UINT64])) ss<<"transbank.trans_uint64=*(UA_UInt64*)output[";
		if(dataType == (&UA_TYPES[UA_TYPES_FLOAT])) ss<<"transbank.trans_float=*(UA_Float*)output[";
		if(dataType == (&UA_TYPES[UA_TYPES_DOUBLE]))  ss<<"transbank.trans_double=*(UA_Double*)output[";
		ss<<i<<s1;
		outputassignment[i]=ss.str();

	}

}


/** makeAssignmentfromOutputToROSResponse
 * @brief Treatment of string to make code for the assignment process in Gateway from output of opc ua method to the response of ros service
 * example: res.sum=transbank.trans_int32;
 * @param argumentbank A structure that contains the definition of arguments
 * @param assignmentfromOutputToROSResponse Array of string that obtains the code built in this function
 */
static void makeAssignmentfromOutputToROSResponse(ArgumentBank argumentbank,
		std::string assignmentfromOutputToROSResponse[]) {
	/*
	 * The goal of this method is to generate a sentence that converts the ros request into the inputarguments of the OPC UA method.
	 * E.g: 	    res.sum=transbank.trans_int32;
	 */

	std::stringstream ss;
	const UA_DataType* dataType;
	std::string dataname;

	std::string s1 = "res.";
	std::string s2 = "=transbank.trans_";
	std::string s3 = ";\n";

	for (UA_Int32 i = 0; i < argumentbank.count2outputargument; i++) {
		ss.clear();
		ss.str("");
		dataType = UA_findDataType(&argumentbank.outputargument[i].dataType);
		dataname=(char*)argumentbank.outputargument[i].name.data;
		ss<<s1<<dataname<<s2;
		if (dataType == (&UA_TYPES[UA_TYPES_BOOLEAN]))
			ss << "bool";
		if (dataType == (&UA_TYPES[UA_TYPES_SBYTE]))
			ss << "byte";
		if (dataType == (&UA_TYPES[UA_TYPES_BYTE]))
			ss << "byte";
		if (dataType == (&UA_TYPES[UA_TYPES_INT16]))
			ss << "int16";
		if (dataType == (&UA_TYPES[UA_TYPES_UINT16]))
			ss << "uint16";
		if (dataType == (&UA_TYPES[UA_TYPES_INT32]))
			ss << "int32";
		if (dataType == (&UA_TYPES[UA_TYPES_UINT32]))
			ss << "uint32";
		if (dataType == (&UA_TYPES[UA_TYPES_INT64]))
			ss << "int64";
		if (dataType == (&UA_TYPES[UA_TYPES_UINT64]))
			ss << "uint64";
		if (dataType == (&UA_TYPES[UA_TYPES_FLOAT]))
			ss << "float";
		if (dataType == (&UA_TYPES[UA_TYPES_DOUBLE]))
			ss << "double";
		if (dataType == (&UA_TYPES[UA_TYPES_STRING])){
			// res.result=(char*)transbank.trans_string.data;
			ss.clear();
			ss.str("");
			ss<<s1<<dataname<<"=(char*)transbank.trans_string.data";
		}
		if (dataType == (&UA_TYPES[UA_TYPES_DATETIME]))
			ss << "time";
		ss<<s3;
		assignmentfromOutputToROSResponse[i]=ss.str();

	}
}

/** makeCallback
 * @brief write the code built in this program into the source code "Gateway2UA_Method.cpp"
 * @param argumentbank A structure that contains the definition of arguments
 * the following paramter are string array that contains the necessary code
 * @param assignmentfromROSRequestToInput
 * @param inputasiignment
 * @param outputassignment
 * @param assginemntfromOutputToROSResponse
 * @nodeid2write
 */
static void makeCallback(ArgumentBank argumentbank,std::string assignmentfromROSRequestToInput[],	std::string inputassignment[],
		std::string outputassignment[],std::string assignmentfromOutputToROSResponse[],std::string nodeid2write){
	char file2[]="Gateway2UA_Method.cpp";
	char file1[]="Gateway2UA_Method_vorlag.cpp";
	copyfile(file2,file1);
	char filename[]="Gateway2UA_Method.cpp";
	int linenum1;
	int linenum2;
	int linenum3;
	std::string position1="// <<position: OPC UA Input To ROS Resquest>>";
	std::string position2="// <<position: ROS Response To OPC UA Output>>";
	std::string position3="// <<position: give NodeId >>";
	findtheline(filename,&linenum1,position1);

	addContentInFile(filename,linenum1++,"\n");
	for(int i=0;i<argumentbank.count2inputargument;i++){
		addContentInFile(filename,linenum1++,assignmentfromROSRequestToInput[i]);
		addContentInFile(filename,linenum1++,inputassignment[i]);
	}

	findtheline(filename,&linenum2,position2);
	addContentInFile(filename,linenum2++,"\n");
	for(int i=0;i<argumentbank.count2outputargument;i++){

		addContentInFile(filename,linenum2++,outputassignment[i]);
		addContentInFile(filename,linenum2++,assignmentfromOutputToROSResponse[i]);
	}
	findtheline(filename,&linenum3,position3);
	addContentInFile(filename,linenum3++,"\n");
	addContentInFile(filename,linenum3++,nodeid2write);

}

/**
 * @brief This function compiles the ROS Workspace
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

int main(void) {

	/*get the requirement from user*/
	std::string packagename="studienarbeit_gateway";/*name of this ROS package is studienarbeit_gateway*/
	std::string dir2workspace;/*direction of workspace*/
	std::cout<<"bitte Geben Sie den Pfad von workspace (Beispiel: /home/user/workspace)\n";
	std::cin>>dir2workspace;/*get direction of workspace*/
	std::string packagelocation;/*create a string to save direction of package*/
	GetPackageLocation(packagename,&packagelocation); /*get direction of this ROS package*/

	/*set OPC UA Client*/
	UA_Client *client = UA_Client_new(UA_ClientConfig_default);
	UA_StatusCode retval = UA_Client_connect(client,
			"opc.tcp://localhost:4840");
	if (retval != UA_STATUSCODE_GOOD) {
		UA_Client_delete(client);
		std::cout<<"Server ist noch nicht angeschaltet!!!!\n";
		return (int) retval;
	}


	/*analyze the OPC UA Method and show the list of node in OPC UA Server*/
	DefinitionBank bank[100];
	int count2nodeinobject;/*record the amount of the node in object folder*/
	UA_BrowseRequest bReq;
	UA_BrowseRequest_init(&bReq);
	UA_BrowseResponse bResp;
	UA_Variant *val = UA_Variant_new();
	browseObject(client, bReq, bResp, bank, &count2nodeinobject); /*show the list of OPC UA node in OPC UA server*/

	/*get the NodeId of a OPC UA method from user*/
	UA_NodeId nodeidToRead;/*this nodeid is gaven by the user*/
	int tmpIdType;/*identifierType of a NodeId*/
	int tmpNamespace;/*namespace of NodeId*/
	char tmpIdString[300]; /*NodeId in string identifier type*/
	int tmpNumeric;/*nodeid in number identifier type*/
	std::stringstream givenodeid;/*create a stringstream to make the code for defining a NodeId in Gateway*/
	givenodeid.clear();
	givenodeid.str("");
	std::string nodeid2write;/*save the code for defining a NodeId in Gateway, this is a string. the code through stringstream will*/
	std::cout<<"bitte geben Sie das identifierType des NodeId der Methode\n (UA_NUMERIC=0; UA_STRING=3)\n";
	scanf("%d",&tmpIdType); /*get identifier type of NodeId of a OPC UA method*/
	std::cout<<"bitte geben Sie das namepaceIndex der Methode\n";
	scanf("%d",&tmpNamespace);/*get identifier type of NodeId of a OPC UA method*/
	std::cout<<"bitte geben Sie das identifier des NodeId der Methode\n";
	/*get the whole NodeId*/
	if(tmpIdType==0) {
		scanf("%d",&tmpNumeric);
		nodeidToRead = UA_NODEID_NUMERIC(tmpNamespace,tmpNumeric);
		givenodeid<<"nodeidToRead=UA_NODEID_NUMERIC("<<tmpNamespace<<","<<tmpNumeric<<");\n";
	}
	if(nodeidToRead.identifierType==3) {

		scanf("%s",tmpIdString);
		nodeidToRead= UA_NODEID_STRING(tmpNamespace,tmpIdString);
		givenodeid<<"nodeidToRead=UA_NODEID_STRING("<<tmpNamespace<<",\""<<tmpIdString<<"\");\n";
	}
	nodeid2write=givenodeid.str();/*get the code to define a NodeId in Gateway*/

	ArgumentBank argumentbank;/*create a structure to save the definition of the argument and the amount of parameters in input and output*/
	GetArgument(client, nodeidToRead,&argumentbank); 	/*
	 * Through the Method "GetArgument"  the definition of the inputargument and ouputargument is stored in inputargument[100]
	 * and outputargument[100].
	 * count2inputargument and count2outputargument show the amount of the argument in input and output
	 */


	std::string request[50]; // definition of request in a srv-file;
	std::string response[50];// definition of response in a srv-file;
	/*r equest[50] and response[50] will be write into a srv-file */

	/*make definition code*/
	makeDefinitionOfService(argumentbank,request,response);/*set argumentbank, get the amount of Parameters in input and output of OPC UA method*/

#if 0
	/*this part is used to check, if the process before works correctly*/
	for(int i=0;i<argumentbank.count2inputargument;i++){
		std::cout<<request[i];
	}
	for(int i=0;i<argumentbank.count2outputargument;i++){
		std::cout<<response[i];
	}
#endif


	/*write the definition into a srv flie*/
	putDefinitionInSrvFile(argumentbank,request,response,packagelocation);


	/*make code for the callback function of a ros service in gateway*/
	std::string assignmentfromROSRequestToInput[50];/* code for assignment process from ROS request to input of OPC UA method*/
	std::string inputassignment[50];/* code for assignment process from ROS request to input of OPC UA method*/
	std::string outputassignment[50];/* code for assignment process from output of OPC UA method to ROS response*/
	std::string assignmentfromOutputToROSResponse[50];/* code for assignment process from output of OPC UA method to ROS response*/
	makeAssignmentfromROSRequestToInput(argumentbank,assignmentfromROSRequestToInput);/*treatment of string to make code*/
	makeInputAssignment(argumentbank,inputassignment);/*treatment of string to make code*/
	makeOutputAssignment(argumentbank,outputassignment);/*treatment of string to make code*/
	makeAssignmentfromOutputToROSResponse(argumentbank,assignmentfromOutputToROSResponse);/*treatment of string to make code*/

	/*make callback function, write the code into Werkzeug2UA_Method.cpp*/
	makeCallback(argumentbank,assignmentfromROSRequestToInput,inputassignment,
			outputassignment,assignmentfromOutputToROSResponse,nodeid2write);

#if 0
	/*this part is used to check, if the process before works correctly*/
	if (retval == UA_STATUSCODE_GOOD) {
		printf("input arrayDimensionsSize is %d:\n",
				(int) val->arrayDimensionsSize); //arrayDimensionsSize von Inputargument
		printf("input arraylength is %d\n", (int) val->arrayLength); // arrayLength von Inputargument
		printf("inputargument type is:%d\n",
				val->type->typeId.identifier.numeric);
		printf("inputargument type identifier is:%d\n", val->type->typeId.identifierType);
		printf("inputargument type name is:%s\n", val->type->typeName);
		printf("inputargument type index is:%d\n", val->type->typeIndex);

	}

#endif

	Kompilieren(dir2workspace,"catkin_make");/*compile ROS workspace*/
	/* Clean up */
	UA_Variant_delete(val);

	UA_BrowseRequest_deleteMembers(&bReq);
	UA_BrowseResponse_deleteMembers(&bResp);
	/* Clean up */

	UA_Client_delete(client); /* Disconnects the client internally */
	return UA_STATUSCODE_GOOD;
}

