#include <stdio.h>
#include "studienarbeit_gateway/Gateway2Method.h"
#include "studienarbeit_gateway/test2Method.h"
#include "studienarbeit_gateway/Method1.h"
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


typedef struct _DefinitionBank {
	std::string dataname; //存储变量名
	std::string nodeidname;
	std::string datatype; //存储变量的定义类型
	int datalvl; //判断属于第几级的变量
	int isscalar; //判断是否属于是array还是scalar 等于1说明是scalar,0说明是array
	int isvariable;  //等于1是变量，等于0说明是结构体名字
	UA_ReferenceDescription ref;

} DefinitionBank;

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


typedef struct _TransBankToMethod{
	UA_Int32 count2input;
	TransitionBank input[100];
	UA_Int32 count2output;
	TransitionBank output[100];
}TransBankToMethod;

typedef struct _ArgumentBank{
	UA_Argument inputargument[100];
	UA_Int32 count2inputargument;
	UA_Argument outputargument[100];
	UA_Int32 count2outputargument;
}ArgumentBank;


static void setValueInVariant(UA_Variant * val,UA_Argument argument,TransitionBank transbank){

	/*const UA_DataType* tsss = UA_findDataType(&sss);
	 *UA_Variant_setScalarCopy(&input[0], &transbank2method.input[0].trans_int32, &UA_TYPES[UA_TYPES_INT32]);
	 */
	const UA_DataType* dataType;
	dataType==  UA_findDataType(&argument.dataType);
	if(dataType==(&UA_TYPES[UA_TYPES_BOOLEAN]));	UA_Variant_setScalarCopy(val, &transbank.trans_boolean, dataType);
	if(dataType==(&UA_TYPES[UA_TYPES_SBYTE]));	UA_Variant_setScalarCopy(val, &transbank.trans_sbyte, dataType);
	if(dataType==(&UA_TYPES[UA_TYPES_BYTE]));	UA_Variant_setScalarCopy(val, &transbank.trans_byte, dataType);
	if(dataType==(&UA_TYPES[UA_TYPES_INT16]));	UA_Variant_setScalarCopy(val, &transbank.trans_int16, dataType);
	if(dataType==(&UA_TYPES[UA_TYPES_UINT16]));	UA_Variant_setScalarCopy(val, &transbank.trans_uint16, dataType);
	if(dataType==(&UA_TYPES[UA_TYPES_INT32]));	UA_Variant_setScalarCopy(val, &transbank.trans_int32, dataType);
	if(dataType==(&UA_TYPES[UA_TYPES_UINT32]));	UA_Variant_setScalarCopy(val, &transbank.trans_uint32, dataType);
	if(dataType==(&UA_TYPES[UA_TYPES_INT64]));	UA_Variant_setScalarCopy(val, &transbank.trans_int64, dataType);
	if(dataType==(&UA_TYPES[UA_TYPES_UINT64]));	UA_Variant_setScalarCopy(val, &transbank.trans_uint64, dataType);
	if(dataType==(&UA_TYPES[UA_TYPES_FLOAT]));	UA_Variant_setScalarCopy(val, &transbank.trans_float, dataType);
	if(dataType==(&UA_TYPES[UA_TYPES_DOUBLE]));	UA_Variant_setScalarCopy(val, &transbank.trans_double, dataType);
	if(dataType==(&UA_TYPES[UA_TYPES_STRING]));	UA_Variant_setScalarCopy(val, &transbank.trans_string, dataType);
	if(dataType==(&UA_TYPES[UA_TYPES_DATETIME]));	UA_Variant_setScalarCopy(val, &transbank.trans_datetime, dataType);

}

static void takevaluefromtransbank(UA_Variant input[],TransBankToMethod transbank2method,ArgumentBank argumentbank){
	for(int i=0;i<transbank2method.count2input;i++){
		setValueInVariant(&input[i],argumentbank.inputargument[i],transbank2method.input[i]);
	}
}

static void browseObject(UA_Client * client,UA_BrowseRequest bReq,UA_BrowseResponse bResp,DefinitionBank bank[],int * count2nodeinobject){
   int count=0;
	/* Browse some objects */
    printf("Browsing nodes in objects folder:\n");
    UA_BrowseRequest_init(&bReq);
    bReq.requestedMaxReferencesPerNode = 0;
    bReq.nodesToBrowse = UA_BrowseDescription_new();
    bReq.nodesToBrowseSize = 1;
    bReq.nodesToBrowse[0].nodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER); /* browse objects folder */
    bReq.nodesToBrowse[0].resultMask = UA_BROWSERESULTMASK_ALL; /* return everything */
    bResp = UA_Client_Service_browse(client, bReq);
    printf("%-9s %-16s %-16s %-16s %16s\n", "NAMESPACE", "NODEID", "BROWSE NAME", "DISPLAY NAME","NODECLASS");
    for(size_t i = 0; i < bResp.resultsSize; ++i) {
        for(size_t j = 0; j < bResp.results[i].referencesSize; ++j) {
        	/*i ist 0; j ist 0~5*/
            UA_ReferenceDescription *ref = &(bResp.results[i].references[j]);
            if(ref->nodeId.nodeId.identifierType == UA_NODEIDTYPE_NUMERIC) {
                printf("%-9d %-16d %-16.*s %-16.*s %12d\n", ref->nodeId.nodeId.namespaceIndex,
                       ref->nodeId.nodeId.identifier.numeric, (int)ref->browseName.name.length,
                       ref->browseName.name.data, (int)ref->displayName.text.length,
                       ref->displayName.text.data,ref->nodeClass);
                bank[count].ref= bResp.results[i].references[j];
                count++;
      //          printf("i is %-16d j is %-16d\n",i,j);

            } else if(ref->nodeId.nodeId.identifierType == UA_NODEIDTYPE_STRING) {
                printf("%-9d %-16.*s %-16.*s %-16.*s %12d\n", ref->nodeId.nodeId.namespaceIndex,
                       (int)ref->nodeId.nodeId.identifier.string.length,
                       ref->nodeId.nodeId.identifier.string.data,
                       (int)ref->browseName.name.length, ref->browseName.name.data,
                       (int)ref->displayName.text.length, ref->displayName.text.data,ref->nodeClass);
                bank[count].ref= bResp.results[i].references[j];
                count++;
        //        printf("i is %-16d j is %-16d\n",i,j);
            }
            /* TODO: distinguish further types */
        }
    }
    *count2nodeinobject=count;

}

static void browseMethod(UA_Client * client,UA_BrowseResponse bResp,UA_NodeId
		nodeidToMethod,UA_NodeId argumentnodeid[]){
	UA_Int32 count=0;
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
    printf("%-9s %-16s %-16s %-16s %16s\n", "NAMESPACE", "NODEID", "BROWSE NAME", "DISPLAY NAME","NODECLASS");
    for(size_t i = 0; i < bResp.resultsSize; ++i) {
        for(size_t j = 0; j < bResp.results[i].referencesSize; ++j) {
        	/*i ist 0; j ist 0~5*/
            UA_ReferenceDescription *ref = &(bResp.results[i].references[j]);
            if(ref->nodeId.nodeId.identifierType == UA_NODEIDTYPE_NUMERIC) {
                printf("%-9d %-16d %-16.*s %-16.*s %12d\n", ref->nodeId.nodeId.namespaceIndex,
                       ref->nodeId.nodeId.identifier.numeric, (int)ref->browseName.name.length,
                       ref->browseName.name.data, (int)ref->displayName.text.length,
                       ref->displayName.text.data,ref->nodeClass);
                argumentnodeid[count]=ref->nodeId.nodeId;
                count++;

            } else if(ref->nodeId.nodeId.identifierType == UA_NODEIDTYPE_STRING) {
                printf("%-9d %-16.*s %-16.*s %-16.*s %12d\n", ref->nodeId.nodeId.namespaceIndex,
                       (int)ref->nodeId.nodeId.identifier.string.length,
                       ref->nodeId.nodeId.identifier.string.data,
                       (int)ref->browseName.name.length, ref->browseName.name.data,
                       (int)ref->displayName.text.length, ref->displayName.text.data,ref->nodeClass);
                argumentnodeid[count]=ref->nodeId.nodeId;
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





















static UA_StatusCode callmethod(void){
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
    UA_Variant input[100];

    UA_Variant_init(input);
    UA_Int32 a=2;
    UA_Int32 b=4;
    UA_Variant_setScalarCopy(&input[0], &a, &UA_TYPES[UA_TYPES_INT32]);
    UA_Variant_setScalarCopy(&input[1], &b, &UA_TYPES[UA_TYPES_INT32]);


    size_t outputSize;
    UA_Variant *output;
    retval = UA_Client_call(client, UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                            UA_NODEID_NUMERIC(0, 50188), 2, input, &outputSize, &output);
    UA_Int32 sum=0;
    sum= *(UA_Int32*)output->data;
    std::cout<<"sum is :"<<sum<<"\n";

    if(retval == UA_STATUSCODE_GOOD) {
        printf("Method call was successful, and %lu returned values available.\n",
               (unsigned long)outputSize);
        UA_Array_delete(output, outputSize, &UA_TYPES[UA_TYPES_VARIANT]);
    } else {
        printf("Method call was unsuccessful, and %x returned values available.\n", retval);
    }


    /* Clean up */
    UA_Variant_deleteMembers(&value);
    UA_Client_delete(client); /* Disconnects the client internally */
    return UA_STATUSCODE_GOOD;
}

static UA_StatusCode client1(int count2input,TransitionBank inputbank[],int * count2output,TransitionBank outputbank[]){
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
    UA_Variant input[100];

    UA_Variant_init(input);
    UA_Int32 a=inputbank[0].trans_int32;
    UA_Int32 b=inputbank[1].trans_int32;
    UA_Variant_setScalarCopy(&input[0], &a, &UA_TYPES[UA_TYPES_INT32]);
    UA_Variant_setScalarCopy(&input[1], &b, &UA_TYPES[UA_TYPES_INT32]);
    size_t inputSize=count2input;

    size_t outputSize;
    UA_Variant *output;
    retval = UA_Client_call(client, UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                            UA_NODEID_NUMERIC(0, 50188), inputSize, input, &outputSize, &output);

    outputbank[0].trans_int32= *(UA_Int32*)output->data;

    *count2output=(int)outputSize;

    if(retval == UA_STATUSCODE_GOOD) {
        printf("Method call was successful, and %lu returned values available.\n",
               (unsigned long)outputSize);
        UA_Array_delete(output, outputSize, &UA_TYPES[UA_TYPES_VARIANT]);
    } else {
        printf("Method call was unsuccessful, and %x returned values available.\n", retval);
    }


    /* Clean up */
    UA_Variant_deleteMembers(&value);
    UA_Client_delete(client); /* Disconnects the client internally */
    return UA_STATUSCODE_GOOD;
}



bool method3(studienarbeit_gateway::Gateway2Method::Request  &req,
         studienarbeit_gateway::Gateway2Method::Response &res)
{
	TransitionBank inputbank[100];
	TransitionBank outputbank[100];
	int count2input=2;
	int count2output=0;
	inputbank[0].trans_int32=req.a;
	inputbank[1].trans_int32=req.b;

  client1(count2input,inputbank,&count2output,outputbank);

  ROS_INFO("Ready to add two ints.");
  res.sum = outputbank[0].trans_int32;
  ROS_INFO("request: linear=%ld, angular=%ld", (long int)req.a, (long int)req.b);
  ROS_INFO("sending back response: [%ld]", (long int)res.sum);
  return true;
}

bool method2(studienarbeit_gateway::Gateway2Method::Request  &req,
         studienarbeit_gateway::Gateway2Method::Response &res)
{
  ROS_INFO("Ready to add two ints.");
  res.sum = req.a + req.b;
  ROS_INFO("request: linear=%ld, angular=%ld", (long int)req.a, (long int)req.b);
  ROS_INFO("sending back response: [%ld]", (long int)res.sum);
  return true;
}


bool method1(studienarbeit_gateway::Method1::Request  &req,
         studienarbeit_gateway::Method1::Response &res)
{
    UA_Client *client = UA_Client_new(UA_ClientConfig_default);
    UA_StatusCode retval = UA_Client_connect(client, "opc.tcp://localhost:4840");
    if(retval != UA_STATUSCODE_GOOD) {
        UA_Client_delete(client);
        return (int)retval;
    }
    TransitionBank transbank;
    TransBankToMethod transbank2method;
    UA_Variant input[100];
    UA_Variant_init(input);
    size_t outputSize;
    UA_Variant *output;
    ArgumentBank argumentbank;
    GetArgument(client, UA_NODEID_NUMERIC(0, 50188),&argumentbank);

// <<Stelle: OPC UA Input To ROS Resquest>>
transbank.trans_int32=req.number1;
UA_Variant_setScalarCopy(&input[0], &transbank.trans_int32, &UA_TYPES[UA_TYPES_INT32]);
transbank.trans_int32=req.number2;
UA_Variant_setScalarCopy(&input[1], &transbank.trans_int32, &UA_TYPES[UA_TYPES_INT32]);


#if 0
	transbank.trans_int32=req.a;
	UA_Variant_setScalarCopy(&input[0], &transbank.trans_int32, &UA_TYPES[UA_TYPES_INT32]);
	transbank.trans_int32=req.b;
	UA_Variant_setScalarCopy(&input[1], &transbank.trans_int32, &UA_TYPES[UA_TYPES_INT32]);
#endif



    retval = UA_Client_call(client, UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                            UA_NODEID_NUMERIC(0, 50188), argumentbank.count2inputargument, input, &outputSize, &output);//这一行可以自行解决



// <<Stelle: ROS Response To OPC UA Output>>
transbank.trans_int32=*(UA_Int32*)output[0].data;
res.Result=transbank.trans_int32;

#if 0
    transbank.trans_int32=*(UA_Int32*)output[0].data;
    res.sum=transbank.trans_int32;
#endif


    if(retval == UA_STATUSCODE_GOOD) {
        printf("Method call was successful, and %lu returned values available.\n",
               (unsigned long)outputSize);
        UA_Array_delete(output, outputSize, &UA_TYPES[UA_TYPES_VARIANT]);
    } else {
        printf("Method call was unsuccessful, and %x returned values available.\n", retval);
    }


  /* Clean up */

  UA_Client_delete(client); /* Disconnects the client internally */

  return true;
}

int main(int argc, char **argv)
{
	ros::init(argc, argv, "Gateway2UA_Method");



	  ros::NodeHandle n;

	  ros::ServiceServer service1 = n.advertiseService("method1", method1);
	  ros::ServiceServer service2 = n.advertiseService("method2", method2);
	  ros::ServiceServer service3 = n.advertiseService("method3", method3);
	  ROS_INFO("Gateway is ready.");
	  ros::spin();




  return 0;
}
