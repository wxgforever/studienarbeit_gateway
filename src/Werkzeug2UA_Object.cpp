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
*  Werkzeug2UA_Object                                                        *
*                                                                            *
*  This file is part of project "studienarbeit_gateway"                      *
*                                                                            *
*  This program is free software; you can redistribute it and/or modify      *
*  it                                                                        *
*                                                                            *
*  @file     Werkzeug2UA_Object                                              *
*  @brief    source code of a program to build a gateway for transform       *
*            an opc ua object node in a ros topic                            *
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
 * through analyzing opc ua node */
typedef struct _DefinitionBank{
	std::string dataname;  /*name of a variable */
	std::string datatype;  /*type of a variable */
	UA_Int32 datalvl;	   /*datalvl describes the position of a variable*/
	UA_Int32 isscalar;		/* if a variable is scalar, isscalar=1, or isscalar =0*/
	UA_Int32 isvariable;	/* if a variable is variant, isvariable=1, if isvariable=0, this variable is a structure*/
	UA_Int32 isinput;		/* if a varaible is a input of a service, isinput=1; if this variable is a output, then isinput=0*/
	std::string argumentname;	/*argumentname will show the whole name of a variable, if "res" is the name of structure,
	                             example : "a" is a member of this structure,then the argumentname is res.a */
	UA_NodeId nodeid;

}DefinitionBank;


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
 * @brief Get Type of Variant
 * anlayze the data type of variable node in opc ua server, get the data type
 * @param type An string that is assigned in this function
 * @param val An structure with datatype UA_Variant
 */
static void GetVariantType(std::string * type,UA_Variant * val){


	if (UA_Variant_isScalar(val)) {
		if (val->type == &UA_TYPES[UA_TYPES_BOOLEAN]) *type="bool";
		if (val->type == &UA_TYPES[UA_TYPES_SBYTE]) *type="byte";
		if (val->type == &UA_TYPES[UA_TYPES_BYTE]) *type="byte";

		if (val->type == &UA_TYPES[UA_TYPES_INT16]) *type="int16";

		if (val->type == &UA_TYPES[UA_TYPES_UINT16]) *type="uint16";

		if (val->type == &UA_TYPES[UA_TYPES_INT32]) *type="int32";

		if (val->type == &UA_TYPES[UA_TYPES_UINT32]) *type="uint32";

		if (val->type == &UA_TYPES[UA_TYPES_INT64]) *type="int64";

		if (val->type == &UA_TYPES[UA_TYPES_UINT64]) *type="uint64";

		if (val->type == &UA_TYPES[UA_TYPES_FLOAT]) *type="float32";

		if(val->type == &UA_TYPES[UA_TYPES_DOUBLE]) *type="float64";

		if(val->type == &UA_TYPES[UA_TYPES_STRING]) *type="string";

		if(val->type == &UA_TYPES[UA_TYPES_DATETIME]) *type="time";

        /* TODO: distinguish further types */
	}
	else if(!UA_Variant_isScalar(val)){
        /* TODO: distinguish further types for array and matrix */
	}

}

/**
 * @brief get the data type of variable in opc ua server
 * this function read the variable and get a UA_Variant as a feedback.
 * This function will get the data type of a variable node through analyzing the datatype of this UA_Variant.
 * @param client An OPC UA Client
 * @param bank An array of DefinitionBank. In this function the
 * @param count2variable Records the amount of variable node in a opc ua object
 */
static void GetDatatype(UA_Client *client, DefinitionBank bank[],int count2variable){
	UA_Variant * val=UA_Variant_new();
	UA_StatusCode retvel;
	for(int i=0;i<count2variable;i++){
		retvel=UA_Client_readValueAttribute(client,bank[i].nodeid,val);
		GetVariantType(&bank[i].datatype,val);
	}
}

/**
 * @brief Browses the OPC UA Server, the nodeId is UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER)
 * @param client An OPC UA Client
 */
static void browseObject(UA_Client * client) {
	int count = 0;
	/* Browse some objects */
	printf("Browsing nodes in objects folder:\n");
	UA_BrowseRequest bReq;
	UA_BrowseRequest_init(&bReq);
	bReq.requestedMaxReferencesPerNode = 0;
	bReq.nodesToBrowse = UA_BrowseDescription_new();
	bReq.nodesToBrowseSize = 1;
	bReq.nodesToBrowse[0].nodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER); /* browse objects folder */
	bReq.nodesToBrowse[0].resultMask = UA_BROWSERESULTMASK_ALL; /* return everything */
	UA_BrowseResponse bResp = UA_Client_Service_browse(client, bReq);
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

			}
			/* TODO: distinguish further types */
		}
	}

}

/**
 * @brief makeString2DefineMsg---build the code to defiine a messagetype through treatment of string.
 * @param bank Contains the information of the opc ua object
 * @param count2variable Show the amount of the variablenode in a object
 * @param datadef Array of string that contains the code built in this function
 */
static void makeString2DefineMsg(DefinitionBank bank[],int count2variable,std::string datadef[]){
	for(int i=0;i<count2variable;i++){
		datadef[i]=bank[i].datatype;
		datadef[i].append(" ");
		datadef[i].append(bank[i].dataname);
		datadef[i].append("\n");
	}
}


/**
 * @brief makeMsgDefinition--- write the code built by the function "makeString2DefineMsg" into a msg file.
 * The name of the msg file is Gateway.msg
 * @param client OPC UA Client
 * @param bank Array of DefinitionBank that works as a database
 * @param packageloctaion Direction of the package "studienarbeit_gateway"
 */
static void makeMsgDefinition(UA_Client * client, DefinitionBank bank[], int count2variable, std::string packagelocation){
	std::string msgname="/msg/Gateway.msg";
	std::string vorlag="/msg/vorlag.msg";
	vorlag.insert(0,packagelocation);
	std::string s1;
	s1=msgname;
	s1.insert(0,packagelocation);
	char * filename=(char*)s1.c_str();
	char * vorlagname=(char*)vorlag.c_str();
	std::cout<<filename<<"\n";


	std::string msgdef[100];
    GetDatatype(client,bank,count2variable);
    makeString2DefineMsg(bank,count2variable,msgdef);

    copyfile(filename,vorlagname);

    int linenum=2;
	addContentInFile(filename,linenum++,"\n");
    for(int i=0;i<count2variable;i++){
    	std::cout<<msgdef[i]<<"\n";
    	addContentInFile(filename,linenum++,msgdef[i]);
    }
}

/**
 * @brief makevalueAssignment ----- Makes the code for the assignment process from opc ua to ros
 * in this function an array of string that contains the code for the assignment process in Gateway will be built
 * @param bank An array of DefinitionBank. This function build the code according to this bank.
 * @param count2variable Shows the amount of variable. This determines how much entry in bank should be read
 * @param assignment An array of string thaat contains the code built by this function
 */
static void makevalueAssignment(DefinitionBank bank[],int count2variable,std::string assignment[]){
	/*
	 *
	 * 	msg->num=transbank[0].trans_int32;
	 * 	msg->xachse=transbank[1].trans_double;
	 * 	msg->yachse=transbank[2].trans_double;
	 * 	msg->zachse=transbank[3].trans_double;
	 * 	msg->zuobiaoxi=(char*)transbank[4].trans_string.data;
	 */
	std::stringstream ss;
	std::string s1="msg->";
	std::string s2="=transbank[";
	std::string s3="].trans_";
	for(int i=0;i<count2variable;i++){
		ss.clear();
		ss.str("");
		ss<<s1<<bank[i].dataname<<s2<<i<<s3;
		if(bank[i].datatype=="bool") ss<<"boolean";
		if(bank[i].datatype=="byte") ss<<"byte";
		if(bank[i].datatype=="int16") ss<<"int16";
		if(bank[i].datatype=="uint16") ss<<"uint16";
		if(bank[i].datatype=="int32") ss<<"int32";
		if(bank[i].datatype=="uint32") ss<<"uint32";
		if(bank[i].datatype=="int64") ss<<"int64";
		if(bank[i].datatype=="uint64") ss<<"uint64";
		if(bank[i].datatype=="float32") ss<<"float";
		if(bank[i].datatype=="float64") ss<<"double";
		if(bank[i].datatype=="string") {
			ss.clear();
			ss.str("");
			ss<<s1<<bank[i].dataname<<"=(char*)"<<"transbank["<<i<<s3<<"string.data";
		}
		ss<<";\n";
		assignment[i]=ss.str();
	}
}


/**
 * @brief writeCodeInGateway
 * Writes the code built by function "makevalueAssignment" into the source code of Gateway "Gateway2UA_Object.cpp"3
 * writes other necessary code in Gateway, like NodeId of a object node in opc ua server
 * @param count2variable Shows the amount of variable
 * @param assignment An array of string that contains the code for the assignment process in Gateway
 * @param nodeid2write An String that will be write in file "Gateway2UA_Object.cpp"
 */
static void writeCodeInGateway(int count2variable,std::string assignment[],std::string nodeid2write){
	char file[]="Gateway2UA_Object.cpp";
	char file_vorlag[]="Gateway2UA_Object_vorlag.cpp";
	copyfile(file,file_vorlag);
	int linenum1;
	int linenum2;
	std::string position1="//<<Stelle zum Übertragungsprozess>>";
	std::string position2="// <<stellt: give NodeId >>";
	findtheline(file,&linenum1,position1);

	    for(int i=0;i<count2variable;i++){
	    	addContentInFile(file,linenum1++,"\n");
	    	addContentInFile(file,linenum1++,assignment[i]);
	    }
	findtheline(file,&linenum2,position2);
	addContentInFile(file,linenum2++,"\n");
	addContentInFile(file,linenum2++,nodeid2write);



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



int main(){
	std::string packagename="studienarbeit_gateway";/*packagename is studienarbeit_gateway*/
	DefinitionBank bank[100]; /*this structure can hold the definition of parameters in object*/
	int count2variable=0; /*record the amount of parameters in a OPC UA object*/
	std::string dir2workspace; /*this string hold the direction of ROS workspace*/
	std::cout<<"bitte Geben Sie den Pfad von workspace (Beispiel: /home/user/workspace)\n";
	std::cin>>dir2workspace;/*get direction of workspace*/
	std::string packagelocation; /*create a string to save the direction of package*/
	GetPackageLocation(packagename,&packagelocation);/*get the direction of package*/

    UA_Client *client = UA_Client_new(UA_ClientConfig_default); /*set OPC UA client*/
    UA_StatusCode retval = UA_Client_connect(client, "opc.tcp://localhost:4840");
    if(retval != UA_STATUSCODE_GOOD) {
        UA_Client_delete(client);
        return (int)retval;
    }

	browseObject(client);/*browse the OPC UA server and show the list of node in this server*/

	/*these variable are set to get the requirement of user*/
	UA_NodeId nodeidToRead;/*this NodeId will hold the NodeId given by user*/
	int tmpIdType; /*identifierType of Nodeid*/
	int tmpNamespace; /*namespace index of NodeId*/
	char tmpIdString[300];/*identifier of NodeId in string type*/
	int tmpNumeric;/*identifier of NodeId in number type*/


	/*process to define a nodeid in source code of Gateway*/
	std::stringstream givenodeid;/*this stringstream is used to treat string for making code*/
	givenodeid.clear();
	givenodeid.str("");
	std::string nodeid2write;/*this string hold thid code to assign the NodeId given by user into Gateway2UA_Object*/
	std::cout<<"bitte geben Sie das identifierType des NodeId\n (UA_NUMERIC=0;  UA_STRING=3;)\n";
	scanf("%d",&tmpIdType);/*get identifiertype of NodeId*/
	std::cout<<"bitte geben Sie das namepaceIndex\n";
	scanf("%d",&tmpNamespace);/*get namespace index of NodeId*/
	std::cout<<"bitte geben Sie das identifier\n";
	/*get identifier of NodeId and make the code for assignment process of this NodeId in Gateway2UA_Object*/
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
	nodeid2write=givenodeid.str();/*get the code for setting NodeId in Gateway*/

    UA_Variant value; /* Variants can hold scalar values and arrays of any type */
    UA_Variant_init(&value);/*initialization*/

    std::string s1;
    /* Browse the object node given by user */
    printf("Browsing nodes in objects folder:\n");
    UA_BrowseRequest bReq;
    UA_BrowseRequest_init(&bReq);
    bReq.requestedMaxReferencesPerNode = 0;
    bReq.nodesToBrowse = UA_BrowseDescription_new();
    bReq.nodesToBrowseSize = 1;
    bReq.nodesToBrowse[0].nodeId = nodeidToRead; /* browse objects folder */
    bReq.nodesToBrowse[0].resultMask = UA_BROWSERESULTMASK_ALL; /* return everything */
    UA_BrowseResponse bResp = UA_Client_Service_browse(client, bReq);
    for(size_t i = 0; i < bResp.resultsSize; ++i) {
        for(size_t j = 0; j < bResp.results[i].referencesSize; ++j) {
            UA_ReferenceDescription *ref = &(bResp.results[i].references[j]);
            s1=(char*)ref->browseName.name.data;
            if((ref->nodeId.nodeId.identifierType == UA_NODEIDTYPE_NUMERIC)&& (s1!="BaseObjectType") ){
                bank[count2variable].dataname=(char*)ref->displayName.text.data;/*take displayname as dataname*/
                bank[count2variable].nodeid=ref->nodeId.nodeId;/*get NodeId and save */
                count2variable++;

            } else if((ref->nodeId.nodeId.identifierType == UA_NODEIDTYPE_STRING)&& (s1!="BaseObjectType") ) {
                bank[count2variable].dataname=(char*)ref->displayName.text.data;/*take displayname as dataname*/
                bank[count2variable].nodeid=ref->nodeId.nodeId; /*get NodeId and save */
                count2variable++;
            }
            /* TODO: distinguish further types */
        }
    }

    makeMsgDefinition(client, bank, count2variable, packagelocation); // analyze the definition of message and set bank
    std::string assignment[100]; /*this array of string hold the code for the assignment process*/
    makevalueAssignment(bank,count2variable,assignment); /*make code for assignment process and save this code in array "assignment"*/

    writeCodeInGateway(count2variable,assignment,nodeid2write);/*copy the content of Gateway2UA_Object_vorlag.cpp into Gateway2UA_Object.cpp
    and write the code into Gateway2UA_Object.cpp*/

    UA_BrowseRequest_deleteMembers(&bReq);
    UA_BrowseResponse_deleteMembers(&bResp);


    /* Clean up */
    UA_Variant_deleteMembers(&value);
    UA_Client_delete(client); /* Disconnects the client internally */

	Kompilieren(dir2workspace,"catkin_make");/*compile ROS workspace*/
	return UA_STATUSCODE_GOOD;
}


