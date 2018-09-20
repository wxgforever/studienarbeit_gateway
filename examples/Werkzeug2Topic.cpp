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





#define Test_Zahl 100






UA_Boolean running = true;


//****************************************************************Part 3 功能函数部分  开始



/* Build Instructions (Linux)
 * - gcc -std=c99 -c open62541.c
 * - g++ server.cpp open62541.o -o server */

typedef struct _DefinitionBank2Topic {
	std::string dataname; //存储变量名
	std::string datatype; //存储变量的定义类型
	std::string nodeidname;
	int datalvl; //判断属于第几级的变量
	int isscalar; //判断是否属于是array还是scalar 等于1说明是scalar,0说明是array
	int isvariable;  //等于1是变量，等于0说明是结构体名字

} DefinitionBank2Topic;

DefinitionBank2Topic bank[100];
DefinitionBank2Topic Variantbank[100];

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

typedef union _ROS_Identifer {

} ROS_Identifer;

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

static void GetPackageLocation(std::string packagename, std::string * packagelocation, std::string * workspace){
	std::string s1="rospack find ";
	s1=s1+packagename;
	GetCommandResult(s1,1,packagelocation);
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
		count++;
		}
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

static void makeHeadFile(char * msgname,std::string * Head){
	*Head="";
	std::string begin="#include \"";
	std::string end=".h\"\n";

	*Head=*Head+begin;
	Head->append(msgname);
	Head->append(end);

}

static void addHeadFile(std::string Head){
	char * head=(char*)Head.c_str();
	char file2[]="/home/wxg/catkin_ws/src/studienarbeit_gateway/src/Gateway2topic.cpp";
	int line=22;
	addContentInFile(file2,line++,"\n");
	addContentInFile(file2,line,head);
	addContentInFile(file2,line++,"\n");
}

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

static void makeStringAssignment(std::string AssignmentLeftPart[],std::string AssignmentRightPart[],std::string Assignment[],int count2variant){
	for(int i=0;i<count2variant;i++){
		Assignment[i].append(AssignmentLeftPart[i]);
		Assignment[i].append(AssignmentRightPart[i]);
	}
}

static void makeStringSetScalar(DefinitionBank2Topic variantbank[],int count2Variant,std::string setscalar[]){
	//该函数用来制作 setscalar字符串
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

static void copyfile(char * file2,char * file1){//copy 1 and paste on 2
	FILE * fp1=fopen(file1,"r");
	FILE * fp2=fopen(file2,"w");

	char ch;
	while( (ch=fgetc(fp1) )!= EOF )
	    fputc(ch,fp2);
	fclose(fp1);
	fclose(fp2);

}

static void makeContent2Callback(DefinitionBank2Topic * variantbank,int count2variant,std::string Assignment[],
		std::string setscalar[],std::string writevariable[],std::string firstline){
	char file2[]="/home/wxg/catkin_ws/src/studienarbeit_gateway/src/Gateway2topic.cpp";
	char file1[]="/home/wxg/catkin_ws/src/studienarbeit_gateway/src/Gateway2topic_vorlag.cpp";
	copyfile(file2,file1);
	std::string var_give="UA_Variant myVar;\n";
	std::string var_init="UA_Variant_init(&myVar);\n";
	//std::cout<<var_give;
	int line;
	std::string position2callback="//Schreiben Sie bitte die CallbackFunktion!";

	char filename[]="/home/wxg/catkin_ws/src/studienarbeit_gateway/src/Gateway2topic.cpp";
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



static void givetopicname(char topicname[]){
	//    strcpy(topic,"chatter");

	std::string pos1="// <<position to give topicname>>";
	std::string s1=charToStr(topicname);
	std::string s2;//code to write
	char file[]="Gateway2topic.cpp";
	int line=0;
	findtheline(file,&line,pos1);
	std::stringstream ss;
	ss.clear(); ss.str("");
	ss<<"strcpy(topic,\""<<s1<<"\");\n";
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





int main() {

	UA_Int32 count2message=0;
	char topicname[300]="chatter";
	//std::cout<<"bitte geben Sie Ihre Topic"<<std::endl;
	//scanf("%s",topicname);
	std::string packagename="studienarbeit_gateway";
	std::string packagelocation;
	std::string dir2workspace="/home/wxg/catkin_ws";




	char msgname[300];
	char msgtype[10240];
	std::string tmp[100];
	std::string message[50];
	std::string Head;
	std::string firstline;
	std::string AssignmentLeftPart[30];
	std::string AssignmentRightPart[30];//存储了右侧的内容  msg->dim.label;
	std::string Assignment[30];
	std::string writevariable[30];
	std::string setscalar[30];
	int count2variant=0;

	DefinitionBank2Topic bank[100];// Wenn 100 nicht ausreichend ist, kann es noch größer eingestelllt werden.
	DefinitionBank2Topic variantbank[100];// zum Speichern der Variant  仅保存变量的信息，排除结构体名字

	GetMsgfromTopic(topicname,msgname);
	GetMsgDefbyMsgname(msgname,msgtype);
	GetMsgDef(msgname,message,&count2message);
	GetDefinitionBank2Topic(message,count2message,bank);
	GetNodeIdNameInBank(bank,count2message);

#if 0
	for (int i = 0; i < count2message; i++) {

		std::cout << "变量的名字是：" << bank[i].dataname << "\n";
		std::cout << "变量的类型是:" << bank[i].datatype << "\n";
		std::cout << "变量的等级是:" << bank[i].datalvl << "\n";
		std::cout << "变量是scalar吗:" << bank[i].isscalar << "\n";
		std::cout << "变量是variable吗" << bank[i].isvariable << "\n";

	}
#endif

	makeHeadFile(msgname,&Head);
	std::cout<<"头文件行内容是:"<<Head <<std::endl;
	makeFirstLineofCallback(msgname,&firstline);
	std::cout<<"Die erste Zelle in der Callbackfunktion:\n"<<firstline;

	makeStringAssignmentRightPart(bank,count2message,AssignmentRightPart,&count2variant);
	std::cout<<count2variant<<std::endl;
	for(int i=0;i<count2variant;i++){
		std::cout<<AssignmentRightPart[i]<<std::endl;
	}

	makeVariantBank2Topic(bank,count2message,variantbank);
	makeStringAssignmentLeftPart(variantbank,count2variant,AssignmentLeftPart);
	makeStringAssignment(AssignmentLeftPart,AssignmentRightPart,Assignment,count2variant);
	makeStringSetScalar(variantbank,count2variant,setscalar);
	makeStringWriteVariable(variantbank,count2variant,writevariable);

	makeContent2Callback(variantbank,count2variant,Assignment,setscalar,writevariable,firstline);
	addHeadFile(Head);
	givetopicname(topicname);
	Kompilieren(dir2workspace,"catkin_make");


	return 0;
}






