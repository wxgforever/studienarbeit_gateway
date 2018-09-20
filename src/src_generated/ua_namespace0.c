/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "ua_namespace0.h"


/* HasHistoricalConfiguration - ns=0;i=56 */

static UA_StatusCode function_ua_namespace0_0_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "HistoricalConfigurationOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasHistoricalConfiguration");
attr.description = UA_LOCALIZEDTEXT("", "The type for a reference to the historical configuration for a data variable.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 56),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "HasHistoricalConfiguration"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 56), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 44), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_0_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 56)
);
}


/* HasEffect - ns=0;i=54 */

static UA_StatusCode function_ua_namespace0_1_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "MayBeEffectedBy");
attr.displayName = UA_LOCALIZEDTEXT("", "HasEffect");
attr.description = UA_LOCALIZEDTEXT("", "The type for a reference to an event that may be raised when a transition occurs.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 54),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "HasEffect"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 54), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 32), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_1_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 54)
);
}


/* ToState - ns=0;i=52 */

static UA_StatusCode function_ua_namespace0_2_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "FromTransition");
attr.displayName = UA_LOCALIZEDTEXT("", "ToState");
attr.description = UA_LOCALIZEDTEXT("", "The type for a reference to the state after a transition.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 52),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ToState"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 52), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 32), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_2_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 52)
);
}


/* HasCause - ns=0;i=53 */

static UA_StatusCode function_ua_namespace0_3_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "MayBeCausedBy");
attr.displayName = UA_LOCALIZEDTEXT("", "HasCause");
attr.description = UA_LOCALIZEDTEXT("", "The type for a reference to a method that can cause a transition to occur.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 53),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "HasCause"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 53), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 32), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_3_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 53)
);
}


/* FromState - ns=0;i=51 */

static UA_StatusCode function_ua_namespace0_4_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "ToTransition");
attr.displayName = UA_LOCALIZEDTEXT("", "FromState");
attr.description = UA_LOCALIZEDTEXT("", "The type for a reference to the state before a transition.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 51),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "FromState"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 51), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 32), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_4_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 51)
);
}


/* EnumValueType - ns=0;i=7594 */

static UA_StatusCode function_ua_namespace0_5_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EnumValueType");
attr.description = UA_LOCALIZEDTEXT("", "A mapping between a value of an enumerated type and a name and description.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 7594),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "EnumValueType"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 7594), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 22), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_5_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 7594)
);
}


/* ServerCapabilitiesType - ns=0;i=2013 */

static UA_StatusCode function_ua_namespace0_6_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerCapabilitiesType");
attr.description = UA_LOCALIZEDTEXT("", "Describes the capabilities supported by the server.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2013),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServerCapabilitiesType"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2013), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 58), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_6_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2013)
);
}


/* OperationLimitsType - ns=0;i=11564 */

static UA_StatusCode function_ua_namespace0_7_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperationLimitsType");
attr.description = UA_LOCALIZEDTEXT("", "Identifies the operation limits imposed by the server.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 11564),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "OperationLimitsType"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11564), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 61), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_7_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11564)
);
}


/* OperationLimits - ns=0;i=11551 */

static UA_StatusCode function_ua_namespace0_8_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperationLimits");
attr.description = UA_LOCALIZEDTEXT("", "Defines the limits supported by the server for different operations.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 11551),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "OperationLimits"),
UA_NODEID_NUMERIC(ns[0], 11564),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11551), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2013), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_8_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11551)
);
}


/* BuildInfo - ns=0;i=338 */

static UA_StatusCode function_ua_namespace0_9_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "BuildInfo");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 338),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "BuildInfo"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 338), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 22), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_9_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 338)
);
}


/* ServerType - ns=0;i=2004 */

static UA_StatusCode function_ua_namespace0_10_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerType");
attr.description = UA_LOCALIZEDTEXT("", "Specifies the current status and capabilities of the server.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2004),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServerType"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2004), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 58), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_10_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2004)
);
}


/* Server - ns=0;i=2253 */

static UA_StatusCode function_ua_namespace0_11_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.eventNotifier = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Server");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Server"),
UA_NODEID_NUMERIC(ns[0], 2004),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2253), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[0], 85), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_11_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2253)
);
}


/* GetMonitoredItems - ns=0;i=11492 */

static UA_StatusCode function_ua_namespace0_12_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetMonitoredItems");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[0], 11492),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "GetMonitoredItems"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11492), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2253), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_12_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11492)
, NULL, 0, NULL, 0, NULL);
}


/* ServerCapabilities - ns=0;i=2268 */

static UA_StatusCode function_ua_namespace0_13_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerCapabilities");
attr.description = UA_LOCALIZEDTEXT("", "Describes capabilities supported by the server.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServerCapabilities"),
UA_NODEID_NUMERIC(ns[0], 2013),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2268), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2253), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_13_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2268)
);
}


/* OperationLimits - ns=0;i=11704 */

static UA_StatusCode function_ua_namespace0_14_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperationLimits");
attr.description = UA_LOCALIZEDTEXT("", "Defines the limits supported by the server for different operations.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "OperationLimits"),
UA_NODEID_NUMERIC(ns[0], 11564),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11704), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2268), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_14_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11704)
);
}


/* ServerDiagnosticsSummaryType - ns=0;i=2150 */

static UA_StatusCode function_ua_namespace0_15_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsSummaryType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2150),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsSummaryType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2150), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 63), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_15_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2150)
);
}


/* PublishingIntervalCount - ns=0;i=2159 */

static UA_StatusCode function_ua_namespace0_16_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2159_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2159_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2159_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishingIntervalCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2159),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "PublishingIntervalCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2159), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2150), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_16_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2159)
);
}


/* SecurityRejectedSessionCount - ns=0;i=2154 */

static UA_StatusCode function_ua_namespace0_17_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2154_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2154_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2154_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityRejectedSessionCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2154),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "SecurityRejectedSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2154), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2150), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_17_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2154)
);
}


/* SecurityRejectedRequestsCount - ns=0;i=2162 */

static UA_StatusCode function_ua_namespace0_18_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2162_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2162_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2162_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityRejectedRequestsCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2162),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "SecurityRejectedRequestsCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2162), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2150), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_18_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2162)
);
}


/* RejectedRequestsCount - ns=0;i=2163 */

static UA_StatusCode function_ua_namespace0_19_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2163_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2163_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2163_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "RejectedRequestsCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2163),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "RejectedRequestsCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2163), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2150), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_19_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2163)
);
}


/* RejectedSessionCount - ns=0;i=2155 */

static UA_StatusCode function_ua_namespace0_20_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2155_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2155_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2155_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "RejectedSessionCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2155),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "RejectedSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2155), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2150), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_20_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2155)
);
}


/* CumulatedSubscriptionCount - ns=0;i=2161 */

static UA_StatusCode function_ua_namespace0_21_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2161_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2161_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2161_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CumulatedSubscriptionCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2161),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "CumulatedSubscriptionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2161), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2150), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_21_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2161)
);
}


/* CumulatedSessionCount - ns=0;i=2153 */

static UA_StatusCode function_ua_namespace0_22_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2153_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2153_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2153_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CumulatedSessionCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2153),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "CumulatedSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2153), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2150), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_22_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2153)
);
}


/* CurrentSessionCount - ns=0;i=2152 */

static UA_StatusCode function_ua_namespace0_23_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2152_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2152_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2152_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSessionCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2152),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "CurrentSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2152), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2150), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_23_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2152)
);
}


/* ServerViewCount - ns=0;i=2151 */

static UA_StatusCode function_ua_namespace0_24_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2151_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2151_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2151_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerViewCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2151),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServerViewCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2151), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2150), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_24_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2151)
);
}


/* SessionAbortCount - ns=0;i=2157 */

static UA_StatusCode function_ua_namespace0_25_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2157_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2157_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2157_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionAbortCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2157),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "SessionAbortCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2157), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2150), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_25_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2157)
);
}


/* SessionTimeoutCount - ns=0;i=2156 */

static UA_StatusCode function_ua_namespace0_26_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2156_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2156_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2156_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionTimeoutCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2156),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "SessionTimeoutCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2156), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2150), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_26_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2156)
);
}


/* CurrentSubscriptionCount - ns=0;i=2160 */

static UA_StatusCode function_ua_namespace0_27_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2160_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2160_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2160_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSubscriptionCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2160),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "CurrentSubscriptionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2160), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2150), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_27_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2160)
);
}


/* BuildInfoType - ns=0;i=3051 */

static UA_StatusCode function_ua_namespace0_28_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildInfoType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 3051),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "BuildInfoType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 3051), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 63), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_28_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3051)
);
}


/* Image - ns=0;i=30 */

static UA_StatusCode function_ua_namespace0_29_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Image");
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is an image encoded as a string of bytes.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 30),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Image"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 30), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_29_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 30)
);
}


/* Decimal - ns=0;i=50 */

static UA_StatusCode function_ua_namespace0_30_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Decimal");
attr.description = UA_LOCALIZEDTEXT("", "Describes an arbitrary precision decimal value.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 50),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Decimal"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 50), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 26), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_30_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 50)
);
}


/* Enumeration - ns=0;i=29 */

static UA_StatusCode function_ua_namespace0_31_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Enumeration");
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is an enumerated DataType.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Enumeration"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 29), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 24), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_31_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 29)
);
}


/* NamingRuleType - ns=0;i=120 */

static UA_StatusCode function_ua_namespace0_32_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRuleType");
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that specifies the significance of the BrowseName for an instance declaration.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 120),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "NamingRuleType"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 120), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 29), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_32_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 120)
);
}


/* RedundancySupport - ns=0;i=851 */

static UA_StatusCode function_ua_namespace0_33_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RedundancySupport");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 851),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "RedundancySupport"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 851), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 29), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_33_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 851)
);
}


/* ServerState - ns=0;i=852 */

static UA_StatusCode function_ua_namespace0_34_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerState");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 852),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServerState"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 852), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 29), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_34_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 852)
);
}


/* DiagnosticInfo - ns=0;i=25 */

static UA_StatusCode function_ua_namespace0_35_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DiagnosticInfo");
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is a structure containing diagnostics associated with a StatusCode.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 25),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "DiagnosticInfo"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 25), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 24), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_35_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 25)
);
}


/* DataValue - ns=0;i=23 */

static UA_StatusCode function_ua_namespace0_36_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataValue");
attr.description = UA_LOCALIZEDTEXT("", "Describes a value that is a structure containing a value, a status code and timestamps.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 23),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "DataValue"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 23), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 24), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_36_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 23)
);
}


/* ServerRedundancyType - ns=0;i=2034 */

static UA_StatusCode function_ua_namespace0_37_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerRedundancyType");
attr.description = UA_LOCALIZEDTEXT("", "A base type for an object that describe how a server supports redundancy.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2034),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServerRedundancyType"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2034), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 58), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_37_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2034)
);
}


/* ServerRedundancy - ns=0;i=2296 */

static UA_StatusCode function_ua_namespace0_38_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerRedundancy");
attr.description = UA_LOCALIZEDTEXT("", "Describes the redundancy capabilities of the server.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2296),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServerRedundancy"),
UA_NODEID_NUMERIC(ns[0], 2034),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2296), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2253), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_38_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2296)
);
}


/* PropertyType - ns=0;i=68 */

static UA_StatusCode function_ua_namespace0_39_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "PropertyType");
attr.description = UA_LOCALIZEDTEXT("", "The type for variable that represents a property of another node.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 68),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "PropertyType"),
UA_NODEID_NUMERIC(ns[0], 62),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 68), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 62), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_39_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 68)
);
}


/* MaxBrowseContinuationPoints - ns=0;i=2735 */

static UA_StatusCode function_ua_namespace0_40_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
void *variablenode_ns_0_i_2735_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT16].memSize);
UA_init(variablenode_ns_0_i_2735_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2735_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxBrowseContinuationPoints");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of continuation points for Browse operations per session.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2735),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxBrowseContinuationPoints"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2735), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2268), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_40_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2735)
);
}


/* MaxNodesPerBrowse - ns=0;i=11710 */

static UA_StatusCode function_ua_namespace0_41_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_11710_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_11710_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11710_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerBrowse");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single Browse request.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11710),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerBrowse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11710), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11704), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_41_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11710)
);
}


/* MaxNodesPerWrite - ns=0;i=11707 */

static UA_StatusCode function_ua_namespace0_42_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_11707_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_11707_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11707_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerWrite");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single Write request.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11707),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerWrite"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11707), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11704), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_42_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11707)
);
}


/* Auditing - ns=0;i=2994 */

static UA_StatusCode function_ua_namespace0_43_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
void *variablenode_ns_0_i_2994_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_BOOLEAN].memSize);
UA_init(variablenode_ns_0_i_2994_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2994_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "Auditing");
attr.description = UA_LOCALIZEDTEXT("", "A flag indicating whether the server is currently generating audit events.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2994),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Auditing"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2994), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2253), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_43_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2994)
);
}


/* MaxNodesPerRead - ns=0;i=11565 */

static UA_StatusCode function_ua_namespace0_44_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_11565_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_11565_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11565_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerRead");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single Read request.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11565),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerRead"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11565), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11564), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_44_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11565)
);
}


/* MaxNodesPerWrite - ns=0;i=11567 */

static UA_StatusCode function_ua_namespace0_45_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_11567_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_11567_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11567_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerWrite");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single Write request.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11567),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerWrite"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11567), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11564), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_45_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11567)
);
}


/* RedundancySupport - ns=0;i=2035 */

static UA_StatusCode function_ua_namespace0_46_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 851);
void *variablenode_ns_0_i_2035_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT].memSize);
UA_init(variablenode_ns_0_i_2035_variant_DataContents, &UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2035_variant_DataContents, &UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT]);
attr.displayName = UA_LOCALIZEDTEXT("", "RedundancySupport");
attr.description = UA_LOCALIZEDTEXT("", "Indicates what style of redundancy is supported by the server.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2035),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "RedundancySupport"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2035), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2034), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_46_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2035)
);
}


/* MaxNodesPerMethodCall - ns=0;i=11569 */

static UA_StatusCode function_ua_namespace0_47_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_11569_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_11569_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11569_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerMethodCall");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single Call request.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11569),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerMethodCall"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11569), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11564), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_47_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11569)
);
}


/* MaxNodesPerMethodCall - ns=0;i=11709 */

static UA_StatusCode function_ua_namespace0_48_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_11709_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_11709_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11709_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerMethodCall");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single Call request.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11709),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerMethodCall"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11709), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11704), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_48_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11709)
);
}


/* NamespaceArray - ns=0;i=2255 */

static UA_StatusCode function_ua_namespace0_49_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_0_i_2255_variant_DataContents = (UA_String*) UA_alloca(UA_TYPES[UA_TYPES_STRING].memSize * 1);
UA_init(&variablenode_ns_0_i_2255_variant_DataContents[0], &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setArray(&attr.value, variablenode_ns_0_i_2255_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceArray");
attr.description = UA_LOCALIZEDTEXT("", "The list of namespace URIs used by the server.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2255),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "NamespaceArray"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2255), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2253), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_49_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2255)
);
}


/* ServerArray - ns=0;i=2254 */

static UA_StatusCode function_ua_namespace0_50_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_0_i_2254_variant_DataContents = (UA_String*) UA_alloca(UA_TYPES[UA_TYPES_STRING].memSize * 1);
UA_init(&variablenode_ns_0_i_2254_variant_DataContents[0], &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setArray(&attr.value, variablenode_ns_0_i_2254_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerArray");
attr.description = UA_LOCALIZEDTEXT("", "The list of server URIs used by the server.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2254),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServerArray"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2254), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2253), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_50_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2254)
);
}


/* MinSupportedSampleRate - ns=0;i=2272 */

static UA_StatusCode function_ua_namespace0_51_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290);
void *variablenode_ns_0_i_2272_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_DOUBLE].memSize);
UA_init(variablenode_ns_0_i_2272_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2272_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "MinSupportedSampleRate");
attr.description = UA_LOCALIZEDTEXT("", "The minimum sampling interval supported by the server.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2272),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MinSupportedSampleRate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2272), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2268), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_51_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2272)
);
}


/* LocaleIdArray - ns=0;i=2271 */

static UA_StatusCode function_ua_namespace0_52_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 295);
UA_String *variablenode_ns_0_i_2271_variant_DataContents = (UA_String*) UA_alloca(UA_TYPES[UA_TYPES_STRING].memSize * 1);
UA_init(&variablenode_ns_0_i_2271_variant_DataContents[0], &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setArray(&attr.value, variablenode_ns_0_i_2271_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "LocaleIdArray");
attr.description = UA_LOCALIZEDTEXT("", "A list of locales supported by the server.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2271),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "LocaleIdArray"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2271), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2268), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_52_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2271)
);
}


/* EnumValues - ns=0;i=12169 */

static UA_StatusCode function_ua_namespace0_53_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7594);

struct {
  UA_Int64 Value;
  UA_LocalizedText DisplayName;
  UA_LocalizedText Description;
} variablenode_ns_0_i_12169_EnumValueType_0_0_struct;
variablenode_ns_0_i_12169_EnumValueType_0_0_struct.Value = (UA_Int64) 1;
variablenode_ns_0_i_12169_EnumValueType_0_0_struct.DisplayName = UA_LOCALIZEDTEXT("", "Mandatory");
variablenode_ns_0_i_12169_EnumValueType_0_0_struct.Description = UA_LOCALIZEDTEXT("", "The BrowseName must appear in all instances of the type.");
UA_ExtensionObject *variablenode_ns_0_i_12169_EnumValueType_0_0 =  UA_ExtensionObject_new();
variablenode_ns_0_i_12169_EnumValueType_0_0->encoding = UA_EXTENSIONOBJECT_ENCODED_BYTESTRING;
variablenode_ns_0_i_12169_EnumValueType_0_0->content.encoded.typeId = UA_NODEID_NUMERIC(0, 8251);
UA_ByteString_allocBuffer(&variablenode_ns_0_i_12169_EnumValueType_0_0->content.encoded.body, 65000);
UA_Byte *posvariablenode_ns_0_i_12169_EnumValueType_0_0 = variablenode_ns_0_i_12169_EnumValueType_0_0->content.encoded.body.data;
const UA_Byte *endvariablenode_ns_0_i_12169_EnumValueType_0_0 = &variablenode_ns_0_i_12169_EnumValueType_0_0->content.encoded.body.data[65000];
{
retVal |= UA_encodeBinary(&variablenode_ns_0_i_12169_EnumValueType_0_0_struct.Value, &UA_TYPES[UA_TYPES_INT64], &posvariablenode_ns_0_i_12169_EnumValueType_0_0, &endvariablenode_ns_0_i_12169_EnumValueType_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_12169_EnumValueType_0_0_struct.DisplayName, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], &posvariablenode_ns_0_i_12169_EnumValueType_0_0, &endvariablenode_ns_0_i_12169_EnumValueType_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_12169_EnumValueType_0_0_struct.Description, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], &posvariablenode_ns_0_i_12169_EnumValueType_0_0, &endvariablenode_ns_0_i_12169_EnumValueType_0_0, NULL, NULL);
}
size_t variablenode_ns_0_i_12169_EnumValueType_0_0_encOffset = (uintptr_t)(posvariablenode_ns_0_i_12169_EnumValueType_0_0-variablenode_ns_0_i_12169_EnumValueType_0_0->content.encoded.body.data);
variablenode_ns_0_i_12169_EnumValueType_0_0->content.encoded.body.length = variablenode_ns_0_i_12169_EnumValueType_0_0_encOffset;
UA_Byte *variablenode_ns_0_i_12169_EnumValueType_0_0_newBody = (UA_Byte *) UA_malloc(variablenode_ns_0_i_12169_EnumValueType_0_0_encOffset);
memcpy(variablenode_ns_0_i_12169_EnumValueType_0_0_newBody, variablenode_ns_0_i_12169_EnumValueType_0_0->content.encoded.body.data, variablenode_ns_0_i_12169_EnumValueType_0_0_encOffset);
UA_Byte *variablenode_ns_0_i_12169_EnumValueType_0_0_oldBody = variablenode_ns_0_i_12169_EnumValueType_0_0->content.encoded.body.data;
variablenode_ns_0_i_12169_EnumValueType_0_0->content.encoded.body.data = variablenode_ns_0_i_12169_EnumValueType_0_0_newBody;
UA_free(variablenode_ns_0_i_12169_EnumValueType_0_0_oldBody);


struct {
  UA_Int64 Value;
  UA_LocalizedText DisplayName;
  UA_LocalizedText Description;
} variablenode_ns_0_i_12169_EnumValueType_1_0_struct;
variablenode_ns_0_i_12169_EnumValueType_1_0_struct.Value = (UA_Int64) 2;
variablenode_ns_0_i_12169_EnumValueType_1_0_struct.DisplayName = UA_LOCALIZEDTEXT("", "Optional");
variablenode_ns_0_i_12169_EnumValueType_1_0_struct.Description = UA_LOCALIZEDTEXT("", "The BrowseName may appear in an instance of the type.");
UA_ExtensionObject *variablenode_ns_0_i_12169_EnumValueType_1_0 =  UA_ExtensionObject_new();
variablenode_ns_0_i_12169_EnumValueType_1_0->encoding = UA_EXTENSIONOBJECT_ENCODED_BYTESTRING;
variablenode_ns_0_i_12169_EnumValueType_1_0->content.encoded.typeId = UA_NODEID_NUMERIC(0, 8251);
UA_ByteString_allocBuffer(&variablenode_ns_0_i_12169_EnumValueType_1_0->content.encoded.body, 65000);
UA_Byte *posvariablenode_ns_0_i_12169_EnumValueType_1_0 = variablenode_ns_0_i_12169_EnumValueType_1_0->content.encoded.body.data;
const UA_Byte *endvariablenode_ns_0_i_12169_EnumValueType_1_0 = &variablenode_ns_0_i_12169_EnumValueType_1_0->content.encoded.body.data[65000];
{
retVal |= UA_encodeBinary(&variablenode_ns_0_i_12169_EnumValueType_1_0_struct.Value, &UA_TYPES[UA_TYPES_INT64], &posvariablenode_ns_0_i_12169_EnumValueType_1_0, &endvariablenode_ns_0_i_12169_EnumValueType_1_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_12169_EnumValueType_1_0_struct.DisplayName, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], &posvariablenode_ns_0_i_12169_EnumValueType_1_0, &endvariablenode_ns_0_i_12169_EnumValueType_1_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_12169_EnumValueType_1_0_struct.Description, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], &posvariablenode_ns_0_i_12169_EnumValueType_1_0, &endvariablenode_ns_0_i_12169_EnumValueType_1_0, NULL, NULL);
}
size_t variablenode_ns_0_i_12169_EnumValueType_1_0_encOffset = (uintptr_t)(posvariablenode_ns_0_i_12169_EnumValueType_1_0-variablenode_ns_0_i_12169_EnumValueType_1_0->content.encoded.body.data);
variablenode_ns_0_i_12169_EnumValueType_1_0->content.encoded.body.length = variablenode_ns_0_i_12169_EnumValueType_1_0_encOffset;
UA_Byte *variablenode_ns_0_i_12169_EnumValueType_1_0_newBody = (UA_Byte *) UA_malloc(variablenode_ns_0_i_12169_EnumValueType_1_0_encOffset);
memcpy(variablenode_ns_0_i_12169_EnumValueType_1_0_newBody, variablenode_ns_0_i_12169_EnumValueType_1_0->content.encoded.body.data, variablenode_ns_0_i_12169_EnumValueType_1_0_encOffset);
UA_Byte *variablenode_ns_0_i_12169_EnumValueType_1_0_oldBody = variablenode_ns_0_i_12169_EnumValueType_1_0->content.encoded.body.data;
variablenode_ns_0_i_12169_EnumValueType_1_0->content.encoded.body.data = variablenode_ns_0_i_12169_EnumValueType_1_0_newBody;
UA_free(variablenode_ns_0_i_12169_EnumValueType_1_0_oldBody);


struct {
  UA_Int64 Value;
  UA_LocalizedText DisplayName;
  UA_LocalizedText Description;
} variablenode_ns_0_i_12169_EnumValueType_2_0_struct;
variablenode_ns_0_i_12169_EnumValueType_2_0_struct.Value = (UA_Int64) 3;
variablenode_ns_0_i_12169_EnumValueType_2_0_struct.DisplayName = UA_LOCALIZEDTEXT("", "Constraint");
variablenode_ns_0_i_12169_EnumValueType_2_0_struct.Description = UA_LOCALIZEDTEXT("", "The modelling rule defines a constraint and the BrowseName is not used in an instance of the type.");
UA_ExtensionObject *variablenode_ns_0_i_12169_EnumValueType_2_0 =  UA_ExtensionObject_new();
variablenode_ns_0_i_12169_EnumValueType_2_0->encoding = UA_EXTENSIONOBJECT_ENCODED_BYTESTRING;
variablenode_ns_0_i_12169_EnumValueType_2_0->content.encoded.typeId = UA_NODEID_NUMERIC(0, 8251);
UA_ByteString_allocBuffer(&variablenode_ns_0_i_12169_EnumValueType_2_0->content.encoded.body, 65000);
UA_Byte *posvariablenode_ns_0_i_12169_EnumValueType_2_0 = variablenode_ns_0_i_12169_EnumValueType_2_0->content.encoded.body.data;
const UA_Byte *endvariablenode_ns_0_i_12169_EnumValueType_2_0 = &variablenode_ns_0_i_12169_EnumValueType_2_0->content.encoded.body.data[65000];
{
retVal |= UA_encodeBinary(&variablenode_ns_0_i_12169_EnumValueType_2_0_struct.Value, &UA_TYPES[UA_TYPES_INT64], &posvariablenode_ns_0_i_12169_EnumValueType_2_0, &endvariablenode_ns_0_i_12169_EnumValueType_2_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_12169_EnumValueType_2_0_struct.DisplayName, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], &posvariablenode_ns_0_i_12169_EnumValueType_2_0, &endvariablenode_ns_0_i_12169_EnumValueType_2_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_12169_EnumValueType_2_0_struct.Description, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], &posvariablenode_ns_0_i_12169_EnumValueType_2_0, &endvariablenode_ns_0_i_12169_EnumValueType_2_0, NULL, NULL);
}
size_t variablenode_ns_0_i_12169_EnumValueType_2_0_encOffset = (uintptr_t)(posvariablenode_ns_0_i_12169_EnumValueType_2_0-variablenode_ns_0_i_12169_EnumValueType_2_0->content.encoded.body.data);
variablenode_ns_0_i_12169_EnumValueType_2_0->content.encoded.body.length = variablenode_ns_0_i_12169_EnumValueType_2_0_encOffset;
UA_Byte *variablenode_ns_0_i_12169_EnumValueType_2_0_newBody = (UA_Byte *) UA_malloc(variablenode_ns_0_i_12169_EnumValueType_2_0_encOffset);
memcpy(variablenode_ns_0_i_12169_EnumValueType_2_0_newBody, variablenode_ns_0_i_12169_EnumValueType_2_0->content.encoded.body.data, variablenode_ns_0_i_12169_EnumValueType_2_0_encOffset);
UA_Byte *variablenode_ns_0_i_12169_EnumValueType_2_0_oldBody = variablenode_ns_0_i_12169_EnumValueType_2_0->content.encoded.body.data;
variablenode_ns_0_i_12169_EnumValueType_2_0->content.encoded.body.data = variablenode_ns_0_i_12169_EnumValueType_2_0_newBody;
UA_free(variablenode_ns_0_i_12169_EnumValueType_2_0_oldBody);

UA_ExtensionObject variablenode_ns_0_i_12169_variant_DataContents[3];
variablenode_ns_0_i_12169_variant_DataContents[0] = *variablenode_ns_0_i_12169_EnumValueType_0_0;
variablenode_ns_0_i_12169_variant_DataContents[1] = *variablenode_ns_0_i_12169_EnumValueType_1_0;
variablenode_ns_0_i_12169_variant_DataContents[2] = *variablenode_ns_0_i_12169_EnumValueType_2_0;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_12169_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumValues");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 12169),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "EnumValues"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);

UA_ExtensionObject_delete(variablenode_ns_0_i_12169_EnumValueType_0_0);

UA_ExtensionObject_delete(variablenode_ns_0_i_12169_EnumValueType_1_0);

UA_ExtensionObject_delete(variablenode_ns_0_i_12169_EnumValueType_2_0);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 12169), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 120), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_53_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 12169)
);
}


/* MaxNodesPerTranslateBrowsePathsToNodeIds - ns=0;i=11712 */

static UA_StatusCode function_ua_namespace0_54_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_11712_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_11712_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11712_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerTranslateBrowsePathsToNodeIds");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single TranslateBrowsePathsToNodeIds request.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11712),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerTranslateBrowsePathsToNodeIds"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11712), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11704), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_54_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11712)
);
}


/* MaxMonitoredItemsPerCall - ns=0;i=11574 */

static UA_StatusCode function_ua_namespace0_55_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_11574_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_11574_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11574_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxMonitoredItemsPerCall");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single MonitoredItem related request.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11574),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxMonitoredItemsPerCall"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11574), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11564), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_55_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11574)
);
}


/* MaxNodesPerNodeManagement - ns=0;i=11573 */

static UA_StatusCode function_ua_namespace0_56_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_11573_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_11573_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11573_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerNodeManagement");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single AddNodes, AddReferences, DeleteNodes or DeleteReferences request.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11573),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerNodeManagement"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11573), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11564), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_56_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11573)
);
}


/* MaxNodesPerTranslateBrowsePathsToNodeIds - ns=0;i=11572 */

static UA_StatusCode function_ua_namespace0_57_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_11572_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_11572_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11572_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerTranslateBrowsePathsToNodeIds");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single TranslateBrowsePathsToNodeIds request.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11572),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerTranslateBrowsePathsToNodeIds"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11572), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11564), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_57_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11572)
);
}


/* MaxNodesPerRegisterNodes - ns=0;i=11571 */

static UA_StatusCode function_ua_namespace0_58_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_11571_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_11571_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11571_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerRegisterNodes");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single RegisterNodes request.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11571),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerRegisterNodes"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11571), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11564), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_58_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11571)
);
}


/* MaxNodesPerBrowse - ns=0;i=11570 */

static UA_StatusCode function_ua_namespace0_59_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_11570_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_11570_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11570_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerBrowse");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single Browse request.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11570),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerBrowse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11570), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11564), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_59_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11570)
);
}


/* MaxNodesPerRead - ns=0;i=11705 */

static UA_StatusCode function_ua_namespace0_60_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_11705_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_11705_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11705_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerRead");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single Read request.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11705),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerRead"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11705), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11704), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_60_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11705)
);
}


/* EnumStrings - ns=0;i=7611 */

static UA_StatusCode function_ua_namespace0_61_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_0_i_7611_variant_DataContents[6];
variablenode_ns_0_i_7611_variant_DataContents[0] = UA_LOCALIZEDTEXT("", "None");
variablenode_ns_0_i_7611_variant_DataContents[1] = UA_LOCALIZEDTEXT("", "Cold");
variablenode_ns_0_i_7611_variant_DataContents[2] = UA_LOCALIZEDTEXT("", "Warm");
variablenode_ns_0_i_7611_variant_DataContents[3] = UA_LOCALIZEDTEXT("", "Hot");
variablenode_ns_0_i_7611_variant_DataContents[4] = UA_LOCALIZEDTEXT("", "Transparent");
variablenode_ns_0_i_7611_variant_DataContents[5] = UA_LOCALIZEDTEXT("", "HotAndMirrored");
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_7611_variant_DataContents, (UA_Int32) 6, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 7611),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 7611), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 851), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_61_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 7611)
);
}


/* ServerProfileArray - ns=0;i=2269 */

static UA_StatusCode function_ua_namespace0_62_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_0_i_2269_variant_DataContents = (UA_String*) UA_alloca(UA_TYPES[UA_TYPES_STRING].memSize * 1);
UA_init(&variablenode_ns_0_i_2269_variant_DataContents[0], &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setArray(&attr.value, variablenode_ns_0_i_2269_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerProfileArray");
attr.description = UA_LOCALIZEDTEXT("", "A list of profiles supported by the server.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2269),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServerProfileArray"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2269), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2268), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_62_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2269)
);
}


/* MaxQueryContinuationPoints - ns=0;i=2736 */

static UA_StatusCode function_ua_namespace0_63_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
void *variablenode_ns_0_i_2736_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT16].memSize);
UA_init(variablenode_ns_0_i_2736_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2736_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxQueryContinuationPoints");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of continuation points for Query operations per session.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2736),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxQueryContinuationPoints"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2736), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2268), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_63_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2736)
);
}


/* MaxHistoryContinuationPoints - ns=0;i=2737 */

static UA_StatusCode function_ua_namespace0_64_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
void *variablenode_ns_0_i_2737_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT16].memSize);
UA_init(variablenode_ns_0_i_2737_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2737_variant_DataContents, &UA_TYPES[UA_TYPES_UINT16]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxHistoryContinuationPoints");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of continuation points for ReadHistory operations per session.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2737),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxHistoryContinuationPoints"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2737), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2268), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_64_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2737)
);
}


/* MaxNodesPerRegisterNodes - ns=0;i=11711 */

static UA_StatusCode function_ua_namespace0_65_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_11711_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_11711_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11711_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerRegisterNodes");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single RegisterNodes request.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11711),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerRegisterNodes"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11711), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11704), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_65_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11711)
);
}


/* ServiceLevel - ns=0;i=2267 */

static UA_StatusCode function_ua_namespace0_66_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
void *variablenode_ns_0_i_2267_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_BYTE].memSize);
UA_init(variablenode_ns_0_i_2267_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2267_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ServiceLevel");
attr.description = UA_LOCALIZEDTEXT("", "A value indicating the level of service the server can provide. 255 indicates the best.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2267),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServiceLevel"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2267), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2253), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_66_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2267)
);
}


/* RedundancySupport - ns=0;i=3709 */

static UA_StatusCode function_ua_namespace0_67_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 851);
void *variablenode_ns_0_i_3709_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT].memSize);
UA_init(variablenode_ns_0_i_3709_variant_DataContents, &UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_3709_variant_DataContents, &UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT]);
attr.displayName = UA_LOCALIZEDTEXT("", "RedundancySupport");
attr.description = UA_LOCALIZEDTEXT("", "Indicates what style of redundancy is supported by the server.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3709),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "RedundancySupport"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 3709), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2296), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_67_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3709)
);
}


/* MaxMonitoredItemsPerCall - ns=0;i=11714 */

static UA_StatusCode function_ua_namespace0_68_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_11714_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_11714_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11714_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxMonitoredItemsPerCall");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single MonitoredItem related request.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11714),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxMonitoredItemsPerCall"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11714), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11704), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_68_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11714)
);
}


/* MaxNodesPerNodeManagement - ns=0;i=11713 */

static UA_StatusCode function_ua_namespace0_69_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_11713_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_11713_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11713_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerNodeManagement");
attr.description = UA_LOCALIZEDTEXT("", "The maximum number of operations in a single AddNodes, AddReferences, DeleteNodes or DeleteReferences request.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11713),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerNodeManagement"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11713), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11704), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_69_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11713)
);
}


/* ModellingRuleType - ns=0;i=77 */

static UA_StatusCode function_ua_namespace0_70_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ModellingRuleType");
attr.description = UA_LOCALIZEDTEXT("", "The type for an object that describes how an instance declaration is used when a type is instantiated.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 77),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ModellingRuleType"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 77), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 58), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_70_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 77)
);
}


/* NamingRule - ns=0;i=111 */

static UA_StatusCode function_ua_namespace0_71_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 120);
UA_Int32 *variablenode_ns_0_i_111_variant_DataContents =  UA_Int32_new();
*variablenode_ns_0_i_111_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_111_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRule");
attr.description = UA_LOCALIZEDTEXT("", "Specified the significances of the BrowseName when a type is instantiated.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 111),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "NamingRule"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_0_i_111_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 111), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 77), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_71_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 111)
);
}


/* Mandatory - ns=0;i=78 */

static UA_StatusCode function_ua_namespace0_72_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Mandatory");
attr.description = UA_LOCALIZEDTEXT("", "Specifies that an instance with the attributes and references of the instance declaration must appear when a type is instantiated.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 78),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Mandatory"),
UA_NODEID_NUMERIC(ns[0], 77),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2035), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2161), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2160), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 7611), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2152), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2153), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12169), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2151), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2156), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2157), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2154), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2155), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2163), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2159), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 111), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2162), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_72_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 78)
);
}


/* NamingRule - ns=0;i=112 */

static UA_StatusCode function_ua_namespace0_73_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 120);
UA_Int32 *variablenode_ns_0_i_112_variant_DataContents =  UA_Int32_new();
*variablenode_ns_0_i_112_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_112_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRule");
attr.description = UA_LOCALIZEDTEXT("", "Specified the significances of the BrowseName when a type is instantiated.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 112),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "NamingRule"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_0_i_112_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 112), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_73_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 112)
);
}


/* Optional - ns=0;i=80 */

static UA_StatusCode function_ua_namespace0_74_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Optional");
attr.description = UA_LOCALIZEDTEXT("", "Specifies that an instance with the attributes and references of the instance declaration may appear when a type is instantiated.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 80),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Optional"),
UA_NODEID_NUMERIC(ns[0], 77),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11567), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11565), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11551), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11574), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11569), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11570), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11571), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11572), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11573), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_74_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 80)
);
}


/* NamingRule - ns=0;i=113 */

static UA_StatusCode function_ua_namespace0_75_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 120);
UA_Int32 *variablenode_ns_0_i_113_variant_DataContents =  UA_Int32_new();
*variablenode_ns_0_i_113_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_113_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRule");
attr.description = UA_LOCALIZEDTEXT("", "Specified the significances of the BrowseName when a type is instantiated.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 113),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "NamingRule"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_0_i_113_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 113), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_75_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 113)
);
}


/* DataTypeEncodingType - ns=0;i=76 */

static UA_StatusCode function_ua_namespace0_76_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeEncodingType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 76),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "DataTypeEncodingType"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 76), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 58), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_76_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 76)
);
}


/* Default Binary - ns=0;i=8251 */

static UA_StatusCode function_ua_namespace0_77_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 8251),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 8251), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[0], 7594), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_77_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 8251)
);
}


/* DataTypeSystemType - ns=0;i=75 */

static UA_StatusCode function_ua_namespace0_78_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeSystemType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 75),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "DataTypeSystemType"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 75), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 58), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_78_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 75)
);
}


/* OPC Binary - ns=0;i=93 */

static UA_StatusCode function_ua_namespace0_79_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OPC Binary");
attr.description = UA_LOCALIZEDTEXT("", "A type system which uses OPC binary schema to describe the encoding of data types.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 93),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "OPC Binary"),
UA_NODEID_NUMERIC(ns[0], 75),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 93), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[0], 90), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_79_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 93)
);
}


/* DataTypeDictionaryType - ns=0;i=72 */

static UA_StatusCode function_ua_namespace0_80_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeDictionaryType");
attr.description = UA_LOCALIZEDTEXT("", "The type for variable that represents the collection of data type decriptions.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 72),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "DataTypeDictionaryType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 72), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 63), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_80_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 72)
);
}


/* NamespaceUri - ns=0;i=107 */

static UA_StatusCode function_ua_namespace0_81_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
void *variablenode_ns_0_i_107_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_STRING].memSize);
UA_init(variablenode_ns_0_i_107_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_107_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
attr.description = UA_LOCALIZEDTEXT("", "A URI that uniquely identifies the dictionary.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 107),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 107), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 107), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 72), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_81_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 107)
);
}


/* DataTypeVersion - ns=0;i=106 */

static UA_StatusCode function_ua_namespace0_82_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
void *variablenode_ns_0_i_106_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_STRING].memSize);
UA_init(variablenode_ns_0_i_106_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_106_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeVersion");
attr.description = UA_LOCALIZEDTEXT("", "The version number for the data type dictionary.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 106),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "DataTypeVersion"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 106), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 106), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 72), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_82_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 106)
);
}


/* Opc.Ua - ns=0;i=7617 */

static UA_StatusCode function_ua_namespace0_83_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
UA_ByteString *variablenode_ns_0_i_7617_variant_DataContents =  UA_ByteString_new();
*variablenode_ns_0_i_7617_variant_DataContents = UA_BYTESTRING_ALLOC("<opc:TypeDictionary  xmlns:opc=\"http://opcfoundation.org/BinarySchema/\"  xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"  xmlns:ua=\"http://opcfoundation.org/UA/\"  xmlns:tns=\"http://opcfoundation.org/UA/\"  DefaultByteOrder=\"LittleEndian\"  TargetNamespace=\"http://opcfoundation.org/UA/\"><opc:Import Namespace=\"http://opcfoundation.org/BinarySchema/\" /><opc:StructuredType Name=\"XmlElement\"><opc:Documentation>An XML element encoded as a UTF-8 string.</opc:Documentation><opc:Field Name=\"Length\" T" "ypeName=\"opc:Int32\" /><opc:Field Name=\"Value\" TypeName=\"opc:Char\" LengthField=\"Length\" /></opc:StructuredType><opc:EnumeratedType Name=\"NodeIdType\" LengthInBits=\"6\"><opc:Documentation>The possible encodings for a NodeId value.</opc:Documentation><opc:EnumeratedValue Name=\"TwoByte\" Value=\"0\" /><opc:EnumeratedValue Name=\"FourByte\" Value=\"1\" /><opc:EnumeratedValue Name=\"Numeric\" Value=\"2\" /><opc:EnumeratedValue Name=\"String\" Value=\"3\" /><opc:EnumeratedValue Name=\"Guid\" Value=\"4\" /><opc:EnumeratedVa" "lue Name=\"ByteString\" Value=\"5\" /></opc:EnumeratedType><opc:StructuredType Name=\"TwoByteNodeId\"><opc:Field Name=\"Identifier\" TypeName=\"opc:Byte\" /></opc:StructuredType><opc:StructuredType Name=\"FourByteNodeId\"><opc:Field Name=\"NamespaceIndex\" TypeName=\"opc:Byte\" /><opc:Field Name=\"Identifier\" TypeName=\"opc:UInt16\" /></opc:StructuredType><opc:StructuredType Name=\"NumericNodeId\"><opc:Field Name=\"NamespaceIndex\" TypeName=\"opc:UInt16\" /><opc:Field Name=\"Identifier\" TypeName=\"opc:UInt32\" /></opc:Stru" "cturedType><opc:StructuredType Name=\"StringNodeId\"><opc:Field Name=\"NamespaceIndex\" TypeName=\"opc:UInt16\" /><opc:Field Name=\"Identifier\" TypeName=\"opc:CharArray\" /></opc:StructuredType><opc:StructuredType Name=\"GuidNodeId\"><opc:Field Name=\"NamespaceIndex\" TypeName=\"opc:UInt16\" /><opc:Field Name=\"Identifier\" TypeName=\"opc:Guid\" /></opc:StructuredType><opc:StructuredType Name=\"ByteStringNodeId\"><opc:Field Name=\"NamespaceIndex\" TypeName=\"opc:UInt16\" /><opc:Field Name=\"Identifier\" TypeName=\"opc:Byte" "String\" /></opc:StructuredType><opc:StructuredType Name=\"NodeId\"><opc:Documentation>An identifier for a node in a UA server address space.</opc:Documentation><opc:Field Name=\"NodeIdType\" TypeName=\"ua:NodeIdType\" /><opc:Field Name=\"Reserved1\" TypeName=\"opc:Bit\" Length=\"2\" /><opc:Field Name=\"TwoByte\" TypeName=\"ua:TwoByteNodeId\" SwitchField=\"NodeIdType\" SwitchValue=\"0\" /><opc:Field Name=\"FourByte\" TypeName=\"ua:FourByteNodeId\" SwitchField=\"NodeIdType\" SwitchValue=\"1\" /><opc:Field Name=\"Numeric\" Type" "Name=\"ua:NumericNodeId\" SwitchField=\"NodeIdType\" SwitchValue=\"2\" /><opc:Field Name=\"String\" TypeName=\"ua:StringNodeId\" SwitchField=\"NodeIdType\" SwitchValue=\"3\" /><opc:Field Name=\"Guid\" TypeName=\"ua:GuidNodeId\" SwitchField=\"NodeIdType\" SwitchValue=\"4\" /><opc:Field Name=\"ByteString\" TypeName=\"ua:ByteStringNodeId\" SwitchField=\"NodeIdType\" SwitchValue=\"5\" /></opc:StructuredType><opc:StructuredType Name=\"ExpandedNodeId\"><opc:Documentation>An identifier for a node in a UA server address space qualifie" "d with a complete namespace string.</opc:Documentation><opc:Field Name=\"NodeIdType\" TypeName=\"ua:NodeIdType\" /><opc:Field Name=\"ServerIndexSpecified\" TypeName=\"opc:Bit\" /><opc:Field Name=\"NamespaceURISpecified\" TypeName=\"opc:Bit\" /><opc:Field Name=\"TwoByte\" TypeName=\"ua:TwoByteNodeId\" SwitchField=\"NodeIdType\" SwitchValue=\"0\" /><opc:Field Name=\"FourByte\" TypeName=\"ua:FourByteNodeId\" SwitchField=\"NodeIdType\" SwitchValue=\"1\" /><opc:Field Name=\"Numeric\" TypeName=\"ua:NumericNodeId\" SwitchField=\"NodeI" "dType\" SwitchValue=\"2\" /><opc:Field Name=\"String\" TypeName=\"ua:StringNodeId\" SwitchField=\"NodeIdType\" SwitchValue=\"3\" /><opc:Field Name=\"Guid\" TypeName=\"ua:GuidNodeId\" SwitchField=\"NodeIdType\" SwitchValue=\"4\" /><opc:Field Name=\"ByteString\" TypeName=\"ua:ByteStringNodeId\" SwitchField=\"NodeIdType\" SwitchValue=\"5\" /><opc:Field Name=\"NamespaceURI\" TypeName=\"opc:CharArray\" SwitchField=\"NamespaceURISpecified\"/><opc:Field Name=\"ServerIndex\" TypeName=\"opc:UInt32\" SwitchField=\"ServerIndexSpecified\"/></opc" ":StructuredType><opc:OpaqueType Name=\"StatusCode\" LengthInBits=\"32\" ByteOrderSignificant=\"true\"><opc:Documentation>A 32-bit status code value.</opc:Documentation></opc:OpaqueType><opc:StructuredType Name=\"DiagnosticInfo\"><opc:Documentation>A recursive structure containing diagnostic information associated with a status code.</opc:Documentation><opc:Field Name=\"SymbolicIdSpecified\" TypeName=\"opc:Bit\" /><opc:Field Name=\"NamespaceURISpecified\" TypeName=\"opc:Bit\" /><opc:Field Name=\"LocaleSpecified\" " "TypeName=\"opc:Bit\" /><opc:Field Name=\"LocalizedTextSpecified\" TypeName=\"opc:Bit\" /><opc:Field Name=\"AdditionalInfoSpecified\" TypeName=\"opc:Bit\" /><opc:Field Name=\"InnerStatusCodeSpecified\" TypeName=\"opc:Bit\" /><opc:Field Name=\"InnerDiagnosticInfoSpecified\" TypeName=\"opc:Bit\" /><opc:Field Name=\"Reserved1\" TypeName=\"opc:Bit\" Length=\"2\" /><opc:Field Name=\"SymbolicId\" TypeName=\"opc:Int32\" SwitchField=\"SymbolicIdSpecified\" /><opc:Field Name=\"NamespaceURI\" TypeName=\"opc:Int32\" SwitchField=\"NamespaceUR" "ISpecified\" /><opc:Field Name=\"Locale\" TypeName=\"opc:Int32\" SwitchField=\"LocaleSpecified\" /><opc:Field Name=\"LocalizedText\" TypeName=\"opc:Int32\" SwitchField=\"LocalizedTextSpecified\" /><opc:Field Name=\"AdditionalInfo\" TypeName=\"opc:CharArray\" SwitchField=\"AdditionalInfoSpecified\" /><opc:Field Name=\"InnerStatusCode\" TypeName=\"ua:StatusCode\" SwitchField=\"InnerStatusCodeSpecified\" /><opc:Field Name=\"InnerDiagnosticInfo\" TypeName=\"ua:DiagnosticInfo\" SwitchField=\"InnerDiagnosticInfoSpecified\" /></opc:" "StructuredType><opc:StructuredType Name=\"QualifiedName\"><opc:Documentation>A string qualified with a namespace index.</opc:Documentation><opc:Field Name=\"NamespaceIndex\" TypeName=\"opc:Int32\" /><opc:Field Name=\"Name\" TypeName=\"opc:CharArray\" /></opc:StructuredType><opc:StructuredType Name=\"LocalizedText\"><opc:Documentation>A string qualified with a namespace index.</opc:Documentation><opc:Field Name=\"LocaleSpecified\" TypeName=\"opc:Bit\" /><opc:Field Name=\"TextSpecified\" TypeName=\"opc:Bit\" /><opc:F" "ield Name=\"Reserved1\" TypeName=\"opc:Bit\" Length=\"6\" /><opc:Field Name=\"Locale\" TypeName=\"opc:CharArray\" SwitchField=\"LocaleSpecified\" /><opc:Field Name=\"Text\" TypeName=\"opc:CharArray\" SwitchField=\"TextSpecified\" /></opc:StructuredType><opc:StructuredType Name=\"DataValue\"><opc:Documentation>A value with an associated timestamp, and quality.</opc:Documentation><opc:Field Name=\"ValueSpecified\" TypeName=\"opc:Bit\" /><opc:Field Name=\"StatusCodeSpecified\" TypeName=\"opc:Bit\" /><opc:Field Name=\"SourceTim" "estampSpecified\" TypeName=\"opc:Bit\" /><opc:Field Name=\"SourcePicosecondsSpecified\" TypeName=\"opc:Bit\" /><opc:Field Name=\"ServerTimestampSpecified\" TypeName=\"opc:Bit\" /><opc:Field Name=\"ServerPicosecondsSpecified\" TypeName=\"opc:Bit\" /><opc:Field Name=\"Reserved1\" TypeName=\"opc:Bit\" Length=\"2\" /><opc:Field Name=\"Value\" TypeName=\"ua:Variant\" SwitchField=\"ValueSpecified\" /><opc:Field Name=\"StatusCode\" TypeName=\"ua:StatusCode\" SwitchField=\"StatusCodeSpecified\" /><opc:Field Name=\"SourceTimestamp\" TypeN" "ame=\"opc:DateTime\" SwitchField=\"SourceTimestampSpecified\" /><opc:Field Name=\"SourcePicoseconds\" TypeName=\"opc:UInt16\" SwitchField=\"SourcePicosecondsSpecified\" /><opc:Field Name=\"ServerTimestamp\" TypeName=\"opc:DateTime\" SwitchField=\"ServerTimestampSpecified\" /><opc:Field Name=\"ServerPicoseconds\" TypeName=\"opc:UInt16\" SwitchField=\"ServerPicosecondsSpecified\" /></opc:StructuredType><opc:StructuredType Name=\"ExtensionObject\"><opc:Documentation>A serialized object prefixed with its data type identifi" "er.</opc:Documentation><opc:Field Name=\"TypeIdSpecified\" TypeName=\"opc:Bit\" /><opc:Field Name=\"BinaryBody\" TypeName=\"opc:Bit\" /><opc:Field Name=\"XmlBody\" TypeName=\"opc:Bit\" /><opc:Field Name=\"Reserved1\" TypeName=\"opc:Bit\" Length=\"5\" /><opc:Field Name=\"TypeId\" TypeName=\"ua:ExpandedNodeId\" SwitchField=\"TypeIdSpecified\" /><opc:Field Name=\"BodyLength\" TypeName=\"opc:Int32\" /><opc:Field Name=\"Body\" TypeName=\"opc:Byte\" LengthField=\"BodyLength\" /></opc:StructuredType><opc:StructuredType Name=\"Variant\"><" "opc:Documentation>A union of several types.</opc:Documentation><opc:Field Name=\"VariantType\" TypeName=\"opc:Bit\" Length=\"6\" /><opc:Field Name=\"ArrayDimensionsSpecified\" TypeName=\"opc:Bit\" Length=\"1\"/><opc:Field Name=\"ArrayLengthSpecified\" TypeName=\"opc:Bit\" Length=\"1\"/><opc:Field Name=\"ArrayLength\" TypeName=\"opc:Int32\" SwitchField=\"ArrayLengthSpecified\" /><opc:Field Name=\"Boolean\" TypeName=\"opc:Boolean\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"1\" /><opc:Field Name=\"SByte\" " "TypeName=\"opc:SByte\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"2\" /><opc:Field Name=\"Byte\" TypeName=\"opc:Byte\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"3\" /><opc:Field Name=\"Int16\" TypeName=\"opc:Int16\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"4\" /><opc:Field Name=\"UInt16\" TypeName=\"opc:UInt16\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"5\" /><opc:Field Name=\"Int32\" TypeName=\"opc:Int32\" LengthField=\"ArrayL" "ength\" SwitchField=\"VariantType\" SwitchValue=\"6\" /><opc:Field Name=\"UInt32\" TypeName=\"opc:UInt32\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"7\" /><opc:Field Name=\"Int64\" TypeName=\"opc:Int64\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"8\" /><opc:Field Name=\"UInt64\" TypeName=\"opc:UInt64\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"9\" /><opc:Field Name=\"Float\" TypeName=\"opc:Float\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" Swi" "tchValue=\"10\" /><opc:Field Name=\"Double\" TypeName=\"opc:Double\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"11\" /><opc:Field Name=\"String\" TypeName=\"opc:CharArray\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"12\" /><opc:Field Name=\"DateTime\" TypeName=\"opc:DateTime\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"13\" /><opc:Field Name=\"Guid\" TypeName=\"opc:Guid\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"14\" /><opc:Fiel" "d Name=\"ByteString\" TypeName=\"opc:ByteString\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"15\" /><opc:Field Name=\"XmlElement\" TypeName=\"ua:XmlElement\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"16\" /><opc:Field Name=\"NodeId\" TypeName=\"ua:NodeId\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"17\" /><opc:Field Name=\"ExpandedNodeId\" TypeName=\"ua:ExpandedNodeId\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"18\" /><opc:Fie" "ld Name=\"StatusCode\" TypeName=\"ua:StatusCode\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"19\" /><opc:Field Name=\"QualifiedName\" TypeName=\"ua:QualifiedName\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"20\" /><opc:Field Name=\"LocalizedText\" TypeName=\"ua:LocalizedText\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"21\" /><opc:Field Name=\"ExtensionObject\" TypeName=\"ua:ExtensionObject\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" Switc" "hValue=\"22\" /><opc:Field Name=\"DataValue\" TypeName=\"ua:DataValue\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"23\" /><opc:Field Name=\"Variant\" TypeName=\"ua:Variant\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"24\" /><opc:Field Name=\"DiagnosticInfo\" TypeName=\"ua:DiagnosticInfo\" LengthField=\"ArrayLength\" SwitchField=\"VariantType\" SwitchValue=\"25\" /><opc:Field Name=\"NoOfArrayDimensions\" TypeName=\"opc:Int32\" SwitchField=\"ArrayDimensionsSpecified\" /><opc:Field " "Name=\"ArrayDimensions\" TypeName=\"opc:Int32\" LengthField=\"NoOfArrayDimensions\" SwitchField=\"ArrayDimensionsSpecified\" /></opc:StructuredType><opc:EnumeratedType Name=\"NamingRuleType\" LengthInBits=\"32\"><opc:EnumeratedValue Name=\"Mandatory\" Value=\"1\" /><opc:EnumeratedValue Name=\"Optional\" Value=\"2\" /><opc:EnumeratedValue Name=\"Constraint\" Value=\"3\" /></opc:EnumeratedType><opc:StructuredType Name=\"Argument\" BaseType=\"ua:ExtensionObject\"><opc:Documentation>An argument for a method.</opc:Documentation" "><opc:Field Name=\"Name\" TypeName=\"opc:String\" /><opc:Field Name=\"DataType\" TypeName=\"ua:NodeId\" /><opc:Field Name=\"ValueRank\" TypeName=\"opc:Int32\" /><opc:Field Name=\"NoOfArrayDimensions\" TypeName=\"opc:Int32\" /><opc:Field Name=\"ArrayDimensions\" TypeName=\"opc:UInt32\" LengthField=\"NoOfArrayDimensions\" /><opc:Field Name=\"Description\" TypeName=\"ua:LocalizedText\" /></opc:StructuredType><opc:StructuredType Name=\"EnumValueType\" BaseType=\"ua:ExtensionObject\"><opc:Documentation>A mapping between a value o" "f an enumerated type and a name and description.</opc:Documentation><opc:Field Name=\"Value\" TypeName=\"opc:Int64\" /><opc:Field Name=\"DisplayName\" TypeName=\"ua:LocalizedText\" /><opc:Field Name=\"Description\" TypeName=\"ua:LocalizedText\" /></opc:StructuredType></opc:TypeDictionary>" );
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_7617_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Opc.Ua");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 7617),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Opc.Ua"),
UA_NODEID_NUMERIC(ns[0], 72),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_ByteString_delete(variablenode_ns_0_i_7617_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 7617), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 93), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_83_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 7617)
);
}


/* ServerStatusDataType - ns=0;i=862 */

static UA_StatusCode function_ua_namespace0_84_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerStatusDataType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 862),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServerStatusDataType"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 862), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 22), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_84_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 862)
);
}


/* DataTypeDescriptionType - ns=0;i=69 */

static UA_StatusCode function_ua_namespace0_85_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeDescriptionType");
attr.description = UA_LOCALIZEDTEXT("", "The type for variable that represents the description of a data type encoding.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 69),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "DataTypeDescriptionType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 69), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 63), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_85_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 69)
);
}


/* DictionaryFragment - ns=0;i=105 */

static UA_StatusCode function_ua_namespace0_86_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
void *variablenode_ns_0_i_105_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_BYTESTRING].memSize);
UA_init(variablenode_ns_0_i_105_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_105_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DictionaryFragment");
attr.description = UA_LOCALIZEDTEXT("", "A fragment of a data type dictionary that defines the data type.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 105),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "DictionaryFragment"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 105), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 105), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 69), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_86_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 105)
);
}


/* DataTypeVersion - ns=0;i=104 */

static UA_StatusCode function_ua_namespace0_87_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
void *variablenode_ns_0_i_104_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_STRING].memSize);
UA_init(variablenode_ns_0_i_104_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_104_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeVersion");
attr.description = UA_LOCALIZEDTEXT("", "The version number for the data type description.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 104),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "DataTypeVersion"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 104), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 104), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 69), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_87_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 104)
);
}


/* Argument - ns=0;i=7650 */

static UA_StatusCode function_ua_namespace0_88_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_0_i_7650_variant_DataContents =  UA_String_new();
*variablenode_ns_0_i_7650_variant_DataContents = UA_STRING_ALLOC("Argument");
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_7650_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Argument");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 7650),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Argument"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_0_i_7650_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 7650), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 7617), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_88_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 7650)
);
}


/* EnumValueType - ns=0;i=7656 */

static UA_StatusCode function_ua_namespace0_89_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_0_i_7656_variant_DataContents =  UA_String_new();
*variablenode_ns_0_i_7656_variant_DataContents = UA_STRING_ALLOC("EnumValueType");
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_7656_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumValueType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 7656),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "EnumValueType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_0_i_7656_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 7656), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 7617), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 7656), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[0], 8251), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_89_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 7656)
);
}


/* ServerDiagnosticsSummaryDataType - ns=0;i=859 */

static UA_StatusCode function_ua_namespace0_90_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsSummaryDataType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 859),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsSummaryDataType"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 859), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 22), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_90_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 859)
);
}


/* ServerStatusType - ns=0;i=2138 */

static UA_StatusCode function_ua_namespace0_91_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = (UA_Int32)-2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerStatusType");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2138),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServerStatusType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2138), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 63), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_91_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2138)
);
}


/* ServerStatus - ns=0;i=2256 */

static UA_StatusCode function_ua_namespace0_92_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 862);
void *variablenode_ns_0_i_2256_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE].memSize);
UA_init(variablenode_ns_0_i_2256_variant_DataContents, &UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2256_variant_DataContents, &UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerStatus");
attr.description = UA_LOCALIZEDTEXT("", "The current status of the server.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2256),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServerStatus"),
UA_NODEID_NUMERIC(ns[0], 2138),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2256), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2253), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_92_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2256)
);
}


/* State - ns=0;i=2259 */

static UA_StatusCode function_ua_namespace0_93_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 852);
void *variablenode_ns_0_i_2259_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_SERVERSTATE].memSize);
UA_init(variablenode_ns_0_i_2259_variant_DataContents, &UA_TYPES[UA_TYPES_SERVERSTATE]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2259_variant_DataContents, &UA_TYPES[UA_TYPES_SERVERSTATE]);
attr.displayName = UA_LOCALIZEDTEXT("", "State");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2259),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "State"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2259), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2256), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_93_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2259)
);
}


/* CurrentTime - ns=0;i=2258 */

static UA_StatusCode function_ua_namespace0_94_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
void *variablenode_ns_0_i_2258_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_DATETIME].memSize);
UA_init(variablenode_ns_0_i_2258_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2258_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentTime");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2258),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "CurrentTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2258), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2256), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_94_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2258)
);
}


/* StartTime - ns=0;i=2257 */

static UA_StatusCode function_ua_namespace0_95_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
void *variablenode_ns_0_i_2257_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_DATETIME].memSize);
UA_init(variablenode_ns_0_i_2257_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2257_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "StartTime");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2257),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "StartTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2257), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2256), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_95_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2257)
);
}


/* BuildInfo - ns=0;i=2260 */

static UA_StatusCode function_ua_namespace0_96_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 338);
void *variablenode_ns_0_i_2260_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_BUILDINFO].memSize);
UA_init(variablenode_ns_0_i_2260_variant_DataContents, &UA_TYPES[UA_TYPES_BUILDINFO]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2260_variant_DataContents, &UA_TYPES[UA_TYPES_BUILDINFO]);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildInfo");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2260),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "BuildInfo"),
UA_NODEID_NUMERIC(ns[0], 3051),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2260), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2256), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_96_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2260)
);
}


/* BuildDate - ns=0;i=2266 */

static UA_StatusCode function_ua_namespace0_97_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
void *variablenode_ns_0_i_2266_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_DATETIME].memSize);
UA_init(variablenode_ns_0_i_2266_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2266_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildDate");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2266),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "BuildDate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2266), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2260), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_97_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2266)
);
}


/* BuildNumber - ns=0;i=2265 */

static UA_StatusCode function_ua_namespace0_98_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
void *variablenode_ns_0_i_2265_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_STRING].memSize);
UA_init(variablenode_ns_0_i_2265_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2265_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildNumber");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2265),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "BuildNumber"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2265), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2260), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_98_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2265)
);
}


/* SoftwareVersion - ns=0;i=2264 */

static UA_StatusCode function_ua_namespace0_99_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
void *variablenode_ns_0_i_2264_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_STRING].memSize);
UA_init(variablenode_ns_0_i_2264_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2264_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareVersion");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2264),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "SoftwareVersion"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2264), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2260), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_99_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2264)
);
}


/* ManufacturerName - ns=0;i=2263 */

static UA_StatusCode function_ua_namespace0_100_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
void *variablenode_ns_0_i_2263_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_STRING].memSize);
UA_init(variablenode_ns_0_i_2263_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2263_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerName");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2263),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ManufacturerName"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2263), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2260), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_100_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2263)
);
}


/* ProductUri - ns=0;i=2262 */

static UA_StatusCode function_ua_namespace0_101_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
void *variablenode_ns_0_i_2262_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_STRING].memSize);
UA_init(variablenode_ns_0_i_2262_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2262_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductUri");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2262),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ProductUri"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2262), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2260), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_101_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2262)
);
}


/* ProductName - ns=0;i=2261 */

static UA_StatusCode function_ua_namespace0_102_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
void *variablenode_ns_0_i_2261_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_STRING].memSize);
UA_init(variablenode_ns_0_i_2261_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2261_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductName");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2261),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ProductName"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2261), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2260), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_102_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2261)
);
}


/* SecondsTillShutdown - ns=0;i=2992 */

static UA_StatusCode function_ua_namespace0_103_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2992_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2992_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2992_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "SecondsTillShutdown");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2992),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "SecondsTillShutdown"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2992), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2256), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_103_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2992)
);
}


/* ShutdownReason - ns=0;i=2993 */

static UA_StatusCode function_ua_namespace0_104_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
void *variablenode_ns_0_i_2993_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_LOCALIZEDTEXT].memSize);
UA_init(variablenode_ns_0_i_2993_variant_DataContents, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2993_variant_DataContents, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ShutdownReason");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2993),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ShutdownReason"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2993), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2256), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_104_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2993)
);
}


/* Argument - ns=0;i=296 */

static UA_StatusCode function_ua_namespace0_105_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Argument");
attr.description = UA_LOCALIZEDTEXT("", "An argument for a method.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 296),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Argument"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 296), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 22), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_105_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 296)
);
}


/* Default Binary - ns=0;i=298 */

static UA_StatusCode function_ua_namespace0_106_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 298),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 298), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[0], 7650), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 298), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[0], 296), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_106_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 298)
);
}


/* OutputArguments - ns=0;i=11494 */

static UA_StatusCode function_ua_namespace0_107_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);

struct {
  UA_String Name;
  UA_NodeId DataType;
  UA_Int32 ValueRank;
  UA_Int32 ArrayDimensionsSize;
  UA_UInt32 *ArrayDimensions;
  UA_LocalizedText Description;
} variablenode_ns_0_i_11494_Argument_0_0_struct;
variablenode_ns_0_i_11494_Argument_0_0_struct.Name = UA_STRING("ServerHandles");
variablenode_ns_0_i_11494_Argument_0_0_struct.DataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_0_i_11494_Argument_0_0_struct.ValueRank = (UA_Int32) 1;
variablenode_ns_0_i_11494_Argument_0_0_struct.ArrayDimensionsSize = 1;
variablenode_ns_0_i_11494_Argument_0_0_struct.ArrayDimensions = (UA_UInt32*) UA_malloc(sizeof(UA_UInt32));
variablenode_ns_0_i_11494_Argument_0_0_struct.ArrayDimensions[0]  = (UA_UInt32) 0;
variablenode_ns_0_i_11494_Argument_0_0_struct.Description = UA_LOCALIZEDTEXT("", "");
UA_ExtensionObject *variablenode_ns_0_i_11494_Argument_0_0 =  UA_ExtensionObject_new();
variablenode_ns_0_i_11494_Argument_0_0->encoding = UA_EXTENSIONOBJECT_ENCODED_BYTESTRING;
variablenode_ns_0_i_11494_Argument_0_0->content.encoded.typeId = UA_NODEID_NUMERIC(0, 298);
UA_ByteString_allocBuffer(&variablenode_ns_0_i_11494_Argument_0_0->content.encoded.body, 65000);
UA_Byte *posvariablenode_ns_0_i_11494_Argument_0_0 = variablenode_ns_0_i_11494_Argument_0_0->content.encoded.body.data;
const UA_Byte *endvariablenode_ns_0_i_11494_Argument_0_0 = &variablenode_ns_0_i_11494_Argument_0_0->content.encoded.body.data[65000];
{
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_0_0_struct.Name, &UA_TYPES[UA_TYPES_STRING], &posvariablenode_ns_0_i_11494_Argument_0_0, &endvariablenode_ns_0_i_11494_Argument_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_0_0_struct.DataType, &UA_TYPES[UA_TYPES_NODEID], &posvariablenode_ns_0_i_11494_Argument_0_0, &endvariablenode_ns_0_i_11494_Argument_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_0_0_struct.ValueRank, &UA_TYPES[UA_TYPES_INT32], &posvariablenode_ns_0_i_11494_Argument_0_0, &endvariablenode_ns_0_i_11494_Argument_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_0_0_struct.ArrayDimensions[0], &UA_TYPES[UA_TYPES_UINT32], &posvariablenode_ns_0_i_11494_Argument_0_0, &endvariablenode_ns_0_i_11494_Argument_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_0_0_struct.Description, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], &posvariablenode_ns_0_i_11494_Argument_0_0, &endvariablenode_ns_0_i_11494_Argument_0_0, NULL, NULL);
}
size_t variablenode_ns_0_i_11494_Argument_0_0_encOffset = (uintptr_t)(posvariablenode_ns_0_i_11494_Argument_0_0-variablenode_ns_0_i_11494_Argument_0_0->content.encoded.body.data);
variablenode_ns_0_i_11494_Argument_0_0->content.encoded.body.length = variablenode_ns_0_i_11494_Argument_0_0_encOffset;
UA_Byte *variablenode_ns_0_i_11494_Argument_0_0_newBody = (UA_Byte *) UA_malloc(variablenode_ns_0_i_11494_Argument_0_0_encOffset);
memcpy(variablenode_ns_0_i_11494_Argument_0_0_newBody, variablenode_ns_0_i_11494_Argument_0_0->content.encoded.body.data, variablenode_ns_0_i_11494_Argument_0_0_encOffset);
UA_Byte *variablenode_ns_0_i_11494_Argument_0_0_oldBody = variablenode_ns_0_i_11494_Argument_0_0->content.encoded.body.data;
variablenode_ns_0_i_11494_Argument_0_0->content.encoded.body.data = variablenode_ns_0_i_11494_Argument_0_0_newBody;
UA_free(variablenode_ns_0_i_11494_Argument_0_0_oldBody);


struct {
  UA_String Name;
  UA_NodeId DataType;
  UA_Int32 ValueRank;
  UA_Int32 ArrayDimensionsSize;
  UA_UInt32 *ArrayDimensions;
  UA_LocalizedText Description;
} variablenode_ns_0_i_11494_Argument_1_0_struct;
variablenode_ns_0_i_11494_Argument_1_0_struct.Name = UA_STRING("ClientHandles");
variablenode_ns_0_i_11494_Argument_1_0_struct.DataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_0_i_11494_Argument_1_0_struct.ValueRank = (UA_Int32) 1;
variablenode_ns_0_i_11494_Argument_1_0_struct.ArrayDimensionsSize = 1;
variablenode_ns_0_i_11494_Argument_1_0_struct.ArrayDimensions = (UA_UInt32*) UA_malloc(sizeof(UA_UInt32));
variablenode_ns_0_i_11494_Argument_1_0_struct.ArrayDimensions[0]  = (UA_UInt32) 0;
variablenode_ns_0_i_11494_Argument_1_0_struct.Description = UA_LOCALIZEDTEXT("", "");
UA_ExtensionObject *variablenode_ns_0_i_11494_Argument_1_0 =  UA_ExtensionObject_new();
variablenode_ns_0_i_11494_Argument_1_0->encoding = UA_EXTENSIONOBJECT_ENCODED_BYTESTRING;
variablenode_ns_0_i_11494_Argument_1_0->content.encoded.typeId = UA_NODEID_NUMERIC(0, 298);
UA_ByteString_allocBuffer(&variablenode_ns_0_i_11494_Argument_1_0->content.encoded.body, 65000);
UA_Byte *posvariablenode_ns_0_i_11494_Argument_1_0 = variablenode_ns_0_i_11494_Argument_1_0->content.encoded.body.data;
const UA_Byte *endvariablenode_ns_0_i_11494_Argument_1_0 = &variablenode_ns_0_i_11494_Argument_1_0->content.encoded.body.data[65000];
{
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_1_0_struct.Name, &UA_TYPES[UA_TYPES_STRING], &posvariablenode_ns_0_i_11494_Argument_1_0, &endvariablenode_ns_0_i_11494_Argument_1_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_1_0_struct.DataType, &UA_TYPES[UA_TYPES_NODEID], &posvariablenode_ns_0_i_11494_Argument_1_0, &endvariablenode_ns_0_i_11494_Argument_1_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_1_0_struct.ValueRank, &UA_TYPES[UA_TYPES_INT32], &posvariablenode_ns_0_i_11494_Argument_1_0, &endvariablenode_ns_0_i_11494_Argument_1_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_1_0_struct.ArrayDimensions[0], &UA_TYPES[UA_TYPES_UINT32], &posvariablenode_ns_0_i_11494_Argument_1_0, &endvariablenode_ns_0_i_11494_Argument_1_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11494_Argument_1_0_struct.Description, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], &posvariablenode_ns_0_i_11494_Argument_1_0, &endvariablenode_ns_0_i_11494_Argument_1_0, NULL, NULL);
}
size_t variablenode_ns_0_i_11494_Argument_1_0_encOffset = (uintptr_t)(posvariablenode_ns_0_i_11494_Argument_1_0-variablenode_ns_0_i_11494_Argument_1_0->content.encoded.body.data);
variablenode_ns_0_i_11494_Argument_1_0->content.encoded.body.length = variablenode_ns_0_i_11494_Argument_1_0_encOffset;
UA_Byte *variablenode_ns_0_i_11494_Argument_1_0_newBody = (UA_Byte *) UA_malloc(variablenode_ns_0_i_11494_Argument_1_0_encOffset);
memcpy(variablenode_ns_0_i_11494_Argument_1_0_newBody, variablenode_ns_0_i_11494_Argument_1_0->content.encoded.body.data, variablenode_ns_0_i_11494_Argument_1_0_encOffset);
UA_Byte *variablenode_ns_0_i_11494_Argument_1_0_oldBody = variablenode_ns_0_i_11494_Argument_1_0->content.encoded.body.data;
variablenode_ns_0_i_11494_Argument_1_0->content.encoded.body.data = variablenode_ns_0_i_11494_Argument_1_0_newBody;
UA_free(variablenode_ns_0_i_11494_Argument_1_0_oldBody);

UA_ExtensionObject variablenode_ns_0_i_11494_variant_DataContents[2];
variablenode_ns_0_i_11494_variant_DataContents[0] = *variablenode_ns_0_i_11494_Argument_0_0;
variablenode_ns_0_i_11494_variant_DataContents[1] = *variablenode_ns_0_i_11494_Argument_1_0;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_11494_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11494),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);

UA_free(variablenode_ns_0_i_11494_Argument_0_0_struct.ArrayDimensions);
UA_ExtensionObject_delete(variablenode_ns_0_i_11494_Argument_0_0);

UA_free(variablenode_ns_0_i_11494_Argument_1_0_struct.ArrayDimensions);
UA_ExtensionObject_delete(variablenode_ns_0_i_11494_Argument_1_0);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11494), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11492), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_107_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11494)
);
}


/* InputArguments - ns=0;i=11493 */

static UA_StatusCode function_ua_namespace0_108_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
attr.arrayDimensions = (UA_UInt32 *)UA_Array_new(1, &UA_TYPES[UA_TYPES_UINT32]);
attr.arrayDimensions[0] = 0;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);

struct {
  UA_String Name;
  UA_NodeId DataType;
  UA_Int32 ValueRank;
  UA_Int32 ArrayDimensionsSize;
  UA_UInt32 *ArrayDimensions;
  UA_LocalizedText Description;
} variablenode_ns_0_i_11493_Argument_0_0_struct;
variablenode_ns_0_i_11493_Argument_0_0_struct.Name = UA_STRING("SubscriptionId");
variablenode_ns_0_i_11493_Argument_0_0_struct.DataType = UA_NODEID_NUMERIC(ns[0], 7);
variablenode_ns_0_i_11493_Argument_0_0_struct.ValueRank = (UA_Int32) -1;
variablenode_ns_0_i_11493_Argument_0_0_struct.ArrayDimensionsSize = 1;
variablenode_ns_0_i_11493_Argument_0_0_struct.ArrayDimensions = (UA_UInt32*) UA_malloc(sizeof(UA_UInt32));
variablenode_ns_0_i_11493_Argument_0_0_struct.ArrayDimensions[0]  = (UA_UInt32) 0;
variablenode_ns_0_i_11493_Argument_0_0_struct.Description = UA_LOCALIZEDTEXT("", "");
UA_ExtensionObject *variablenode_ns_0_i_11493_Argument_0_0 =  UA_ExtensionObject_new();
variablenode_ns_0_i_11493_Argument_0_0->encoding = UA_EXTENSIONOBJECT_ENCODED_BYTESTRING;
variablenode_ns_0_i_11493_Argument_0_0->content.encoded.typeId = UA_NODEID_NUMERIC(0, 298);
UA_ByteString_allocBuffer(&variablenode_ns_0_i_11493_Argument_0_0->content.encoded.body, 65000);
UA_Byte *posvariablenode_ns_0_i_11493_Argument_0_0 = variablenode_ns_0_i_11493_Argument_0_0->content.encoded.body.data;
const UA_Byte *endvariablenode_ns_0_i_11493_Argument_0_0 = &variablenode_ns_0_i_11493_Argument_0_0->content.encoded.body.data[65000];
{
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11493_Argument_0_0_struct.Name, &UA_TYPES[UA_TYPES_STRING], &posvariablenode_ns_0_i_11493_Argument_0_0, &endvariablenode_ns_0_i_11493_Argument_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11493_Argument_0_0_struct.DataType, &UA_TYPES[UA_TYPES_NODEID], &posvariablenode_ns_0_i_11493_Argument_0_0, &endvariablenode_ns_0_i_11493_Argument_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11493_Argument_0_0_struct.ValueRank, &UA_TYPES[UA_TYPES_INT32], &posvariablenode_ns_0_i_11493_Argument_0_0, &endvariablenode_ns_0_i_11493_Argument_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11493_Argument_0_0_struct.ArrayDimensions[0], &UA_TYPES[UA_TYPES_UINT32], &posvariablenode_ns_0_i_11493_Argument_0_0, &endvariablenode_ns_0_i_11493_Argument_0_0, NULL, NULL);
retVal |= UA_encodeBinary(&variablenode_ns_0_i_11493_Argument_0_0_struct.Description, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], &posvariablenode_ns_0_i_11493_Argument_0_0, &endvariablenode_ns_0_i_11493_Argument_0_0, NULL, NULL);
}
size_t variablenode_ns_0_i_11493_Argument_0_0_encOffset = (uintptr_t)(posvariablenode_ns_0_i_11493_Argument_0_0-variablenode_ns_0_i_11493_Argument_0_0->content.encoded.body.data);
variablenode_ns_0_i_11493_Argument_0_0->content.encoded.body.length = variablenode_ns_0_i_11493_Argument_0_0_encOffset;
UA_Byte *variablenode_ns_0_i_11493_Argument_0_0_newBody = (UA_Byte *) UA_malloc(variablenode_ns_0_i_11493_Argument_0_0_encOffset);
memcpy(variablenode_ns_0_i_11493_Argument_0_0_newBody, variablenode_ns_0_i_11493_Argument_0_0->content.encoded.body.data, variablenode_ns_0_i_11493_Argument_0_0_encOffset);
UA_Byte *variablenode_ns_0_i_11493_Argument_0_0_oldBody = variablenode_ns_0_i_11493_Argument_0_0->content.encoded.body.data;
variablenode_ns_0_i_11493_Argument_0_0->content.encoded.body.data = variablenode_ns_0_i_11493_Argument_0_0_newBody;
UA_free(variablenode_ns_0_i_11493_Argument_0_0_oldBody);

UA_ExtensionObject variablenode_ns_0_i_11493_variant_DataContents[1];
variablenode_ns_0_i_11493_variant_DataContents[0] = *variablenode_ns_0_i_11493_Argument_0_0;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_11493_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11493),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Array_delete(attr.arrayDimensions, 1, &UA_TYPES[UA_TYPES_UINT32]);

UA_free(variablenode_ns_0_i_11493_Argument_0_0_struct.ArrayDimensions);
UA_ExtensionObject_delete(variablenode_ns_0_i_11493_Argument_0_0);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11493), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11492), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_108_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11493)
);
}


/* Default XML - ns=0;i=3063 */

static UA_StatusCode function_ua_namespace0_109_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
attr.description = UA_LOCALIZEDTEXT("", "The default XML encoding for a data type.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 3063),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 58),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_109_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3063)
);
}


/* Default Binary - ns=0;i=3062 */

static UA_StatusCode function_ua_namespace0_110_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
attr.description = UA_LOCALIZEDTEXT("", "The default binary encoding for a data type.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 3062),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 58),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace0_110_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3062)
);
}


/* ServerDiagnosticsType - ns=0;i=2020 */

static UA_StatusCode function_ua_namespace0_111_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsType");
attr.description = UA_LOCALIZEDTEXT("", "The diagnostics information for a server.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2020),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsType"),
UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2020), UA_NODEID_NUMERIC(ns[0], 45), UA_EXPANDEDNODEID_NUMERIC(ns[0], 58), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_111_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2020)
);
}


/* ServerDiagnostics - ns=0;i=2274 */

static UA_StatusCode function_ua_namespace0_112_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnostics");
attr.description = UA_LOCALIZEDTEXT("", "Reports diagnostics about the server.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2274),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnostics"),
UA_NODEID_NUMERIC(ns[0], 2020),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2274), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2253), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_112_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2274)
);
}


/* ServerDiagnosticsSummary - ns=0;i=2275 */

static UA_StatusCode function_ua_namespace0_113_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 859);
void *variablenode_ns_0_i_2275_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE].memSize);
UA_init(variablenode_ns_0_i_2275_variant_DataContents, &UA_TYPES[UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2275_variant_DataContents, &UA_TYPES[UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsSummary");
attr.description = UA_LOCALIZEDTEXT("", "A summary of server level diagnostics.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2275),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsSummary"),
UA_NODEID_NUMERIC(ns[0], 2150),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2275), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2274), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_113_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2275)
);
}


/* SecurityRejectedRequestsCount - ns=0;i=2287 */

static UA_StatusCode function_ua_namespace0_114_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2287_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2287_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2287_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityRejectedRequestsCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2287),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "SecurityRejectedRequestsCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2287), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2275), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_114_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2287)
);
}


/* CumulatedSubscriptionCount - ns=0;i=2286 */

static UA_StatusCode function_ua_namespace0_115_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2286_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2286_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2286_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CumulatedSubscriptionCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2286),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "CumulatedSubscriptionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2286), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2275), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_115_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2286)
);
}


/* CurrentSubscriptionCount - ns=0;i=2285 */

static UA_StatusCode function_ua_namespace0_116_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2285_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2285_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2285_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSubscriptionCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2285),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "CurrentSubscriptionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2285), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2275), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_116_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2285)
);
}


/* PublishingIntervalCount - ns=0;i=2284 */

static UA_StatusCode function_ua_namespace0_117_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2284_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2284_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2284_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishingIntervalCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2284),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "PublishingIntervalCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2284), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2275), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_117_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2284)
);
}


/* SessionAbortCount - ns=0;i=2282 */

static UA_StatusCode function_ua_namespace0_118_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2282_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2282_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2282_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionAbortCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2282),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "SessionAbortCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2282), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2275), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_118_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2282)
);
}


/* SessionTimeoutCount - ns=0;i=2281 */

static UA_StatusCode function_ua_namespace0_119_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2281_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2281_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2281_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionTimeoutCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2281),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "SessionTimeoutCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2281), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2275), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_119_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2281)
);
}


/* RejectedSessionCount - ns=0;i=3705 */

static UA_StatusCode function_ua_namespace0_120_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_3705_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_3705_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_3705_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "RejectedSessionCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3705),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "RejectedSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 3705), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2275), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_120_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3705)
);
}


/* RejectedRequestsCount - ns=0;i=2288 */

static UA_StatusCode function_ua_namespace0_121_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2288_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2288_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2288_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "RejectedRequestsCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2288),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "RejectedRequestsCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2288), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2275), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_121_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2288)
);
}


/* ServerViewCount - ns=0;i=2276 */

static UA_StatusCode function_ua_namespace0_122_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2276_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2276_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2276_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerViewCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2276),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "ServerViewCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2276), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2275), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_122_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2276)
);
}


/* CurrentSessionCount - ns=0;i=2277 */

static UA_StatusCode function_ua_namespace0_123_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2277_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2277_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2277_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSessionCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2277),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "CurrentSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2277), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2275), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_123_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2277)
);
}


/* CumulatedSessionCount - ns=0;i=2278 */

static UA_StatusCode function_ua_namespace0_124_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2278_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2278_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2278_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CumulatedSessionCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2278),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "CumulatedSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2278), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2275), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_124_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2278)
);
}


/* SecurityRejectedSessionCount - ns=0;i=2279 */

static UA_StatusCode function_ua_namespace0_125_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
void *variablenode_ns_0_i_2279_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_UINT32].memSize);
UA_init(variablenode_ns_0_i_2279_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2279_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityRejectedSessionCount");
attr.description = UA_LOCALIZEDTEXT("", "");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2279),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "SecurityRejectedSessionCount"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2279), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2275), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_125_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2279)
);
}


/* EnabledFlag - ns=0;i=2294 */

static UA_StatusCode function_ua_namespace0_126_begin(UA_Server *server, UA_UInt16* ns) {

UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
void *variablenode_ns_0_i_2294_variant_DataContents = UA_alloca(UA_TYPES[UA_TYPES_BOOLEAN].memSize);
UA_init(variablenode_ns_0_i_2294_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2294_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnabledFlag");
attr.description = UA_LOCALIZEDTEXT("", "If TRUE the diagnostics collection is enabled.");
attr.writeMask = 0;
attr.userWriteMask = 0;
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2294),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "EnabledFlag"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2294), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2274), false);
return retVal;
}

static UA_StatusCode function_ua_namespace0_126_finish(UA_Server *server, UA_UInt16* ns) {

return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2294)
);
}


UA_StatusCode ua_namespace0(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[1];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
retVal |= function_ua_namespace0_0_begin(server, ns);
retVal |= function_ua_namespace0_1_begin(server, ns);
retVal |= function_ua_namespace0_2_begin(server, ns);
retVal |= function_ua_namespace0_3_begin(server, ns);
retVal |= function_ua_namespace0_4_begin(server, ns);
retVal |= function_ua_namespace0_5_begin(server, ns);
retVal |= function_ua_namespace0_6_begin(server, ns);
retVal |= function_ua_namespace0_7_begin(server, ns);
retVal |= function_ua_namespace0_8_begin(server, ns);
retVal |= function_ua_namespace0_9_begin(server, ns);
retVal |= function_ua_namespace0_10_begin(server, ns);
retVal |= function_ua_namespace0_11_begin(server, ns);
retVal |= function_ua_namespace0_12_begin(server, ns);
retVal |= function_ua_namespace0_13_begin(server, ns);
retVal |= function_ua_namespace0_14_begin(server, ns);
retVal |= function_ua_namespace0_15_begin(server, ns);
retVal |= function_ua_namespace0_16_begin(server, ns);
retVal |= function_ua_namespace0_17_begin(server, ns);
retVal |= function_ua_namespace0_18_begin(server, ns);
retVal |= function_ua_namespace0_19_begin(server, ns);
retVal |= function_ua_namespace0_20_begin(server, ns);
retVal |= function_ua_namespace0_21_begin(server, ns);
retVal |= function_ua_namespace0_22_begin(server, ns);
retVal |= function_ua_namespace0_23_begin(server, ns);
retVal |= function_ua_namespace0_24_begin(server, ns);
retVal |= function_ua_namespace0_25_begin(server, ns);
retVal |= function_ua_namespace0_26_begin(server, ns);
retVal |= function_ua_namespace0_27_begin(server, ns);
retVal |= function_ua_namespace0_28_begin(server, ns);
retVal |= function_ua_namespace0_29_begin(server, ns);
retVal |= function_ua_namespace0_30_begin(server, ns);
retVal |= function_ua_namespace0_31_begin(server, ns);
retVal |= function_ua_namespace0_32_begin(server, ns);
retVal |= function_ua_namespace0_33_begin(server, ns);
retVal |= function_ua_namespace0_34_begin(server, ns);
retVal |= function_ua_namespace0_35_begin(server, ns);
retVal |= function_ua_namespace0_36_begin(server, ns);
retVal |= function_ua_namespace0_37_begin(server, ns);
retVal |= function_ua_namespace0_38_begin(server, ns);
retVal |= function_ua_namespace0_39_begin(server, ns);
retVal |= function_ua_namespace0_40_begin(server, ns);
retVal |= function_ua_namespace0_41_begin(server, ns);
retVal |= function_ua_namespace0_42_begin(server, ns);
retVal |= function_ua_namespace0_43_begin(server, ns);
retVal |= function_ua_namespace0_44_begin(server, ns);
retVal |= function_ua_namespace0_45_begin(server, ns);
retVal |= function_ua_namespace0_46_begin(server, ns);
retVal |= function_ua_namespace0_47_begin(server, ns);
retVal |= function_ua_namespace0_48_begin(server, ns);
retVal |= function_ua_namespace0_49_begin(server, ns);
retVal |= function_ua_namespace0_50_begin(server, ns);
retVal |= function_ua_namespace0_51_begin(server, ns);
retVal |= function_ua_namespace0_52_begin(server, ns);
retVal |= function_ua_namespace0_53_begin(server, ns);
retVal |= function_ua_namespace0_54_begin(server, ns);
retVal |= function_ua_namespace0_55_begin(server, ns);
retVal |= function_ua_namespace0_56_begin(server, ns);
retVal |= function_ua_namespace0_57_begin(server, ns);
retVal |= function_ua_namespace0_58_begin(server, ns);
retVal |= function_ua_namespace0_59_begin(server, ns);
retVal |= function_ua_namespace0_60_begin(server, ns);
retVal |= function_ua_namespace0_61_begin(server, ns);
retVal |= function_ua_namespace0_62_begin(server, ns);
retVal |= function_ua_namespace0_63_begin(server, ns);
retVal |= function_ua_namespace0_64_begin(server, ns);
retVal |= function_ua_namespace0_65_begin(server, ns);
retVal |= function_ua_namespace0_66_begin(server, ns);
retVal |= function_ua_namespace0_67_begin(server, ns);
retVal |= function_ua_namespace0_68_begin(server, ns);
retVal |= function_ua_namespace0_69_begin(server, ns);
retVal |= function_ua_namespace0_70_begin(server, ns);
retVal |= function_ua_namespace0_71_begin(server, ns);
retVal |= function_ua_namespace0_72_begin(server, ns);
retVal |= function_ua_namespace0_73_begin(server, ns);
retVal |= function_ua_namespace0_74_begin(server, ns);
retVal |= function_ua_namespace0_75_begin(server, ns);
retVal |= function_ua_namespace0_76_begin(server, ns);
retVal |= function_ua_namespace0_77_begin(server, ns);
retVal |= function_ua_namespace0_78_begin(server, ns);
retVal |= function_ua_namespace0_79_begin(server, ns);
retVal |= function_ua_namespace0_80_begin(server, ns);
retVal |= function_ua_namespace0_81_begin(server, ns);
retVal |= function_ua_namespace0_82_begin(server, ns);
retVal |= function_ua_namespace0_83_begin(server, ns);
retVal |= function_ua_namespace0_84_begin(server, ns);
retVal |= function_ua_namespace0_85_begin(server, ns);
retVal |= function_ua_namespace0_86_begin(server, ns);
retVal |= function_ua_namespace0_87_begin(server, ns);
retVal |= function_ua_namespace0_88_begin(server, ns);
retVal |= function_ua_namespace0_89_begin(server, ns);
retVal |= function_ua_namespace0_90_begin(server, ns);
retVal |= function_ua_namespace0_91_begin(server, ns);
retVal |= function_ua_namespace0_92_begin(server, ns);
retVal |= function_ua_namespace0_93_begin(server, ns);
retVal |= function_ua_namespace0_94_begin(server, ns);
retVal |= function_ua_namespace0_95_begin(server, ns);
retVal |= function_ua_namespace0_96_begin(server, ns);
retVal |= function_ua_namespace0_97_begin(server, ns);
retVal |= function_ua_namespace0_98_begin(server, ns);
retVal |= function_ua_namespace0_99_begin(server, ns);
retVal |= function_ua_namespace0_100_begin(server, ns);
retVal |= function_ua_namespace0_101_begin(server, ns);
retVal |= function_ua_namespace0_102_begin(server, ns);
retVal |= function_ua_namespace0_103_begin(server, ns);
retVal |= function_ua_namespace0_104_begin(server, ns);
retVal |= function_ua_namespace0_105_begin(server, ns);
retVal |= function_ua_namespace0_106_begin(server, ns);
retVal |= function_ua_namespace0_107_begin(server, ns);
retVal |= function_ua_namespace0_108_begin(server, ns);
retVal |= function_ua_namespace0_109_begin(server, ns);
retVal |= function_ua_namespace0_110_begin(server, ns);
retVal |= function_ua_namespace0_111_begin(server, ns);
retVal |= function_ua_namespace0_112_begin(server, ns);
retVal |= function_ua_namespace0_113_begin(server, ns);
retVal |= function_ua_namespace0_114_begin(server, ns);
retVal |= function_ua_namespace0_115_begin(server, ns);
retVal |= function_ua_namespace0_116_begin(server, ns);
retVal |= function_ua_namespace0_117_begin(server, ns);
retVal |= function_ua_namespace0_118_begin(server, ns);
retVal |= function_ua_namespace0_119_begin(server, ns);
retVal |= function_ua_namespace0_120_begin(server, ns);
retVal |= function_ua_namespace0_121_begin(server, ns);
retVal |= function_ua_namespace0_122_begin(server, ns);
retVal |= function_ua_namespace0_123_begin(server, ns);
retVal |= function_ua_namespace0_124_begin(server, ns);
retVal |= function_ua_namespace0_125_begin(server, ns);
retVal |= function_ua_namespace0_126_begin(server, ns);
retVal |= function_ua_namespace0_126_finish(server, ns);
retVal |= function_ua_namespace0_125_finish(server, ns);
retVal |= function_ua_namespace0_124_finish(server, ns);
retVal |= function_ua_namespace0_123_finish(server, ns);
retVal |= function_ua_namespace0_122_finish(server, ns);
retVal |= function_ua_namespace0_121_finish(server, ns);
retVal |= function_ua_namespace0_120_finish(server, ns);
retVal |= function_ua_namespace0_119_finish(server, ns);
retVal |= function_ua_namespace0_118_finish(server, ns);
retVal |= function_ua_namespace0_117_finish(server, ns);
retVal |= function_ua_namespace0_116_finish(server, ns);
retVal |= function_ua_namespace0_115_finish(server, ns);
retVal |= function_ua_namespace0_114_finish(server, ns);
retVal |= function_ua_namespace0_113_finish(server, ns);
retVal |= function_ua_namespace0_112_finish(server, ns);
retVal |= function_ua_namespace0_111_finish(server, ns);
retVal |= function_ua_namespace0_110_finish(server, ns);
retVal |= function_ua_namespace0_109_finish(server, ns);
retVal |= function_ua_namespace0_108_finish(server, ns);
retVal |= function_ua_namespace0_107_finish(server, ns);
retVal |= function_ua_namespace0_106_finish(server, ns);
retVal |= function_ua_namespace0_105_finish(server, ns);
retVal |= function_ua_namespace0_104_finish(server, ns);
retVal |= function_ua_namespace0_103_finish(server, ns);
retVal |= function_ua_namespace0_102_finish(server, ns);
retVal |= function_ua_namespace0_101_finish(server, ns);
retVal |= function_ua_namespace0_100_finish(server, ns);
retVal |= function_ua_namespace0_99_finish(server, ns);
retVal |= function_ua_namespace0_98_finish(server, ns);
retVal |= function_ua_namespace0_97_finish(server, ns);
retVal |= function_ua_namespace0_96_finish(server, ns);
retVal |= function_ua_namespace0_95_finish(server, ns);
retVal |= function_ua_namespace0_94_finish(server, ns);
retVal |= function_ua_namespace0_93_finish(server, ns);
retVal |= function_ua_namespace0_92_finish(server, ns);
retVal |= function_ua_namespace0_91_finish(server, ns);
retVal |= function_ua_namespace0_90_finish(server, ns);
retVal |= function_ua_namespace0_89_finish(server, ns);
retVal |= function_ua_namespace0_88_finish(server, ns);
retVal |= function_ua_namespace0_87_finish(server, ns);
retVal |= function_ua_namespace0_86_finish(server, ns);
retVal |= function_ua_namespace0_85_finish(server, ns);
retVal |= function_ua_namespace0_84_finish(server, ns);
retVal |= function_ua_namespace0_83_finish(server, ns);
retVal |= function_ua_namespace0_82_finish(server, ns);
retVal |= function_ua_namespace0_81_finish(server, ns);
retVal |= function_ua_namespace0_80_finish(server, ns);
retVal |= function_ua_namespace0_79_finish(server, ns);
retVal |= function_ua_namespace0_78_finish(server, ns);
retVal |= function_ua_namespace0_77_finish(server, ns);
retVal |= function_ua_namespace0_76_finish(server, ns);
retVal |= function_ua_namespace0_75_finish(server, ns);
retVal |= function_ua_namespace0_74_finish(server, ns);
retVal |= function_ua_namespace0_73_finish(server, ns);
retVal |= function_ua_namespace0_72_finish(server, ns);
retVal |= function_ua_namespace0_71_finish(server, ns);
retVal |= function_ua_namespace0_70_finish(server, ns);
retVal |= function_ua_namespace0_69_finish(server, ns);
retVal |= function_ua_namespace0_68_finish(server, ns);
retVal |= function_ua_namespace0_67_finish(server, ns);
retVal |= function_ua_namespace0_66_finish(server, ns);
retVal |= function_ua_namespace0_65_finish(server, ns);
retVal |= function_ua_namespace0_64_finish(server, ns);
retVal |= function_ua_namespace0_63_finish(server, ns);
retVal |= function_ua_namespace0_62_finish(server, ns);
retVal |= function_ua_namespace0_61_finish(server, ns);
retVal |= function_ua_namespace0_60_finish(server, ns);
retVal |= function_ua_namespace0_59_finish(server, ns);
retVal |= function_ua_namespace0_58_finish(server, ns);
retVal |= function_ua_namespace0_57_finish(server, ns);
retVal |= function_ua_namespace0_56_finish(server, ns);
retVal |= function_ua_namespace0_55_finish(server, ns);
retVal |= function_ua_namespace0_54_finish(server, ns);
retVal |= function_ua_namespace0_53_finish(server, ns);
retVal |= function_ua_namespace0_52_finish(server, ns);
retVal |= function_ua_namespace0_51_finish(server, ns);
retVal |= function_ua_namespace0_50_finish(server, ns);
retVal |= function_ua_namespace0_49_finish(server, ns);
retVal |= function_ua_namespace0_48_finish(server, ns);
retVal |= function_ua_namespace0_47_finish(server, ns);
retVal |= function_ua_namespace0_46_finish(server, ns);
retVal |= function_ua_namespace0_45_finish(server, ns);
retVal |= function_ua_namespace0_44_finish(server, ns);
retVal |= function_ua_namespace0_43_finish(server, ns);
retVal |= function_ua_namespace0_42_finish(server, ns);
retVal |= function_ua_namespace0_41_finish(server, ns);
retVal |= function_ua_namespace0_40_finish(server, ns);
retVal |= function_ua_namespace0_39_finish(server, ns);
retVal |= function_ua_namespace0_38_finish(server, ns);
retVal |= function_ua_namespace0_37_finish(server, ns);
retVal |= function_ua_namespace0_36_finish(server, ns);
retVal |= function_ua_namespace0_35_finish(server, ns);
retVal |= function_ua_namespace0_34_finish(server, ns);
retVal |= function_ua_namespace0_33_finish(server, ns);
retVal |= function_ua_namespace0_32_finish(server, ns);
retVal |= function_ua_namespace0_31_finish(server, ns);
retVal |= function_ua_namespace0_30_finish(server, ns);
retVal |= function_ua_namespace0_29_finish(server, ns);
retVal |= function_ua_namespace0_28_finish(server, ns);
retVal |= function_ua_namespace0_27_finish(server, ns);
retVal |= function_ua_namespace0_26_finish(server, ns);
retVal |= function_ua_namespace0_25_finish(server, ns);
retVal |= function_ua_namespace0_24_finish(server, ns);
retVal |= function_ua_namespace0_23_finish(server, ns);
retVal |= function_ua_namespace0_22_finish(server, ns);
retVal |= function_ua_namespace0_21_finish(server, ns);
retVal |= function_ua_namespace0_20_finish(server, ns);
retVal |= function_ua_namespace0_19_finish(server, ns);
retVal |= function_ua_namespace0_18_finish(server, ns);
retVal |= function_ua_namespace0_17_finish(server, ns);
retVal |= function_ua_namespace0_16_finish(server, ns);
retVal |= function_ua_namespace0_15_finish(server, ns);
retVal |= function_ua_namespace0_14_finish(server, ns);
retVal |= function_ua_namespace0_13_finish(server, ns);
retVal |= function_ua_namespace0_12_finish(server, ns);
retVal |= function_ua_namespace0_11_finish(server, ns);
retVal |= function_ua_namespace0_10_finish(server, ns);
retVal |= function_ua_namespace0_9_finish(server, ns);
retVal |= function_ua_namespace0_8_finish(server, ns);
retVal |= function_ua_namespace0_7_finish(server, ns);
retVal |= function_ua_namespace0_6_finish(server, ns);
retVal |= function_ua_namespace0_5_finish(server, ns);
retVal |= function_ua_namespace0_4_finish(server, ns);
retVal |= function_ua_namespace0_3_finish(server, ns);
retVal |= function_ua_namespace0_2_finish(server, ns);
retVal |= function_ua_namespace0_1_finish(server, ns);
retVal |= function_ua_namespace0_0_finish(server, ns);
return retVal;
}
