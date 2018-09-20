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
	UA_NodeId nodeid;

} DefinitionBank;



typedef struct __NodeIdbank {
	std::string namespaceindex;
	std::string nodeidname;
	std::string type;
	UA_NodeId tmpnodeid;

}NodeIdbank;




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

static void findtheline2writecallback(char *fileName, int *lineNum, std::string content){
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
		Dir[j] = '\0';	//将popen返回值的换行符去掉
	}
	pclose(fp);
	*result=Dir;

}

static void GetPackageLocation(std::string packagename, std::string * packagelocation){
	std::string s1="rospack find ";
	s1=s1+packagename;
	GetCommandResult(s1,1,packagelocation);
}

static void GetVariantType(std::string * type,UA_Variant * val){//只有函数ReadValueAttribute的返回值是1的时候，才会执行 这个函数


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


static void GetDatatype(UA_Client *client, DefinitionBank bank[],int count2variable){
	UA_Variant * val;
	UA_StatusCode retvel;
	for(int i=0;i<count2variable;i++){
		retvel=UA_Client_readValueAttribute(client,bank[i].nodeid,val);
		GetVariantType(&bank[i].datatype,val);
	}
}


static std::string setstring(UA_Variant *val){
	UA_String ValueStr = *(UA_String*) val->data;
	std::string ss=(char*)ValueStr.data;
	return ss;
}



static void browse(UA_Client * client){

}

static void makeMsgDef(DefinitionBank bank[],int count2variable,std::string datadef[]){
	for(int i=0;i<count2variable;i++){
		datadef[i]=bank[i].datatype;
		datadef[i].append(" ");
		datadef[i].append(bank[i].dataname);
		datadef[i].append("\n");
	}
}

static void defMsg(UA_Client * client, DefinitionBank bank[], int count2variable, std::string packagelocation){
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
    makeMsgDef(bank,count2variable,msgdef);

    copyfile(filename,vorlagname);

    int linenum=2;
	addContentInFile(filename,linenum++,"\n");
    for(int i=0;i<count2variable;i++){
    	std::cout<<msgdef[i]<<"\n";
    	addContentInFile(filename,linenum++,msgdef[i]);
    }
}

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

static void putAssignmentinGateway(int count2variable,std::string assignment[]){
	char file[]="Gateway2UA_Object.cpp";
	char file_vorlag[]="Gateway2UA_Object_vorlag.cpp";
	copyfile(file,file_vorlag);
	int linenum;
	std::string position="//<<Stelle zum Übertragungsprozess>>";
	findtheline2writecallback(file,&linenum,position);

	    for(int i=0;i<count2variable;i++){
	    	addContentInFile(file,linenum++,"\n");
	    	addContentInFile(file,linenum,assignment[i]);
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



int main(){
	std::string packagename="studienarbeit_gateway";
	DefinitionBank bank[100];
	int count2variable=0;
	std::string dir2workspace="/home/wxg/catkin_ws";
	std::string packagelocation;
	GetPackageLocation(packagename,&packagelocation);

    UA_Client *client = UA_Client_new(UA_ClientConfig_default);
    UA_StatusCode retval = UA_Client_connect(client, "opc.tcp://localhost:4840");
    if(retval != UA_STATUSCODE_GOOD) {
        UA_Client_delete(client);
        return (int)retval;
    }


    UA_Variant value; /* Variants can hold scalar values and arrays of any type */
    UA_Variant_init(&value);

    std::string s1;
    /* Browse some objects */
    printf("Browsing nodes in objects folder:\n");
    UA_BrowseRequest bReq;
    UA_BrowseRequest_init(&bReq);
    bReq.requestedMaxReferencesPerNode = 0;
    bReq.nodesToBrowse = UA_BrowseDescription_new();
    bReq.nodesToBrowseSize = 1;
    bReq.nodesToBrowse[0].nodeId = UA_NODEID_NUMERIC(0,50194); /* browse objects folder */
    bReq.nodesToBrowse[0].resultMask = UA_BROWSERESULTMASK_ALL; /* return everything */
    UA_BrowseResponse bResp = UA_Client_Service_browse(client, bReq);
    printf("%-9s %-16s %-16s %-16s\n", "NAMESPACE", "NODEID", "BROWSE NAME", "DISPLAY NAME");
    for(size_t i = 0; i < bResp.resultsSize; ++i) {
        for(size_t j = 0; j < bResp.results[i].referencesSize; ++j) {
            UA_ReferenceDescription *ref = &(bResp.results[i].references[j]);
            s1=(char*)ref->browseName.name.data;
            if((ref->nodeId.nodeId.identifierType == UA_NODEIDTYPE_NUMERIC)&& (s1!="BaseObjectType") ){
                printf("%-9d %-16d %-16.*s %-16.*s\n", ref->nodeId.nodeId.namespaceIndex,
                       ref->nodeId.nodeId.identifier.numeric, (int)ref->browseName.name.length,
                       ref->browseName.name.data, (int)ref->displayName.text.length,
                       ref->displayName.text.data);
                bank[count2variable].dataname=(char*)ref->displayName.text.data;
                bank[count2variable].nodeid=ref->nodeId.nodeId;
                count2variable++;

            } else if((ref->nodeId.nodeId.identifierType == UA_NODEIDTYPE_STRING)&& (s1!="BaseObjectType") ) {
                printf("%-9d %-16.*s %-16.*s %-16.*s\n", ref->nodeId.nodeId.namespaceIndex,
                       (int)ref->nodeId.nodeId.identifier.string.length,
                       ref->nodeId.nodeId.identifier.string.data,
                       (int)ref->browseName.name.length, ref->browseName.name.data,
                       (int)ref->displayName.text.length, ref->displayName.text.data);
                bank[count2variable].dataname=(char*)ref->displayName.text.data;
                bank[count2variable].nodeid=ref->nodeId.nodeId;
                count2variable++;
            }
            /* TODO: distinguish further types */
        }
    }

    defMsg(client, bank, count2variable, packagelocation); // make definition of message
    std::string assignment[100];
    makevalueAssignment(bank,count2variable,assignment);
    putAssignmentinGateway(count2variable,assignment);


	UA_Variant *val = UA_Variant_new();


    UA_BrowseRequest_deleteMembers(&bReq);
    UA_BrowseResponse_deleteMembers(&bResp);


    /* Clean up */
    UA_Variant_deleteMembers(&value);
    UA_Client_delete(client); /* Disconnects the client internally */

	Kompilieren(dir2workspace,"catkin_make");
	return UA_STATUSCODE_GOOD;
}


