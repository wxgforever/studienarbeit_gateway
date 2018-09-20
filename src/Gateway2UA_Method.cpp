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


/*****************************************************************************
*  Gateway2UA_Method                                                         *
*                                                                            *
*  This file is part of project "studienarbeit_gateway"                      *
*                                                                            *
*  This program is free software; you can redistribute it and/or modify      *
*  it                                                                        *
*                                                                            *
*  @file     Gateway2UA_Method                                               *
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

/** structure Argument
 * @brief the function of this structure is to save the information of the arguments in a OPC UA Method
 */
typedef struct _ArgumentBank {
	UA_Argument inputargument[100]; // save input argument, defalut length is 100. If 100 is not enough, you can change the length
	UA_Int32 count2inputargument; // record the amount of the argument in input
	UA_Argument outputargument[100]; // save output argument, defalut length is 100. If 100 is not enough, you can change the length
	UA_Int32 count2outputargument; // record the amount of the argument in output
} ArgumentBank;

/**
 * @brief browseObject --- browse opc ua server and find the method in opc ua server
 * @param client An OPC UA Client
 * @param bReq Request to browse OPC UA Node
 * @param bResp Response of browse process
 * @param bank An array of DefinitionBank
 * @param count2nodeinobject An number that record the amount of the opc ua node in opc ua server
 */
static void browseObject(UA_Client * client,UA_BrowseRequest bReq,UA_BrowseResponse bResp,DefinitionBank bank[],int * count2nodeinobject){
   int count=0;
	/* Browse some objects */

    UA_BrowseRequest_init(&bReq);
    bReq.requestedMaxReferencesPerNode = 0;
    bReq.nodesToBrowse = UA_BrowseDescription_new();
    bReq.nodesToBrowseSize = 1;
    bReq.nodesToBrowse[0].nodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER); /* browse objects folder */
    bReq.nodesToBrowse[0].resultMask = UA_BROWSERESULTMASK_ALL; /* return everything */
    bResp = UA_Client_Service_browse(client, bReq);

    for(size_t i = 0; i < bResp.resultsSize; ++i) {
        for(size_t j = 0; j < bResp.results[i].referencesSize; ++j) {
        	/*i ist 0; j ist 0~5*/
            UA_ReferenceDescription *ref = &(bResp.results[i].references[j]);
            if(ref->nodeId.nodeId.identifierType == UA_NODEIDTYPE_NUMERIC) {
                bank[count].ref= bResp.results[i].references[j];
                count++;


            } else if(ref->nodeId.nodeId.identifierType == UA_NODEIDTYPE_STRING) {

                bank[count].ref= bResp.results[i].references[j];
                count++;

            }
            /* TODO: distinguish further types */
        }
    }
    *count2nodeinobject=count;

}


/**
 * @brief browse a method node to get the NodeId of the input and ouput argument
 * @param client An OPC UA Client
 * @param bResp Request of a browse process
 * @param nodeidToMetho NodeId of an OPC UA Method to broswe
 * @param argumentnodeid An array of NodeId. this array will be assigned by this function.
 * This array records the NodeId of input and ouput argument
 */
static void browseMethod(UA_Client * client,UA_BrowseResponse bResp,UA_NodeId
		nodeidToMethod,UA_NodeId argumentnodeid[]){
	UA_Int32 count=0;
    UA_BrowseRequest bReq;
    UA_BrowseRequest_init(&bReq);
	/* Browse some objects */

    UA_BrowseRequest_init(&bReq);
    bReq.requestedMaxReferencesPerNode = 0;
    bReq.nodesToBrowse = UA_BrowseDescription_new();
    bReq.nodesToBrowseSize = 1;
    bReq.nodesToBrowse[0].nodeId = nodeidToMethod; /* browse objects folder */
    bReq.nodesToBrowse[0].resultMask = UA_BROWSERESULTMASK_ALL; /* return everything */
    bResp = UA_Client_Service_browse(client, bReq);

    for(size_t i = 0; i < bResp.resultsSize; ++i) {
        for(size_t j = 0; j < bResp.results[i].referencesSize; ++j) {
        	/*i ist 0; j ist 0~5*/
            UA_ReferenceDescription *ref = &(bResp.results[i].references[j]);
            if(ref->nodeId.nodeId.identifierType == UA_NODEIDTYPE_NUMERIC) {
                argumentnodeid[count]=ref->nodeId.nodeId;
                count++;

            } else if(ref->nodeId.nodeId.identifierType == UA_NODEIDTYPE_STRING) {
                argumentnodeid[count]=ref->nodeId.nodeId;
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

	UA_StatusCode retval = UA_Client_readValueAttribute(client, argumentnodeid,
			val);
	*count2argument = (int) val->arrayLength;

	if (retval == UA_STATUSCODE_GOOD
			&& val->type == &UA_TYPES[UA_TYPES_EXTENSIONOBJECT]) {

		UA_ExtensionObject * value;
		value = (UA_ExtensionObject *) val->data;

		for (int i = 0; i < (int) val->arrayLength; i++) {
			argument[i] = *(UA_Argument *) value[i].content.decoded.data;

		}
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

}

/*an callback funtion of a ros service*/
bool method1(studienarbeit_gateway::Method1::Request  &req,
         studienarbeit_gateway::Method1::Response &res)
{
    UA_Client *client = UA_Client_new(UA_ClientConfig_default);/*set OPC UA Client*/
    UA_StatusCode retval = UA_Client_connect(client, "opc.tcp://localhost:4840");
    if(retval != UA_STATUSCODE_GOOD) {
        UA_Client_delete(client);
        return (int)retval;
    }
    TransitionBank transbank;/*this structure is a transition*/

    UA_Variant input[100]; /*create this array to save the input, each entry is a parameter*/
    UA_Variant_init(input);/*initialization of input array*/
    size_t outputSize; /*amout of parameters in output*/
    UA_Variant *output;/*save information and value of parameters in output*/
    ArgumentBank argumentbank;/*a structure*/
    UA_NodeId nodeidToRead;/*NodeId of the method, this NodeId will be set by the Werkzeug2UA_Method*/

// <<position: give NodeId >>
nodeidToRead=UA_NODEID_NUMERIC(1,62541);



    GetArgument(client, nodeidToRead,&argumentbank);/*get the information of method node*/

// <<position: OPC UA Input To ROS Resquest>>
transbank.trans_string=UA_STRING((char*)req.MyInput.c_str());
UA_Variant_setScalarCopy(&input[0], &transbank.trans_string, &UA_TYPES[UA_TYPES_STRING]);






    retval = UA_Client_call(client, UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                            nodeidToRead, argumentbank.count2inputargument, input, &outputSize, &output);//call opc ua method



// <<position: ROS Response To OPC UA Output>>
transbank.trans_string=*(UA_String*)output[0].data;
res.MyOutput=(char*)transbank.trans_string.data;




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


	  /* set ros node */
	  ros::NodeHandle n;

	  ros::ServiceServer service1 = n.advertiseService("method1", method1);/*create a service, this service provide a method named method1*/

	  ROS_INFO("Gateway is ready.");
	  ros::spin();/*switch to turn off gateway*/




  return 0;
}
