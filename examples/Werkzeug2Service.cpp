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



/*@brief DefinitionBank2Method is a structure that can store the definition of ROS Service through analyzing ros srv-message */
typedef struct _DefinitionBank2Method{
	std::string dataname;  /*name of a variable in srv-message*/
	std::string datatype;  /*type of a variable in srv-message*/
	UA_Int32 datalvl;	   /*datalvl describes the position of a variable*/
	UA_Int32 isscalar;		/* if a variable is scalar, isscalar=1, or isscalar =0*/
	UA_Int32 isvariable;	/* if a variable is variant, isvariable=1, if isvariable=0, this variable is a structure*/
	UA_Int32 isinput;		/* if a varaible is a input of a service, isinput=1; if this variable is a output, then isinput=0*/
	std::string argumentname;	/*argumentname will show the whole name of a variable,
	 	 	 	 	 	 	 	 	 if "res" is the name of structure,	"a" is a member of this structure,
	 	 	 	 	 	 	 	 	 then the argumentname is res.a         */

}DefinitionBank2Method;


/************************************************************************/
/*@brief	charToStr   conversion of datatype from "char" to "std::string"
	Input is data mit "char*" type

	return is data with "std::string" type, the content is same
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

/************************************************************************/
void modifyContentInFile(char *fileName,int lineNum,std::string content)
{
	/*@brief  modify the Content In File
	@param fileName, name of the file to modify;
	@param lineNum, number of the line in this file;
	@param content, the content that to cover a line in the file
	@retval no return
	*/
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
	/* @function addContentInFile: add conten into a file
	*@param fileName index1
	*@param lineNum  number of the line to add content
	*@content the content
	*@return no return
	*/
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

static void findtheline(char *fileName, int *lineNum, std::string content){
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
			idx=tmp[i].find("=",0);//判断是否有等号，如果有等号，说明是枚举类型成员，就不纳入变量名单
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




static void treatment2stringAssignment(std::string *ss){

	std::string s1;
	std::string left="UA_STRING((char*)";
	std::string right=".c_str())";
	s1.append(left);
	s1.append(*ss);
	s1.append(right);
	*ss=s1;
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

static void makeHeadFile(char * srvname,std::string * Head){
	*Head="";
	std::string begin="#include \"";
	std::string end=".h\"\n";

	*Head=*Head+begin;
	Head->append(srvname);
	Head->append(end);

}

static void addHeadFile(std::string Head){
	char * head=(char*)Head.c_str();
	char file2[]="/home/wxg/catkin_ws/src/studienarbeit_gateway/src/Gateway2Service.cpp";
	int line=22;
	addContentInFile(file2,line++,"\n");
	addContentInFile(file2,line,head);
	addContentInFile(file2,line++,"\n");
}

static void makeFirstLineofCallback(char * topicname,std::string * firstline){ //第一行，外加定义一个identifier

	*firstline="";
	*firstline=topicname;
	int offindex = firstline->find_first_of("/",0);

	firstline->replace(offindex,1,"::");

}



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

static void makeSrvInCallback(std::string srvname,std::string * srvsetting){
	//     studienarbeit_gateway::Gateway2Method srv;

	std::string s1=" srv;\n";
	int offindex = srvname.find_first_of("/",0);

	srvname.replace(offindex,1,"::");
	srvsetting->append(srvname);
	srvsetting->append(s1);
}

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

static void makeOutputAssignment(DefinitionBank2Method *outputargumentbank,int count2output,
		std::string Outputassignment[]){

	//        UA_Variant_setScalarCopy(&output[0], &srv.response.sum, &UA_TYPES[UA_TYPES_INT32]);
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

static void copyfile(char * file2,char * file1){//copy 1 and paste on 2
	FILE * fp1=fopen(file1,"r");
	FILE * fp2=fopen(file2,"w");

	char ch;
	while( (ch=fgetc(fp1) )!= EOF )
	    fputc(ch,fp2);
	fclose(fp1);
	fclose(fp2);

}

static void makeContent2Callback(int count2input,std::string inputassignment[],std::string AssignmentfromInput2ROSRequest[],
		int count2output,std::string outputassignment[],std::string AssignmentfromROSResponse2Output[],std::string clientsetting,std::string srvsetting){
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

	UA_Int32 count2request=0,count2response=0;
	std::string dir2workspace="/home/wxg/catkin_ws";

	char servicename[300]="Gateway2";
	char srvname[300];
	char srvtype[10240];
	std::string tmp[100];
	std::string request[50];
	std::string response[50];
	DefinitionBank2Method bank[100];// Wenn 100 nicht ausreichend ist, kann es noch größer eingestelllt werden.
	DefinitionBank2Method inputargumentbank[50];//Nur einzelne Variablen
	DefinitionBank2Method outputargumentbank[50];//Nur einzelne Variablen
	std::string inputassignment[50];
	UA_Int32 count2input=0,count2output=0;

	std::cout<<"bitte geben Sie den Name der Service zum Aufrufen"<<"\n";
//	std::cin>>servicename;
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

	//Bis Jetzt sind alle Input und Output sortiert.

	std::cout<<"*******************************************************************\n";
	std::cout<<"datatype     "<<"dataname        "<<"datalvl     "<<"\n";
	for(UA_Int32 i=0;i<count2input;i++){
		std::cout<<inputargumentbank[i].datatype<<"              "<<inputargumentbank[i].dataname<<"             "<< inputargumentbank[i].datalvl<<"\n";
	}
	for(UA_Int32 i=0;i<count2output;i++){
		std::cout<<outputargumentbank[i].datatype<<"              "<<outputargumentbank[i].dataname<<"             "<< outputargumentbank[i].datalvl<<"\n";
	}
	makeInputAssignment(inputargumentbank,count2input,inputassignment);
	for(int i=0;i<count2input;i++){
	std::cout<<inputassignment[i];

	}

	std::string clientsetting;
	std::string srvsetting;
	std::string AssignmentfromInput2ROSRequest[50];
	std::string AssignmentfromROSResponse2Output[50];
	std::string outputassignment[50];
	std::string Head;
	makeHeadFile(srvname,&Head);
	makeClientSettingInCallback(srvname,servicename,&clientsetting);
	makeSrvInCallback(srvname,&srvsetting);
	makeInputAssignment(inputargumentbank,count2input,inputassignment);
	makeAssignmentfromInput2ROSResquest(inputargumentbank,count2input,AssignmentfromInput2ROSRequest);
	makeAssignmentfromROSResponse2Output(outputargumentbank,count2output,AssignmentfromROSResponse2Output);
	makeOutputAssignment(outputargumentbank,count2output,outputassignment);

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


	makeContent2Callback(count2input,inputassignment,AssignmentfromInput2ROSRequest,
			count2output,outputassignment,AssignmentfromROSResponse2Output,clientsetting,srvsetting);
	addHeadFile(Head);

	giveservicename(servicename);
	Kompilieren(dir2workspace,"catkin_make");

	makeargumentname(inputargumentbank,count2input);
	makeargumentname(outputargumentbank,count2output);




	return 0;
}
