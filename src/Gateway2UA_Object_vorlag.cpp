//**********
#include "ros/ros.h"
#include <sstream>
#include <iostream>
#include "stdio.h"
#include <string.h>
#include "open62541.h"
#include <stdlib.h>
#include "studienarbeit_gateway/Gateway.h"


/*****************************************************************************
*  Gateway2UA_Object                                                         *
*                                                                            *
*  This file is part of project "studienarbeit_gateway"                      *
*                                                                            *
*  This program is free software; you can redistribute it and/or modify      *
*  it                                                                        *
*                                                                            *
*  @file     Gateway2UA_Object                                              *
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

#define Test_Zahl 6
using namespace std;


/*@brief DefinitionBank2Method is a structure that can store the definition of ROS Service through analyzing ros srv-message */
typedef struct _DefinitionBank {
	std::string dataname; /*name of a variable in srv-message*/
	std::string nodeidname; /*name of a variable to define the identifier of a NodeId*/
	std::string type; /*type of a variable in srv-message*/
	int datalvl;  /*datalvl describes the position of a variable*/
	int isscalar; /* if a variable is variant, isvariable=1, if isvariable=0, this variable is a structure*/
	int isvariable; /* if a varaible is a input of a service, isinput=1; if this variable is a output, then isinput=0*/
	UA_NodeId nodeid; /* NodeId of a variable node in an object */

} DefinitionBank;



typedef studienarbeit_gateway::Gateway datatype;/* rename a datatype */

/** union _Identifier
 * _Identifier is a union that contains the build-in datatype of opc ua.
 * the function of this union are transition variables to set the type of a variant
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


/**
 * @brief ReadValueAttribute---- read a opc ua node and put the result to the parameter @value
 * @param client An OPC UA Client
 * @param Node An NodeId of a node in opc ua server
 * @param value An UA_Variant that is assigned by this function
 */
static UA_StatusCode ReadValueAttribute(UA_Client * client,UA_NodeId Node,UA_Variant * value){
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

/**
 * @brief takevalue --- analyze the data type of a UA_Variant and get the value in this variant through data format conversion
 * @param transbank obtains the value of variable node
 * @param val A UA_Variant that is assigned by read process in opc ua communication
 */
static void takevalue(TransitionBank * transbank,UA_Variant * val){


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

/**
 * @brief putvalueintransbank --- read a variable node and put the value into transbank (An array of TransitionBank type)
 * @param client An OPC UA Client
 * @param transbank An array in type of structure TransitionBank
 * @param count2variable Is amount of variable, this determines the effect entry in array @transbank
 * @param val An UA_Variant that obtains the value of a variable node after read process: UA_Client_readValueAttribute()
 */
static void putvalueintransbank(UA_Client * client,TransitionBank transbank[],int count2variable,DefinitionBank bank[],UA_Variant *val){

	for(int i=0;i<count2variable;i++){
		UA_Client_readValueAttribute(client,bank[i].nodeid,val);
		takevalue(&transbank[i],val);
	}
}


/**
 * @brief Client_run let a OPC UA Client run
 * @param msg A structure in data type "datatype". (datatype is rename from studienarbeit_gateway::Gateway
 * @param nodeid An NodeId of a object node in opc ua server
 */

int Client_run(datatype * msg,UA_NodeId nodeid){
	DefinitionBank bank[100];/*create an array of structure definitionbank to hold the definition of parameters in object node*/
	TransitionBank transbank[100];/*this array is used to do transition process*/
	int count2variable=0;

    UA_Client *client = UA_Client_new(UA_ClientConfig_default);/*set client*/
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
    UA_BrowseResponse bResp = UA_Client_Service_browse(client, bReq);/*browse*/

    for(size_t i = 0; i < bResp.resultsSize; ++i) {
        for(size_t j = 0; j < bResp.results[i].referencesSize; ++j) {
            UA_ReferenceDescription *ref = &(bResp.results[i].references[j]);
            s1=(char*)ref->browseName.name.data;
            if(s1!="BaseObjectType"){
                bank[count2variable].nodeid=ref->nodeId.nodeId; /*copy the nodeid into bank*/
                count2variable++; /*record the amount*/
            }
            /* TODO: distinguish further types */
        }
    }
	UA_Variant *val = UA_Variant_new();



	putvalueintransbank(client,transbank,count2variable,bank,val);/*transition process*/


//<<Stelle zum Übertragungsprozess>>




	/* Clean up */
	UA_Variant_delete(val);
	UA_Variant_deleteMembers(&value);
	UA_Client_delete(client); /* Disconnects the client internally */
	return UA_STATUSCODE_GOOD;
}



int main(int argc, char **argv) {


	/*set ros node*/
	ros::init(argc, argv, "Gateway2UA_Object");

	  /**
	   * NodeHandle is the main access point to communications with the ROS system.
	   * The first NodeHandle constructed will fully initialize this node, and the last
	   * NodeHandle destructed will close down the node.
	   */
	ros::NodeHandle n; /*Create a handle to this process' node.*/


	UA_NodeId nodeidToRead;/*NodeId of a OPC UA Object to read, this NodeId will be set by Werkzeug2UA_Object*/

// <<stellt: give NodeId >>



	/*set publishing process*/
	/*build a publish process, to publish the value of the parameters in objectnode
	 * the name of the topic is object1
	 */
	ros::Publisher chatter_pub = n.advertise<datatype>("object1", 1000);
	ros::Rate loop_rate(1);
	datatype m;

	/* Infinite loop to keep reading and publishing process in Gateway*/
	while (ros::ok()) { /*ros::ok will become fault when the user input "ctrl-c"*/

		Client_run(&m,nodeidToRead);/*run client and read the parameters in a object node*/


	    /**
	     * The publish() function is how you send messages. The parameter
	     * is the message object. The type of this object must agree with the type
	     * given as a template parameter to the advertise<>() call, as was done
	     * in the constructor above.
	     */
		chatter_pub.publish(m);/*publish the message*/

		ros::spinOnce(); /*switch to turn */

		loop_rate.sleep();

	}

	return 0;
}
