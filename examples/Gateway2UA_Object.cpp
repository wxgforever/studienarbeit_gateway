//**********
#include "ros/ros.h"
#include <sstream>
#include <iostream>
#include "studienarbeit_gateway/Gateway.h"
#include "stdio.h"
#include <string.h>
#include "open62541.h"
#include <stdlib.h>

#define Test_Zahl 6
using namespace std;

typedef struct _DefinitionBank {
	std::string dataname; //存储变量名
	std::string nodeidname;
	std::string type; //存储变量的定义类型
	int datalvl; //判断属于第几级的变量
	int isscalar; //判断是否属于是array还是scalar 等于1说明是scalar,0说明是array
	int isvariable;  //等于1是变量，等于0说明是结构体名字
	UA_NodeId nodeid;

} DefinitionBank;


typedef studienarbeit_gateway::Gateway datatype;
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


//***************************************************************************************队列--------------开始



//读取结构体变量的值，建立读取变量的函数
static UA_StatusCode ReadValueAttribute(UA_Client * client,UA_NodeId Node,UA_Variant * value){//读取Nodeid的内容，并赋值给value
	UA_StatusCode retval;

	if(Node.identifierType==UA_NODEIDTYPE_STRING){
		retval = UA_Client_readValueAttribute(client,UA_NODEID_STRING(Node.namespaceIndex,(char*)Node.identifier.string.data), value);
	}
	if(Node.identifierType==UA_NODEIDTYPE_NUMERIC){
		retval = UA_Client_readValueAttribute(client, UA_NODEID_NUMERIC(Node.namespaceIndex, Node.identifier.numeric),value);
	}
	if(Node.identifierType==UA_NODEIDTYPE_GUID){
		retval = UA_Client_readValueAttribute(client, UA_NODEID_GUID(Node.namespaceIndex, Node.identifier.guid),value);
	}
	return retval;
}

static UA_StatusCode GetValueAttribute_StringisNodeId(UA_Client * client, int namespaceIndex, char * nodeid, UA_Variant * value){
	UA_StatusCode retval;
	retval= UA_Client_readValueAttribute(client,UA_NODEID_STRING(namespaceIndex,nodeid), value);
	return retval;
}

static UA_StatusCode GetValueAttribute_NumberisNodeId(UA_Client * client, int namespaceIndex, char nodeid, UA_Variant * value){
	UA_StatusCode retval;
	retval= UA_Client_readValueAttribute(client, UA_NODEID_NUMERIC(namespaceIndex,nodeid),value);
	return retval;
}

static void takevalue(TransitionBank * transbank,UA_Variant * val){//只有函数ReadValueAttribute的返回值是1的时候，才会执行 这个函数


	if ( UA_Variant_isScalar(val)) {
		if (val->type == &UA_TYPES[UA_TYPES_BOOLEAN]){
			transbank->trans_boolean=*(UA_Boolean*)val->data;
		}

		if (val->type == &UA_TYPES[UA_TYPES_SBYTE]){
			transbank->trans_byte=*(UA_Byte*)val->data;
		}

		if (val->type == &UA_TYPES[UA_TYPES_BYTE]){
			transbank->trans_byte=*(UA_Byte*)val->data;
		}

		if (val->type == &UA_TYPES[UA_TYPES_INT16]){
			transbank->trans_int16=*(UA_Int16*)val->data;
		}

		if (val->type == &UA_TYPES[UA_TYPES_UINT16]){
			transbank->trans_uint16=*(UA_UInt16*)val->data;
		}

		if (val->type == &UA_TYPES[UA_TYPES_INT32]){
			transbank->trans_int32=*(UA_Int32*)val->data;
		}

		if (val->type == &UA_TYPES[UA_TYPES_UINT32]){
			transbank->trans_uint32=*(UA_UInt32*)val->data;
		}

		if (val->type == &UA_TYPES[UA_TYPES_INT64]){
			transbank->trans_int64=*(UA_Int64*)val->data;
		}

		if (val->type == &UA_TYPES[UA_TYPES_UINT64]){
			transbank->trans_uint64=*(UA_UInt64*)val->data;
		}

		if (val->type == &UA_TYPES[UA_TYPES_FLOAT]){
			transbank->trans_float=*(UA_Float*)val->data;
		}

		if(val->type == &UA_TYPES[UA_TYPES_DOUBLE]){
			transbank->trans_double=*(UA_Double*)val->data;
		}

		if(val->type == &UA_TYPES[UA_TYPES_STRING]){
			transbank->trans_string=*(UA_String*)val->data;
		}

		if(val->type == &UA_TYPES[UA_TYPES_DATETIME]){
			transbank->trans_datetime=*(UA_DateTime*)val->data;
		}

        /* TODO: distinguish further types */
	}
	else if(!UA_Variant_isScalar(val)){
        /* TODO: distinguish further types for array and matrix */
	}

}

static void putvalueintransbank(UA_Client * client,TransitionBank transbank[],int count2variable,DefinitionBank bank[],UA_Variant *val){

	for(int i=0;i<count2variable;i++){
		UA_Client_readValueAttribute(client,bank[i].nodeid,val);
		takevalue(&transbank[i],val);
	}
}

static std::string setstring(UA_Variant *val){
	UA_String ValueStr = *(UA_String*) val->data;
	std::string ss=(char*)ValueStr.data;
	return ss;
}

static UA_StatusCode readValueAttribute(UA_Client * client, UA_NodeId nodeId, UA_Variant * value){
	UA_StatusCode retval;
	retval= UA_Client_readValueAttribute(client, nodeId,value);


	return retval;
}

//********************************************************************************队列--------------------结束

int Client_run(datatype * msg,UA_NodeId nodeid){
	DefinitionBank bank[100];
	TransitionBank transbank[100];
	int count2variable=0;

    UA_Client *client = UA_Client_new(UA_ClientConfig_default);
    UA_StatusCode retval = UA_Client_connect(client, "opc.tcp://localhost:4840");
    if(retval != UA_STATUSCODE_GOOD) {
        UA_Client_delete(client);
        return (int)retval;
    }

    /* Read the value attribute of the node. UA_Client_readValueAttribute is a
     * wrapper for the raw read service available as UA_Client_Service_read. */
    UA_Variant value; /* Variants can hold scalar values and arrays of any type */
    UA_Variant_init(&value);


    std::string s1;
    /* Browse some objects */
    UA_BrowseRequest bReq;
    UA_BrowseRequest_init(&bReq);
    bReq.requestedMaxReferencesPerNode = 0;
    bReq.nodesToBrowse = UA_BrowseDescription_new();
    bReq.nodesToBrowseSize = 1;
    bReq.nodesToBrowse[0].nodeId = nodeid; /* browse objects folder */
    bReq.nodesToBrowse[0].resultMask = UA_BROWSERESULTMASK_ALL; /* return everything */
    UA_BrowseResponse bResp = UA_Client_Service_browse(client, bReq);

    for(size_t i = 0; i < bResp.resultsSize; ++i) {
        for(size_t j = 0; j < bResp.results[i].referencesSize; ++j) {
            UA_ReferenceDescription *ref = &(bResp.results[i].references[j]);
            s1=(char*)ref->browseName.name.data;
            if(s1!="BaseObjectType"){
                bank[count2variable].nodeid=ref->nodeId.nodeId;
                count2variable++;
            }
            /* TODO: distinguish further types */
        }
    }
	UA_Variant *val = UA_Variant_new();



	putvalueintransbank(client,transbank,count2variable,bank,val);


//<<Stelle zum Übertragungsprozess>>
msg->num=transbank[0].trans_int32;
msg->xachse=transbank[1].trans_double;
msg->yachse=transbank[2].trans_double;
msg->zachse=transbank[3].trans_double;
msg->zuobiaoxi=(char*)transbank[4].trans_string.data;










	UA_Variant_delete(val);



	/* Clean up */
	UA_Variant_deleteMembers(&value);
	UA_Client_delete(client); /* Disconnects the client internally */
	return UA_STATUSCODE_GOOD;
}

static UA_StatusCode getobjectname(UA_NodeId nodeid,std::string * objectname){
	DefinitionBank bank[100];
	TransitionBank transbank[100];
	int count2variable=0;

    UA_Client *client = UA_Client_new(UA_ClientConfig_default);
    UA_StatusCode retval = UA_Client_connect(client, "opc.tcp://localhost:4840");
    if(retval != UA_STATUSCODE_GOOD) {
        UA_Client_delete(client);
        return (int)retval;
    }
    UA_LocalizedText * outDisplayName;
    UA_LocalizedText_init(outDisplayName);
    UA_Client_readDisplayNameAttribute(client,nodeid,outDisplayName);
    * objectname=(char*)outDisplayName->text.data;

	/* Clean up */

	UA_Client_delete(client); /* Disconnects the client internally */
	return UA_STATUSCODE_GOOD;
}


int main(int argc, char **argv) {


	ros::init(argc, argv, "Gateway2UA_Object");
	ros::NodeHandle n;
	UA_NodeId nodeid=UA_NODEID_NUMERIC(0,50194);

	std::string objectname;
//	getobjectname(nodeid,&objectname);

	ros::Publisher chatter_pub = n.advertise<datatype>("object1", 1000);
	ros::Rate loop_rate(1);
	datatype m;

	while (ros::ok()) {

		Client_run(&m,nodeid);


		chatter_pub.publish(m);
		ros::spinOnce();

		loop_rate.sleep();

	}

	return 0;
}
