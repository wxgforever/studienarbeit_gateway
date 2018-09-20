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

typedef struct _DefinitionBank {
	std::string dataname; //存储变量名
	std::string nodeidname;
	std::string datatype; //存储变量的定义类型
	int datalvl; //判断属于第几级的变量
	int isscalar; //判断是否属于是array还是scalar 等于1说明是scalar,0说明是array
	int isvariable;  //等于1是变量，等于0说明是结构体名字
	UA_ReferenceDescription ref;

} DefinitionBank;

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

/*
 * Die Methode unten dienen als die Bearbeitungsprozess zur Erstellung der "string" und zur Einschreiben des Codes
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
/* char*tostr  字符串转化str类型
 输入：char * 字符串地址
 无输出
 返回值： str类型的字符串
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
/* 修改文件某行内容
 输入：文件名 fileName   行号   lineNum ,修改的内容 content
 输出：文件名 fileName
 无返回值
 tip：1,lineNum从第一行开始 2.content需要加上换行符
 */
/************************************************************************/
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

static void GetPackageLocation(std::string packagename,
		std::string * packagelocation) {
	std::string s1 = "rospack find ";
	s1 = s1 + packagename;
	GetCommandResult(s1, 1, packagelocation);
}


typedef struct _TransBankToMethod {
	UA_Int32 count2input;
	TransitionBank input[100];
	UA_Int32 count2output;
	TransitionBank output[100];
} TransBankToMethod;

typedef struct _ArgumentBank {
	UA_Argument inputargument[100];
	UA_Int32 count2inputargument;
	UA_Argument outputargument[100];
	UA_Int32 count2outputargument;
} ArgumentBank;

static void setValueInVariant(UA_Variant * val, UA_Argument argument,
		TransitionBank transbank) {

	/*const UA_DataType* tsss = UA_findDataType(&sss);
	 *UA_Variant_setScalarCopy(&input[0], &transbank2method.input[0].trans_int32, &UA_TYPES[UA_TYPES_INT32]);
	 */
	const UA_DataType* dataType;
	dataType == UA_findDataType(&argument.dataType);
	if (dataType == (&UA_TYPES[UA_TYPES_BOOLEAN]))
		;
	UA_Variant_setScalarCopy(val, &transbank.trans_boolean, dataType);
	if (dataType == (&UA_TYPES[UA_TYPES_SBYTE]))
		;
	UA_Variant_setScalarCopy(val, &transbank.trans_sbyte, dataType);
	if (dataType == (&UA_TYPES[UA_TYPES_BYTE]))
		;
	UA_Variant_setScalarCopy(val, &transbank.trans_byte, dataType);
	if (dataType == (&UA_TYPES[UA_TYPES_INT16]))
		;
	UA_Variant_setScalarCopy(val, &transbank.trans_int16, dataType);
	if (dataType == (&UA_TYPES[UA_TYPES_UINT16]))
		;
	UA_Variant_setScalarCopy(val, &transbank.trans_uint16, dataType);
	if (dataType == (&UA_TYPES[UA_TYPES_INT32]))
		;
	UA_Variant_setScalarCopy(val, &transbank.trans_int32, dataType);
	if (dataType == (&UA_TYPES[UA_TYPES_UINT32]))
		;
	UA_Variant_setScalarCopy(val, &transbank.trans_uint32, dataType);
	if (dataType == (&UA_TYPES[UA_TYPES_INT64]))
		;
	UA_Variant_setScalarCopy(val, &transbank.trans_int64, dataType);
	if (dataType == (&UA_TYPES[UA_TYPES_UINT64]))
		;
	UA_Variant_setScalarCopy(val, &transbank.trans_uint64, dataType);
	if (dataType == (&UA_TYPES[UA_TYPES_FLOAT]))
		;
	UA_Variant_setScalarCopy(val, &transbank.trans_float, dataType);
	if (dataType == (&UA_TYPES[UA_TYPES_DOUBLE]))
		;
	UA_Variant_setScalarCopy(val, &transbank.trans_double, dataType);
	if (dataType == (&UA_TYPES[UA_TYPES_STRING]))
		;
	UA_Variant_setScalarCopy(val, &transbank.trans_string, dataType);
	if (dataType == (&UA_TYPES[UA_TYPES_DATETIME]))
		;
	UA_Variant_setScalarCopy(val, &transbank.trans_datetime, dataType);

}

static void takevaluefromtransbank(UA_Variant input[],
		TransBankToMethod transbank2method, ArgumentBank argumentbank) {
	for (int i = 0; i < transbank2method.count2input; i++) {
		setValueInVariant(&input[i], argumentbank.inputargument[i],
				transbank2method.input[i]);
	}
}

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
	printf("%-9s %-16s %-16s %-16s %16s\n", "NAMESPACE", "NODEID",
			"BROWSE NAME", "DISPLAY NAME", "NODECLASS");
	for (size_t i = 0; i < bResp.resultsSize; ++i) {
		for (size_t j = 0; j < bResp.results[i].referencesSize; ++j) {
			/*i ist 0; j ist 0~5*/
			UA_ReferenceDescription *ref = &(bResp.results[i].references[j]);
			if (ref->nodeId.nodeId.identifierType == UA_NODEIDTYPE_NUMERIC) {
				printf("%-9d %-16d %-16.*s %-16.*s %12d\n",
						ref->nodeId.nodeId.namespaceIndex,
						ref->nodeId.nodeId.identifier.numeric,
						(int) ref->browseName.name.length,
						ref->browseName.name.data,
						(int) ref->displayName.text.length,
						ref->displayName.text.data, ref->nodeClass);
				bank[count].ref = bResp.results[i].references[j];
				count++;
				//          printf("i is %-16d j is %-16d\n",i,j);

			} else if (ref->nodeId.nodeId.identifierType
					== UA_NODEIDTYPE_STRING) {
				printf("%-9d %-16.*s %-16.*s %-16.*s %12d\n",
						ref->nodeId.nodeId.namespaceIndex,
						(int) ref->nodeId.nodeId.identifier.string.length,
						ref->nodeId.nodeId.identifier.string.data,
						(int) ref->browseName.name.length,
						ref->browseName.name.data,
						(int) ref->displayName.text.length,
						ref->displayName.text.data, ref->nodeClass);
				bank[count].ref = bResp.results[i].references[j];
				count++;
				//        printf("i is %-16d j is %-16d\n",i,j);
			}
			/* TODO: distinguish further types */
		}
	}
	*count2nodeinobject = count;

}

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
	printf("%-9s %-16s %-16s %-16s %16s\n", "NAMESPACE", "NODEID",
			"BROWSE NAME", "DISPLAY NAME", "NODECLASS");
	for (size_t i = 0; i < bResp.resultsSize; ++i) {
		for (size_t j = 0; j < bResp.results[i].referencesSize; ++j) {
			/*i ist 0; j ist 0~5*/
			UA_ReferenceDescription *ref = &(bResp.results[i].references[j]);
			if (ref->nodeId.nodeId.identifierType == UA_NODEIDTYPE_NUMERIC) {
				printf("%-9d %-16d %-16.*s %-16.*s %12d\n",
						ref->nodeId.nodeId.namespaceIndex,
						ref->nodeId.nodeId.identifier.numeric,
						(int) ref->browseName.name.length,
						ref->browseName.name.data,
						(int) ref->displayName.text.length,
						ref->displayName.text.data, ref->nodeClass);
				argumentnodeid[count] = ref->nodeId.nodeId;
				count++;

			} else if (ref->nodeId.nodeId.identifierType
					== UA_NODEIDTYPE_STRING) {
				printf("%-9d %-16.*s %-16.*s %-16.*s %12d\n",
						ref->nodeId.nodeId.namespaceIndex,
						(int) ref->nodeId.nodeId.identifier.string.length,
						ref->nodeId.nodeId.identifier.string.data,
						(int) ref->browseName.name.length,
						ref->browseName.name.data,
						(int) ref->displayName.text.length,
						ref->displayName.text.data, ref->nodeClass);
				argumentnodeid[count] = ref->nodeId.nodeId;
				count++;
			}
			/* TODO: distinguish further types */
		}
	}

}

static void readArgument(UA_Client * client, UA_NodeId argumentnodeid,
		UA_Int32 * count2argument, UA_Argument argument[],UA_Variant *val) {

	UA_StatusCode retval = UA_Client_readValueAttribute(client, argumentnodeid,
			val);
	*count2argument = (int) val->arrayLength;

	if (retval == UA_STATUSCODE_GOOD
			&& val->type == &UA_TYPES[UA_TYPES_EXTENSIONOBJECT]) {
		/*
		 printf("input arrayDimensionsSize is %d:\n",val->arrayDimensionsSize); //arrayDimensionsSize von Inputargument
		 printf("input arraylength is %d\n",val->arrayLength); // arraylength shows the amount of the arguments of input/output
		 printf("argument type is:%s\n",val->type->typeName); // the name of the type of val.data
		 printf("argument type is:%d\n",val->type->typeIndex);// the type of the val.data ist a ExtensionObject.
		 */
		UA_ExtensionObject * value;
		value = (UA_ExtensionObject *) val->data;

		for (int i = 0; i < (int) val->arrayLength; i++) {
			argument[i] = *(UA_Argument *) value[i].content.decoded.data;
			printf("这真的是argument0吗:%s\n", argument[i].name.data);
			printf("这个inputargument0的类型是:%d\n",
					argument[i].dataType.identifier.numeric);
		}

		/* argumentnodeid[0] is NodeId of inputarguments
		 * argumentnodeid[1] is NodeId of outputarguments
		 */

	}


}

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

//	UA_Variant_delete(val); this problem should be solved


}

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

static void makeDefinitionOfService(ArgumentBank argumentbank,
		std::string request[], std::string response[]) {
	for (int i = 0; i < argumentbank.count2inputargument; i++) {
		getSrvDefinition(argumentbank.inputargument[i], &request[i]);
	}
	for (int i = 0; i < argumentbank.count2outputargument; i++) {
		getSrvDefinition(argumentbank.outputargument[i], &response[i]);
	}

}

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

static void makeOutputAssignment(ArgumentBank argumentbank,std::string outputassignment[]){
	//    transbank.trans_int32=*(UA_Int32*)output[0].data;
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


static void makeCallback(ArgumentBank argumentbank,std::string assignmentfromROSRequestToInput[],	std::string inputassignment[],
		std::string outputassignment[],std::string assignmentfromOutputToROSResponse[]){
	char file2[]="Gateway2UA_Method.cpp";
	char file1[]="Gateway2UA_Method_vorlag.cpp";
	copyfile(file2,file1);
	char filename[]="Gateway2UA_Method.cpp";
	int linenum1;
	int linenum2;
	std::string position1="// <<Stelle: OPC UA Input To ROS Resquest>>";
	std::string position2="// <<Stelle: ROS Response To OPC UA Output>>";

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
}


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

	std::string packagename="studienarbeit_gateway";
	std::string dir2workspace="/home/wxg/catkin_ws";
	std::string packagelocation;
	GetPackageLocation(packagename,&packagelocation);


	UA_Client *client = UA_Client_new(UA_ClientConfig_default);
	UA_StatusCode retval = UA_Client_connect(client,
			"opc.tcp://localhost:4840");
	if (retval != UA_STATUSCODE_GOOD) {
		UA_Client_delete(client);
		return (int) retval;
	}

	DefinitionBank bank[100];
	int count2nodeinobject;
	UA_BrowseRequest bReq;
	UA_BrowseRequest_init(&bReq);
	UA_BrowseResponse bResp;
	UA_Variant *val = UA_Variant_new();

	browseObject(client, bReq, bResp, bank, &count2nodeinobject);
	ArgumentBank argumentbank;
	GetArgument(client, UA_NODEID_NUMERIC(0, 50188),&argumentbank); //已经获得了输入和输出的个数以及定义

	/*
	 * Through the Method "GetArgument"  the definition of the inputargument and ouputargument is stored in inputargument[100]
	 * and outputargument[100].
	 * count2inputargument and count2outputargument show the amount of the argument in input and output
	 */
	std::string request[50]; // definition of request in a srv-file;
	std::string response[50];// definition of response in a srv-file;
	/*
	 * request[50] and response[50] will be write into a srv-file;
	 */
	makeDefinitionOfService(argumentbank,request,response);

	for(int i=0;i<argumentbank.count2inputargument;i++){
		std::cout<<request[i];
	}
	for(int i=0;i<argumentbank.count2outputargument;i++){
		std::cout<<response[i];
	}

	putDefinitionInSrvFile(argumentbank,request,response,packagelocation);
	std::string assignmentfromROSRequestToInput[50];
	std::string inputassignment[50];
	std::string outputassignment[50];
	std::string assignmentfromOutputToROSResponse[50];
	makeAssignmentfromROSRequestToInput(argumentbank,assignmentfromROSRequestToInput);
	makeInputAssignment(argumentbank,inputassignment);
	makeOutputAssignment(argumentbank,outputassignment);
	makeAssignmentfromOutputToROSResponse(argumentbank,assignmentfromOutputToROSResponse);
	makeCallback(argumentbank,assignmentfromROSRequestToInput,inputassignment,
			outputassignment,assignmentfromOutputToROSResponse);

	printf("\nReading the value of argument:\n");

	retval = UA_Client_readValueAttribute(client, UA_NODEID_NUMERIC(0, 50192),
			val); // InputArgument lesen
	if (retval == UA_STATUSCODE_GOOD) {
		printf("input arrayDimensionsSize is %d:\n",
				(int) val->arrayDimensionsSize); //arrayDimensionsSize von Inputargument
		printf("input arraylength is %d\n", (int) val->arrayLength); // arrayLength von Inputargument
		printf("inputargument type is:%d\n",
				val->type->typeId.identifier.numeric);
		printf("inputargument type is:%d\n", val->type->typeId.identifierType);
		printf("inputargument type is:%s\n", val->type->typeName);
		printf("inputargument type is:%d\n", val->type->typeIndex); //这个东西表明了数据的类型

	}

	Kompilieren(dir2workspace,"catkin_make");

	UA_Variant_delete(val);

	UA_BrowseRequest_deleteMembers(&bReq);
	UA_BrowseResponse_deleteMembers(&bResp);
	/* Clean up */

	UA_Client_delete(client); /* Disconnects the client internally */
	return UA_STATUSCODE_GOOD;
}

