/* Generated from Opc.Ua.Types.bsd with script /home/wxg/open62541/tools/generate_datatypes.py
 * on host wxg-OMEN-by-HP-Laptop by user wxg at 2018-03-04 07:30:08 */

#include "ua_types_generated.h"

/* Boolean */
static UA_DataTypeMember Boolean_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* SByte */
static UA_DataTypeMember SByte_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_SBYTE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* Byte */
static UA_DataTypeMember Byte_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* Int16 */
static UA_DataTypeMember Int16_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT16, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* UInt16 */
static UA_DataTypeMember UInt16_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_UINT16, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* Int32 */
static UA_DataTypeMember Int32_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* UInt32 */
static UA_DataTypeMember UInt32_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* Int64 */
static UA_DataTypeMember Int64_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT64, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* UInt64 */
static UA_DataTypeMember UInt64_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_UINT64, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* Float */
static UA_DataTypeMember Float_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_FLOAT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* Double */
static UA_DataTypeMember Double_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* String */
static UA_DataTypeMember String_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* DateTime */
static UA_DataTypeMember DateTime_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* Guid */
static UA_DataTypeMember Guid_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_GUID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ByteString */
static UA_DataTypeMember ByteString_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* XmlElement */
static UA_DataTypeMember XmlElement_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* NodeId */
static UA_DataTypeMember NodeId_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ExpandedNodeId */
static UA_DataTypeMember ExpandedNodeId_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* StatusCode */
static UA_DataTypeMember StatusCode_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* QualifiedName */
static UA_DataTypeMember QualifiedName_members[2] = {
{
    UA_TYPENAME("namespaceIndex") /* .memberName */
    UA_TYPES_INT16, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("name") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_QualifiedName, name) - offsetof(UA_QualifiedName, namespaceIndex) - sizeof(UA_Int16), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* LocalizedText */
static UA_DataTypeMember LocalizedText_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ExtensionObject */
static UA_DataTypeMember ExtensionObject_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* DataValue */
static UA_DataTypeMember DataValue_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* Variant */
static UA_DataTypeMember Variant_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* DiagnosticInfo */
static UA_DataTypeMember DiagnosticInfo_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* SignedSoftwareCertificate */
static UA_DataTypeMember SignedSoftwareCertificate_members[2] = {
{
    UA_TYPENAME("certificateData") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("signature") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_SignedSoftwareCertificate, signature) - offsetof(UA_SignedSoftwareCertificate, certificateData) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* SemanticChangeStructureDataType */
static UA_DataTypeMember SemanticChangeStructureDataType_members[2] = {
{
    UA_TYPENAME("affected") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("affectedType") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SemanticChangeStructureDataType, affectedType) - offsetof(UA_SemanticChangeStructureDataType, affected) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* StatusChangeNotification */
static UA_DataTypeMember StatusChangeNotification_members[2] = {
{
    UA_TYPENAME("status") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfo") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_StatusChangeNotification, diagnosticInfo) - offsetof(UA_StatusChangeNotification, status) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* BrowsePathTarget */
static UA_DataTypeMember BrowsePathTarget_members[2] = {
{
    UA_TYPENAME("targetId") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("remainingPathIndex") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_BrowsePathTarget, remainingPathIndex) - offsetof(UA_BrowsePathTarget, targetId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ViewAttributes */
static UA_DataTypeMember ViewAttributes_members[7] = {
{
    UA_TYPENAME("specifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("displayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, displayName) - offsetof(UA_ViewAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, description) - offsetof(UA_ViewAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("writeMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, writeMask) - offsetof(UA_ViewAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("userWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, userWriteMask) - offsetof(UA_ViewAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("containsNoLoops") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, containsNoLoops) - offsetof(UA_ViewAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("eventNotifier") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, eventNotifier) - offsetof(UA_ViewAttributes, containsNoLoops) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* RequestHeader */
static UA_DataTypeMember RequestHeader_members[7] = {
{
    UA_TYPENAME("authenticationToken") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("timestamp") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, timestamp) - offsetof(UA_RequestHeader, authenticationToken) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("requestHandle") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, requestHandle) - offsetof(UA_RequestHeader, timestamp) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("returnDiagnostics") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, returnDiagnostics) - offsetof(UA_RequestHeader, requestHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("auditEntryId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, auditEntryId) - offsetof(UA_RequestHeader, returnDiagnostics) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("timeoutHint") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, timeoutHint) - offsetof(UA_RequestHeader, auditEntryId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("additionalHeader") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, additionalHeader) - offsetof(UA_RequestHeader, timeoutHint) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* MonitoredItemModifyResult */
static UA_DataTypeMember MonitoredItemModifyResult_members[4] = {
{
    UA_TYPENAME("statusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("revisedSamplingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemModifyResult, revisedSamplingInterval) - offsetof(UA_MonitoredItemModifyResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("revisedQueueSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemModifyResult, revisedQueueSize) - offsetof(UA_MonitoredItemModifyResult, revisedSamplingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("filterResult") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemModifyResult, filterResult) - offsetof(UA_MonitoredItemModifyResult, revisedQueueSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* CloseSecureChannelRequest */
static UA_DataTypeMember CloseSecureChannelRequest_members[1] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* AddNodesResult */
static UA_DataTypeMember AddNodesResult_members[2] = {
{
    UA_TYPENAME("statusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("addedNodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_AddNodesResult, addedNodeId) - offsetof(UA_AddNodesResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* VariableAttributes */
static UA_DataTypeMember VariableAttributes_members[13] = {
{
    UA_TYPENAME("specifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("displayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, displayName) - offsetof(UA_VariableAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, description) - offsetof(UA_VariableAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("writeMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, writeMask) - offsetof(UA_VariableAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("userWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, userWriteMask) - offsetof(UA_VariableAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("value") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, value) - offsetof(UA_VariableAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("dataType") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, dataType) - offsetof(UA_VariableAttributes, value) - sizeof(UA_Variant), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("valueRank") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, valueRank) - offsetof(UA_VariableAttributes, dataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("arrayDimensions") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, arrayDimensionsSize) - offsetof(UA_VariableAttributes, valueRank) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("accessLevel") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, accessLevel) - offsetof(UA_VariableAttributes, arrayDimensions) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("userAccessLevel") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, userAccessLevel) - offsetof(UA_VariableAttributes, accessLevel) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("minimumSamplingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, minimumSamplingInterval) - offsetof(UA_VariableAttributes, userAccessLevel) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("historizing") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, historizing) - offsetof(UA_VariableAttributes, minimumSamplingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* NotificationMessage */
static UA_DataTypeMember NotificationMessage_members[3] = {
{
    UA_TYPENAME("sequenceNumber") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("publishTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_NotificationMessage, publishTime) - offsetof(UA_NotificationMessage, sequenceNumber) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("notificationData") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_NotificationMessage, notificationDataSize) - offsetof(UA_NotificationMessage, publishTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* FindServersOnNetworkRequest */
static UA_DataTypeMember FindServersOnNetworkRequest_members[4] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("startingRecordId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_FindServersOnNetworkRequest, startingRecordId) - offsetof(UA_FindServersOnNetworkRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("maxRecordsToReturn") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_FindServersOnNetworkRequest, maxRecordsToReturn) - offsetof(UA_FindServersOnNetworkRequest, startingRecordId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("serverCapabilityFilter") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FindServersOnNetworkRequest, serverCapabilityFilterSize) - offsetof(UA_FindServersOnNetworkRequest, maxRecordsToReturn) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* EventFieldList */
static UA_DataTypeMember EventFieldList_members[2] = {
{
    UA_TYPENAME("clientHandle") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("eventFields") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_EventFieldList, eventFieldsSize) - offsetof(UA_EventFieldList, clientHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* MonitoringMode */
static UA_DataTypeMember MonitoringMode_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* MdnsDiscoveryConfiguration */
static UA_DataTypeMember MdnsDiscoveryConfiguration_members[2] = {
{
    UA_TYPENAME("mdnsServerName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("serverCapabilities") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_MdnsDiscoveryConfiguration, serverCapabilitiesSize) - offsetof(UA_MdnsDiscoveryConfiguration, mdnsServerName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* CallMethodResult */
static UA_DataTypeMember CallMethodResult_members[4] = {
{
    UA_TYPENAME("statusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("inputArgumentResults") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_CallMethodResult, inputArgumentResultsSize) - offsetof(UA_CallMethodResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("inputArgumentDiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_CallMethodResult, inputArgumentDiagnosticInfosSize) - offsetof(UA_CallMethodResult, inputArgumentResults) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("outputArguments") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_CallMethodResult, outputArgumentsSize) - offsetof(UA_CallMethodResult, inputArgumentDiagnosticInfos) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* ParsingResult */
static UA_DataTypeMember ParsingResult_members[3] = {
{
    UA_TYPENAME("statusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("dataStatusCodes") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_ParsingResult, dataStatusCodesSize) - offsetof(UA_ParsingResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("dataDiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ParsingResult, dataDiagnosticInfosSize) - offsetof(UA_ParsingResult, dataStatusCodes) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* RelativePathElement */
static UA_DataTypeMember RelativePathElement_members[4] = {
{
    UA_TYPENAME("referenceTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("isInverse") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_RelativePathElement, isInverse) - offsetof(UA_RelativePathElement, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("includeSubtypes") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_RelativePathElement, includeSubtypes) - offsetof(UA_RelativePathElement, isInverse) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("targetName") /* .memberName */
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_RelativePathElement, targetName) - offsetof(UA_RelativePathElement, includeSubtypes) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* BrowseDirection */
static UA_DataTypeMember BrowseDirection_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* CallMethodRequest */
static UA_DataTypeMember CallMethodRequest_members[3] = {
{
    UA_TYPENAME("objectId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("methodId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_CallMethodRequest, methodId) - offsetof(UA_CallMethodRequest, objectId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("inputArguments") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_CallMethodRequest, inputArgumentsSize) - offsetof(UA_CallMethodRequest, methodId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* RedundancySupport */
static UA_DataTypeMember RedundancySupport_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* EventNotificationList */
static UA_DataTypeMember EventNotificationList_members[1] = {
{
    UA_TYPENAME("events") /* .memberName */
    UA_TYPES_EVENTFIELDLIST, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* UnregisterNodesRequest */
static UA_DataTypeMember UnregisterNodesRequest_members[2] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("nodesToUnregister") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_UnregisterNodesRequest, nodesToUnregisterSize) - offsetof(UA_UnregisterNodesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* ContentFilterElementResult */
static UA_DataTypeMember ContentFilterElementResult_members[3] = {
{
    UA_TYPENAME("statusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("operandStatusCodes") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_ContentFilterElementResult, operandStatusCodesSize) - offsetof(UA_ContentFilterElementResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("operandDiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ContentFilterElementResult, operandDiagnosticInfosSize) - offsetof(UA_ContentFilterElementResult, operandStatusCodes) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* SimpleAttributeOperand */
static UA_DataTypeMember SimpleAttributeOperand_members[4] = {
{
    UA_TYPENAME("typeDefinitionId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("browsePath") /* .memberName */
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_SimpleAttributeOperand, browsePathSize) - offsetof(UA_SimpleAttributeOperand, typeDefinitionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("attributeId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SimpleAttributeOperand, attributeId) - offsetof(UA_SimpleAttributeOperand, browsePath) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("indexRange") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SimpleAttributeOperand, indexRange) - offsetof(UA_SimpleAttributeOperand, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* QueryDataSet */
static UA_DataTypeMember QueryDataSet_members[3] = {
{
    UA_TYPENAME("nodeId") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("typeDefinitionNode") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_QueryDataSet, typeDefinitionNode) - offsetof(UA_QueryDataSet, nodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("values") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_QueryDataSet, valuesSize) - offsetof(UA_QueryDataSet, typeDefinitionNode) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* AnonymousIdentityToken */
static UA_DataTypeMember AnonymousIdentityToken_members[1] = {
{
    UA_TYPENAME("policyId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* SetPublishingModeRequest */
static UA_DataTypeMember SetPublishingModeRequest_members[3] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("publishingEnabled") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetPublishingModeRequest, publishingEnabled) - offsetof(UA_SetPublishingModeRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("subscriptionIds") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetPublishingModeRequest, subscriptionIdsSize) - offsetof(UA_SetPublishingModeRequest, publishingEnabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* MonitoredItemCreateResult */
static UA_DataTypeMember MonitoredItemCreateResult_members[5] = {
{
    UA_TYPENAME("statusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("monitoredItemId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateResult, monitoredItemId) - offsetof(UA_MonitoredItemCreateResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("revisedSamplingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateResult, revisedSamplingInterval) - offsetof(UA_MonitoredItemCreateResult, monitoredItemId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("revisedQueueSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateResult, revisedQueueSize) - offsetof(UA_MonitoredItemCreateResult, revisedSamplingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("filterResult") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateResult, filterResult) - offsetof(UA_MonitoredItemCreateResult, revisedQueueSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* TimestampsToReturn */
static UA_DataTypeMember TimestampsToReturn_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* CallRequest */
static UA_DataTypeMember CallRequest_members[2] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("methodsToCall") /* .memberName */
    UA_TYPES_CALLMETHODREQUEST, /* .memberTypeIndex */
    offsetof(UA_CallRequest, methodsToCallSize) - offsetof(UA_CallRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* MethodAttributes */
static UA_DataTypeMember MethodAttributes_members[7] = {
{
    UA_TYPENAME("specifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("displayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, displayName) - offsetof(UA_MethodAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, description) - offsetof(UA_MethodAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("writeMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, writeMask) - offsetof(UA_MethodAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("userWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, userWriteMask) - offsetof(UA_MethodAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("executable") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, executable) - offsetof(UA_MethodAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("userExecutable") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, userExecutable) - offsetof(UA_MethodAttributes, executable) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* DeleteReferencesItem */
static UA_DataTypeMember DeleteReferencesItem_members[5] = {
{
    UA_TYPENAME("sourceNodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("referenceTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesItem, referenceTypeId) - offsetof(UA_DeleteReferencesItem, sourceNodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("isForward") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesItem, isForward) - offsetof(UA_DeleteReferencesItem, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("targetNodeId") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesItem, targetNodeId) - offsetof(UA_DeleteReferencesItem, isForward) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("deleteBidirectional") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesItem, deleteBidirectional) - offsetof(UA_DeleteReferencesItem, targetNodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* WriteValue */
static UA_DataTypeMember WriteValue_members[4] = {
{
    UA_TYPENAME("nodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("attributeId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_WriteValue, attributeId) - offsetof(UA_WriteValue, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("indexRange") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_WriteValue, indexRange) - offsetof(UA_WriteValue, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("value") /* .memberName */
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    offsetof(UA_WriteValue, value) - offsetof(UA_WriteValue, indexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* NodeAttributesMask */
static UA_DataTypeMember NodeAttributesMask_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* MessageSecurityMode */
static UA_DataTypeMember MessageSecurityMode_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* MonitoringParameters */
static UA_DataTypeMember MonitoringParameters_members[5] = {
{
    UA_TYPENAME("clientHandle") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("samplingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_MonitoringParameters, samplingInterval) - offsetof(UA_MonitoringParameters, clientHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("filter") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_MonitoringParameters, filter) - offsetof(UA_MonitoringParameters, samplingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("queueSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MonitoringParameters, queueSize) - offsetof(UA_MonitoringParameters, filter) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("discardOldest") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MonitoringParameters, discardOldest) - offsetof(UA_MonitoringParameters, queueSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ReferenceNode */
static UA_DataTypeMember ReferenceNode_members[3] = {
{
    UA_TYPENAME("referenceTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("isInverse") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReferenceNode, isInverse) - offsetof(UA_ReferenceNode, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("targetId") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_ReferenceNode, targetId) - offsetof(UA_ReferenceNode, isInverse) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* Argument */
static UA_DataTypeMember Argument_members[5] = {
{
    UA_TYPENAME("name") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("dataType") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_Argument, dataType) - offsetof(UA_Argument, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("valueRank") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_Argument, valueRank) - offsetof(UA_Argument, dataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("arrayDimensions") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_Argument, arrayDimensionsSize) - offsetof(UA_Argument, valueRank) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_Argument, description) - offsetof(UA_Argument, arrayDimensions) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ChannelSecurityToken */
static UA_DataTypeMember ChannelSecurityToken_members[4] = {
{
    UA_TYPENAME("channelId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("tokenId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ChannelSecurityToken, tokenId) - offsetof(UA_ChannelSecurityToken, channelId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("createdAt") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ChannelSecurityToken, createdAt) - offsetof(UA_ChannelSecurityToken, tokenId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("revisedLifetime") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ChannelSecurityToken, revisedLifetime) - offsetof(UA_ChannelSecurityToken, createdAt) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* UserIdentityToken */
static UA_DataTypeMember UserIdentityToken_members[1] = {
{
    UA_TYPENAME("policyId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* SignatureData */
static UA_DataTypeMember SignatureData_members[2] = {
{
    UA_TYPENAME("algorithm") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("signature") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_SignatureData, signature) - offsetof(UA_SignatureData, algorithm) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ObjectTypeAttributes */
static UA_DataTypeMember ObjectTypeAttributes_members[6] = {
{
    UA_TYPENAME("specifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("displayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, displayName) - offsetof(UA_ObjectTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, description) - offsetof(UA_ObjectTypeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("writeMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, writeMask) - offsetof(UA_ObjectTypeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("userWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, userWriteMask) - offsetof(UA_ObjectTypeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("isAbstract") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, isAbstract) - offsetof(UA_ObjectTypeAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* DeadbandType */
static UA_DataTypeMember DeadbandType_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* SecurityTokenRequestType */
static UA_DataTypeMember SecurityTokenRequestType_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* NodeAttributes */
static UA_DataTypeMember NodeAttributes_members[5] = {
{
    UA_TYPENAME("specifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("displayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_NodeAttributes, displayName) - offsetof(UA_NodeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_NodeAttributes, description) - offsetof(UA_NodeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("writeMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_NodeAttributes, writeMask) - offsetof(UA_NodeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("userWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_NodeAttributes, userWriteMask) - offsetof(UA_NodeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* DataChangeTrigger */
static UA_DataTypeMember DataChangeTrigger_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* BuildInfo */
static UA_DataTypeMember BuildInfo_members[6] = {
{
    UA_TYPENAME("productUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("manufacturerName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, manufacturerName) - offsetof(UA_BuildInfo, productUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("productName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, productName) - offsetof(UA_BuildInfo, manufacturerName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("softwareVersion") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, softwareVersion) - offsetof(UA_BuildInfo, productName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("buildNumber") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, buildNumber) - offsetof(UA_BuildInfo, softwareVersion) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("buildDate") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, buildDate) - offsetof(UA_BuildInfo, buildNumber) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* NodeClass */
static UA_DataTypeMember NodeClass_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* SubscriptionDiagnosticsDataType */
static UA_DataTypeMember SubscriptionDiagnosticsDataType_members[31] = {
{
    UA_TYPENAME("sessionId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("subscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, subscriptionId) - offsetof(UA_SubscriptionDiagnosticsDataType, sessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("priority") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, priority) - offsetof(UA_SubscriptionDiagnosticsDataType, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("publishingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, publishingInterval) - offsetof(UA_SubscriptionDiagnosticsDataType, priority) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("maxKeepAliveCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, maxKeepAliveCount) - offsetof(UA_SubscriptionDiagnosticsDataType, publishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("maxLifetimeCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, maxLifetimeCount) - offsetof(UA_SubscriptionDiagnosticsDataType, maxKeepAliveCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("maxNotificationsPerPublish") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, maxNotificationsPerPublish) - offsetof(UA_SubscriptionDiagnosticsDataType, maxLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("publishingEnabled") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, publishingEnabled) - offsetof(UA_SubscriptionDiagnosticsDataType, maxNotificationsPerPublish) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("modifyCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, modifyCount) - offsetof(UA_SubscriptionDiagnosticsDataType, publishingEnabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("enableCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, enableCount) - offsetof(UA_SubscriptionDiagnosticsDataType, modifyCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("disableCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, disableCount) - offsetof(UA_SubscriptionDiagnosticsDataType, enableCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("republishRequestCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, republishRequestCount) - offsetof(UA_SubscriptionDiagnosticsDataType, disableCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("republishMessageRequestCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, republishMessageRequestCount) - offsetof(UA_SubscriptionDiagnosticsDataType, republishRequestCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("republishMessageCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, republishMessageCount) - offsetof(UA_SubscriptionDiagnosticsDataType, republishMessageRequestCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("transferRequestCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, transferRequestCount) - offsetof(UA_SubscriptionDiagnosticsDataType, republishMessageCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("transferredToAltClientCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, transferredToAltClientCount) - offsetof(UA_SubscriptionDiagnosticsDataType, transferRequestCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("transferredToSameClientCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, transferredToSameClientCount) - offsetof(UA_SubscriptionDiagnosticsDataType, transferredToAltClientCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("publishRequestCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, publishRequestCount) - offsetof(UA_SubscriptionDiagnosticsDataType, transferredToSameClientCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("dataChangeNotificationsCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, dataChangeNotificationsCount) - offsetof(UA_SubscriptionDiagnosticsDataType, publishRequestCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("eventNotificationsCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, eventNotificationsCount) - offsetof(UA_SubscriptionDiagnosticsDataType, dataChangeNotificationsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("notificationsCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, notificationsCount) - offsetof(UA_SubscriptionDiagnosticsDataType, eventNotificationsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("latePublishRequestCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, latePublishRequestCount) - offsetof(UA_SubscriptionDiagnosticsDataType, notificationsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("currentKeepAliveCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, currentKeepAliveCount) - offsetof(UA_SubscriptionDiagnosticsDataType, latePublishRequestCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("currentLifetimeCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, currentLifetimeCount) - offsetof(UA_SubscriptionDiagnosticsDataType, currentKeepAliveCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("unacknowledgedMessageCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, unacknowledgedMessageCount) - offsetof(UA_SubscriptionDiagnosticsDataType, currentLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("discardedMessageCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, discardedMessageCount) - offsetof(UA_SubscriptionDiagnosticsDataType, unacknowledgedMessageCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("monitoredItemCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, monitoredItemCount) - offsetof(UA_SubscriptionDiagnosticsDataType, discardedMessageCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("disabledMonitoredItemCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, disabledMonitoredItemCount) - offsetof(UA_SubscriptionDiagnosticsDataType, monitoredItemCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("monitoringQueueOverflowCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, monitoringQueueOverflowCount) - offsetof(UA_SubscriptionDiagnosticsDataType, disabledMonitoredItemCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("nextSequenceNumber") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, nextSequenceNumber) - offsetof(UA_SubscriptionDiagnosticsDataType, monitoringQueueOverflowCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("eventQueueOverFlowCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, eventQueueOverFlowCount) - offsetof(UA_SubscriptionDiagnosticsDataType, nextSequenceNumber) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* FilterOperand */
#define FilterOperand_members NULL

/* MonitoredItemNotification */
static UA_DataTypeMember MonitoredItemNotification_members[2] = {
{
    UA_TYPENAME("clientHandle") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("value") /* .memberName */
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemNotification, value) - offsetof(UA_MonitoredItemNotification, clientHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* DeleteNodesItem */
static UA_DataTypeMember DeleteNodesItem_members[2] = {
{
    UA_TYPENAME("nodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("deleteTargetReferences") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DeleteNodesItem, deleteTargetReferences) - offsetof(UA_DeleteNodesItem, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* DeleteSubscriptionsRequest */
static UA_DataTypeMember DeleteSubscriptionsRequest_members[2] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("subscriptionIds") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DeleteSubscriptionsRequest, subscriptionIdsSize) - offsetof(UA_DeleteSubscriptionsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* SubscriptionAcknowledgement */
static UA_DataTypeMember SubscriptionAcknowledgement_members[2] = {
{
    UA_TYPENAME("subscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("sequenceNumber") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionAcknowledgement, sequenceNumber) - offsetof(UA_SubscriptionAcknowledgement, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ReadValueId */
static UA_DataTypeMember ReadValueId_members[4] = {
{
    UA_TYPENAME("nodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("attributeId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ReadValueId, attributeId) - offsetof(UA_ReadValueId, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("indexRange") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ReadValueId, indexRange) - offsetof(UA_ReadValueId, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("dataEncoding") /* .memberName */
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_ReadValueId, dataEncoding) - offsetof(UA_ReadValueId, indexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* DataTypeAttributes */
static UA_DataTypeMember DataTypeAttributes_members[6] = {
{
    UA_TYPENAME("specifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("displayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, displayName) - offsetof(UA_DataTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, description) - offsetof(UA_DataTypeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("writeMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, writeMask) - offsetof(UA_DataTypeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("userWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, userWriteMask) - offsetof(UA_DataTypeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("isAbstract") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, isAbstract) - offsetof(UA_DataTypeAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ResponseHeader */
static UA_DataTypeMember ResponseHeader_members[6] = {
{
    UA_TYPENAME("timestamp") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("requestHandle") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, requestHandle) - offsetof(UA_ResponseHeader, timestamp) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("serviceResult") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, serviceResult) - offsetof(UA_ResponseHeader, requestHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("serviceDiagnostics") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, serviceDiagnostics) - offsetof(UA_ResponseHeader, serviceResult) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("stringTable") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, stringTableSize) - offsetof(UA_ResponseHeader, serviceDiagnostics) - sizeof(UA_DiagnosticInfo), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("additionalHeader") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, additionalHeader) - offsetof(UA_ResponseHeader, stringTable) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* DeleteMonitoredItemsRequest */
static UA_DataTypeMember DeleteMonitoredItemsRequest_members[3] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("subscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DeleteMonitoredItemsRequest, subscriptionId) - offsetof(UA_DeleteMonitoredItemsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("monitoredItemIds") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DeleteMonitoredItemsRequest, monitoredItemIdsSize) - offsetof(UA_DeleteMonitoredItemsRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* ViewDescription */
static UA_DataTypeMember ViewDescription_members[3] = {
{
    UA_TYPENAME("viewId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("timestamp") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ViewDescription, timestamp) - offsetof(UA_ViewDescription, viewId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("viewVersion") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ViewDescription, viewVersion) - offsetof(UA_ViewDescription, timestamp) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ServerOnNetwork */
static UA_DataTypeMember ServerOnNetwork_members[4] = {
{
    UA_TYPENAME("recordId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("serverName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ServerOnNetwork, serverName) - offsetof(UA_ServerOnNetwork, recordId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("discoveryUrl") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ServerOnNetwork, discoveryUrl) - offsetof(UA_ServerOnNetwork, serverName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("serverCapabilities") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ServerOnNetwork, serverCapabilitiesSize) - offsetof(UA_ServerOnNetwork, discoveryUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* DeleteMonitoredItemsResponse */
static UA_DataTypeMember DeleteMonitoredItemsResponse_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_DeleteMonitoredItemsResponse, resultsSize) - offsetof(UA_DeleteMonitoredItemsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DeleteMonitoredItemsResponse, diagnosticInfosSize) - offsetof(UA_DeleteMonitoredItemsResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* FindServersOnNetworkResponse */
static UA_DataTypeMember FindServersOnNetworkResponse_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("lastCounterResetTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_FindServersOnNetworkResponse, lastCounterResetTime) - offsetof(UA_FindServersOnNetworkResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("servers") /* .memberName */
    UA_TYPES_SERVERONNETWORK, /* .memberTypeIndex */
    offsetof(UA_FindServersOnNetworkResponse, serversSize) - offsetof(UA_FindServersOnNetworkResponse, lastCounterResetTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* RelativePath */
static UA_DataTypeMember RelativePath_members[1] = {
{
    UA_TYPENAME("elements") /* .memberName */
    UA_TYPES_RELATIVEPATHELEMENT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* RegisterNodesRequest */
static UA_DataTypeMember RegisterNodesRequest_members[2] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("nodesToRegister") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_RegisterNodesRequest, nodesToRegisterSize) - offsetof(UA_RegisterNodesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* AggregateConfiguration */
static UA_DataTypeMember AggregateConfiguration_members[5] = {
{
    UA_TYPENAME("useServerCapabilitiesDefaults") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("treatUncertainAsBad") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_AggregateConfiguration, treatUncertainAsBad) - offsetof(UA_AggregateConfiguration, useServerCapabilitiesDefaults) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("percentDataBad") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_AggregateConfiguration, percentDataBad) - offsetof(UA_AggregateConfiguration, treatUncertainAsBad) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("percentDataGood") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_AggregateConfiguration, percentDataGood) - offsetof(UA_AggregateConfiguration, percentDataBad) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("useSlopedExtrapolation") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_AggregateConfiguration, useSlopedExtrapolation) - offsetof(UA_AggregateConfiguration, percentDataGood) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* DeleteNodesRequest */
static UA_DataTypeMember DeleteNodesRequest_members[2] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("nodesToDelete") /* .memberName */
    UA_TYPES_DELETENODESITEM, /* .memberTypeIndex */
    offsetof(UA_DeleteNodesRequest, nodesToDeleteSize) - offsetof(UA_DeleteNodesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* PublishResponse */
static UA_DataTypeMember PublishResponse_members[7] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("subscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, subscriptionId) - offsetof(UA_PublishResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("availableSequenceNumbers") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, availableSequenceNumbersSize) - offsetof(UA_PublishResponse, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("moreNotifications") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, moreNotifications) - offsetof(UA_PublishResponse, availableSequenceNumbers) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("notificationMessage") /* .memberName */
    UA_TYPES_NOTIFICATIONMESSAGE, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, notificationMessage) - offsetof(UA_PublishResponse, moreNotifications) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, resultsSize) - offsetof(UA_PublishResponse, notificationMessage) - sizeof(UA_NotificationMessage), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, diagnosticInfosSize) - offsetof(UA_PublishResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* MonitoredItemModifyRequest */
static UA_DataTypeMember MonitoredItemModifyRequest_members[2] = {
{
    UA_TYPENAME("monitoredItemId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("requestedParameters") /* .memberName */
    UA_TYPES_MONITORINGPARAMETERS, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemModifyRequest, requestedParameters) - offsetof(UA_MonitoredItemModifyRequest, monitoredItemId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ServiceCounterDataType */
static UA_DataTypeMember ServiceCounterDataType_members[2] = {
{
    UA_TYPENAME("totalCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("errorCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServiceCounterDataType, errorCount) - offsetof(UA_ServiceCounterDataType, totalCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ModelChangeStructureDataType */
static UA_DataTypeMember ModelChangeStructureDataType_members[3] = {
{
    UA_TYPENAME("affected") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("affectedType") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_ModelChangeStructureDataType, affectedType) - offsetof(UA_ModelChangeStructureDataType, affected) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("verb") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_ModelChangeStructureDataType, verb) - offsetof(UA_ModelChangeStructureDataType, affectedType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* UserNameIdentityToken */
static UA_DataTypeMember UserNameIdentityToken_members[4] = {
{
    UA_TYPENAME("policyId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("userName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserNameIdentityToken, userName) - offsetof(UA_UserNameIdentityToken, policyId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("password") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_UserNameIdentityToken, password) - offsetof(UA_UserNameIdentityToken, userName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("encryptionAlgorithm") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserNameIdentityToken, encryptionAlgorithm) - offsetof(UA_UserNameIdentityToken, password) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* IdType */
static UA_DataTypeMember IdType_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* UserTokenType */
static UA_DataTypeMember UserTokenType_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* SetTriggeringResponse */
static UA_DataTypeMember SetTriggeringResponse_members[5] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("addResults") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringResponse, addResultsSize) - offsetof(UA_SetTriggeringResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("addDiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringResponse, addDiagnosticInfosSize) - offsetof(UA_SetTriggeringResponse, addResults) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("removeResults") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringResponse, removeResultsSize) - offsetof(UA_SetTriggeringResponse, addDiagnosticInfos) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("removeDiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringResponse, removeDiagnosticInfosSize) - offsetof(UA_SetTriggeringResponse, removeResults) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* TimeZoneDataType */
static UA_DataTypeMember TimeZoneDataType_members[2] = {
{
    UA_TYPENAME("offset") /* .memberName */
    UA_TYPES_INT16, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("daylightSavingInOffset") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_TimeZoneDataType, daylightSavingInOffset) - offsetof(UA_TimeZoneDataType, offset) - sizeof(UA_Int16), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ActivateSessionRequest */
static UA_DataTypeMember ActivateSessionRequest_members[6] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("clientSignature") /* .memberName */
    UA_TYPES_SIGNATUREDATA, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, clientSignature) - offsetof(UA_ActivateSessionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("clientSoftwareCertificates") /* .memberName */
    UA_TYPES_SIGNEDSOFTWARECERTIFICATE, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, clientSoftwareCertificatesSize) - offsetof(UA_ActivateSessionRequest, clientSignature) - sizeof(UA_SignatureData), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("localeIds") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, localeIdsSize) - offsetof(UA_ActivateSessionRequest, clientSoftwareCertificates) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("userIdentityToken") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, userIdentityToken) - offsetof(UA_ActivateSessionRequest, localeIds) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("userTokenSignature") /* .memberName */
    UA_TYPES_SIGNATUREDATA, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, userTokenSignature) - offsetof(UA_ActivateSessionRequest, userIdentityToken) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* OpenSecureChannelResponse */
static UA_DataTypeMember OpenSecureChannelResponse_members[4] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("serverProtocolVersion") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelResponse, serverProtocolVersion) - offsetof(UA_OpenSecureChannelResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("securityToken") /* .memberName */
    UA_TYPES_CHANNELSECURITYTOKEN, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelResponse, securityToken) - offsetof(UA_OpenSecureChannelResponse, serverProtocolVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("serverNonce") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelResponse, serverNonce) - offsetof(UA_OpenSecureChannelResponse, securityToken) - sizeof(UA_ChannelSecurityToken), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ApplicationType */
static UA_DataTypeMember ApplicationType_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ServerState */
static UA_DataTypeMember ServerState_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* QueryNextResponse */
static UA_DataTypeMember QueryNextResponse_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("queryDataSets") /* .memberName */
    UA_TYPES_QUERYDATASET, /* .memberTypeIndex */
    offsetof(UA_QueryNextResponse, queryDataSetsSize) - offsetof(UA_QueryNextResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("revisedContinuationPoint") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_QueryNextResponse, revisedContinuationPoint) - offsetof(UA_QueryNextResponse, queryDataSets) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* DiscoveryConfiguration */
#define DiscoveryConfiguration_members NULL

/* ActivateSessionResponse */
static UA_DataTypeMember ActivateSessionResponse_members[4] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("serverNonce") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionResponse, serverNonce) - offsetof(UA_ActivateSessionResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionResponse, resultsSize) - offsetof(UA_ActivateSessionResponse, serverNonce) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionResponse, diagnosticInfosSize) - offsetof(UA_ActivateSessionResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* EndpointUrlListDataType */
static UA_DataTypeMember EndpointUrlListDataType_members[1] = {
{
    UA_TYPENAME("endpointUrlList") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* FilterOperator */
static UA_DataTypeMember FilterOperator_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* QueryNextRequest */
static UA_DataTypeMember QueryNextRequest_members[3] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("releaseContinuationPoint") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_QueryNextRequest, releaseContinuationPoint) - offsetof(UA_QueryNextRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("continuationPoint") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_QueryNextRequest, continuationPoint) - offsetof(UA_QueryNextRequest, releaseContinuationPoint) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* WriteResponse */
static UA_DataTypeMember WriteResponse_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_WriteResponse, resultsSize) - offsetof(UA_WriteResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_WriteResponse, diagnosticInfosSize) - offsetof(UA_WriteResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* BrowseNextRequest */
static UA_DataTypeMember BrowseNextRequest_members[3] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("releaseContinuationPoints") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_BrowseNextRequest, releaseContinuationPoints) - offsetof(UA_BrowseNextRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("continuationPoints") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_BrowseNextRequest, continuationPointsSize) - offsetof(UA_BrowseNextRequest, releaseContinuationPoints) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* CreateSubscriptionRequest */
static UA_DataTypeMember CreateSubscriptionRequest_members[7] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("requestedPublishingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, requestedPublishingInterval) - offsetof(UA_CreateSubscriptionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("requestedLifetimeCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, requestedLifetimeCount) - offsetof(UA_CreateSubscriptionRequest, requestedPublishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("requestedMaxKeepAliveCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, requestedMaxKeepAliveCount) - offsetof(UA_CreateSubscriptionRequest, requestedLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("maxNotificationsPerPublish") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, maxNotificationsPerPublish) - offsetof(UA_CreateSubscriptionRequest, requestedMaxKeepAliveCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("publishingEnabled") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, publishingEnabled) - offsetof(UA_CreateSubscriptionRequest, maxNotificationsPerPublish) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("priority") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, priority) - offsetof(UA_CreateSubscriptionRequest, publishingEnabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* VariableTypeAttributes */
static UA_DataTypeMember VariableTypeAttributes_members[10] = {
{
    UA_TYPENAME("specifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("displayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, displayName) - offsetof(UA_VariableTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, description) - offsetof(UA_VariableTypeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("writeMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, writeMask) - offsetof(UA_VariableTypeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("userWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, userWriteMask) - offsetof(UA_VariableTypeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("value") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, value) - offsetof(UA_VariableTypeAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("dataType") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, dataType) - offsetof(UA_VariableTypeAttributes, value) - sizeof(UA_Variant), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("valueRank") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, valueRank) - offsetof(UA_VariableTypeAttributes, dataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("arrayDimensions") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, arrayDimensionsSize) - offsetof(UA_VariableTypeAttributes, valueRank) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("isAbstract") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, isAbstract) - offsetof(UA_VariableTypeAttributes, arrayDimensions) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* BrowsePathResult */
static UA_DataTypeMember BrowsePathResult_members[2] = {
{
    UA_TYPENAME("statusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("targets") /* .memberName */
    UA_TYPES_BROWSEPATHTARGET, /* .memberTypeIndex */
    offsetof(UA_BrowsePathResult, targetsSize) - offsetof(UA_BrowsePathResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* ModifySubscriptionResponse */
static UA_DataTypeMember ModifySubscriptionResponse_members[4] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("revisedPublishingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionResponse, revisedPublishingInterval) - offsetof(UA_ModifySubscriptionResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("revisedLifetimeCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionResponse, revisedLifetimeCount) - offsetof(UA_ModifySubscriptionResponse, revisedPublishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("revisedMaxKeepAliveCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionResponse, revisedMaxKeepAliveCount) - offsetof(UA_ModifySubscriptionResponse, revisedLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* RedundantServerDataType */
static UA_DataTypeMember RedundantServerDataType_members[3] = {
{
    UA_TYPENAME("serverId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("serviceLevel") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_RedundantServerDataType, serviceLevel) - offsetof(UA_RedundantServerDataType, serverId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("serverState") /* .memberName */
    UA_TYPES_SERVERSTATE, /* .memberTypeIndex */
    offsetof(UA_RedundantServerDataType, serverState) - offsetof(UA_RedundantServerDataType, serviceLevel) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* RegisterNodesResponse */
static UA_DataTypeMember RegisterNodesResponse_members[2] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("registeredNodeIds") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_RegisterNodesResponse, registeredNodeIdsSize) - offsetof(UA_RegisterNodesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* CloseSessionRequest */
static UA_DataTypeMember CloseSessionRequest_members[2] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("deleteSubscriptions") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CloseSessionRequest, deleteSubscriptions) - offsetof(UA_CloseSessionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ModifyMonitoredItemsResponse */
static UA_DataTypeMember ModifyMonitoredItemsResponse_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("results") /* .memberName */
    UA_TYPES_MONITOREDITEMMODIFYRESULT, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsResponse, resultsSize) - offsetof(UA_ModifyMonitoredItemsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsResponse, diagnosticInfosSize) - offsetof(UA_ModifyMonitoredItemsResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* ModifySubscriptionRequest */
static UA_DataTypeMember ModifySubscriptionRequest_members[7] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("subscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, subscriptionId) - offsetof(UA_ModifySubscriptionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("requestedPublishingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, requestedPublishingInterval) - offsetof(UA_ModifySubscriptionRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("requestedLifetimeCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, requestedLifetimeCount) - offsetof(UA_ModifySubscriptionRequest, requestedPublishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("requestedMaxKeepAliveCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, requestedMaxKeepAliveCount) - offsetof(UA_ModifySubscriptionRequest, requestedLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("maxNotificationsPerPublish") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, maxNotificationsPerPublish) - offsetof(UA_ModifySubscriptionRequest, requestedMaxKeepAliveCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("priority") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, priority) - offsetof(UA_ModifySubscriptionRequest, maxNotificationsPerPublish) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ServerDiagnosticsSummaryDataType */
static UA_DataTypeMember ServerDiagnosticsSummaryDataType_members[12] = {
{
    UA_TYPENAME("serverViewCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("currentSessionCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, currentSessionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, serverViewCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("cumulatedSessionCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSessionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, currentSessionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("securityRejectedSessionCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedSessionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSessionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("rejectedSessionCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, rejectedSessionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedSessionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("sessionTimeoutCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, sessionTimeoutCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, rejectedSessionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("sessionAbortCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, sessionAbortCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, sessionTimeoutCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("currentSubscriptionCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, currentSubscriptionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, sessionAbortCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("cumulatedSubscriptionCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSubscriptionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, currentSubscriptionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("publishingIntervalCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, publishingIntervalCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSubscriptionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("securityRejectedRequestsCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedRequestsCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, publishingIntervalCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("rejectedRequestsCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, rejectedRequestsCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedRequestsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* UserTokenPolicy */
static UA_DataTypeMember UserTokenPolicy_members[5] = {
{
    UA_TYPENAME("policyId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("tokenType") /* .memberName */
    UA_TYPES_USERTOKENTYPE, /* .memberTypeIndex */
    offsetof(UA_UserTokenPolicy, tokenType) - offsetof(UA_UserTokenPolicy, policyId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("issuedTokenType") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserTokenPolicy, issuedTokenType) - offsetof(UA_UserTokenPolicy, tokenType) - sizeof(UA_UserTokenType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("issuerEndpointUrl") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserTokenPolicy, issuerEndpointUrl) - offsetof(UA_UserTokenPolicy, issuedTokenType) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("securityPolicyUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserTokenPolicy, securityPolicyUri) - offsetof(UA_UserTokenPolicy, issuerEndpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ReferenceTypeAttributes */
static UA_DataTypeMember ReferenceTypeAttributes_members[8] = {
{
    UA_TYPENAME("specifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("displayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, displayName) - offsetof(UA_ReferenceTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, description) - offsetof(UA_ReferenceTypeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("writeMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, writeMask) - offsetof(UA_ReferenceTypeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("userWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, userWriteMask) - offsetof(UA_ReferenceTypeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("isAbstract") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, isAbstract) - offsetof(UA_ReferenceTypeAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("symmetric") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, symmetric) - offsetof(UA_ReferenceTypeAttributes, isAbstract) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("inverseName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, inverseName) - offsetof(UA_ReferenceTypeAttributes, symmetric) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* BrowsePath */
static UA_DataTypeMember BrowsePath_members[2] = {
{
    UA_TYPENAME("startingNode") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("relativePath") /* .memberName */
    UA_TYPES_RELATIVEPATH, /* .memberTypeIndex */
    offsetof(UA_BrowsePath, relativePath) - offsetof(UA_BrowsePath, startingNode) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* SetMonitoringModeRequest */
static UA_DataTypeMember SetMonitoringModeRequest_members[4] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("subscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeRequest, subscriptionId) - offsetof(UA_SetMonitoringModeRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("monitoringMode") /* .memberName */
    UA_TYPES_MONITORINGMODE, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeRequest, monitoringMode) - offsetof(UA_SetMonitoringModeRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("monitoredItemIds") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeRequest, monitoredItemIdsSize) - offsetof(UA_SetMonitoringModeRequest, monitoringMode) - sizeof(UA_MonitoringMode), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* UnregisterNodesResponse */
static UA_DataTypeMember UnregisterNodesResponse_members[1] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* WriteRequest */
static UA_DataTypeMember WriteRequest_members[2] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("nodesToWrite") /* .memberName */
    UA_TYPES_WRITEVALUE, /* .memberTypeIndex */
    offsetof(UA_WriteRequest, nodesToWriteSize) - offsetof(UA_WriteRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* ObjectAttributes */
static UA_DataTypeMember ObjectAttributes_members[6] = {
{
    UA_TYPENAME("specifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("displayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, displayName) - offsetof(UA_ObjectAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, description) - offsetof(UA_ObjectAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("writeMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, writeMask) - offsetof(UA_ObjectAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("userWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, userWriteMask) - offsetof(UA_ObjectAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("eventNotifier") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, eventNotifier) - offsetof(UA_ObjectAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* BrowseResultMask */
static UA_DataTypeMember BrowseResultMask_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* BrowseDescription */
static UA_DataTypeMember BrowseDescription_members[6] = {
{
    UA_TYPENAME("nodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("browseDirection") /* .memberName */
    UA_TYPES_BROWSEDIRECTION, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, browseDirection) - offsetof(UA_BrowseDescription, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("referenceTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, referenceTypeId) - offsetof(UA_BrowseDescription, browseDirection) - sizeof(UA_BrowseDirection), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("includeSubtypes") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, includeSubtypes) - offsetof(UA_BrowseDescription, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("nodeClassMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, nodeClassMask) - offsetof(UA_BrowseDescription, includeSubtypes) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("resultMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, resultMask) - offsetof(UA_BrowseDescription, nodeClassMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* SetTriggeringRequest */
static UA_DataTypeMember SetTriggeringRequest_members[5] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("subscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringRequest, subscriptionId) - offsetof(UA_SetTriggeringRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("triggeringItemId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringRequest, triggeringItemId) - offsetof(UA_SetTriggeringRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("linksToAdd") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringRequest, linksToAddSize) - offsetof(UA_SetTriggeringRequest, triggeringItemId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("linksToRemove") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringRequest, linksToRemoveSize) - offsetof(UA_SetTriggeringRequest, linksToAdd) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* SessionSecurityDiagnosticsDataType */
static UA_DataTypeMember SessionSecurityDiagnosticsDataType_members[9] = {
{
    UA_TYPENAME("sessionId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("clientUserIdOfSession") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, clientUserIdOfSession) - offsetof(UA_SessionSecurityDiagnosticsDataType, sessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("clientUserIdHistory") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, clientUserIdHistorySize) - offsetof(UA_SessionSecurityDiagnosticsDataType, clientUserIdOfSession) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("authenticationMechanism") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, authenticationMechanism) - offsetof(UA_SessionSecurityDiagnosticsDataType, clientUserIdHistory) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("encoding") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, encoding) - offsetof(UA_SessionSecurityDiagnosticsDataType, authenticationMechanism) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("transportProtocol") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, transportProtocol) - offsetof(UA_SessionSecurityDiagnosticsDataType, encoding) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("securityMode") /* .memberName */
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, securityMode) - offsetof(UA_SessionSecurityDiagnosticsDataType, transportProtocol) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("securityPolicyUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, securityPolicyUri) - offsetof(UA_SessionSecurityDiagnosticsDataType, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("clientCertificate") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, clientCertificate) - offsetof(UA_SessionSecurityDiagnosticsDataType, securityPolicyUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* RepublishRequest */
static UA_DataTypeMember RepublishRequest_members[3] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("subscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RepublishRequest, subscriptionId) - offsetof(UA_RepublishRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("retransmitSequenceNumber") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RepublishRequest, retransmitSequenceNumber) - offsetof(UA_RepublishRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* GetEndpointsRequest */
static UA_DataTypeMember GetEndpointsRequest_members[4] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("endpointUrl") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_GetEndpointsRequest, endpointUrl) - offsetof(UA_GetEndpointsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("localeIds") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_GetEndpointsRequest, localeIdsSize) - offsetof(UA_GetEndpointsRequest, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("profileUris") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_GetEndpointsRequest, profileUrisSize) - offsetof(UA_GetEndpointsRequest, localeIds) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* PublishRequest */
static UA_DataTypeMember PublishRequest_members[2] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("subscriptionAcknowledgements") /* .memberName */
    UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT, /* .memberTypeIndex */
    offsetof(UA_PublishRequest, subscriptionAcknowledgementsSize) - offsetof(UA_PublishRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* DeleteSubscriptionsResponse */
static UA_DataTypeMember DeleteSubscriptionsResponse_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_DeleteSubscriptionsResponse, resultsSize) - offsetof(UA_DeleteSubscriptionsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DeleteSubscriptionsResponse, diagnosticInfosSize) - offsetof(UA_DeleteSubscriptionsResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* AddNodesResponse */
static UA_DataTypeMember AddNodesResponse_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("results") /* .memberName */
    UA_TYPES_ADDNODESRESULT, /* .memberTypeIndex */
    offsetof(UA_AddNodesResponse, resultsSize) - offsetof(UA_AddNodesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_AddNodesResponse, diagnosticInfosSize) - offsetof(UA_AddNodesResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* DataChangeNotification */
static UA_DataTypeMember DataChangeNotification_members[2] = {
{
    UA_TYPENAME("monitoredItems") /* .memberName */
    UA_TYPES_MONITOREDITEMNOTIFICATION, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DataChangeNotification, diagnosticInfosSize) - offsetof(UA_DataChangeNotification, monitoredItems) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* CloseSecureChannelResponse */
static UA_DataTypeMember CloseSecureChannelResponse_members[1] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ModifyMonitoredItemsRequest */
static UA_DataTypeMember ModifyMonitoredItemsRequest_members[4] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("subscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsRequest, subscriptionId) - offsetof(UA_ModifyMonitoredItemsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("timestampsToReturn") /* .memberName */
    UA_TYPES_TIMESTAMPSTORETURN, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsRequest, timestampsToReturn) - offsetof(UA_ModifyMonitoredItemsRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("itemsToModify") /* .memberName */
    UA_TYPES_MONITOREDITEMMODIFYREQUEST, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsRequest, itemsToModifySize) - offsetof(UA_ModifyMonitoredItemsRequest, timestampsToReturn) - sizeof(UA_TimestampsToReturn), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* SetMonitoringModeResponse */
static UA_DataTypeMember SetMonitoringModeResponse_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeResponse, resultsSize) - offsetof(UA_SetMonitoringModeResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeResponse, diagnosticInfosSize) - offsetof(UA_SetMonitoringModeResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* FindServersRequest */
static UA_DataTypeMember FindServersRequest_members[4] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("endpointUrl") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FindServersRequest, endpointUrl) - offsetof(UA_FindServersRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("localeIds") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FindServersRequest, localeIdsSize) - offsetof(UA_FindServersRequest, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("serverUris") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FindServersRequest, serverUrisSize) - offsetof(UA_FindServersRequest, localeIds) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* ReferenceDescription */
static UA_DataTypeMember ReferenceDescription_members[7] = {
{
    UA_TYPENAME("referenceTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("isForward") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, isForward) - offsetof(UA_ReferenceDescription, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("nodeId") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, nodeId) - offsetof(UA_ReferenceDescription, isForward) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("browseName") /* .memberName */
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, browseName) - offsetof(UA_ReferenceDescription, nodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("displayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, displayName) - offsetof(UA_ReferenceDescription, browseName) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("nodeClass") /* .memberName */
    UA_TYPES_NODECLASS, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, nodeClass) - offsetof(UA_ReferenceDescription, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("typeDefinition") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, typeDefinition) - offsetof(UA_ReferenceDescription, nodeClass) - sizeof(UA_NodeClass), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* SetPublishingModeResponse */
static UA_DataTypeMember SetPublishingModeResponse_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_SetPublishingModeResponse, resultsSize) - offsetof(UA_SetPublishingModeResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_SetPublishingModeResponse, diagnosticInfosSize) - offsetof(UA_SetPublishingModeResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* ContentFilterResult */
static UA_DataTypeMember ContentFilterResult_members[2] = {
{
    UA_TYPENAME("elementResults") /* .memberName */
    UA_TYPES_CONTENTFILTERELEMENTRESULT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("elementDiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ContentFilterResult, elementDiagnosticInfosSize) - offsetof(UA_ContentFilterResult, elementResults) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* RegisterServerResponse */
static UA_DataTypeMember RegisterServerResponse_members[1] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* AddReferencesItem */
static UA_DataTypeMember AddReferencesItem_members[6] = {
{
    UA_TYPENAME("sourceNodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("referenceTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, referenceTypeId) - offsetof(UA_AddReferencesItem, sourceNodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("isForward") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, isForward) - offsetof(UA_AddReferencesItem, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("targetServerUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, targetServerUri) - offsetof(UA_AddReferencesItem, isForward) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("targetNodeId") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, targetNodeId) - offsetof(UA_AddReferencesItem, targetServerUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("targetNodeClass") /* .memberName */
    UA_TYPES_NODECLASS, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, targetNodeClass) - offsetof(UA_AddReferencesItem, targetNodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* QueryDataDescription */
static UA_DataTypeMember QueryDataDescription_members[3] = {
{
    UA_TYPENAME("relativePath") /* .memberName */
    UA_TYPES_RELATIVEPATH, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("attributeId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_QueryDataDescription, attributeId) - offsetof(UA_QueryDataDescription, relativePath) - sizeof(UA_RelativePath), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("indexRange") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_QueryDataDescription, indexRange) - offsetof(UA_QueryDataDescription, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* CreateSubscriptionResponse */
static UA_DataTypeMember CreateSubscriptionResponse_members[5] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("subscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionResponse, subscriptionId) - offsetof(UA_CreateSubscriptionResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("revisedPublishingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionResponse, revisedPublishingInterval) - offsetof(UA_CreateSubscriptionResponse, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("revisedLifetimeCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionResponse, revisedLifetimeCount) - offsetof(UA_CreateSubscriptionResponse, revisedPublishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("revisedMaxKeepAliveCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionResponse, revisedMaxKeepAliveCount) - offsetof(UA_CreateSubscriptionResponse, revisedLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* NetworkGroupDataType */
static UA_DataTypeMember NetworkGroupDataType_members[2] = {
{
    UA_TYPENAME("serverUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("networkPaths") /* .memberName */
    UA_TYPES_ENDPOINTURLLISTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_NetworkGroupDataType, networkPathsSize) - offsetof(UA_NetworkGroupDataType, serverUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* DeleteReferencesResponse */
static UA_DataTypeMember DeleteReferencesResponse_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesResponse, resultsSize) - offsetof(UA_DeleteReferencesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesResponse, diagnosticInfosSize) - offsetof(UA_DeleteReferencesResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* CreateMonitoredItemsResponse */
static UA_DataTypeMember CreateMonitoredItemsResponse_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("results") /* .memberName */
    UA_TYPES_MONITOREDITEMCREATERESULT, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsResponse, resultsSize) - offsetof(UA_CreateMonitoredItemsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsResponse, diagnosticInfosSize) - offsetof(UA_CreateMonitoredItemsResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* CallResponse */
static UA_DataTypeMember CallResponse_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("results") /* .memberName */
    UA_TYPES_CALLMETHODRESULT, /* .memberTypeIndex */
    offsetof(UA_CallResponse, resultsSize) - offsetof(UA_CallResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_CallResponse, diagnosticInfosSize) - offsetof(UA_CallResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* DeleteNodesResponse */
static UA_DataTypeMember DeleteNodesResponse_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_DeleteNodesResponse, resultsSize) - offsetof(UA_DeleteNodesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DeleteNodesResponse, diagnosticInfosSize) - offsetof(UA_DeleteNodesResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* RepublishResponse */
static UA_DataTypeMember RepublishResponse_members[2] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("notificationMessage") /* .memberName */
    UA_TYPES_NOTIFICATIONMESSAGE, /* .memberTypeIndex */
    offsetof(UA_RepublishResponse, notificationMessage) - offsetof(UA_RepublishResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* MonitoredItemCreateRequest */
static UA_DataTypeMember MonitoredItemCreateRequest_members[3] = {
{
    UA_TYPENAME("itemToMonitor") /* .memberName */
    UA_TYPES_READVALUEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("monitoringMode") /* .memberName */
    UA_TYPES_MONITORINGMODE, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateRequest, monitoringMode) - offsetof(UA_MonitoredItemCreateRequest, itemToMonitor) - sizeof(UA_ReadValueId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("requestedParameters") /* .memberName */
    UA_TYPES_MONITORINGPARAMETERS, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateRequest, requestedParameters) - offsetof(UA_MonitoredItemCreateRequest, monitoringMode) - sizeof(UA_MonitoringMode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* DeleteReferencesRequest */
static UA_DataTypeMember DeleteReferencesRequest_members[2] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("referencesToDelete") /* .memberName */
    UA_TYPES_DELETEREFERENCESITEM, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesRequest, referencesToDeleteSize) - offsetof(UA_DeleteReferencesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* ReadResponse */
static UA_DataTypeMember ReadResponse_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("results") /* .memberName */
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    offsetof(UA_ReadResponse, resultsSize) - offsetof(UA_ReadResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ReadResponse, diagnosticInfosSize) - offsetof(UA_ReadResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* AddReferencesRequest */
static UA_DataTypeMember AddReferencesRequest_members[2] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("referencesToAdd") /* .memberName */
    UA_TYPES_ADDREFERENCESITEM, /* .memberTypeIndex */
    offsetof(UA_AddReferencesRequest, referencesToAddSize) - offsetof(UA_AddReferencesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* ReadRequest */
static UA_DataTypeMember ReadRequest_members[4] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("maxAge") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ReadRequest, maxAge) - offsetof(UA_ReadRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("timestampsToReturn") /* .memberName */
    UA_TYPES_TIMESTAMPSTORETURN, /* .memberTypeIndex */
    offsetof(UA_ReadRequest, timestampsToReturn) - offsetof(UA_ReadRequest, maxAge) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("nodesToRead") /* .memberName */
    UA_TYPES_READVALUEID, /* .memberTypeIndex */
    offsetof(UA_ReadRequest, nodesToReadSize) - offsetof(UA_ReadRequest, timestampsToReturn) - sizeof(UA_TimestampsToReturn), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* OpenSecureChannelRequest */
static UA_DataTypeMember OpenSecureChannelRequest_members[6] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("clientProtocolVersion") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, clientProtocolVersion) - offsetof(UA_OpenSecureChannelRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("requestType") /* .memberName */
    UA_TYPES_SECURITYTOKENREQUESTTYPE, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, requestType) - offsetof(UA_OpenSecureChannelRequest, clientProtocolVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("securityMode") /* .memberName */
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, securityMode) - offsetof(UA_OpenSecureChannelRequest, requestType) - sizeof(UA_SecurityTokenRequestType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("clientNonce") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, clientNonce) - offsetof(UA_OpenSecureChannelRequest, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("requestedLifetime") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, requestedLifetime) - offsetof(UA_OpenSecureChannelRequest, clientNonce) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* RegisterServer2Response */
static UA_DataTypeMember RegisterServer2Response_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("configurationResults") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_RegisterServer2Response, configurationResultsSize) - offsetof(UA_RegisterServer2Response, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_RegisterServer2Response, diagnosticInfosSize) - offsetof(UA_RegisterServer2Response, configurationResults) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* AddNodesItem */
static UA_DataTypeMember AddNodesItem_members[7] = {
{
    UA_TYPENAME("parentNodeId") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("referenceTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, referenceTypeId) - offsetof(UA_AddNodesItem, parentNodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("requestedNewNodeId") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, requestedNewNodeId) - offsetof(UA_AddNodesItem, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("browseName") /* .memberName */
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, browseName) - offsetof(UA_AddNodesItem, requestedNewNodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("nodeClass") /* .memberName */
    UA_TYPES_NODECLASS, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, nodeClass) - offsetof(UA_AddNodesItem, browseName) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("nodeAttributes") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, nodeAttributes) - offsetof(UA_AddNodesItem, nodeClass) - sizeof(UA_NodeClass), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("typeDefinition") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, typeDefinition) - offsetof(UA_AddNodesItem, nodeAttributes) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* NodeTypeDescription */
static UA_DataTypeMember NodeTypeDescription_members[3] = {
{
    UA_TYPENAME("typeDefinitionNode") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("includeSubTypes") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_NodeTypeDescription, includeSubTypes) - offsetof(UA_NodeTypeDescription, typeDefinitionNode) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("dataToReturn") /* .memberName */
    UA_TYPES_QUERYDATADESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_NodeTypeDescription, dataToReturnSize) - offsetof(UA_NodeTypeDescription, includeSubTypes) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* ServerStatusDataType */
static UA_DataTypeMember ServerStatusDataType_members[6] = {
{
    UA_TYPENAME("startTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("currentTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, currentTime) - offsetof(UA_ServerStatusDataType, startTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("state") /* .memberName */
    UA_TYPES_SERVERSTATE, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, state) - offsetof(UA_ServerStatusDataType, currentTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("buildInfo") /* .memberName */
    UA_TYPES_BUILDINFO, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, buildInfo) - offsetof(UA_ServerStatusDataType, state) - sizeof(UA_ServerState), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("secondsTillShutdown") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, secondsTillShutdown) - offsetof(UA_ServerStatusDataType, buildInfo) - sizeof(UA_BuildInfo), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("shutdownReason") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, shutdownReason) - offsetof(UA_ServerStatusDataType, secondsTillShutdown) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* AddReferencesResponse */
static UA_DataTypeMember AddReferencesResponse_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_AddReferencesResponse, resultsSize) - offsetof(UA_AddReferencesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_AddReferencesResponse, diagnosticInfosSize) - offsetof(UA_AddReferencesResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* TranslateBrowsePathsToNodeIdsResponse */
static UA_DataTypeMember TranslateBrowsePathsToNodeIdsResponse_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("results") /* .memberName */
    UA_TYPES_BROWSEPATHRESULT, /* .memberTypeIndex */
    offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, resultsSize) - offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, diagnosticInfosSize) - offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* DataChangeFilter */
static UA_DataTypeMember DataChangeFilter_members[3] = {
{
    UA_TYPENAME("trigger") /* .memberName */
    UA_TYPES_DATACHANGETRIGGER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("deadbandType") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DataChangeFilter, deadbandType) - offsetof(UA_DataChangeFilter, trigger) - sizeof(UA_DataChangeTrigger), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("deadbandValue") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_DataChangeFilter, deadbandValue) - offsetof(UA_DataChangeFilter, deadbandType) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ContentFilterElement */
static UA_DataTypeMember ContentFilterElement_members[2] = {
{
    UA_TYPENAME("filterOperator") /* .memberName */
    UA_TYPES_FILTEROPERATOR, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("filterOperands") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_ContentFilterElement, filterOperandsSize) - offsetof(UA_ContentFilterElement, filterOperator) - sizeof(UA_FilterOperator), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* TranslateBrowsePathsToNodeIdsRequest */
static UA_DataTypeMember TranslateBrowsePathsToNodeIdsRequest_members[2] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("browsePaths") /* .memberName */
    UA_TYPES_BROWSEPATH, /* .memberTypeIndex */
    offsetof(UA_TranslateBrowsePathsToNodeIdsRequest, browsePathsSize) - offsetof(UA_TranslateBrowsePathsToNodeIdsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* CloseSessionResponse */
static UA_DataTypeMember CloseSessionResponse_members[1] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ApplicationDescription */
static UA_DataTypeMember ApplicationDescription_members[7] = {
{
    UA_TYPENAME("applicationUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("productUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, productUri) - offsetof(UA_ApplicationDescription, applicationUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("applicationName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, applicationName) - offsetof(UA_ApplicationDescription, productUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("applicationType") /* .memberName */
    UA_TYPES_APPLICATIONTYPE, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, applicationType) - offsetof(UA_ApplicationDescription, applicationName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("gatewayServerUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, gatewayServerUri) - offsetof(UA_ApplicationDescription, applicationType) - sizeof(UA_ApplicationType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("discoveryProfileUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, discoveryProfileUri) - offsetof(UA_ApplicationDescription, gatewayServerUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("discoveryUrls") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, discoveryUrlsSize) - offsetof(UA_ApplicationDescription, discoveryProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* SessionDiagnosticsDataType */
static UA_DataTypeMember SessionDiagnosticsDataType_members[43] = {
{
    UA_TYPENAME("sessionId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("sessionName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, sessionName) - offsetof(UA_SessionDiagnosticsDataType, sessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("clientDescription") /* .memberName */
    UA_TYPES_APPLICATIONDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, clientDescription) - offsetof(UA_SessionDiagnosticsDataType, sessionName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("serverUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, serverUri) - offsetof(UA_SessionDiagnosticsDataType, clientDescription) - sizeof(UA_ApplicationDescription), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("endpointUrl") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, endpointUrl) - offsetof(UA_SessionDiagnosticsDataType, serverUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("localeIds") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, localeIdsSize) - offsetof(UA_SessionDiagnosticsDataType, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("actualSessionTimeout") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, actualSessionTimeout) - offsetof(UA_SessionDiagnosticsDataType, localeIds) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("maxResponseMessageSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, maxResponseMessageSize) - offsetof(UA_SessionDiagnosticsDataType, actualSessionTimeout) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("clientConnectionTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, clientConnectionTime) - offsetof(UA_SessionDiagnosticsDataType, maxResponseMessageSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("clientLastContactTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, clientLastContactTime) - offsetof(UA_SessionDiagnosticsDataType, clientConnectionTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("currentSubscriptionsCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, currentSubscriptionsCount) - offsetof(UA_SessionDiagnosticsDataType, clientLastContactTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("currentMonitoredItemsCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, currentMonitoredItemsCount) - offsetof(UA_SessionDiagnosticsDataType, currentSubscriptionsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("currentPublishRequestsInQueue") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, currentPublishRequestsInQueue) - offsetof(UA_SessionDiagnosticsDataType, currentMonitoredItemsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("totalRequestCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, totalRequestCount) - offsetof(UA_SessionDiagnosticsDataType, currentPublishRequestsInQueue) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("unauthorizedRequestCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, unauthorizedRequestCount) - offsetof(UA_SessionDiagnosticsDataType, totalRequestCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("readCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, readCount) - offsetof(UA_SessionDiagnosticsDataType, unauthorizedRequestCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("historyReadCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, historyReadCount) - offsetof(UA_SessionDiagnosticsDataType, readCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("writeCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, writeCount) - offsetof(UA_SessionDiagnosticsDataType, historyReadCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("historyUpdateCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, historyUpdateCount) - offsetof(UA_SessionDiagnosticsDataType, writeCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("callCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, callCount) - offsetof(UA_SessionDiagnosticsDataType, historyUpdateCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("createMonitoredItemsCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, createMonitoredItemsCount) - offsetof(UA_SessionDiagnosticsDataType, callCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("modifyMonitoredItemsCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, modifyMonitoredItemsCount) - offsetof(UA_SessionDiagnosticsDataType, createMonitoredItemsCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("setMonitoringModeCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, setMonitoringModeCount) - offsetof(UA_SessionDiagnosticsDataType, modifyMonitoredItemsCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("setTriggeringCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, setTriggeringCount) - offsetof(UA_SessionDiagnosticsDataType, setMonitoringModeCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("deleteMonitoredItemsCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, deleteMonitoredItemsCount) - offsetof(UA_SessionDiagnosticsDataType, setTriggeringCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("createSubscriptionCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, createSubscriptionCount) - offsetof(UA_SessionDiagnosticsDataType, deleteMonitoredItemsCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("modifySubscriptionCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, modifySubscriptionCount) - offsetof(UA_SessionDiagnosticsDataType, createSubscriptionCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("setPublishingModeCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, setPublishingModeCount) - offsetof(UA_SessionDiagnosticsDataType, modifySubscriptionCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("publishCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, publishCount) - offsetof(UA_SessionDiagnosticsDataType, setPublishingModeCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("republishCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, republishCount) - offsetof(UA_SessionDiagnosticsDataType, publishCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("transferSubscriptionsCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, transferSubscriptionsCount) - offsetof(UA_SessionDiagnosticsDataType, republishCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("deleteSubscriptionsCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, deleteSubscriptionsCount) - offsetof(UA_SessionDiagnosticsDataType, transferSubscriptionsCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("addNodesCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, addNodesCount) - offsetof(UA_SessionDiagnosticsDataType, deleteSubscriptionsCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("addReferencesCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, addReferencesCount) - offsetof(UA_SessionDiagnosticsDataType, addNodesCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("deleteNodesCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, deleteNodesCount) - offsetof(UA_SessionDiagnosticsDataType, addReferencesCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("deleteReferencesCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, deleteReferencesCount) - offsetof(UA_SessionDiagnosticsDataType, deleteNodesCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("browseCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, browseCount) - offsetof(UA_SessionDiagnosticsDataType, deleteReferencesCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("browseNextCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, browseNextCount) - offsetof(UA_SessionDiagnosticsDataType, browseCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("translateBrowsePathsToNodeIdsCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, translateBrowsePathsToNodeIdsCount) - offsetof(UA_SessionDiagnosticsDataType, browseNextCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("queryFirstCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, queryFirstCount) - offsetof(UA_SessionDiagnosticsDataType, translateBrowsePathsToNodeIdsCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("queryNextCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, queryNextCount) - offsetof(UA_SessionDiagnosticsDataType, queryFirstCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("registerNodesCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, registerNodesCount) - offsetof(UA_SessionDiagnosticsDataType, queryNextCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("unregisterNodesCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, unregisterNodesCount) - offsetof(UA_SessionDiagnosticsDataType, registerNodesCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ServiceFault */
static UA_DataTypeMember ServiceFault_members[1] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* RegisteredServer */
static UA_DataTypeMember RegisteredServer_members[8] = {
{
    UA_TYPENAME("serverUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("productUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, productUri) - offsetof(UA_RegisteredServer, serverUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("serverNames") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, serverNamesSize) - offsetof(UA_RegisteredServer, productUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("serverType") /* .memberName */
    UA_TYPES_APPLICATIONTYPE, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, serverType) - offsetof(UA_RegisteredServer, serverNames) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("gatewayServerUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, gatewayServerUri) - offsetof(UA_RegisteredServer, serverType) - sizeof(UA_ApplicationType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("discoveryUrls") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, discoveryUrlsSize) - offsetof(UA_RegisteredServer, gatewayServerUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("semaphoreFilePath") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, semaphoreFilePath) - offsetof(UA_RegisteredServer, discoveryUrls) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("isOnline") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, isOnline) - offsetof(UA_RegisteredServer, semaphoreFilePath) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* AggregateFilter */
static UA_DataTypeMember AggregateFilter_members[4] = {
{
    UA_TYPENAME("startTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("aggregateType") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_AggregateFilter, aggregateType) - offsetof(UA_AggregateFilter, startTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("processingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_AggregateFilter, processingInterval) - offsetof(UA_AggregateFilter, aggregateType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("aggregateConfiguration") /* .memberName */
    UA_TYPES_AGGREGATECONFIGURATION, /* .memberTypeIndex */
    offsetof(UA_AggregateFilter, aggregateConfiguration) - offsetof(UA_AggregateFilter, processingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* RegisterServerRequest */
static UA_DataTypeMember RegisterServerRequest_members[2] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("server") /* .memberName */
    UA_TYPES_REGISTEREDSERVER, /* .memberTypeIndex */
    offsetof(UA_RegisterServerRequest, server) - offsetof(UA_RegisterServerRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* EndpointDescription */
static UA_DataTypeMember EndpointDescription_members[8] = {
{
    UA_TYPENAME("endpointUrl") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("server") /* .memberName */
    UA_TYPES_APPLICATIONDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, server) - offsetof(UA_EndpointDescription, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("serverCertificate") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, serverCertificate) - offsetof(UA_EndpointDescription, server) - sizeof(UA_ApplicationDescription), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("securityMode") /* .memberName */
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, securityMode) - offsetof(UA_EndpointDescription, serverCertificate) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("securityPolicyUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, securityPolicyUri) - offsetof(UA_EndpointDescription, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("userIdentityTokens") /* .memberName */
    UA_TYPES_USERTOKENPOLICY, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, userIdentityTokensSize) - offsetof(UA_EndpointDescription, securityPolicyUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("transportProfileUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, transportProfileUri) - offsetof(UA_EndpointDescription, userIdentityTokens) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("securityLevel") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, securityLevel) - offsetof(UA_EndpointDescription, transportProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* CreateMonitoredItemsRequest */
static UA_DataTypeMember CreateMonitoredItemsRequest_members[4] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("subscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsRequest, subscriptionId) - offsetof(UA_CreateMonitoredItemsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("timestampsToReturn") /* .memberName */
    UA_TYPES_TIMESTAMPSTORETURN, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsRequest, timestampsToReturn) - offsetof(UA_CreateMonitoredItemsRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("itemsToCreate") /* .memberName */
    UA_TYPES_MONITOREDITEMCREATEREQUEST, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsRequest, itemsToCreateSize) - offsetof(UA_CreateMonitoredItemsRequest, timestampsToReturn) - sizeof(UA_TimestampsToReturn), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* ContentFilter */
static UA_DataTypeMember ContentFilter_members[1] = {
{
    UA_TYPENAME("elements") /* .memberName */
    UA_TYPES_CONTENTFILTERELEMENT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* QueryFirstResponse */
static UA_DataTypeMember QueryFirstResponse_members[6] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("queryDataSets") /* .memberName */
    UA_TYPES_QUERYDATASET, /* .memberTypeIndex */
    offsetof(UA_QueryFirstResponse, queryDataSetsSize) - offsetof(UA_QueryFirstResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("continuationPoint") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_QueryFirstResponse, continuationPoint) - offsetof(UA_QueryFirstResponse, queryDataSets) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("parsingResults") /* .memberName */
    UA_TYPES_PARSINGRESULT, /* .memberTypeIndex */
    offsetof(UA_QueryFirstResponse, parsingResultsSize) - offsetof(UA_QueryFirstResponse, continuationPoint) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_QueryFirstResponse, diagnosticInfosSize) - offsetof(UA_QueryFirstResponse, parsingResults) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("filterResult") /* .memberName */
    UA_TYPES_CONTENTFILTERRESULT, /* .memberTypeIndex */
    offsetof(UA_QueryFirstResponse, filterResult) - offsetof(UA_QueryFirstResponse, diagnosticInfos) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* AddNodesRequest */
static UA_DataTypeMember AddNodesRequest_members[2] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("nodesToAdd") /* .memberName */
    UA_TYPES_ADDNODESITEM, /* .memberTypeIndex */
    offsetof(UA_AddNodesRequest, nodesToAddSize) - offsetof(UA_AddNodesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* BrowseRequest */
static UA_DataTypeMember BrowseRequest_members[4] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("view") /* .memberName */
    UA_TYPES_VIEWDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_BrowseRequest, view) - offsetof(UA_BrowseRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("requestedMaxReferencesPerNode") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_BrowseRequest, requestedMaxReferencesPerNode) - offsetof(UA_BrowseRequest, view) - sizeof(UA_ViewDescription), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("nodesToBrowse") /* .memberName */
    UA_TYPES_BROWSEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_BrowseRequest, nodesToBrowseSize) - offsetof(UA_BrowseRequest, requestedMaxReferencesPerNode) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* BrowseResult */
static UA_DataTypeMember BrowseResult_members[3] = {
{
    UA_TYPENAME("statusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("continuationPoint") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_BrowseResult, continuationPoint) - offsetof(UA_BrowseResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("references") /* .memberName */
    UA_TYPES_REFERENCEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_BrowseResult, referencesSize) - offsetof(UA_BrowseResult, continuationPoint) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* RegisterServer2Request */
static UA_DataTypeMember RegisterServer2Request_members[3] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("server") /* .memberName */
    UA_TYPES_REGISTEREDSERVER, /* .memberTypeIndex */
    offsetof(UA_RegisterServer2Request, server) - offsetof(UA_RegisterServer2Request, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("discoveryConfiguration") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_RegisterServer2Request, discoveryConfigurationSize) - offsetof(UA_RegisterServer2Request, server) - sizeof(UA_RegisteredServer), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* CreateSessionRequest */
static UA_DataTypeMember CreateSessionRequest_members[9] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("clientDescription") /* .memberName */
    UA_TYPES_APPLICATIONDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, clientDescription) - offsetof(UA_CreateSessionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("serverUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, serverUri) - offsetof(UA_CreateSessionRequest, clientDescription) - sizeof(UA_ApplicationDescription), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("endpointUrl") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, endpointUrl) - offsetof(UA_CreateSessionRequest, serverUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("sessionName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, sessionName) - offsetof(UA_CreateSessionRequest, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("clientNonce") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, clientNonce) - offsetof(UA_CreateSessionRequest, sessionName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("clientCertificate") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, clientCertificate) - offsetof(UA_CreateSessionRequest, clientNonce) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("requestedSessionTimeout") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, requestedSessionTimeout) - offsetof(UA_CreateSessionRequest, clientCertificate) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("maxResponseMessageSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, maxResponseMessageSize) - offsetof(UA_CreateSessionRequest, requestedSessionTimeout) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* EventFilter */
static UA_DataTypeMember EventFilter_members[2] = {
{
    UA_TYPENAME("selectClauses") /* .memberName */
    UA_TYPES_SIMPLEATTRIBUTEOPERAND, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("whereClause") /* .memberName */
    UA_TYPES_CONTENTFILTER, /* .memberTypeIndex */
    offsetof(UA_EventFilter, whereClause) - offsetof(UA_EventFilter, selectClauses) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* GetEndpointsResponse */
static UA_DataTypeMember GetEndpointsResponse_members[2] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("endpoints") /* .memberName */
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_GetEndpointsResponse, endpointsSize) - offsetof(UA_GetEndpointsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* FindServersResponse */
static UA_DataTypeMember FindServersResponse_members[2] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("servers") /* .memberName */
    UA_TYPES_APPLICATIONDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_FindServersResponse, serversSize) - offsetof(UA_FindServersResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* BrowseNextResponse */
static UA_DataTypeMember BrowseNextResponse_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("results") /* .memberName */
    UA_TYPES_BROWSERESULT, /* .memberTypeIndex */
    offsetof(UA_BrowseNextResponse, resultsSize) - offsetof(UA_BrowseNextResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_BrowseNextResponse, diagnosticInfosSize) - offsetof(UA_BrowseNextResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* BrowseResponse */
static UA_DataTypeMember BrowseResponse_members[3] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("results") /* .memberName */
    UA_TYPES_BROWSERESULT, /* .memberTypeIndex */
    offsetof(UA_BrowseResponse, resultsSize) - offsetof(UA_BrowseResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("diagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_BrowseResponse, diagnosticInfosSize) - offsetof(UA_BrowseResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
}};

/* CreateSessionResponse */
static UA_DataTypeMember CreateSessionResponse_members[10] = {
{
    UA_TYPENAME("responseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("sessionId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, sessionId) - offsetof(UA_CreateSessionResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("authenticationToken") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, authenticationToken) - offsetof(UA_CreateSessionResponse, sessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("revisedSessionTimeout") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, revisedSessionTimeout) - offsetof(UA_CreateSessionResponse, authenticationToken) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("serverNonce") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverNonce) - offsetof(UA_CreateSessionResponse, revisedSessionTimeout) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("serverCertificate") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverCertificate) - offsetof(UA_CreateSessionResponse, serverNonce) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("serverEndpoints") /* .memberName */
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverEndpointsSize) - offsetof(UA_CreateSessionResponse, serverCertificate) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("serverSoftwareCertificates") /* .memberName */
    UA_TYPES_SIGNEDSOFTWARECERTIFICATE, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverSoftwareCertificatesSize) - offsetof(UA_CreateSessionResponse, serverEndpoints) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("serverSignature") /* .memberName */
    UA_TYPES_SIGNATUREDATA, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverSignature) - offsetof(UA_CreateSessionResponse, serverSoftwareCertificates) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("maxRequestMessageSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, maxRequestMessageSize) - offsetof(UA_CreateSessionResponse, serverSignature) - sizeof(UA_SignatureData), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* QueryFirstRequest */
static UA_DataTypeMember QueryFirstRequest_members[6] = {
{
    UA_TYPENAME("requestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("view") /* .memberName */
    UA_TYPES_VIEWDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_QueryFirstRequest, view) - offsetof(UA_QueryFirstRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("nodeTypes") /* .memberName */
    UA_TYPES_NODETYPEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_QueryFirstRequest, nodeTypesSize) - offsetof(UA_QueryFirstRequest, view) - sizeof(UA_ViewDescription), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("filter") /* .memberName */
    UA_TYPES_CONTENTFILTER, /* .memberTypeIndex */
    offsetof(UA_QueryFirstRequest, filter) - offsetof(UA_QueryFirstRequest, nodeTypes) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("maxDataSetsToReturn") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_QueryFirstRequest, maxDataSetsToReturn) - offsetof(UA_QueryFirstRequest, filter) - sizeof(UA_ContentFilter), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("maxReferencesToReturn") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_QueryFirstRequest, maxReferencesToReturn) - offsetof(UA_QueryFirstRequest, maxDataSetsToReturn) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};
const UA_DataType UA_TYPES[UA_TYPES_COUNT] = {
/* Boolean */
{
    UA_TYPENAME("Boolean") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {1}}, /* .typeId */
    sizeof(UA_Boolean), /* .memSize */
    UA_TYPES_BOOLEAN, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    true, /* .overlayable */
    0, /* .binaryEncodingId */
    Boolean_members /* .members */
},
/* SByte */
{
    UA_TYPENAME("SByte") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {2}}, /* .typeId */
    sizeof(UA_SByte), /* .memSize */
    UA_TYPES_SBYTE, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    true, /* .overlayable */
    0, /* .binaryEncodingId */
    SByte_members /* .members */
},
/* Byte */
{
    UA_TYPENAME("Byte") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {3}}, /* .typeId */
    sizeof(UA_Byte), /* .memSize */
    UA_TYPES_BYTE, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    true, /* .overlayable */
    0, /* .binaryEncodingId */
    Byte_members /* .members */
},
/* Int16 */
{
    UA_TYPENAME("Int16") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {4}}, /* .typeId */
    sizeof(UA_Int16), /* .memSize */
    UA_TYPES_INT16, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    Int16_members /* .members */
},
/* UInt16 */
{
    UA_TYPENAME("UInt16") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {5}}, /* .typeId */
    sizeof(UA_UInt16), /* .memSize */
    UA_TYPES_UINT16, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    UInt16_members /* .members */
},
/* Int32 */
{
    UA_TYPENAME("Int32") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {6}}, /* .typeId */
    sizeof(UA_Int32), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    Int32_members /* .members */
},
/* UInt32 */
{
    UA_TYPENAME("UInt32") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {7}}, /* .typeId */
    sizeof(UA_UInt32), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    UInt32_members /* .members */
},
/* Int64 */
{
    UA_TYPENAME("Int64") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {8}}, /* .typeId */
    sizeof(UA_Int64), /* .memSize */
    UA_TYPES_INT64, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    Int64_members /* .members */
},
/* UInt64 */
{
    UA_TYPENAME("UInt64") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {9}}, /* .typeId */
    sizeof(UA_UInt64), /* .memSize */
    UA_TYPES_UINT64, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    UInt64_members /* .members */
},
/* Float */
{
    UA_TYPENAME("Float") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {10}}, /* .typeId */
    sizeof(UA_Float), /* .memSize */
    UA_TYPES_FLOAT, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_FLOAT, /* .overlayable */
    0, /* .binaryEncodingId */
    Float_members /* .members */
},
/* Double */
{
    UA_TYPENAME("Double") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {11}}, /* .typeId */
    sizeof(UA_Double), /* .memSize */
    UA_TYPES_DOUBLE, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_FLOAT, /* .overlayable */
    0, /* .binaryEncodingId */
    Double_members /* .members */
},
/* String */
{
    UA_TYPENAME("String") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12}}, /* .typeId */
    sizeof(UA_String), /* .memSize */
    UA_TYPES_STRING, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .binaryEncodingId */
    String_members /* .members */
},
/* DateTime */
{
    UA_TYPENAME("DateTime") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {13}}, /* .typeId */
    sizeof(UA_DateTime), /* .memSize */
    UA_TYPES_DATETIME, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    DateTime_members /* .members */
},
/* Guid */
{
    UA_TYPENAME("Guid") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {14}}, /* .typeId */
    sizeof(UA_Guid), /* .memSize */
    UA_TYPES_GUID, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    (UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_Guid, data2) == sizeof(UA_UInt32) && offsetof(UA_Guid, data3) == (sizeof(UA_UInt16) + sizeof(UA_UInt32)) && offsetof(UA_Guid, data4) == (2*sizeof(UA_UInt32))), /* .overlayable */
    0, /* .binaryEncodingId */
    Guid_members /* .members */
},
/* ByteString */
{
    UA_TYPENAME("ByteString") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15}}, /* .typeId */
    sizeof(UA_ByteString), /* .memSize */
    UA_TYPES_BYTESTRING, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .binaryEncodingId */
    ByteString_members /* .members */
},
/* XmlElement */
{
    UA_TYPENAME("XmlElement") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {16}}, /* .typeId */
    sizeof(UA_XmlElement), /* .memSize */
    UA_TYPES_XMLELEMENT, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .binaryEncodingId */
    XmlElement_members /* .members */
},
/* NodeId */
{
    UA_TYPENAME("NodeId") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {17}}, /* .typeId */
    sizeof(UA_NodeId), /* .memSize */
    UA_TYPES_NODEID, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .binaryEncodingId */
    NodeId_members /* .members */
},
/* ExpandedNodeId */
{
    UA_TYPENAME("ExpandedNodeId") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {18}}, /* .typeId */
    sizeof(UA_ExpandedNodeId), /* .memSize */
    UA_TYPES_EXPANDEDNODEID, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .binaryEncodingId */
    ExpandedNodeId_members /* .members */
},
/* StatusCode */
{
    UA_TYPENAME("StatusCode") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {19}}, /* .typeId */
    sizeof(UA_StatusCode), /* .memSize */
    UA_TYPES_STATUSCODE, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    StatusCode_members /* .members */
},
/* QualifiedName */
{
    UA_TYPENAME("QualifiedName") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {20}}, /* .typeId */
    sizeof(UA_QualifiedName), /* .memSize */
    UA_TYPES_QUALIFIEDNAME, /* .typeIndex */
    2, /* .membersSize */
    true, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .binaryEncodingId */
    QualifiedName_members /* .members */
},
/* LocalizedText */
{
    UA_TYPENAME("LocalizedText") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {21}}, /* .typeId */
    sizeof(UA_LocalizedText), /* .memSize */
    UA_TYPES_LOCALIZEDTEXT, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .binaryEncodingId */
    LocalizedText_members /* .members */
},
/* ExtensionObject */
{
    UA_TYPENAME("ExtensionObject") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {22}}, /* .typeId */
    sizeof(UA_ExtensionObject), /* .memSize */
    UA_TYPES_EXTENSIONOBJECT, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .binaryEncodingId */
    ExtensionObject_members /* .members */
},
/* DataValue */
{
    UA_TYPENAME("DataValue") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {23}}, /* .typeId */
    sizeof(UA_DataValue), /* .memSize */
    UA_TYPES_DATAVALUE, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .binaryEncodingId */
    DataValue_members /* .members */
},
/* Variant */
{
    UA_TYPENAME("Variant") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {24}}, /* .typeId */
    sizeof(UA_Variant), /* .memSize */
    UA_TYPES_VARIANT, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .binaryEncodingId */
    Variant_members /* .members */
},
/* DiagnosticInfo */
{
    UA_TYPENAME("DiagnosticInfo") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {25}}, /* .typeId */
    sizeof(UA_DiagnosticInfo), /* .memSize */
    UA_TYPES_DIAGNOSTICINFO, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .binaryEncodingId */
    DiagnosticInfo_members /* .members */
},
/* SignedSoftwareCertificate */
{
    UA_TYPENAME("SignedSoftwareCertificate") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {344}}, /* .typeId */
    sizeof(UA_SignedSoftwareCertificate), /* .memSize */
    UA_TYPES_SIGNEDSOFTWARECERTIFICATE, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    346, /* .binaryEncodingId */
    SignedSoftwareCertificate_members /* .members */
},
/* SemanticChangeStructureDataType */
{
    UA_TYPENAME("SemanticChangeStructureDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {897}}, /* .typeId */
    sizeof(UA_SemanticChangeStructureDataType), /* .memSize */
    UA_TYPES_SEMANTICCHANGESTRUCTUREDATATYPE, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    899, /* .binaryEncodingId */
    SemanticChangeStructureDataType_members /* .members */
},
/* StatusChangeNotification */
{
    UA_TYPENAME("StatusChangeNotification") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {818}}, /* .typeId */
    sizeof(UA_StatusChangeNotification), /* .memSize */
    UA_TYPES_STATUSCHANGENOTIFICATION, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    820, /* .binaryEncodingId */
    StatusChangeNotification_members /* .members */
},
/* BrowsePathTarget */
{
    UA_TYPENAME("BrowsePathTarget") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {546}}, /* .typeId */
    sizeof(UA_BrowsePathTarget), /* .memSize */
    UA_TYPES_BROWSEPATHTARGET, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    548, /* .binaryEncodingId */
    BrowsePathTarget_members /* .members */
},
/* ViewAttributes */
{
    UA_TYPENAME("ViewAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {373}}, /* .typeId */
    sizeof(UA_ViewAttributes), /* .memSize */
    UA_TYPES_VIEWATTRIBUTES, /* .typeIndex */
    7, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    375, /* .binaryEncodingId */
    ViewAttributes_members /* .members */
},
/* RequestHeader */
{
    UA_TYPENAME("RequestHeader") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {389}}, /* .typeId */
    sizeof(UA_RequestHeader), /* .memSize */
    UA_TYPES_REQUESTHEADER, /* .typeIndex */
    7, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    391, /* .binaryEncodingId */
    RequestHeader_members /* .members */
},
/* MonitoredItemModifyResult */
{
    UA_TYPENAME("MonitoredItemModifyResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {758}}, /* .typeId */
    sizeof(UA_MonitoredItemModifyResult), /* .memSize */
    UA_TYPES_MONITOREDITEMMODIFYRESULT, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    760, /* .binaryEncodingId */
    MonitoredItemModifyResult_members /* .members */
},
/* CloseSecureChannelRequest */
{
    UA_TYPENAME("CloseSecureChannelRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {450}}, /* .typeId */
    sizeof(UA_CloseSecureChannelRequest), /* .memSize */
    UA_TYPES_CLOSESECURECHANNELREQUEST, /* .typeIndex */
    1, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    452, /* .binaryEncodingId */
    CloseSecureChannelRequest_members /* .members */
},
/* AddNodesResult */
{
    UA_TYPENAME("AddNodesResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {483}}, /* .typeId */
    sizeof(UA_AddNodesResult), /* .memSize */
    UA_TYPES_ADDNODESRESULT, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    485, /* .binaryEncodingId */
    AddNodesResult_members /* .members */
},
/* VariableAttributes */
{
    UA_TYPENAME("VariableAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {355}}, /* .typeId */
    sizeof(UA_VariableAttributes), /* .memSize */
    UA_TYPES_VARIABLEATTRIBUTES, /* .typeIndex */
    13, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    357, /* .binaryEncodingId */
    VariableAttributes_members /* .members */
},
/* NotificationMessage */
{
    UA_TYPENAME("NotificationMessage") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {803}}, /* .typeId */
    sizeof(UA_NotificationMessage), /* .memSize */
    UA_TYPES_NOTIFICATIONMESSAGE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    805, /* .binaryEncodingId */
    NotificationMessage_members /* .members */
},
/* FindServersOnNetworkRequest */
{
    UA_TYPENAME("FindServersOnNetworkRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12190}}, /* .typeId */
    sizeof(UA_FindServersOnNetworkRequest), /* .memSize */
    UA_TYPES_FINDSERVERSONNETWORKREQUEST, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    12208, /* .binaryEncodingId */
    FindServersOnNetworkRequest_members /* .members */
},
/* EventFieldList */
{
    UA_TYPENAME("EventFieldList") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {917}}, /* .typeId */
    sizeof(UA_EventFieldList), /* .memSize */
    UA_TYPES_EVENTFIELDLIST, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    919, /* .binaryEncodingId */
    EventFieldList_members /* .members */
},
/* MonitoringMode */
{
    UA_TYPENAME("MonitoringMode") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {716}}, /* .typeId */
    sizeof(UA_MonitoringMode), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    MonitoringMode_members /* .members */
},
/* MdnsDiscoveryConfiguration */
{
    UA_TYPENAME("MdnsDiscoveryConfiguration") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12891}}, /* .typeId */
    sizeof(UA_MdnsDiscoveryConfiguration), /* .memSize */
    UA_TYPES_MDNSDISCOVERYCONFIGURATION, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    12901, /* .binaryEncodingId */
    MdnsDiscoveryConfiguration_members /* .members */
},
/* CallMethodResult */
{
    UA_TYPENAME("CallMethodResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {707}}, /* .typeId */
    sizeof(UA_CallMethodResult), /* .memSize */
    UA_TYPES_CALLMETHODRESULT, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    709, /* .binaryEncodingId */
    CallMethodResult_members /* .members */
},
/* ParsingResult */
{
    UA_TYPENAME("ParsingResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {610}}, /* .typeId */
    sizeof(UA_ParsingResult), /* .memSize */
    UA_TYPES_PARSINGRESULT, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    612, /* .binaryEncodingId */
    ParsingResult_members /* .members */
},
/* RelativePathElement */
{
    UA_TYPENAME("RelativePathElement") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {537}}, /* .typeId */
    sizeof(UA_RelativePathElement), /* .memSize */
    UA_TYPES_RELATIVEPATHELEMENT, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    539, /* .binaryEncodingId */
    RelativePathElement_members /* .members */
},
/* BrowseDirection */
{
    UA_TYPENAME("BrowseDirection") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {510}}, /* .typeId */
    sizeof(UA_BrowseDirection), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    BrowseDirection_members /* .members */
},
/* CallMethodRequest */
{
    UA_TYPENAME("CallMethodRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {704}}, /* .typeId */
    sizeof(UA_CallMethodRequest), /* .memSize */
    UA_TYPES_CALLMETHODREQUEST, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    706, /* .binaryEncodingId */
    CallMethodRequest_members /* .members */
},
/* RedundancySupport */
{
    UA_TYPENAME("RedundancySupport") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {851}}, /* .typeId */
    sizeof(UA_RedundancySupport), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    RedundancySupport_members /* .members */
},
/* EventNotificationList */
{
    UA_TYPENAME("EventNotificationList") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {914}}, /* .typeId */
    sizeof(UA_EventNotificationList), /* .memSize */
    UA_TYPES_EVENTNOTIFICATIONLIST, /* .typeIndex */
    1, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    916, /* .binaryEncodingId */
    EventNotificationList_members /* .members */
},
/* UnregisterNodesRequest */
{
    UA_TYPENAME("UnregisterNodesRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {564}}, /* .typeId */
    sizeof(UA_UnregisterNodesRequest), /* .memSize */
    UA_TYPES_UNREGISTERNODESREQUEST, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    566, /* .binaryEncodingId */
    UnregisterNodesRequest_members /* .members */
},
/* ContentFilterElementResult */
{
    UA_TYPENAME("ContentFilterElementResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {604}}, /* .typeId */
    sizeof(UA_ContentFilterElementResult), /* .memSize */
    UA_TYPES_CONTENTFILTERELEMENTRESULT, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    606, /* .binaryEncodingId */
    ContentFilterElementResult_members /* .members */
},
/* SimpleAttributeOperand */
{
    UA_TYPENAME("SimpleAttributeOperand") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {601}}, /* .typeId */
    sizeof(UA_SimpleAttributeOperand), /* .memSize */
    UA_TYPES_SIMPLEATTRIBUTEOPERAND, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    603, /* .binaryEncodingId */
    SimpleAttributeOperand_members /* .members */
},
/* QueryDataSet */
{
    UA_TYPENAME("QueryDataSet") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {577}}, /* .typeId */
    sizeof(UA_QueryDataSet), /* .memSize */
    UA_TYPES_QUERYDATASET, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    579, /* .binaryEncodingId */
    QueryDataSet_members /* .members */
},
/* AnonymousIdentityToken */
{
    UA_TYPENAME("AnonymousIdentityToken") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {319}}, /* .typeId */
    sizeof(UA_AnonymousIdentityToken), /* .memSize */
    UA_TYPES_ANONYMOUSIDENTITYTOKEN, /* .typeIndex */
    1, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    321, /* .binaryEncodingId */
    AnonymousIdentityToken_members /* .members */
},
/* SetPublishingModeRequest */
{
    UA_TYPENAME("SetPublishingModeRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {797}}, /* .typeId */
    sizeof(UA_SetPublishingModeRequest), /* .memSize */
    UA_TYPES_SETPUBLISHINGMODEREQUEST, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    799, /* .binaryEncodingId */
    SetPublishingModeRequest_members /* .members */
},
/* MonitoredItemCreateResult */
{
    UA_TYPENAME("MonitoredItemCreateResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {746}}, /* .typeId */
    sizeof(UA_MonitoredItemCreateResult), /* .memSize */
    UA_TYPES_MONITOREDITEMCREATERESULT, /* .typeIndex */
    5, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    748, /* .binaryEncodingId */
    MonitoredItemCreateResult_members /* .members */
},
/* TimestampsToReturn */
{
    UA_TYPENAME("TimestampsToReturn") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {625}}, /* .typeId */
    sizeof(UA_TimestampsToReturn), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    TimestampsToReturn_members /* .members */
},
/* CallRequest */
{
    UA_TYPENAME("CallRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {710}}, /* .typeId */
    sizeof(UA_CallRequest), /* .memSize */
    UA_TYPES_CALLREQUEST, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    712, /* .binaryEncodingId */
    CallRequest_members /* .members */
},
/* MethodAttributes */
{
    UA_TYPENAME("MethodAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {358}}, /* .typeId */
    sizeof(UA_MethodAttributes), /* .memSize */
    UA_TYPES_METHODATTRIBUTES, /* .typeIndex */
    7, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    360, /* .binaryEncodingId */
    MethodAttributes_members /* .members */
},
/* DeleteReferencesItem */
{
    UA_TYPENAME("DeleteReferencesItem") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {385}}, /* .typeId */
    sizeof(UA_DeleteReferencesItem), /* .memSize */
    UA_TYPES_DELETEREFERENCESITEM, /* .typeIndex */
    5, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    387, /* .binaryEncodingId */
    DeleteReferencesItem_members /* .members */
},
/* WriteValue */
{
    UA_TYPENAME("WriteValue") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {668}}, /* .typeId */
    sizeof(UA_WriteValue), /* .memSize */
    UA_TYPES_WRITEVALUE, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    670, /* .binaryEncodingId */
    WriteValue_members /* .members */
},
/* NodeAttributesMask */
{
    UA_TYPENAME("NodeAttributesMask") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {348}}, /* .typeId */
    sizeof(UA_NodeAttributesMask), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    NodeAttributesMask_members /* .members */
},
/* MessageSecurityMode */
{
    UA_TYPENAME("MessageSecurityMode") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {302}}, /* .typeId */
    sizeof(UA_MessageSecurityMode), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    MessageSecurityMode_members /* .members */
},
/* MonitoringParameters */
{
    UA_TYPENAME("MonitoringParameters") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {740}}, /* .typeId */
    sizeof(UA_MonitoringParameters), /* .memSize */
    UA_TYPES_MONITORINGPARAMETERS, /* .typeIndex */
    5, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    742, /* .binaryEncodingId */
    MonitoringParameters_members /* .members */
},
/* ReferenceNode */
{
    UA_TYPENAME("ReferenceNode") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {285}}, /* .typeId */
    sizeof(UA_ReferenceNode), /* .memSize */
    UA_TYPES_REFERENCENODE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    287, /* .binaryEncodingId */
    ReferenceNode_members /* .members */
},
/* Argument */
{
    UA_TYPENAME("Argument") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {296}}, /* .typeId */
    sizeof(UA_Argument), /* .memSize */
    UA_TYPES_ARGUMENT, /* .typeIndex */
    5, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    298, /* .binaryEncodingId */
    Argument_members /* .members */
},
/* ChannelSecurityToken */
{
    UA_TYPENAME("ChannelSecurityToken") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {441}}, /* .typeId */
    sizeof(UA_ChannelSecurityToken), /* .memSize */
    UA_TYPES_CHANNELSECURITYTOKEN, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    true, /* .pointerFree */
    true && UA_BINARY_OVERLAYABLE_INTEGER && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_ChannelSecurityToken, tokenId) == (offsetof(UA_ChannelSecurityToken, channelId) + sizeof(UA_UInt32)) && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_ChannelSecurityToken, createdAt) == (offsetof(UA_ChannelSecurityToken, tokenId) + sizeof(UA_UInt32)) && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_ChannelSecurityToken, revisedLifetime) == (offsetof(UA_ChannelSecurityToken, createdAt) + sizeof(UA_DateTime)), /* .overlayable */
    443, /* .binaryEncodingId */
    ChannelSecurityToken_members /* .members */
},
/* UserIdentityToken */
{
    UA_TYPENAME("UserIdentityToken") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {316}}, /* .typeId */
    sizeof(UA_UserIdentityToken), /* .memSize */
    UA_TYPES_USERIDENTITYTOKEN, /* .typeIndex */
    1, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    318, /* .binaryEncodingId */
    UserIdentityToken_members /* .members */
},
/* SignatureData */
{
    UA_TYPENAME("SignatureData") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {456}}, /* .typeId */
    sizeof(UA_SignatureData), /* .memSize */
    UA_TYPES_SIGNATUREDATA, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    458, /* .binaryEncodingId */
    SignatureData_members /* .members */
},
/* ObjectTypeAttributes */
{
    UA_TYPENAME("ObjectTypeAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {361}}, /* .typeId */
    sizeof(UA_ObjectTypeAttributes), /* .memSize */
    UA_TYPES_OBJECTTYPEATTRIBUTES, /* .typeIndex */
    6, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    363, /* .binaryEncodingId */
    ObjectTypeAttributes_members /* .members */
},
/* DeadbandType */
{
    UA_TYPENAME("DeadbandType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {718}}, /* .typeId */
    sizeof(UA_DeadbandType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    DeadbandType_members /* .members */
},
/* SecurityTokenRequestType */
{
    UA_TYPENAME("SecurityTokenRequestType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {315}}, /* .typeId */
    sizeof(UA_SecurityTokenRequestType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    SecurityTokenRequestType_members /* .members */
},
/* NodeAttributes */
{
    UA_TYPENAME("NodeAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {349}}, /* .typeId */
    sizeof(UA_NodeAttributes), /* .memSize */
    UA_TYPES_NODEATTRIBUTES, /* .typeIndex */
    5, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    351, /* .binaryEncodingId */
    NodeAttributes_members /* .members */
},
/* DataChangeTrigger */
{
    UA_TYPENAME("DataChangeTrigger") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {717}}, /* .typeId */
    sizeof(UA_DataChangeTrigger), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    DataChangeTrigger_members /* .members */
},
/* BuildInfo */
{
    UA_TYPENAME("BuildInfo") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {338}}, /* .typeId */
    sizeof(UA_BuildInfo), /* .memSize */
    UA_TYPES_BUILDINFO, /* .typeIndex */
    6, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    340, /* .binaryEncodingId */
    BuildInfo_members /* .members */
},
/* NodeClass */
{
    UA_TYPENAME("NodeClass") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {257}}, /* .typeId */
    sizeof(UA_NodeClass), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    NodeClass_members /* .members */
},
/* SubscriptionDiagnosticsDataType */
{
    UA_TYPENAME("SubscriptionDiagnosticsDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {874}}, /* .typeId */
    sizeof(UA_SubscriptionDiagnosticsDataType), /* .memSize */
    UA_TYPES_SUBSCRIPTIONDIAGNOSTICSDATATYPE, /* .typeIndex */
    31, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    876, /* .binaryEncodingId */
    SubscriptionDiagnosticsDataType_members /* .members */
},
/* FilterOperand */
{
    UA_TYPENAME("FilterOperand") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {589}}, /* .typeId */
    sizeof(UA_FilterOperand), /* .memSize */
    UA_TYPES_FILTEROPERAND, /* .typeIndex */
    0, /* .membersSize */
    false, /* .builtin */
    true, /* .pointerFree */
    true, /* .overlayable */
    591, /* .binaryEncodingId */
    FilterOperand_members /* .members */
},
/* MonitoredItemNotification */
{
    UA_TYPENAME("MonitoredItemNotification") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {806}}, /* .typeId */
    sizeof(UA_MonitoredItemNotification), /* .memSize */
    UA_TYPES_MONITOREDITEMNOTIFICATION, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    808, /* .binaryEncodingId */
    MonitoredItemNotification_members /* .members */
},
/* DeleteNodesItem */
{
    UA_TYPENAME("DeleteNodesItem") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {382}}, /* .typeId */
    sizeof(UA_DeleteNodesItem), /* .memSize */
    UA_TYPES_DELETENODESITEM, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    384, /* .binaryEncodingId */
    DeleteNodesItem_members /* .members */
},
/* DeleteSubscriptionsRequest */
{
    UA_TYPENAME("DeleteSubscriptionsRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {845}}, /* .typeId */
    sizeof(UA_DeleteSubscriptionsRequest), /* .memSize */
    UA_TYPES_DELETESUBSCRIPTIONSREQUEST, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    847, /* .binaryEncodingId */
    DeleteSubscriptionsRequest_members /* .members */
},
/* SubscriptionAcknowledgement */
{
    UA_TYPENAME("SubscriptionAcknowledgement") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {821}}, /* .typeId */
    sizeof(UA_SubscriptionAcknowledgement), /* .memSize */
    UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    true, /* .pointerFree */
    true && UA_BINARY_OVERLAYABLE_INTEGER && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_SubscriptionAcknowledgement, sequenceNumber) == (offsetof(UA_SubscriptionAcknowledgement, subscriptionId) + sizeof(UA_UInt32)), /* .overlayable */
    823, /* .binaryEncodingId */
    SubscriptionAcknowledgement_members /* .members */
},
/* ReadValueId */
{
    UA_TYPENAME("ReadValueId") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {626}}, /* .typeId */
    sizeof(UA_ReadValueId), /* .memSize */
    UA_TYPES_READVALUEID, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    628, /* .binaryEncodingId */
    ReadValueId_members /* .members */
},
/* DataTypeAttributes */
{
    UA_TYPENAME("DataTypeAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {370}}, /* .typeId */
    sizeof(UA_DataTypeAttributes), /* .memSize */
    UA_TYPES_DATATYPEATTRIBUTES, /* .typeIndex */
    6, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    372, /* .binaryEncodingId */
    DataTypeAttributes_members /* .members */
},
/* ResponseHeader */
{
    UA_TYPENAME("ResponseHeader") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {392}}, /* .typeId */
    sizeof(UA_ResponseHeader), /* .memSize */
    UA_TYPES_RESPONSEHEADER, /* .typeIndex */
    6, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    394, /* .binaryEncodingId */
    ResponseHeader_members /* .members */
},
/* DeleteMonitoredItemsRequest */
{
    UA_TYPENAME("DeleteMonitoredItemsRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {779}}, /* .typeId */
    sizeof(UA_DeleteMonitoredItemsRequest), /* .memSize */
    UA_TYPES_DELETEMONITOREDITEMSREQUEST, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    781, /* .binaryEncodingId */
    DeleteMonitoredItemsRequest_members /* .members */
},
/* ViewDescription */
{
    UA_TYPENAME("ViewDescription") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {511}}, /* .typeId */
    sizeof(UA_ViewDescription), /* .memSize */
    UA_TYPES_VIEWDESCRIPTION, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    513, /* .binaryEncodingId */
    ViewDescription_members /* .members */
},
/* ServerOnNetwork */
{
    UA_TYPENAME("ServerOnNetwork") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12189}}, /* .typeId */
    sizeof(UA_ServerOnNetwork), /* .memSize */
    UA_TYPES_SERVERONNETWORK, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    12207, /* .binaryEncodingId */
    ServerOnNetwork_members /* .members */
},
/* DeleteMonitoredItemsResponse */
{
    UA_TYPENAME("DeleteMonitoredItemsResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {782}}, /* .typeId */
    sizeof(UA_DeleteMonitoredItemsResponse), /* .memSize */
    UA_TYPES_DELETEMONITOREDITEMSRESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    784, /* .binaryEncodingId */
    DeleteMonitoredItemsResponse_members /* .members */
},
/* FindServersOnNetworkResponse */
{
    UA_TYPENAME("FindServersOnNetworkResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12191}}, /* .typeId */
    sizeof(UA_FindServersOnNetworkResponse), /* .memSize */
    UA_TYPES_FINDSERVERSONNETWORKRESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    12209, /* .binaryEncodingId */
    FindServersOnNetworkResponse_members /* .members */
},
/* RelativePath */
{
    UA_TYPENAME("RelativePath") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {540}}, /* .typeId */
    sizeof(UA_RelativePath), /* .memSize */
    UA_TYPES_RELATIVEPATH, /* .typeIndex */
    1, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    542, /* .binaryEncodingId */
    RelativePath_members /* .members */
},
/* RegisterNodesRequest */
{
    UA_TYPENAME("RegisterNodesRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {558}}, /* .typeId */
    sizeof(UA_RegisterNodesRequest), /* .memSize */
    UA_TYPES_REGISTERNODESREQUEST, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    560, /* .binaryEncodingId */
    RegisterNodesRequest_members /* .members */
},
/* AggregateConfiguration */
{
    UA_TYPENAME("AggregateConfiguration") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {948}}, /* .typeId */
    sizeof(UA_AggregateConfiguration), /* .memSize */
    UA_TYPES_AGGREGATECONFIGURATION, /* .typeIndex */
    5, /* .membersSize */
    false, /* .builtin */
    true, /* .pointerFree */
    true && true && true && offsetof(UA_AggregateConfiguration, treatUncertainAsBad) == (offsetof(UA_AggregateConfiguration, useServerCapabilitiesDefaults) + sizeof(UA_Boolean)) && true && offsetof(UA_AggregateConfiguration, percentDataBad) == (offsetof(UA_AggregateConfiguration, treatUncertainAsBad) + sizeof(UA_Boolean)) && true && offsetof(UA_AggregateConfiguration, percentDataGood) == (offsetof(UA_AggregateConfiguration, percentDataBad) + sizeof(UA_Byte)) && true && offsetof(UA_AggregateConfiguration, useSlopedExtrapolation) == (offsetof(UA_AggregateConfiguration, percentDataGood) + sizeof(UA_Byte)), /* .overlayable */
    950, /* .binaryEncodingId */
    AggregateConfiguration_members /* .members */
},
/* DeleteNodesRequest */
{
    UA_TYPENAME("DeleteNodesRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {498}}, /* .typeId */
    sizeof(UA_DeleteNodesRequest), /* .memSize */
    UA_TYPES_DELETENODESREQUEST, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    500, /* .binaryEncodingId */
    DeleteNodesRequest_members /* .members */
},
/* PublishResponse */
{
    UA_TYPENAME("PublishResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {827}}, /* .typeId */
    sizeof(UA_PublishResponse), /* .memSize */
    UA_TYPES_PUBLISHRESPONSE, /* .typeIndex */
    7, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    829, /* .binaryEncodingId */
    PublishResponse_members /* .members */
},
/* MonitoredItemModifyRequest */
{
    UA_TYPENAME("MonitoredItemModifyRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {755}}, /* .typeId */
    sizeof(UA_MonitoredItemModifyRequest), /* .memSize */
    UA_TYPES_MONITOREDITEMMODIFYREQUEST, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    757, /* .binaryEncodingId */
    MonitoredItemModifyRequest_members /* .members */
},
/* ServiceCounterDataType */
{
    UA_TYPENAME("ServiceCounterDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {871}}, /* .typeId */
    sizeof(UA_ServiceCounterDataType), /* .memSize */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    true, /* .pointerFree */
    true && UA_BINARY_OVERLAYABLE_INTEGER && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_ServiceCounterDataType, errorCount) == (offsetof(UA_ServiceCounterDataType, totalCount) + sizeof(UA_UInt32)), /* .overlayable */
    873, /* .binaryEncodingId */
    ServiceCounterDataType_members /* .members */
},
/* ModelChangeStructureDataType */
{
    UA_TYPENAME("ModelChangeStructureDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {877}}, /* .typeId */
    sizeof(UA_ModelChangeStructureDataType), /* .memSize */
    UA_TYPES_MODELCHANGESTRUCTUREDATATYPE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    879, /* .binaryEncodingId */
    ModelChangeStructureDataType_members /* .members */
},
/* UserNameIdentityToken */
{
    UA_TYPENAME("UserNameIdentityToken") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {322}}, /* .typeId */
    sizeof(UA_UserNameIdentityToken), /* .memSize */
    UA_TYPES_USERNAMEIDENTITYTOKEN, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    324, /* .binaryEncodingId */
    UserNameIdentityToken_members /* .members */
},
/* IdType */
{
    UA_TYPENAME("IdType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {256}}, /* .typeId */
    sizeof(UA_IdType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    IdType_members /* .members */
},
/* UserTokenType */
{
    UA_TYPENAME("UserTokenType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {303}}, /* .typeId */
    sizeof(UA_UserTokenType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    UserTokenType_members /* .members */
},
/* SetTriggeringResponse */
{
    UA_TYPENAME("SetTriggeringResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {776}}, /* .typeId */
    sizeof(UA_SetTriggeringResponse), /* .memSize */
    UA_TYPES_SETTRIGGERINGRESPONSE, /* .typeIndex */
    5, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    778, /* .binaryEncodingId */
    SetTriggeringResponse_members /* .members */
},
/* TimeZoneDataType */
{
    UA_TYPENAME("TimeZoneDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {8912}}, /* .typeId */
    sizeof(UA_TimeZoneDataType), /* .memSize */
    UA_TYPES_TIMEZONEDATATYPE, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    true, /* .pointerFree */
    true && UA_BINARY_OVERLAYABLE_INTEGER && true && offsetof(UA_TimeZoneDataType, daylightSavingInOffset) == (offsetof(UA_TimeZoneDataType, offset) + sizeof(UA_Int16)), /* .overlayable */
    8917, /* .binaryEncodingId */
    TimeZoneDataType_members /* .members */
},
/* ActivateSessionRequest */
{
    UA_TYPENAME("ActivateSessionRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {465}}, /* .typeId */
    sizeof(UA_ActivateSessionRequest), /* .memSize */
    UA_TYPES_ACTIVATESESSIONREQUEST, /* .typeIndex */
    6, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    467, /* .binaryEncodingId */
    ActivateSessionRequest_members /* .members */
},
/* OpenSecureChannelResponse */
{
    UA_TYPENAME("OpenSecureChannelResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {447}}, /* .typeId */
    sizeof(UA_OpenSecureChannelResponse), /* .memSize */
    UA_TYPES_OPENSECURECHANNELRESPONSE, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    449, /* .binaryEncodingId */
    OpenSecureChannelResponse_members /* .members */
},
/* ApplicationType */
{
    UA_TYPENAME("ApplicationType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {307}}, /* .typeId */
    sizeof(UA_ApplicationType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    ApplicationType_members /* .members */
},
/* ServerState */
{
    UA_TYPENAME("ServerState") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {852}}, /* .typeId */
    sizeof(UA_ServerState), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    ServerState_members /* .members */
},
/* QueryNextResponse */
{
    UA_TYPENAME("QueryNextResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {622}}, /* .typeId */
    sizeof(UA_QueryNextResponse), /* .memSize */
    UA_TYPES_QUERYNEXTRESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    624, /* .binaryEncodingId */
    QueryNextResponse_members /* .members */
},
/* DiscoveryConfiguration */
{
    UA_TYPENAME("DiscoveryConfiguration") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12890}}, /* .typeId */
    sizeof(UA_DiscoveryConfiguration), /* .memSize */
    UA_TYPES_DISCOVERYCONFIGURATION, /* .typeIndex */
    0, /* .membersSize */
    false, /* .builtin */
    true, /* .pointerFree */
    true, /* .overlayable */
    12900, /* .binaryEncodingId */
    DiscoveryConfiguration_members /* .members */
},
/* ActivateSessionResponse */
{
    UA_TYPENAME("ActivateSessionResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {468}}, /* .typeId */
    sizeof(UA_ActivateSessionResponse), /* .memSize */
    UA_TYPES_ACTIVATESESSIONRESPONSE, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    470, /* .binaryEncodingId */
    ActivateSessionResponse_members /* .members */
},
/* EndpointUrlListDataType */
{
    UA_TYPENAME("EndpointUrlListDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {11943}}, /* .typeId */
    sizeof(UA_EndpointUrlListDataType), /* .memSize */
    UA_TYPES_ENDPOINTURLLISTDATATYPE, /* .typeIndex */
    1, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    11957, /* .binaryEncodingId */
    EndpointUrlListDataType_members /* .members */
},
/* FilterOperator */
{
    UA_TYPENAME("FilterOperator") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {576}}, /* .typeId */
    sizeof(UA_FilterOperator), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    FilterOperator_members /* .members */
},
/* QueryNextRequest */
{
    UA_TYPENAME("QueryNextRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {619}}, /* .typeId */
    sizeof(UA_QueryNextRequest), /* .memSize */
    UA_TYPES_QUERYNEXTREQUEST, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    621, /* .binaryEncodingId */
    QueryNextRequest_members /* .members */
},
/* WriteResponse */
{
    UA_TYPENAME("WriteResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {674}}, /* .typeId */
    sizeof(UA_WriteResponse), /* .memSize */
    UA_TYPES_WRITERESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    676, /* .binaryEncodingId */
    WriteResponse_members /* .members */
},
/* BrowseNextRequest */
{
    UA_TYPENAME("BrowseNextRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {531}}, /* .typeId */
    sizeof(UA_BrowseNextRequest), /* .memSize */
    UA_TYPES_BROWSENEXTREQUEST, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    533, /* .binaryEncodingId */
    BrowseNextRequest_members /* .members */
},
/* CreateSubscriptionRequest */
{
    UA_TYPENAME("CreateSubscriptionRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {785}}, /* .typeId */
    sizeof(UA_CreateSubscriptionRequest), /* .memSize */
    UA_TYPES_CREATESUBSCRIPTIONREQUEST, /* .typeIndex */
    7, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    787, /* .binaryEncodingId */
    CreateSubscriptionRequest_members /* .members */
},
/* VariableTypeAttributes */
{
    UA_TYPENAME("VariableTypeAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {364}}, /* .typeId */
    sizeof(UA_VariableTypeAttributes), /* .memSize */
    UA_TYPES_VARIABLETYPEATTRIBUTES, /* .typeIndex */
    10, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    366, /* .binaryEncodingId */
    VariableTypeAttributes_members /* .members */
},
/* BrowsePathResult */
{
    UA_TYPENAME("BrowsePathResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {549}}, /* .typeId */
    sizeof(UA_BrowsePathResult), /* .memSize */
    UA_TYPES_BROWSEPATHRESULT, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    551, /* .binaryEncodingId */
    BrowsePathResult_members /* .members */
},
/* ModifySubscriptionResponse */
{
    UA_TYPENAME("ModifySubscriptionResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {794}}, /* .typeId */
    sizeof(UA_ModifySubscriptionResponse), /* .memSize */
    UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    796, /* .binaryEncodingId */
    ModifySubscriptionResponse_members /* .members */
},
/* RedundantServerDataType */
{
    UA_TYPENAME("RedundantServerDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {853}}, /* .typeId */
    sizeof(UA_RedundantServerDataType), /* .memSize */
    UA_TYPES_REDUNDANTSERVERDATATYPE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    855, /* .binaryEncodingId */
    RedundantServerDataType_members /* .members */
},
/* RegisterNodesResponse */
{
    UA_TYPENAME("RegisterNodesResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {561}}, /* .typeId */
    sizeof(UA_RegisterNodesResponse), /* .memSize */
    UA_TYPES_REGISTERNODESRESPONSE, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    563, /* .binaryEncodingId */
    RegisterNodesResponse_members /* .members */
},
/* CloseSessionRequest */
{
    UA_TYPENAME("CloseSessionRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {471}}, /* .typeId */
    sizeof(UA_CloseSessionRequest), /* .memSize */
    UA_TYPES_CLOSESESSIONREQUEST, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    473, /* .binaryEncodingId */
    CloseSessionRequest_members /* .members */
},
/* ModifyMonitoredItemsResponse */
{
    UA_TYPENAME("ModifyMonitoredItemsResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {764}}, /* .typeId */
    sizeof(UA_ModifyMonitoredItemsResponse), /* .memSize */
    UA_TYPES_MODIFYMONITOREDITEMSRESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    766, /* .binaryEncodingId */
    ModifyMonitoredItemsResponse_members /* .members */
},
/* ModifySubscriptionRequest */
{
    UA_TYPENAME("ModifySubscriptionRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {791}}, /* .typeId */
    sizeof(UA_ModifySubscriptionRequest), /* .memSize */
    UA_TYPES_MODIFYSUBSCRIPTIONREQUEST, /* .typeIndex */
    7, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    793, /* .binaryEncodingId */
    ModifySubscriptionRequest_members /* .members */
},
/* ServerDiagnosticsSummaryDataType */
{
    UA_TYPENAME("ServerDiagnosticsSummaryDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {859}}, /* .typeId */
    sizeof(UA_ServerDiagnosticsSummaryDataType), /* .memSize */
    UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE, /* .typeIndex */
    12, /* .membersSize */
    false, /* .builtin */
    true, /* .pointerFree */
    true && UA_BINARY_OVERLAYABLE_INTEGER && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_ServerDiagnosticsSummaryDataType, currentSessionCount) == (offsetof(UA_ServerDiagnosticsSummaryDataType, serverViewCount) + sizeof(UA_UInt32)) && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSessionCount) == (offsetof(UA_ServerDiagnosticsSummaryDataType, currentSessionCount) + sizeof(UA_UInt32)) && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedSessionCount) == (offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSessionCount) + sizeof(UA_UInt32)) && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_ServerDiagnosticsSummaryDataType, rejectedSessionCount) == (offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedSessionCount) + sizeof(UA_UInt32)) && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_ServerDiagnosticsSummaryDataType, sessionTimeoutCount) == (offsetof(UA_ServerDiagnosticsSummaryDataType, rejectedSessionCount) + sizeof(UA_UInt32)) && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_ServerDiagnosticsSummaryDataType, sessionAbortCount) == (offsetof(UA_ServerDiagnosticsSummaryDataType, sessionTimeoutCount) + sizeof(UA_UInt32)) && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_ServerDiagnosticsSummaryDataType, currentSubscriptionCount) == (offsetof(UA_ServerDiagnosticsSummaryDataType, sessionAbortCount) + sizeof(UA_UInt32)) && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSubscriptionCount) == (offsetof(UA_ServerDiagnosticsSummaryDataType, currentSubscriptionCount) + sizeof(UA_UInt32)) && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_ServerDiagnosticsSummaryDataType, publishingIntervalCount) == (offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSubscriptionCount) + sizeof(UA_UInt32)) && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedRequestsCount) == (offsetof(UA_ServerDiagnosticsSummaryDataType, publishingIntervalCount) + sizeof(UA_UInt32)) && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_ServerDiagnosticsSummaryDataType, rejectedRequestsCount) == (offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedRequestsCount) + sizeof(UA_UInt32)), /* .overlayable */
    861, /* .binaryEncodingId */
    ServerDiagnosticsSummaryDataType_members /* .members */
},
/* UserTokenPolicy */
{
    UA_TYPENAME("UserTokenPolicy") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {304}}, /* .typeId */
    sizeof(UA_UserTokenPolicy), /* .memSize */
    UA_TYPES_USERTOKENPOLICY, /* .typeIndex */
    5, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    306, /* .binaryEncodingId */
    UserTokenPolicy_members /* .members */
},
/* ReferenceTypeAttributes */
{
    UA_TYPENAME("ReferenceTypeAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {367}}, /* .typeId */
    sizeof(UA_ReferenceTypeAttributes), /* .memSize */
    UA_TYPES_REFERENCETYPEATTRIBUTES, /* .typeIndex */
    8, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    369, /* .binaryEncodingId */
    ReferenceTypeAttributes_members /* .members */
},
/* BrowsePath */
{
    UA_TYPENAME("BrowsePath") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {543}}, /* .typeId */
    sizeof(UA_BrowsePath), /* .memSize */
    UA_TYPES_BROWSEPATH, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    545, /* .binaryEncodingId */
    BrowsePath_members /* .members */
},
/* SetMonitoringModeRequest */
{
    UA_TYPENAME("SetMonitoringModeRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {767}}, /* .typeId */
    sizeof(UA_SetMonitoringModeRequest), /* .memSize */
    UA_TYPES_SETMONITORINGMODEREQUEST, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    769, /* .binaryEncodingId */
    SetMonitoringModeRequest_members /* .members */
},
/* UnregisterNodesResponse */
{
    UA_TYPENAME("UnregisterNodesResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {567}}, /* .typeId */
    sizeof(UA_UnregisterNodesResponse), /* .memSize */
    UA_TYPES_UNREGISTERNODESRESPONSE, /* .typeIndex */
    1, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    569, /* .binaryEncodingId */
    UnregisterNodesResponse_members /* .members */
},
/* WriteRequest */
{
    UA_TYPENAME("WriteRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {671}}, /* .typeId */
    sizeof(UA_WriteRequest), /* .memSize */
    UA_TYPES_WRITEREQUEST, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    673, /* .binaryEncodingId */
    WriteRequest_members /* .members */
},
/* ObjectAttributes */
{
    UA_TYPENAME("ObjectAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {352}}, /* .typeId */
    sizeof(UA_ObjectAttributes), /* .memSize */
    UA_TYPES_OBJECTATTRIBUTES, /* .typeIndex */
    6, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    354, /* .binaryEncodingId */
    ObjectAttributes_members /* .members */
},
/* BrowseResultMask */
{
    UA_TYPENAME("BrowseResultMask") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {517}}, /* .typeId */
    sizeof(UA_BrowseResultMask), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    BrowseResultMask_members /* .members */
},
/* BrowseDescription */
{
    UA_TYPENAME("BrowseDescription") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {514}}, /* .typeId */
    sizeof(UA_BrowseDescription), /* .memSize */
    UA_TYPES_BROWSEDESCRIPTION, /* .typeIndex */
    6, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    516, /* .binaryEncodingId */
    BrowseDescription_members /* .members */
},
/* SetTriggeringRequest */
{
    UA_TYPENAME("SetTriggeringRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {773}}, /* .typeId */
    sizeof(UA_SetTriggeringRequest), /* .memSize */
    UA_TYPES_SETTRIGGERINGREQUEST, /* .typeIndex */
    5, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    775, /* .binaryEncodingId */
    SetTriggeringRequest_members /* .members */
},
/* SessionSecurityDiagnosticsDataType */
{
    UA_TYPENAME("SessionSecurityDiagnosticsDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {868}}, /* .typeId */
    sizeof(UA_SessionSecurityDiagnosticsDataType), /* .memSize */
    UA_TYPES_SESSIONSECURITYDIAGNOSTICSDATATYPE, /* .typeIndex */
    9, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    870, /* .binaryEncodingId */
    SessionSecurityDiagnosticsDataType_members /* .members */
},
/* RepublishRequest */
{
    UA_TYPENAME("RepublishRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {830}}, /* .typeId */
    sizeof(UA_RepublishRequest), /* .memSize */
    UA_TYPES_REPUBLISHREQUEST, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    832, /* .binaryEncodingId */
    RepublishRequest_members /* .members */
},
/* GetEndpointsRequest */
{
    UA_TYPENAME("GetEndpointsRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {426}}, /* .typeId */
    sizeof(UA_GetEndpointsRequest), /* .memSize */
    UA_TYPES_GETENDPOINTSREQUEST, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    428, /* .binaryEncodingId */
    GetEndpointsRequest_members /* .members */
},
/* PublishRequest */
{
    UA_TYPENAME("PublishRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {824}}, /* .typeId */
    sizeof(UA_PublishRequest), /* .memSize */
    UA_TYPES_PUBLISHREQUEST, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    826, /* .binaryEncodingId */
    PublishRequest_members /* .members */
},
/* DeleteSubscriptionsResponse */
{
    UA_TYPENAME("DeleteSubscriptionsResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {848}}, /* .typeId */
    sizeof(UA_DeleteSubscriptionsResponse), /* .memSize */
    UA_TYPES_DELETESUBSCRIPTIONSRESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    850, /* .binaryEncodingId */
    DeleteSubscriptionsResponse_members /* .members */
},
/* AddNodesResponse */
{
    UA_TYPENAME("AddNodesResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {489}}, /* .typeId */
    sizeof(UA_AddNodesResponse), /* .memSize */
    UA_TYPES_ADDNODESRESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    491, /* .binaryEncodingId */
    AddNodesResponse_members /* .members */
},
/* DataChangeNotification */
{
    UA_TYPENAME("DataChangeNotification") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {809}}, /* .typeId */
    sizeof(UA_DataChangeNotification), /* .memSize */
    UA_TYPES_DATACHANGENOTIFICATION, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    811, /* .binaryEncodingId */
    DataChangeNotification_members /* .members */
},
/* CloseSecureChannelResponse */
{
    UA_TYPENAME("CloseSecureChannelResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {453}}, /* .typeId */
    sizeof(UA_CloseSecureChannelResponse), /* .memSize */
    UA_TYPES_CLOSESECURECHANNELRESPONSE, /* .typeIndex */
    1, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    455, /* .binaryEncodingId */
    CloseSecureChannelResponse_members /* .members */
},
/* ModifyMonitoredItemsRequest */
{
    UA_TYPENAME("ModifyMonitoredItemsRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {761}}, /* .typeId */
    sizeof(UA_ModifyMonitoredItemsRequest), /* .memSize */
    UA_TYPES_MODIFYMONITOREDITEMSREQUEST, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    763, /* .binaryEncodingId */
    ModifyMonitoredItemsRequest_members /* .members */
},
/* SetMonitoringModeResponse */
{
    UA_TYPENAME("SetMonitoringModeResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {770}}, /* .typeId */
    sizeof(UA_SetMonitoringModeResponse), /* .memSize */
    UA_TYPES_SETMONITORINGMODERESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    772, /* .binaryEncodingId */
    SetMonitoringModeResponse_members /* .members */
},
/* FindServersRequest */
{
    UA_TYPENAME("FindServersRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {420}}, /* .typeId */
    sizeof(UA_FindServersRequest), /* .memSize */
    UA_TYPES_FINDSERVERSREQUEST, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    422, /* .binaryEncodingId */
    FindServersRequest_members /* .members */
},
/* ReferenceDescription */
{
    UA_TYPENAME("ReferenceDescription") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {518}}, /* .typeId */
    sizeof(UA_ReferenceDescription), /* .memSize */
    UA_TYPES_REFERENCEDESCRIPTION, /* .typeIndex */
    7, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    520, /* .binaryEncodingId */
    ReferenceDescription_members /* .members */
},
/* SetPublishingModeResponse */
{
    UA_TYPENAME("SetPublishingModeResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {800}}, /* .typeId */
    sizeof(UA_SetPublishingModeResponse), /* .memSize */
    UA_TYPES_SETPUBLISHINGMODERESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    802, /* .binaryEncodingId */
    SetPublishingModeResponse_members /* .members */
},
/* ContentFilterResult */
{
    UA_TYPENAME("ContentFilterResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {607}}, /* .typeId */
    sizeof(UA_ContentFilterResult), /* .memSize */
    UA_TYPES_CONTENTFILTERRESULT, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    609, /* .binaryEncodingId */
    ContentFilterResult_members /* .members */
},
/* RegisterServerResponse */
{
    UA_TYPENAME("RegisterServerResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {438}}, /* .typeId */
    sizeof(UA_RegisterServerResponse), /* .memSize */
    UA_TYPES_REGISTERSERVERRESPONSE, /* .typeIndex */
    1, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    440, /* .binaryEncodingId */
    RegisterServerResponse_members /* .members */
},
/* AddReferencesItem */
{
    UA_TYPENAME("AddReferencesItem") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {379}}, /* .typeId */
    sizeof(UA_AddReferencesItem), /* .memSize */
    UA_TYPES_ADDREFERENCESITEM, /* .typeIndex */
    6, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    381, /* .binaryEncodingId */
    AddReferencesItem_members /* .members */
},
/* QueryDataDescription */
{
    UA_TYPENAME("QueryDataDescription") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {570}}, /* .typeId */
    sizeof(UA_QueryDataDescription), /* .memSize */
    UA_TYPES_QUERYDATADESCRIPTION, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    572, /* .binaryEncodingId */
    QueryDataDescription_members /* .members */
},
/* CreateSubscriptionResponse */
{
    UA_TYPENAME("CreateSubscriptionResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {788}}, /* .typeId */
    sizeof(UA_CreateSubscriptionResponse), /* .memSize */
    UA_TYPES_CREATESUBSCRIPTIONRESPONSE, /* .typeIndex */
    5, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    790, /* .binaryEncodingId */
    CreateSubscriptionResponse_members /* .members */
},
/* NetworkGroupDataType */
{
    UA_TYPENAME("NetworkGroupDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {11944}}, /* .typeId */
    sizeof(UA_NetworkGroupDataType), /* .memSize */
    UA_TYPES_NETWORKGROUPDATATYPE, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    11958, /* .binaryEncodingId */
    NetworkGroupDataType_members /* .members */
},
/* DeleteReferencesResponse */
{
    UA_TYPENAME("DeleteReferencesResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {507}}, /* .typeId */
    sizeof(UA_DeleteReferencesResponse), /* .memSize */
    UA_TYPES_DELETEREFERENCESRESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    509, /* .binaryEncodingId */
    DeleteReferencesResponse_members /* .members */
},
/* CreateMonitoredItemsResponse */
{
    UA_TYPENAME("CreateMonitoredItemsResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {752}}, /* .typeId */
    sizeof(UA_CreateMonitoredItemsResponse), /* .memSize */
    UA_TYPES_CREATEMONITOREDITEMSRESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    754, /* .binaryEncodingId */
    CreateMonitoredItemsResponse_members /* .members */
},
/* CallResponse */
{
    UA_TYPENAME("CallResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {713}}, /* .typeId */
    sizeof(UA_CallResponse), /* .memSize */
    UA_TYPES_CALLRESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    715, /* .binaryEncodingId */
    CallResponse_members /* .members */
},
/* DeleteNodesResponse */
{
    UA_TYPENAME("DeleteNodesResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {501}}, /* .typeId */
    sizeof(UA_DeleteNodesResponse), /* .memSize */
    UA_TYPES_DELETENODESRESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    503, /* .binaryEncodingId */
    DeleteNodesResponse_members /* .members */
},
/* RepublishResponse */
{
    UA_TYPENAME("RepublishResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {833}}, /* .typeId */
    sizeof(UA_RepublishResponse), /* .memSize */
    UA_TYPES_REPUBLISHRESPONSE, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    835, /* .binaryEncodingId */
    RepublishResponse_members /* .members */
},
/* MonitoredItemCreateRequest */
{
    UA_TYPENAME("MonitoredItemCreateRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {743}}, /* .typeId */
    sizeof(UA_MonitoredItemCreateRequest), /* .memSize */
    UA_TYPES_MONITOREDITEMCREATEREQUEST, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    745, /* .binaryEncodingId */
    MonitoredItemCreateRequest_members /* .members */
},
/* DeleteReferencesRequest */
{
    UA_TYPENAME("DeleteReferencesRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {504}}, /* .typeId */
    sizeof(UA_DeleteReferencesRequest), /* .memSize */
    UA_TYPES_DELETEREFERENCESREQUEST, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    506, /* .binaryEncodingId */
    DeleteReferencesRequest_members /* .members */
},
/* ReadResponse */
{
    UA_TYPENAME("ReadResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {632}}, /* .typeId */
    sizeof(UA_ReadResponse), /* .memSize */
    UA_TYPES_READRESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    634, /* .binaryEncodingId */
    ReadResponse_members /* .members */
},
/* AddReferencesRequest */
{
    UA_TYPENAME("AddReferencesRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {492}}, /* .typeId */
    sizeof(UA_AddReferencesRequest), /* .memSize */
    UA_TYPES_ADDREFERENCESREQUEST, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    494, /* .binaryEncodingId */
    AddReferencesRequest_members /* .members */
},
/* ReadRequest */
{
    UA_TYPENAME("ReadRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {629}}, /* .typeId */
    sizeof(UA_ReadRequest), /* .memSize */
    UA_TYPES_READREQUEST, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    631, /* .binaryEncodingId */
    ReadRequest_members /* .members */
},
/* OpenSecureChannelRequest */
{
    UA_TYPENAME("OpenSecureChannelRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {444}}, /* .typeId */
    sizeof(UA_OpenSecureChannelRequest), /* .memSize */
    UA_TYPES_OPENSECURECHANNELREQUEST, /* .typeIndex */
    6, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    446, /* .binaryEncodingId */
    OpenSecureChannelRequest_members /* .members */
},
/* RegisterServer2Response */
{
    UA_TYPENAME("RegisterServer2Response") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12194}}, /* .typeId */
    sizeof(UA_RegisterServer2Response), /* .memSize */
    UA_TYPES_REGISTERSERVER2RESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    12212, /* .binaryEncodingId */
    RegisterServer2Response_members /* .members */
},
/* AddNodesItem */
{
    UA_TYPENAME("AddNodesItem") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {376}}, /* .typeId */
    sizeof(UA_AddNodesItem), /* .memSize */
    UA_TYPES_ADDNODESITEM, /* .typeIndex */
    7, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    378, /* .binaryEncodingId */
    AddNodesItem_members /* .members */
},
/* NodeTypeDescription */
{
    UA_TYPENAME("NodeTypeDescription") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {573}}, /* .typeId */
    sizeof(UA_NodeTypeDescription), /* .memSize */
    UA_TYPES_NODETYPEDESCRIPTION, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    575, /* .binaryEncodingId */
    NodeTypeDescription_members /* .members */
},
/* ServerStatusDataType */
{
    UA_TYPENAME("ServerStatusDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {862}}, /* .typeId */
    sizeof(UA_ServerStatusDataType), /* .memSize */
    UA_TYPES_SERVERSTATUSDATATYPE, /* .typeIndex */
    6, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    864, /* .binaryEncodingId */
    ServerStatusDataType_members /* .members */
},
/* AddReferencesResponse */
{
    UA_TYPENAME("AddReferencesResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {495}}, /* .typeId */
    sizeof(UA_AddReferencesResponse), /* .memSize */
    UA_TYPES_ADDREFERENCESRESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    497, /* .binaryEncodingId */
    AddReferencesResponse_members /* .members */
},
/* TranslateBrowsePathsToNodeIdsResponse */
{
    UA_TYPENAME("TranslateBrowsePathsToNodeIdsResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {555}}, /* .typeId */
    sizeof(UA_TranslateBrowsePathsToNodeIdsResponse), /* .memSize */
    UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    557, /* .binaryEncodingId */
    TranslateBrowsePathsToNodeIdsResponse_members /* .members */
},
/* DataChangeFilter */
{
    UA_TYPENAME("DataChangeFilter") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {722}}, /* .typeId */
    sizeof(UA_DataChangeFilter), /* .memSize */
    UA_TYPES_DATACHANGEFILTER, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    true, /* .pointerFree */
    true && UA_BINARY_OVERLAYABLE_INTEGER && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_DataChangeFilter, deadbandType) == (offsetof(UA_DataChangeFilter, trigger) + sizeof(UA_DataChangeTrigger)) && UA_BINARY_OVERLAYABLE_FLOAT && offsetof(UA_DataChangeFilter, deadbandValue) == (offsetof(UA_DataChangeFilter, deadbandType) + sizeof(UA_UInt32)), /* .overlayable */
    724, /* .binaryEncodingId */
    DataChangeFilter_members /* .members */
},
/* ContentFilterElement */
{
    UA_TYPENAME("ContentFilterElement") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {583}}, /* .typeId */
    sizeof(UA_ContentFilterElement), /* .memSize */
    UA_TYPES_CONTENTFILTERELEMENT, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    585, /* .binaryEncodingId */
    ContentFilterElement_members /* .members */
},
/* TranslateBrowsePathsToNodeIdsRequest */
{
    UA_TYPENAME("TranslateBrowsePathsToNodeIdsRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {552}}, /* .typeId */
    sizeof(UA_TranslateBrowsePathsToNodeIdsRequest), /* .memSize */
    UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    554, /* .binaryEncodingId */
    TranslateBrowsePathsToNodeIdsRequest_members /* .members */
},
/* CloseSessionResponse */
{
    UA_TYPENAME("CloseSessionResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {474}}, /* .typeId */
    sizeof(UA_CloseSessionResponse), /* .memSize */
    UA_TYPES_CLOSESESSIONRESPONSE, /* .typeIndex */
    1, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    476, /* .binaryEncodingId */
    CloseSessionResponse_members /* .members */
},
/* ApplicationDescription */
{
    UA_TYPENAME("ApplicationDescription") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {308}}, /* .typeId */
    sizeof(UA_ApplicationDescription), /* .memSize */
    UA_TYPES_APPLICATIONDESCRIPTION, /* .typeIndex */
    7, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    310, /* .binaryEncodingId */
    ApplicationDescription_members /* .members */
},
/* SessionDiagnosticsDataType */
{
    UA_TYPENAME("SessionDiagnosticsDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {865}}, /* .typeId */
    sizeof(UA_SessionDiagnosticsDataType), /* .memSize */
    UA_TYPES_SESSIONDIAGNOSTICSDATATYPE, /* .typeIndex */
    43, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    867, /* .binaryEncodingId */
    SessionDiagnosticsDataType_members /* .members */
},
/* ServiceFault */
{
    UA_TYPENAME("ServiceFault") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {395}}, /* .typeId */
    sizeof(UA_ServiceFault), /* .memSize */
    UA_TYPES_SERVICEFAULT, /* .typeIndex */
    1, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    397, /* .binaryEncodingId */
    ServiceFault_members /* .members */
},
/* RegisteredServer */
{
    UA_TYPENAME("RegisteredServer") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {432}}, /* .typeId */
    sizeof(UA_RegisteredServer), /* .memSize */
    UA_TYPES_REGISTEREDSERVER, /* .typeIndex */
    8, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    434, /* .binaryEncodingId */
    RegisteredServer_members /* .members */
},
/* AggregateFilter */
{
    UA_TYPENAME("AggregateFilter") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {728}}, /* .typeId */
    sizeof(UA_AggregateFilter), /* .memSize */
    UA_TYPES_AGGREGATEFILTER, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    730, /* .binaryEncodingId */
    AggregateFilter_members /* .members */
},
/* RegisterServerRequest */
{
    UA_TYPENAME("RegisterServerRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {435}}, /* .typeId */
    sizeof(UA_RegisterServerRequest), /* .memSize */
    UA_TYPES_REGISTERSERVERREQUEST, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    437, /* .binaryEncodingId */
    RegisterServerRequest_members /* .members */
},
/* EndpointDescription */
{
    UA_TYPENAME("EndpointDescription") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {312}}, /* .typeId */
    sizeof(UA_EndpointDescription), /* .memSize */
    UA_TYPES_ENDPOINTDESCRIPTION, /* .typeIndex */
    8, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    314, /* .binaryEncodingId */
    EndpointDescription_members /* .members */
},
/* CreateMonitoredItemsRequest */
{
    UA_TYPENAME("CreateMonitoredItemsRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {749}}, /* .typeId */
    sizeof(UA_CreateMonitoredItemsRequest), /* .memSize */
    UA_TYPES_CREATEMONITOREDITEMSREQUEST, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    751, /* .binaryEncodingId */
    CreateMonitoredItemsRequest_members /* .members */
},
/* ContentFilter */
{
    UA_TYPENAME("ContentFilter") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {586}}, /* .typeId */
    sizeof(UA_ContentFilter), /* .memSize */
    UA_TYPES_CONTENTFILTER, /* .typeIndex */
    1, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    588, /* .binaryEncodingId */
    ContentFilter_members /* .members */
},
/* QueryFirstResponse */
{
    UA_TYPENAME("QueryFirstResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {616}}, /* .typeId */
    sizeof(UA_QueryFirstResponse), /* .memSize */
    UA_TYPES_QUERYFIRSTRESPONSE, /* .typeIndex */
    6, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    618, /* .binaryEncodingId */
    QueryFirstResponse_members /* .members */
},
/* AddNodesRequest */
{
    UA_TYPENAME("AddNodesRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {486}}, /* .typeId */
    sizeof(UA_AddNodesRequest), /* .memSize */
    UA_TYPES_ADDNODESREQUEST, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    488, /* .binaryEncodingId */
    AddNodesRequest_members /* .members */
},
/* BrowseRequest */
{
    UA_TYPENAME("BrowseRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {525}}, /* .typeId */
    sizeof(UA_BrowseRequest), /* .memSize */
    UA_TYPES_BROWSEREQUEST, /* .typeIndex */
    4, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    527, /* .binaryEncodingId */
    BrowseRequest_members /* .members */
},
/* BrowseResult */
{
    UA_TYPENAME("BrowseResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {522}}, /* .typeId */
    sizeof(UA_BrowseResult), /* .memSize */
    UA_TYPES_BROWSERESULT, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    524, /* .binaryEncodingId */
    BrowseResult_members /* .members */
},
/* RegisterServer2Request */
{
    UA_TYPENAME("RegisterServer2Request") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12193}}, /* .typeId */
    sizeof(UA_RegisterServer2Request), /* .memSize */
    UA_TYPES_REGISTERSERVER2REQUEST, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    12211, /* .binaryEncodingId */
    RegisterServer2Request_members /* .members */
},
/* CreateSessionRequest */
{
    UA_TYPENAME("CreateSessionRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {459}}, /* .typeId */
    sizeof(UA_CreateSessionRequest), /* .memSize */
    UA_TYPES_CREATESESSIONREQUEST, /* .typeIndex */
    9, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    461, /* .binaryEncodingId */
    CreateSessionRequest_members /* .members */
},
/* EventFilter */
{
    UA_TYPENAME("EventFilter") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {725}}, /* .typeId */
    sizeof(UA_EventFilter), /* .memSize */
    UA_TYPES_EVENTFILTER, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    727, /* .binaryEncodingId */
    EventFilter_members /* .members */
},
/* GetEndpointsResponse */
{
    UA_TYPENAME("GetEndpointsResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {429}}, /* .typeId */
    sizeof(UA_GetEndpointsResponse), /* .memSize */
    UA_TYPES_GETENDPOINTSRESPONSE, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    431, /* .binaryEncodingId */
    GetEndpointsResponse_members /* .members */
},
/* FindServersResponse */
{
    UA_TYPENAME("FindServersResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {423}}, /* .typeId */
    sizeof(UA_FindServersResponse), /* .memSize */
    UA_TYPES_FINDSERVERSRESPONSE, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    425, /* .binaryEncodingId */
    FindServersResponse_members /* .members */
},
/* BrowseNextResponse */
{
    UA_TYPENAME("BrowseNextResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {534}}, /* .typeId */
    sizeof(UA_BrowseNextResponse), /* .memSize */
    UA_TYPES_BROWSENEXTRESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    536, /* .binaryEncodingId */
    BrowseNextResponse_members /* .members */
},
/* BrowseResponse */
{
    UA_TYPENAME("BrowseResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {528}}, /* .typeId */
    sizeof(UA_BrowseResponse), /* .memSize */
    UA_TYPES_BROWSERESPONSE, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    530, /* .binaryEncodingId */
    BrowseResponse_members /* .members */
},
/* CreateSessionResponse */
{
    UA_TYPENAME("CreateSessionResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {462}}, /* .typeId */
    sizeof(UA_CreateSessionResponse), /* .memSize */
    UA_TYPES_CREATESESSIONRESPONSE, /* .typeIndex */
    10, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    464, /* .binaryEncodingId */
    CreateSessionResponse_members /* .members */
},
/* QueryFirstRequest */
{
    UA_TYPENAME("QueryFirstRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {613}}, /* .typeId */
    sizeof(UA_QueryFirstRequest), /* .memSize */
    UA_TYPES_QUERYFIRSTREQUEST, /* .typeIndex */
    6, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    615, /* .binaryEncodingId */
    QueryFirstRequest_members /* .members */
},
};

