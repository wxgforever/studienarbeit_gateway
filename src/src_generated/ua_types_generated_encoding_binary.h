/* Generated from Opc.Ua.Types.bsd with script /home/wxg/open62541/tools/generate_datatypes.py
 * on host wxg-OMEN-by-HP-Laptop by user wxg at 2018-03-04 07:30:08 */

#include "ua_types_encoding_binary.h"
#include "ua_types_generated.h"

/* Boolean */
static UA_INLINE UA_StatusCode
UA_Boolean_encodeBinary(const UA_Boolean *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BOOLEAN], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Boolean_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Boolean *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BOOLEAN], 0, NULL);
}

/* SByte */
static UA_INLINE UA_StatusCode
UA_SByte_encodeBinary(const UA_SByte *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SBYTE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SByte_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SByte *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SBYTE], 0, NULL);
}

/* Byte */
static UA_INLINE UA_StatusCode
UA_Byte_encodeBinary(const UA_Byte *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BYTE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Byte_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Byte *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BYTE], 0, NULL);
}

/* Int16 */
static UA_INLINE UA_StatusCode
UA_Int16_encodeBinary(const UA_Int16 *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_INT16], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Int16_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Int16 *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_INT16], 0, NULL);
}

/* UInt16 */
static UA_INLINE UA_StatusCode
UA_UInt16_encodeBinary(const UA_UInt16 *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UINT16], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UInt16_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UInt16 *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UINT16], 0, NULL);
}

/* Int32 */
static UA_INLINE UA_StatusCode
UA_Int32_encodeBinary(const UA_Int32 *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_INT32], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Int32_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Int32 *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_INT32], 0, NULL);
}

/* UInt32 */
static UA_INLINE UA_StatusCode
UA_UInt32_encodeBinary(const UA_UInt32 *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UINT32], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UInt32_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UInt32 *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UINT32], 0, NULL);
}

/* Int64 */
static UA_INLINE UA_StatusCode
UA_Int64_encodeBinary(const UA_Int64 *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_INT64], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Int64_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Int64 *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_INT64], 0, NULL);
}

/* UInt64 */
static UA_INLINE UA_StatusCode
UA_UInt64_encodeBinary(const UA_UInt64 *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UINT64], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UInt64_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UInt64 *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UINT64], 0, NULL);
}

/* Float */
static UA_INLINE UA_StatusCode
UA_Float_encodeBinary(const UA_Float *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_FLOAT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Float_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Float *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_FLOAT], 0, NULL);
}

/* Double */
static UA_INLINE UA_StatusCode
UA_Double_encodeBinary(const UA_Double *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DOUBLE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Double_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Double *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DOUBLE], 0, NULL);
}

/* String */
static UA_INLINE UA_StatusCode
UA_String_encodeBinary(const UA_String *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_STRING], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_String_decodeBinary(const UA_ByteString *src, size_t *offset, UA_String *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_STRING], 0, NULL);
}

/* DateTime */
static UA_INLINE UA_StatusCode
UA_DateTime_encodeBinary(const UA_DateTime *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATETIME], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DateTime_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DateTime *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATETIME], 0, NULL);
}

/* Guid */
static UA_INLINE UA_StatusCode
UA_Guid_encodeBinary(const UA_Guid *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_GUID], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Guid_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Guid *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_GUID], 0, NULL);
}

/* ByteString */
static UA_INLINE UA_StatusCode
UA_ByteString_encodeBinary(const UA_ByteString *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BYTESTRING], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ByteString_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ByteString *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BYTESTRING], 0, NULL);
}

/* XmlElement */
static UA_INLINE UA_StatusCode
UA_XmlElement_encodeBinary(const UA_XmlElement *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_XMLELEMENT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_XmlElement_decodeBinary(const UA_ByteString *src, size_t *offset, UA_XmlElement *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_XMLELEMENT], 0, NULL);
}

/* NodeId */
static UA_INLINE UA_StatusCode
UA_NodeId_encodeBinary(const UA_NodeId *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NODEID], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NodeId_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NodeId *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NODEID], 0, NULL);
}

/* ExpandedNodeId */
static UA_INLINE UA_StatusCode
UA_ExpandedNodeId_encodeBinary(const UA_ExpandedNodeId *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_EXPANDEDNODEID], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ExpandedNodeId_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ExpandedNodeId *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_EXPANDEDNODEID], 0, NULL);
}

/* StatusCode */
static UA_INLINE UA_StatusCode
UA_StatusCode_encodeBinary(const UA_StatusCode *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_STATUSCODE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_StatusCode_decodeBinary(const UA_ByteString *src, size_t *offset, UA_StatusCode *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_STATUSCODE], 0, NULL);
}

/* QualifiedName */
static UA_INLINE UA_StatusCode
UA_QualifiedName_encodeBinary(const UA_QualifiedName *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_QUALIFIEDNAME], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_QualifiedName_decodeBinary(const UA_ByteString *src, size_t *offset, UA_QualifiedName *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_QUALIFIEDNAME], 0, NULL);
}

/* LocalizedText */
static UA_INLINE UA_StatusCode
UA_LocalizedText_encodeBinary(const UA_LocalizedText *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_LocalizedText_decodeBinary(const UA_ByteString *src, size_t *offset, UA_LocalizedText *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT], 0, NULL);
}

/* ExtensionObject */
static UA_INLINE UA_StatusCode
UA_ExtensionObject_encodeBinary(const UA_ExtensionObject *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ExtensionObject_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ExtensionObject *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT], 0, NULL);
}

/* DataValue */
static UA_INLINE UA_StatusCode
UA_DataValue_encodeBinary(const UA_DataValue *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATAVALUE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataValue_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataValue *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATAVALUE], 0, NULL);
}

/* Variant */
static UA_INLINE UA_StatusCode
UA_Variant_encodeBinary(const UA_Variant *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_VARIANT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Variant_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Variant *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_VARIANT], 0, NULL);
}

/* DiagnosticInfo */
static UA_INLINE UA_StatusCode
UA_DiagnosticInfo_encodeBinary(const UA_DiagnosticInfo *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DIAGNOSTICINFO], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DiagnosticInfo_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DiagnosticInfo *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DIAGNOSTICINFO], 0, NULL);
}

/* SignedSoftwareCertificate */
static UA_INLINE UA_StatusCode
UA_SignedSoftwareCertificate_encodeBinary(const UA_SignedSoftwareCertificate *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SIGNEDSOFTWARECERTIFICATE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SignedSoftwareCertificate_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SignedSoftwareCertificate *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SIGNEDSOFTWARECERTIFICATE], 0, NULL);
}

/* SemanticChangeStructureDataType */
static UA_INLINE UA_StatusCode
UA_SemanticChangeStructureDataType_encodeBinary(const UA_SemanticChangeStructureDataType *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SEMANTICCHANGESTRUCTUREDATATYPE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SemanticChangeStructureDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SemanticChangeStructureDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SEMANTICCHANGESTRUCTUREDATATYPE], 0, NULL);
}

/* StatusChangeNotification */
static UA_INLINE UA_StatusCode
UA_StatusChangeNotification_encodeBinary(const UA_StatusChangeNotification *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_STATUSCHANGENOTIFICATION], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_StatusChangeNotification_decodeBinary(const UA_ByteString *src, size_t *offset, UA_StatusChangeNotification *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_STATUSCHANGENOTIFICATION], 0, NULL);
}

/* BrowsePathTarget */
static UA_INLINE UA_StatusCode
UA_BrowsePathTarget_encodeBinary(const UA_BrowsePathTarget *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSEPATHTARGET], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowsePathTarget_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowsePathTarget *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSEPATHTARGET], 0, NULL);
}

/* ViewAttributes */
static UA_INLINE UA_StatusCode
UA_ViewAttributes_encodeBinary(const UA_ViewAttributes *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_VIEWATTRIBUTES], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ViewAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ViewAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_VIEWATTRIBUTES], 0, NULL);
}

/* RequestHeader */
static UA_INLINE UA_StatusCode
UA_RequestHeader_encodeBinary(const UA_RequestHeader *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REQUESTHEADER], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RequestHeader_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RequestHeader *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REQUESTHEADER], 0, NULL);
}

/* MonitoredItemModifyResult */
static UA_INLINE UA_StatusCode
UA_MonitoredItemModifyResult_encodeBinary(const UA_MonitoredItemModifyResult *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYRESULT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MonitoredItemModifyResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MonitoredItemModifyResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYRESULT], 0, NULL);
}

/* CloseSecureChannelRequest */
static UA_INLINE UA_StatusCode
UA_CloseSecureChannelRequest_encodeBinary(const UA_CloseSecureChannelRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CloseSecureChannelRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CloseSecureChannelRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELREQUEST], 0, NULL);
}

/* AddNodesResult */
static UA_INLINE UA_StatusCode
UA_AddNodesResult_encodeBinary(const UA_AddNodesResult *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ADDNODESRESULT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AddNodesResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AddNodesResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ADDNODESRESULT], 0, NULL);
}

/* VariableAttributes */
static UA_INLINE UA_StatusCode
UA_VariableAttributes_encodeBinary(const UA_VariableAttributes *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_VariableAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_VariableAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES], 0, NULL);
}

/* NotificationMessage */
static UA_INLINE UA_StatusCode
UA_NotificationMessage_encodeBinary(const UA_NotificationMessage *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NOTIFICATIONMESSAGE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NotificationMessage_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NotificationMessage *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NOTIFICATIONMESSAGE], 0, NULL);
}

/* FindServersOnNetworkRequest */
static UA_INLINE UA_StatusCode
UA_FindServersOnNetworkRequest_encodeBinary(const UA_FindServersOnNetworkRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_FindServersOnNetworkRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_FindServersOnNetworkRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKREQUEST], 0, NULL);
}

/* EventFieldList */
static UA_INLINE UA_StatusCode
UA_EventFieldList_encodeBinary(const UA_EventFieldList *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_EVENTFIELDLIST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EventFieldList_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EventFieldList *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_EVENTFIELDLIST], 0, NULL);
}

/* MonitoringMode */
static UA_INLINE UA_StatusCode
UA_MonitoringMode_encodeBinary(const UA_MonitoringMode *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MONITORINGMODE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MonitoringMode_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MonitoringMode *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MONITORINGMODE], 0, NULL);
}

/* MdnsDiscoveryConfiguration */
static UA_INLINE UA_StatusCode
UA_MdnsDiscoveryConfiguration_encodeBinary(const UA_MdnsDiscoveryConfiguration *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MDNSDISCOVERYCONFIGURATION], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MdnsDiscoveryConfiguration_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MdnsDiscoveryConfiguration *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MDNSDISCOVERYCONFIGURATION], 0, NULL);
}

/* CallMethodResult */
static UA_INLINE UA_StatusCode
UA_CallMethodResult_encodeBinary(const UA_CallMethodResult *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CALLMETHODRESULT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CallMethodResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CallMethodResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CALLMETHODRESULT], 0, NULL);
}

/* ParsingResult */
static UA_INLINE UA_StatusCode
UA_ParsingResult_encodeBinary(const UA_ParsingResult *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PARSINGRESULT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ParsingResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ParsingResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PARSINGRESULT], 0, NULL);
}

/* RelativePathElement */
static UA_INLINE UA_StatusCode
UA_RelativePathElement_encodeBinary(const UA_RelativePathElement *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RelativePathElement_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RelativePathElement *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT], 0, NULL);
}

/* BrowseDirection */
static UA_INLINE UA_StatusCode
UA_BrowseDirection_encodeBinary(const UA_BrowseDirection *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSEDIRECTION], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowseDirection_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowseDirection *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSEDIRECTION], 0, NULL);
}

/* CallMethodRequest */
static UA_INLINE UA_StatusCode
UA_CallMethodRequest_encodeBinary(const UA_CallMethodRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CALLMETHODREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CallMethodRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CallMethodRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CALLMETHODREQUEST], 0, NULL);
}

/* RedundancySupport */
static UA_INLINE UA_StatusCode
UA_RedundancySupport_encodeBinary(const UA_RedundancySupport *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RedundancySupport_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RedundancySupport *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT], 0, NULL);
}

/* EventNotificationList */
static UA_INLINE UA_StatusCode
UA_EventNotificationList_encodeBinary(const UA_EventNotificationList *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_EVENTNOTIFICATIONLIST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EventNotificationList_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EventNotificationList *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_EVENTNOTIFICATIONLIST], 0, NULL);
}

/* UnregisterNodesRequest */
static UA_INLINE UA_StatusCode
UA_UnregisterNodesRequest_encodeBinary(const UA_UnregisterNodesRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UNREGISTERNODESREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UnregisterNodesRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UnregisterNodesRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UNREGISTERNODESREQUEST], 0, NULL);
}

/* ContentFilterElementResult */
static UA_INLINE UA_StatusCode
UA_ContentFilterElementResult_encodeBinary(const UA_ContentFilterElementResult *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENTRESULT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ContentFilterElementResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ContentFilterElementResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENTRESULT], 0, NULL);
}

/* SimpleAttributeOperand */
static UA_INLINE UA_StatusCode
UA_SimpleAttributeOperand_encodeBinary(const UA_SimpleAttributeOperand *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SIMPLEATTRIBUTEOPERAND], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SimpleAttributeOperand_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SimpleAttributeOperand *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SIMPLEATTRIBUTEOPERAND], 0, NULL);
}

/* QueryDataSet */
static UA_INLINE UA_StatusCode
UA_QueryDataSet_encodeBinary(const UA_QueryDataSet *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_QUERYDATASET], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_QueryDataSet_decodeBinary(const UA_ByteString *src, size_t *offset, UA_QueryDataSet *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_QUERYDATASET], 0, NULL);
}

/* AnonymousIdentityToken */
static UA_INLINE UA_StatusCode
UA_AnonymousIdentityToken_encodeBinary(const UA_AnonymousIdentityToken *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ANONYMOUSIDENTITYTOKEN], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AnonymousIdentityToken_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AnonymousIdentityToken *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ANONYMOUSIDENTITYTOKEN], 0, NULL);
}

/* SetPublishingModeRequest */
static UA_INLINE UA_StatusCode
UA_SetPublishingModeRequest_encodeBinary(const UA_SetPublishingModeRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODEREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetPublishingModeRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetPublishingModeRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODEREQUEST], 0, NULL);
}

/* MonitoredItemCreateResult */
static UA_INLINE UA_StatusCode
UA_MonitoredItemCreateResult_encodeBinary(const UA_MonitoredItemCreateResult *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATERESULT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MonitoredItemCreateResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MonitoredItemCreateResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATERESULT], 0, NULL);
}

/* TimestampsToReturn */
static UA_INLINE UA_StatusCode
UA_TimestampsToReturn_encodeBinary(const UA_TimestampsToReturn *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_TIMESTAMPSTORETURN], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TimestampsToReturn_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TimestampsToReturn *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_TIMESTAMPSTORETURN], 0, NULL);
}

/* CallRequest */
static UA_INLINE UA_StatusCode
UA_CallRequest_encodeBinary(const UA_CallRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CALLREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CallRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CallRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CALLREQUEST], 0, NULL);
}

/* MethodAttributes */
static UA_INLINE UA_StatusCode
UA_MethodAttributes_encodeBinary(const UA_MethodAttributes *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_METHODATTRIBUTES], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MethodAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MethodAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_METHODATTRIBUTES], 0, NULL);
}

/* DeleteReferencesItem */
static UA_INLINE UA_StatusCode
UA_DeleteReferencesItem_encodeBinary(const UA_DeleteReferencesItem *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETEREFERENCESITEM], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteReferencesItem_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteReferencesItem *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETEREFERENCESITEM], 0, NULL);
}

/* WriteValue */
static UA_INLINE UA_StatusCode
UA_WriteValue_encodeBinary(const UA_WriteValue *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_WRITEVALUE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_WriteValue_decodeBinary(const UA_ByteString *src, size_t *offset, UA_WriteValue *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_WRITEVALUE], 0, NULL);
}

/* NodeAttributesMask */
static UA_INLINE UA_StatusCode
UA_NodeAttributesMask_encodeBinary(const UA_NodeAttributesMask *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NODEATTRIBUTESMASK], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NodeAttributesMask_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NodeAttributesMask *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NODEATTRIBUTESMASK], 0, NULL);
}

/* MessageSecurityMode */
static UA_INLINE UA_StatusCode
UA_MessageSecurityMode_encodeBinary(const UA_MessageSecurityMode *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MESSAGESECURITYMODE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MessageSecurityMode_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MessageSecurityMode *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MESSAGESECURITYMODE], 0, NULL);
}

/* MonitoringParameters */
static UA_INLINE UA_StatusCode
UA_MonitoringParameters_encodeBinary(const UA_MonitoringParameters *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MONITORINGPARAMETERS], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MonitoringParameters_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MonitoringParameters *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MONITORINGPARAMETERS], 0, NULL);
}

/* ReferenceNode */
static UA_INLINE UA_StatusCode
UA_ReferenceNode_encodeBinary(const UA_ReferenceNode *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REFERENCENODE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReferenceNode_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReferenceNode *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REFERENCENODE], 0, NULL);
}

/* Argument */
static UA_INLINE UA_StatusCode
UA_Argument_encodeBinary(const UA_Argument *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ARGUMENT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Argument_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Argument *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ARGUMENT], 0, NULL);
}

/* ChannelSecurityToken */
static UA_INLINE UA_StatusCode
UA_ChannelSecurityToken_encodeBinary(const UA_ChannelSecurityToken *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CHANNELSECURITYTOKEN], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ChannelSecurityToken_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ChannelSecurityToken *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CHANNELSECURITYTOKEN], 0, NULL);
}

/* UserIdentityToken */
static UA_INLINE UA_StatusCode
UA_UserIdentityToken_encodeBinary(const UA_UserIdentityToken *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_USERIDENTITYTOKEN], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UserIdentityToken_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UserIdentityToken *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_USERIDENTITYTOKEN], 0, NULL);
}

/* SignatureData */
static UA_INLINE UA_StatusCode
UA_SignatureData_encodeBinary(const UA_SignatureData *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SIGNATUREDATA], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SignatureData_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SignatureData *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SIGNATUREDATA], 0, NULL);
}

/* ObjectTypeAttributes */
static UA_INLINE UA_StatusCode
UA_ObjectTypeAttributes_encodeBinary(const UA_ObjectTypeAttributes *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ObjectTypeAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ObjectTypeAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES], 0, NULL);
}

/* DeadbandType */
static UA_INLINE UA_StatusCode
UA_DeadbandType_encodeBinary(const UA_DeadbandType *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DEADBANDTYPE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeadbandType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeadbandType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DEADBANDTYPE], 0, NULL);
}

/* SecurityTokenRequestType */
static UA_INLINE UA_StatusCode
UA_SecurityTokenRequestType_encodeBinary(const UA_SecurityTokenRequestType *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SECURITYTOKENREQUESTTYPE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SecurityTokenRequestType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SecurityTokenRequestType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SECURITYTOKENREQUESTTYPE], 0, NULL);
}

/* NodeAttributes */
static UA_INLINE UA_StatusCode
UA_NodeAttributes_encodeBinary(const UA_NodeAttributes *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NODEATTRIBUTES], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NodeAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NodeAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NODEATTRIBUTES], 0, NULL);
}

/* DataChangeTrigger */
static UA_INLINE UA_StatusCode
UA_DataChangeTrigger_encodeBinary(const UA_DataChangeTrigger *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATACHANGETRIGGER], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataChangeTrigger_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataChangeTrigger *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATACHANGETRIGGER], 0, NULL);
}

/* BuildInfo */
static UA_INLINE UA_StatusCode
UA_BuildInfo_encodeBinary(const UA_BuildInfo *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BUILDINFO], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BuildInfo_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BuildInfo *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BUILDINFO], 0, NULL);
}

/* NodeClass */
static UA_INLINE UA_StatusCode
UA_NodeClass_encodeBinary(const UA_NodeClass *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NODECLASS], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NodeClass_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NodeClass *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NODECLASS], 0, NULL);
}

/* SubscriptionDiagnosticsDataType */
static UA_INLINE UA_StatusCode
UA_SubscriptionDiagnosticsDataType_encodeBinary(const UA_SubscriptionDiagnosticsDataType *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SUBSCRIPTIONDIAGNOSTICSDATATYPE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SubscriptionDiagnosticsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SubscriptionDiagnosticsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SUBSCRIPTIONDIAGNOSTICSDATATYPE], 0, NULL);
}

/* FilterOperand */
static UA_INLINE UA_StatusCode
UA_FilterOperand_encodeBinary(const UA_FilterOperand *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_FILTEROPERAND], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_FilterOperand_decodeBinary(const UA_ByteString *src, size_t *offset, UA_FilterOperand *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_FILTEROPERAND], 0, NULL);
}

/* MonitoredItemNotification */
static UA_INLINE UA_StatusCode
UA_MonitoredItemNotification_encodeBinary(const UA_MonitoredItemNotification *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MONITOREDITEMNOTIFICATION], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MonitoredItemNotification_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MonitoredItemNotification *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MONITOREDITEMNOTIFICATION], 0, NULL);
}

/* DeleteNodesItem */
static UA_INLINE UA_StatusCode
UA_DeleteNodesItem_encodeBinary(const UA_DeleteNodesItem *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETENODESITEM], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteNodesItem_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteNodesItem *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETENODESITEM], 0, NULL);
}

/* DeleteSubscriptionsRequest */
static UA_INLINE UA_StatusCode
UA_DeleteSubscriptionsRequest_encodeBinary(const UA_DeleteSubscriptionsRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteSubscriptionsRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteSubscriptionsRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSREQUEST], 0, NULL);
}

/* SubscriptionAcknowledgement */
static UA_INLINE UA_StatusCode
UA_SubscriptionAcknowledgement_encodeBinary(const UA_SubscriptionAcknowledgement *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SubscriptionAcknowledgement_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SubscriptionAcknowledgement *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT], 0, NULL);
}

/* ReadValueId */
static UA_INLINE UA_StatusCode
UA_ReadValueId_encodeBinary(const UA_ReadValueId *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_READVALUEID], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReadValueId_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReadValueId *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_READVALUEID], 0, NULL);
}

/* DataTypeAttributes */
static UA_INLINE UA_StatusCode
UA_DataTypeAttributes_encodeBinary(const UA_DataTypeAttributes *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataTypeAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataTypeAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES], 0, NULL);
}

/* ResponseHeader */
static UA_INLINE UA_StatusCode
UA_ResponseHeader_encodeBinary(const UA_ResponseHeader *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_RESPONSEHEADER], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ResponseHeader_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ResponseHeader *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_RESPONSEHEADER], 0, NULL);
}

/* DeleteMonitoredItemsRequest */
static UA_INLINE UA_StatusCode
UA_DeleteMonitoredItemsRequest_encodeBinary(const UA_DeleteMonitoredItemsRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteMonitoredItemsRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteMonitoredItemsRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSREQUEST], 0, NULL);
}

/* ViewDescription */
static UA_INLINE UA_StatusCode
UA_ViewDescription_encodeBinary(const UA_ViewDescription *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_VIEWDESCRIPTION], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ViewDescription_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ViewDescription *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_VIEWDESCRIPTION], 0, NULL);
}

/* ServerOnNetwork */
static UA_INLINE UA_StatusCode
UA_ServerOnNetwork_encodeBinary(const UA_ServerOnNetwork *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SERVERONNETWORK], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ServerOnNetwork_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ServerOnNetwork *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SERVERONNETWORK], 0, NULL);
}

/* DeleteMonitoredItemsResponse */
static UA_INLINE UA_StatusCode
UA_DeleteMonitoredItemsResponse_encodeBinary(const UA_DeleteMonitoredItemsResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteMonitoredItemsResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteMonitoredItemsResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSRESPONSE], 0, NULL);
}

/* FindServersOnNetworkResponse */
static UA_INLINE UA_StatusCode
UA_FindServersOnNetworkResponse_encodeBinary(const UA_FindServersOnNetworkResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_FindServersOnNetworkResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_FindServersOnNetworkResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKRESPONSE], 0, NULL);
}

/* RelativePath */
static UA_INLINE UA_StatusCode
UA_RelativePath_encodeBinary(const UA_RelativePath *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_RELATIVEPATH], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RelativePath_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RelativePath *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_RELATIVEPATH], 0, NULL);
}

/* RegisterNodesRequest */
static UA_INLINE UA_StatusCode
UA_RegisterNodesRequest_encodeBinary(const UA_RegisterNodesRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REGISTERNODESREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RegisterNodesRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RegisterNodesRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REGISTERNODESREQUEST], 0, NULL);
}

/* AggregateConfiguration */
static UA_INLINE UA_StatusCode
UA_AggregateConfiguration_encodeBinary(const UA_AggregateConfiguration *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_AGGREGATECONFIGURATION], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AggregateConfiguration_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AggregateConfiguration *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_AGGREGATECONFIGURATION], 0, NULL);
}

/* DeleteNodesRequest */
static UA_INLINE UA_StatusCode
UA_DeleteNodesRequest_encodeBinary(const UA_DeleteNodesRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETENODESREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteNodesRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteNodesRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETENODESREQUEST], 0, NULL);
}

/* PublishResponse */
static UA_INLINE UA_StatusCode
UA_PublishResponse_encodeBinary(const UA_PublishResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PUBLISHRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PublishResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PublishResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PUBLISHRESPONSE], 0, NULL);
}

/* MonitoredItemModifyRequest */
static UA_INLINE UA_StatusCode
UA_MonitoredItemModifyRequest_encodeBinary(const UA_MonitoredItemModifyRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MonitoredItemModifyRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MonitoredItemModifyRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYREQUEST], 0, NULL);
}

/* ServiceCounterDataType */
static UA_INLINE UA_StatusCode
UA_ServiceCounterDataType_encodeBinary(const UA_ServiceCounterDataType *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SERVICECOUNTERDATATYPE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ServiceCounterDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ServiceCounterDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SERVICECOUNTERDATATYPE], 0, NULL);
}

/* ModelChangeStructureDataType */
static UA_INLINE UA_StatusCode
UA_ModelChangeStructureDataType_encodeBinary(const UA_ModelChangeStructureDataType *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MODELCHANGESTRUCTUREDATATYPE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ModelChangeStructureDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ModelChangeStructureDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MODELCHANGESTRUCTUREDATATYPE], 0, NULL);
}

/* UserNameIdentityToken */
static UA_INLINE UA_StatusCode
UA_UserNameIdentityToken_encodeBinary(const UA_UserNameIdentityToken *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_USERNAMEIDENTITYTOKEN], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UserNameIdentityToken_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UserNameIdentityToken *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_USERNAMEIDENTITYTOKEN], 0, NULL);
}

/* IdType */
static UA_INLINE UA_StatusCode
UA_IdType_encodeBinary(const UA_IdType *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_IDTYPE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_IdType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_IdType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_IDTYPE], 0, NULL);
}

/* UserTokenType */
static UA_INLINE UA_StatusCode
UA_UserTokenType_encodeBinary(const UA_UserTokenType *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_USERTOKENTYPE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UserTokenType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UserTokenType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_USERTOKENTYPE], 0, NULL);
}

/* SetTriggeringResponse */
static UA_INLINE UA_StatusCode
UA_SetTriggeringResponse_encodeBinary(const UA_SetTriggeringResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SETTRIGGERINGRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetTriggeringResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetTriggeringResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SETTRIGGERINGRESPONSE], 0, NULL);
}

/* TimeZoneDataType */
static UA_INLINE UA_StatusCode
UA_TimeZoneDataType_encodeBinary(const UA_TimeZoneDataType *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_TIMEZONEDATATYPE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TimeZoneDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TimeZoneDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_TIMEZONEDATATYPE], 0, NULL);
}

/* ActivateSessionRequest */
static UA_INLINE UA_StatusCode
UA_ActivateSessionRequest_encodeBinary(const UA_ActivateSessionRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ACTIVATESESSIONREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ActivateSessionRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ActivateSessionRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ACTIVATESESSIONREQUEST], 0, NULL);
}

/* OpenSecureChannelResponse */
static UA_INLINE UA_StatusCode
UA_OpenSecureChannelResponse_encodeBinary(const UA_OpenSecureChannelResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_OPENSECURECHANNELRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_OpenSecureChannelResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_OpenSecureChannelResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_OPENSECURECHANNELRESPONSE], 0, NULL);
}

/* ApplicationType */
static UA_INLINE UA_StatusCode
UA_ApplicationType_encodeBinary(const UA_ApplicationType *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_APPLICATIONTYPE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ApplicationType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ApplicationType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_APPLICATIONTYPE], 0, NULL);
}

/* ServerState */
static UA_INLINE UA_StatusCode
UA_ServerState_encodeBinary(const UA_ServerState *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SERVERSTATE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ServerState_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ServerState *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SERVERSTATE], 0, NULL);
}

/* QueryNextResponse */
static UA_INLINE UA_StatusCode
UA_QueryNextResponse_encodeBinary(const UA_QueryNextResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_QUERYNEXTRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_QueryNextResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_QueryNextResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_QUERYNEXTRESPONSE], 0, NULL);
}

/* DiscoveryConfiguration */
static UA_INLINE UA_StatusCode
UA_DiscoveryConfiguration_encodeBinary(const UA_DiscoveryConfiguration *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DISCOVERYCONFIGURATION], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DiscoveryConfiguration_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DiscoveryConfiguration *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DISCOVERYCONFIGURATION], 0, NULL);
}

/* ActivateSessionResponse */
static UA_INLINE UA_StatusCode
UA_ActivateSessionResponse_encodeBinary(const UA_ActivateSessionResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ACTIVATESESSIONRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ActivateSessionResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ActivateSessionResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ACTIVATESESSIONRESPONSE], 0, NULL);
}

/* EndpointUrlListDataType */
static UA_INLINE UA_StatusCode
UA_EndpointUrlListDataType_encodeBinary(const UA_EndpointUrlListDataType *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ENDPOINTURLLISTDATATYPE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EndpointUrlListDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EndpointUrlListDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ENDPOINTURLLISTDATATYPE], 0, NULL);
}

/* FilterOperator */
static UA_INLINE UA_StatusCode
UA_FilterOperator_encodeBinary(const UA_FilterOperator *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_FILTEROPERATOR], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_FilterOperator_decodeBinary(const UA_ByteString *src, size_t *offset, UA_FilterOperator *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_FILTEROPERATOR], 0, NULL);
}

/* QueryNextRequest */
static UA_INLINE UA_StatusCode
UA_QueryNextRequest_encodeBinary(const UA_QueryNextRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_QUERYNEXTREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_QueryNextRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_QueryNextRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_QUERYNEXTREQUEST], 0, NULL);
}

/* WriteResponse */
static UA_INLINE UA_StatusCode
UA_WriteResponse_encodeBinary(const UA_WriteResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_WRITERESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_WriteResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_WriteResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_WRITERESPONSE], 0, NULL);
}

/* BrowseNextRequest */
static UA_INLINE UA_StatusCode
UA_BrowseNextRequest_encodeBinary(const UA_BrowseNextRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSENEXTREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowseNextRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowseNextRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSENEXTREQUEST], 0, NULL);
}

/* CreateSubscriptionRequest */
static UA_INLINE UA_StatusCode
UA_CreateSubscriptionRequest_encodeBinary(const UA_CreateSubscriptionRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CreateSubscriptionRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CreateSubscriptionRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONREQUEST], 0, NULL);
}

/* VariableTypeAttributes */
static UA_INLINE UA_StatusCode
UA_VariableTypeAttributes_encodeBinary(const UA_VariableTypeAttributes *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_VariableTypeAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_VariableTypeAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES], 0, NULL);
}

/* BrowsePathResult */
static UA_INLINE UA_StatusCode
UA_BrowsePathResult_encodeBinary(const UA_BrowsePathResult *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSEPATHRESULT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowsePathResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowsePathResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSEPATHRESULT], 0, NULL);
}

/* ModifySubscriptionResponse */
static UA_INLINE UA_StatusCode
UA_ModifySubscriptionResponse_encodeBinary(const UA_ModifySubscriptionResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ModifySubscriptionResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ModifySubscriptionResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE], 0, NULL);
}

/* RedundantServerDataType */
static UA_INLINE UA_StatusCode
UA_RedundantServerDataType_encodeBinary(const UA_RedundantServerDataType *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REDUNDANTSERVERDATATYPE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RedundantServerDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RedundantServerDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REDUNDANTSERVERDATATYPE], 0, NULL);
}

/* RegisterNodesResponse */
static UA_INLINE UA_StatusCode
UA_RegisterNodesResponse_encodeBinary(const UA_RegisterNodesResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REGISTERNODESRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RegisterNodesResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RegisterNodesResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REGISTERNODESRESPONSE], 0, NULL);
}

/* CloseSessionRequest */
static UA_INLINE UA_StatusCode
UA_CloseSessionRequest_encodeBinary(const UA_CloseSessionRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CLOSESESSIONREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CloseSessionRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CloseSessionRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CLOSESESSIONREQUEST], 0, NULL);
}

/* ModifyMonitoredItemsResponse */
static UA_INLINE UA_StatusCode
UA_ModifyMonitoredItemsResponse_encodeBinary(const UA_ModifyMonitoredItemsResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ModifyMonitoredItemsResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ModifyMonitoredItemsResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSRESPONSE], 0, NULL);
}

/* ModifySubscriptionRequest */
static UA_INLINE UA_StatusCode
UA_ModifySubscriptionRequest_encodeBinary(const UA_ModifySubscriptionRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ModifySubscriptionRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ModifySubscriptionRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONREQUEST], 0, NULL);
}

/* ServerDiagnosticsSummaryDataType */
static UA_INLINE UA_StatusCode
UA_ServerDiagnosticsSummaryDataType_encodeBinary(const UA_ServerDiagnosticsSummaryDataType *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ServerDiagnosticsSummaryDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ServerDiagnosticsSummaryDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE], 0, NULL);
}

/* UserTokenPolicy */
static UA_INLINE UA_StatusCode
UA_UserTokenPolicy_encodeBinary(const UA_UserTokenPolicy *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_USERTOKENPOLICY], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UserTokenPolicy_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UserTokenPolicy *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_USERTOKENPOLICY], 0, NULL);
}

/* ReferenceTypeAttributes */
static UA_INLINE UA_StatusCode
UA_ReferenceTypeAttributes_encodeBinary(const UA_ReferenceTypeAttributes *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReferenceTypeAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReferenceTypeAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES], 0, NULL);
}

/* BrowsePath */
static UA_INLINE UA_StatusCode
UA_BrowsePath_encodeBinary(const UA_BrowsePath *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSEPATH], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowsePath_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowsePath *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSEPATH], 0, NULL);
}

/* SetMonitoringModeRequest */
static UA_INLINE UA_StatusCode
UA_SetMonitoringModeRequest_encodeBinary(const UA_SetMonitoringModeRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SETMONITORINGMODEREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetMonitoringModeRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetMonitoringModeRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SETMONITORINGMODEREQUEST], 0, NULL);
}

/* UnregisterNodesResponse */
static UA_INLINE UA_StatusCode
UA_UnregisterNodesResponse_encodeBinary(const UA_UnregisterNodesResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_UNREGISTERNODESRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_UnregisterNodesResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_UnregisterNodesResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_UNREGISTERNODESRESPONSE], 0, NULL);
}

/* WriteRequest */
static UA_INLINE UA_StatusCode
UA_WriteRequest_encodeBinary(const UA_WriteRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_WRITEREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_WriteRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_WriteRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_WRITEREQUEST], 0, NULL);
}

/* ObjectAttributes */
static UA_INLINE UA_StatusCode
UA_ObjectAttributes_encodeBinary(const UA_ObjectAttributes *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ObjectAttributes_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ObjectAttributes *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES], 0, NULL);
}

/* BrowseResultMask */
static UA_INLINE UA_StatusCode
UA_BrowseResultMask_encodeBinary(const UA_BrowseResultMask *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSERESULTMASK], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowseResultMask_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowseResultMask *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSERESULTMASK], 0, NULL);
}

/* BrowseDescription */
static UA_INLINE UA_StatusCode
UA_BrowseDescription_encodeBinary(const UA_BrowseDescription *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSEDESCRIPTION], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowseDescription_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowseDescription *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSEDESCRIPTION], 0, NULL);
}

/* SetTriggeringRequest */
static UA_INLINE UA_StatusCode
UA_SetTriggeringRequest_encodeBinary(const UA_SetTriggeringRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SETTRIGGERINGREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetTriggeringRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetTriggeringRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SETTRIGGERINGREQUEST], 0, NULL);
}

/* SessionSecurityDiagnosticsDataType */
static UA_INLINE UA_StatusCode
UA_SessionSecurityDiagnosticsDataType_encodeBinary(const UA_SessionSecurityDiagnosticsDataType *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SESSIONSECURITYDIAGNOSTICSDATATYPE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SessionSecurityDiagnosticsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SessionSecurityDiagnosticsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SESSIONSECURITYDIAGNOSTICSDATATYPE], 0, NULL);
}

/* RepublishRequest */
static UA_INLINE UA_StatusCode
UA_RepublishRequest_encodeBinary(const UA_RepublishRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REPUBLISHREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RepublishRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RepublishRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REPUBLISHREQUEST], 0, NULL);
}

/* GetEndpointsRequest */
static UA_INLINE UA_StatusCode
UA_GetEndpointsRequest_encodeBinary(const UA_GetEndpointsRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_GETENDPOINTSREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_GetEndpointsRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_GetEndpointsRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_GETENDPOINTSREQUEST], 0, NULL);
}

/* PublishRequest */
static UA_INLINE UA_StatusCode
UA_PublishRequest_encodeBinary(const UA_PublishRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_PUBLISHREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PublishRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PublishRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_PUBLISHREQUEST], 0, NULL);
}

/* DeleteSubscriptionsResponse */
static UA_INLINE UA_StatusCode
UA_DeleteSubscriptionsResponse_encodeBinary(const UA_DeleteSubscriptionsResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteSubscriptionsResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteSubscriptionsResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSRESPONSE], 0, NULL);
}

/* AddNodesResponse */
static UA_INLINE UA_StatusCode
UA_AddNodesResponse_encodeBinary(const UA_AddNodesResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ADDNODESRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AddNodesResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AddNodesResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ADDNODESRESPONSE], 0, NULL);
}

/* DataChangeNotification */
static UA_INLINE UA_StatusCode
UA_DataChangeNotification_encodeBinary(const UA_DataChangeNotification *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATACHANGENOTIFICATION], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataChangeNotification_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataChangeNotification *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATACHANGENOTIFICATION], 0, NULL);
}

/* CloseSecureChannelResponse */
static UA_INLINE UA_StatusCode
UA_CloseSecureChannelResponse_encodeBinary(const UA_CloseSecureChannelResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CloseSecureChannelResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CloseSecureChannelResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELRESPONSE], 0, NULL);
}

/* ModifyMonitoredItemsRequest */
static UA_INLINE UA_StatusCode
UA_ModifyMonitoredItemsRequest_encodeBinary(const UA_ModifyMonitoredItemsRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ModifyMonitoredItemsRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ModifyMonitoredItemsRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSREQUEST], 0, NULL);
}

/* SetMonitoringModeResponse */
static UA_INLINE UA_StatusCode
UA_SetMonitoringModeResponse_encodeBinary(const UA_SetMonitoringModeResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SETMONITORINGMODERESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetMonitoringModeResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetMonitoringModeResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SETMONITORINGMODERESPONSE], 0, NULL);
}

/* FindServersRequest */
static UA_INLINE UA_StatusCode
UA_FindServersRequest_encodeBinary(const UA_FindServersRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_FINDSERVERSREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_FindServersRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_FindServersRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_FINDSERVERSREQUEST], 0, NULL);
}

/* ReferenceDescription */
static UA_INLINE UA_StatusCode
UA_ReferenceDescription_encodeBinary(const UA_ReferenceDescription *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REFERENCEDESCRIPTION], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReferenceDescription_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReferenceDescription *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REFERENCEDESCRIPTION], 0, NULL);
}

/* SetPublishingModeResponse */
static UA_INLINE UA_StatusCode
UA_SetPublishingModeResponse_encodeBinary(const UA_SetPublishingModeResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODERESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetPublishingModeResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetPublishingModeResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODERESPONSE], 0, NULL);
}

/* ContentFilterResult */
static UA_INLINE UA_StatusCode
UA_ContentFilterResult_encodeBinary(const UA_ContentFilterResult *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CONTENTFILTERRESULT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ContentFilterResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ContentFilterResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CONTENTFILTERRESULT], 0, NULL);
}

/* RegisterServerResponse */
static UA_INLINE UA_StatusCode
UA_RegisterServerResponse_encodeBinary(const UA_RegisterServerResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REGISTERSERVERRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RegisterServerResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RegisterServerResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REGISTERSERVERRESPONSE], 0, NULL);
}

/* AddReferencesItem */
static UA_INLINE UA_StatusCode
UA_AddReferencesItem_encodeBinary(const UA_AddReferencesItem *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ADDREFERENCESITEM], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AddReferencesItem_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AddReferencesItem *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ADDREFERENCESITEM], 0, NULL);
}

/* QueryDataDescription */
static UA_INLINE UA_StatusCode
UA_QueryDataDescription_encodeBinary(const UA_QueryDataDescription *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_QUERYDATADESCRIPTION], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_QueryDataDescription_decodeBinary(const UA_ByteString *src, size_t *offset, UA_QueryDataDescription *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_QUERYDATADESCRIPTION], 0, NULL);
}

/* CreateSubscriptionResponse */
static UA_INLINE UA_StatusCode
UA_CreateSubscriptionResponse_encodeBinary(const UA_CreateSubscriptionResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CreateSubscriptionResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CreateSubscriptionResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONRESPONSE], 0, NULL);
}

/* NetworkGroupDataType */
static UA_INLINE UA_StatusCode
UA_NetworkGroupDataType_encodeBinary(const UA_NetworkGroupDataType *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NETWORKGROUPDATATYPE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NetworkGroupDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NetworkGroupDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NETWORKGROUPDATATYPE], 0, NULL);
}

/* DeleteReferencesResponse */
static UA_INLINE UA_StatusCode
UA_DeleteReferencesResponse_encodeBinary(const UA_DeleteReferencesResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETEREFERENCESRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteReferencesResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteReferencesResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETEREFERENCESRESPONSE], 0, NULL);
}

/* CreateMonitoredItemsResponse */
static UA_INLINE UA_StatusCode
UA_CreateMonitoredItemsResponse_encodeBinary(const UA_CreateMonitoredItemsResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CreateMonitoredItemsResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CreateMonitoredItemsResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSRESPONSE], 0, NULL);
}

/* CallResponse */
static UA_INLINE UA_StatusCode
UA_CallResponse_encodeBinary(const UA_CallResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CALLRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CallResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CallResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CALLRESPONSE], 0, NULL);
}

/* DeleteNodesResponse */
static UA_INLINE UA_StatusCode
UA_DeleteNodesResponse_encodeBinary(const UA_DeleteNodesResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETENODESRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteNodesResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteNodesResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETENODESRESPONSE], 0, NULL);
}

/* RepublishResponse */
static UA_INLINE UA_StatusCode
UA_RepublishResponse_encodeBinary(const UA_RepublishResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REPUBLISHRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RepublishResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RepublishResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REPUBLISHRESPONSE], 0, NULL);
}

/* MonitoredItemCreateRequest */
static UA_INLINE UA_StatusCode
UA_MonitoredItemCreateRequest_encodeBinary(const UA_MonitoredItemCreateRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATEREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MonitoredItemCreateRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MonitoredItemCreateRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATEREQUEST], 0, NULL);
}

/* DeleteReferencesRequest */
static UA_INLINE UA_StatusCode
UA_DeleteReferencesRequest_encodeBinary(const UA_DeleteReferencesRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DELETEREFERENCESREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DeleteReferencesRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DeleteReferencesRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DELETEREFERENCESREQUEST], 0, NULL);
}

/* ReadResponse */
static UA_INLINE UA_StatusCode
UA_ReadResponse_encodeBinary(const UA_ReadResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_READRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReadResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReadResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_READRESPONSE], 0, NULL);
}

/* AddReferencesRequest */
static UA_INLINE UA_StatusCode
UA_AddReferencesRequest_encodeBinary(const UA_AddReferencesRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ADDREFERENCESREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AddReferencesRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AddReferencesRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ADDREFERENCESREQUEST], 0, NULL);
}

/* ReadRequest */
static UA_INLINE UA_StatusCode
UA_ReadRequest_encodeBinary(const UA_ReadRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_READREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ReadRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ReadRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_READREQUEST], 0, NULL);
}

/* OpenSecureChannelRequest */
static UA_INLINE UA_StatusCode
UA_OpenSecureChannelRequest_encodeBinary(const UA_OpenSecureChannelRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_OPENSECURECHANNELREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_OpenSecureChannelRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_OpenSecureChannelRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_OPENSECURECHANNELREQUEST], 0, NULL);
}

/* RegisterServer2Response */
static UA_INLINE UA_StatusCode
UA_RegisterServer2Response_encodeBinary(const UA_RegisterServer2Response *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REGISTERSERVER2RESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RegisterServer2Response_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RegisterServer2Response *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REGISTERSERVER2RESPONSE], 0, NULL);
}

/* AddNodesItem */
static UA_INLINE UA_StatusCode
UA_AddNodesItem_encodeBinary(const UA_AddNodesItem *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ADDNODESITEM], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AddNodesItem_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AddNodesItem *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ADDNODESITEM], 0, NULL);
}

/* NodeTypeDescription */
static UA_INLINE UA_StatusCode
UA_NodeTypeDescription_encodeBinary(const UA_NodeTypeDescription *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_NODETYPEDESCRIPTION], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_NodeTypeDescription_decodeBinary(const UA_ByteString *src, size_t *offset, UA_NodeTypeDescription *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_NODETYPEDESCRIPTION], 0, NULL);
}

/* ServerStatusDataType */
static UA_INLINE UA_StatusCode
UA_ServerStatusDataType_encodeBinary(const UA_ServerStatusDataType *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ServerStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ServerStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE], 0, NULL);
}

/* AddReferencesResponse */
static UA_INLINE UA_StatusCode
UA_AddReferencesResponse_encodeBinary(const UA_AddReferencesResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ADDREFERENCESRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AddReferencesResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AddReferencesResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ADDREFERENCESRESPONSE], 0, NULL);
}

/* TranslateBrowsePathsToNodeIdsResponse */
static UA_INLINE UA_StatusCode
UA_TranslateBrowsePathsToNodeIdsResponse_encodeBinary(const UA_TranslateBrowsePathsToNodeIdsResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TranslateBrowsePathsToNodeIdsResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TranslateBrowsePathsToNodeIdsResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE], 0, NULL);
}

/* DataChangeFilter */
static UA_INLINE UA_StatusCode
UA_DataChangeFilter_encodeBinary(const UA_DataChangeFilter *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_DATACHANGEFILTER], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DataChangeFilter_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DataChangeFilter *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_DATACHANGEFILTER], 0, NULL);
}

/* ContentFilterElement */
static UA_INLINE UA_StatusCode
UA_ContentFilterElement_encodeBinary(const UA_ContentFilterElement *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ContentFilterElement_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ContentFilterElement *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENT], 0, NULL);
}

/* TranslateBrowsePathsToNodeIdsRequest */
static UA_INLINE UA_StatusCode
UA_TranslateBrowsePathsToNodeIdsRequest_encodeBinary(const UA_TranslateBrowsePathsToNodeIdsRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_TranslateBrowsePathsToNodeIdsRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_TranslateBrowsePathsToNodeIdsRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST], 0, NULL);
}

/* CloseSessionResponse */
static UA_INLINE UA_StatusCode
UA_CloseSessionResponse_encodeBinary(const UA_CloseSessionResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CLOSESESSIONRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CloseSessionResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CloseSessionResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CLOSESESSIONRESPONSE], 0, NULL);
}

/* ApplicationDescription */
static UA_INLINE UA_StatusCode
UA_ApplicationDescription_encodeBinary(const UA_ApplicationDescription *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_APPLICATIONDESCRIPTION], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ApplicationDescription_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ApplicationDescription *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_APPLICATIONDESCRIPTION], 0, NULL);
}

/* SessionDiagnosticsDataType */
static UA_INLINE UA_StatusCode
UA_SessionDiagnosticsDataType_encodeBinary(const UA_SessionDiagnosticsDataType *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SESSIONDIAGNOSTICSDATATYPE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SessionDiagnosticsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SessionDiagnosticsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SESSIONDIAGNOSTICSDATATYPE], 0, NULL);
}

/* ServiceFault */
static UA_INLINE UA_StatusCode
UA_ServiceFault_encodeBinary(const UA_ServiceFault *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_SERVICEFAULT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ServiceFault_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ServiceFault *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_SERVICEFAULT], 0, NULL);
}

/* RegisteredServer */
static UA_INLINE UA_StatusCode
UA_RegisteredServer_encodeBinary(const UA_RegisteredServer *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REGISTEREDSERVER], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RegisteredServer_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RegisteredServer *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REGISTEREDSERVER], 0, NULL);
}

/* AggregateFilter */
static UA_INLINE UA_StatusCode
UA_AggregateFilter_encodeBinary(const UA_AggregateFilter *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_AGGREGATEFILTER], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AggregateFilter_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AggregateFilter *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_AGGREGATEFILTER], 0, NULL);
}

/* RegisterServerRequest */
static UA_INLINE UA_StatusCode
UA_RegisterServerRequest_encodeBinary(const UA_RegisterServerRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REGISTERSERVERREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RegisterServerRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RegisterServerRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REGISTERSERVERREQUEST], 0, NULL);
}

/* EndpointDescription */
static UA_INLINE UA_StatusCode
UA_EndpointDescription_encodeBinary(const UA_EndpointDescription *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ENDPOINTDESCRIPTION], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EndpointDescription_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EndpointDescription *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ENDPOINTDESCRIPTION], 0, NULL);
}

/* CreateMonitoredItemsRequest */
static UA_INLINE UA_StatusCode
UA_CreateMonitoredItemsRequest_encodeBinary(const UA_CreateMonitoredItemsRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CreateMonitoredItemsRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CreateMonitoredItemsRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSREQUEST], 0, NULL);
}

/* ContentFilter */
static UA_INLINE UA_StatusCode
UA_ContentFilter_encodeBinary(const UA_ContentFilter *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CONTENTFILTER], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ContentFilter_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ContentFilter *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CONTENTFILTER], 0, NULL);
}

/* QueryFirstResponse */
static UA_INLINE UA_StatusCode
UA_QueryFirstResponse_encodeBinary(const UA_QueryFirstResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_QUERYFIRSTRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_QueryFirstResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_QueryFirstResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_QUERYFIRSTRESPONSE], 0, NULL);
}

/* AddNodesRequest */
static UA_INLINE UA_StatusCode
UA_AddNodesRequest_encodeBinary(const UA_AddNodesRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_ADDNODESREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AddNodesRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AddNodesRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_ADDNODESREQUEST], 0, NULL);
}

/* BrowseRequest */
static UA_INLINE UA_StatusCode
UA_BrowseRequest_encodeBinary(const UA_BrowseRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSEREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowseRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowseRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSEREQUEST], 0, NULL);
}

/* BrowseResult */
static UA_INLINE UA_StatusCode
UA_BrowseResult_encodeBinary(const UA_BrowseResult *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSERESULT], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowseResult_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowseResult *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSERESULT], 0, NULL);
}

/* RegisterServer2Request */
static UA_INLINE UA_StatusCode
UA_RegisterServer2Request_encodeBinary(const UA_RegisterServer2Request *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_REGISTERSERVER2REQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RegisterServer2Request_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RegisterServer2Request *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_REGISTERSERVER2REQUEST], 0, NULL);
}

/* CreateSessionRequest */
static UA_INLINE UA_StatusCode
UA_CreateSessionRequest_encodeBinary(const UA_CreateSessionRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CREATESESSIONREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CreateSessionRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CreateSessionRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CREATESESSIONREQUEST], 0, NULL);
}

/* EventFilter */
static UA_INLINE UA_StatusCode
UA_EventFilter_encodeBinary(const UA_EventFilter *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_EVENTFILTER], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EventFilter_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EventFilter *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_EVENTFILTER], 0, NULL);
}

/* GetEndpointsResponse */
static UA_INLINE UA_StatusCode
UA_GetEndpointsResponse_encodeBinary(const UA_GetEndpointsResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_GETENDPOINTSRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_GetEndpointsResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_GetEndpointsResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_GETENDPOINTSRESPONSE], 0, NULL);
}

/* FindServersResponse */
static UA_INLINE UA_StatusCode
UA_FindServersResponse_encodeBinary(const UA_FindServersResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_FINDSERVERSRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_FindServersResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_FindServersResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_FINDSERVERSRESPONSE], 0, NULL);
}

/* BrowseNextResponse */
static UA_INLINE UA_StatusCode
UA_BrowseNextResponse_encodeBinary(const UA_BrowseNextResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSENEXTRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowseNextResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowseNextResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSENEXTRESPONSE], 0, NULL);
}

/* BrowseResponse */
static UA_INLINE UA_StatusCode
UA_BrowseResponse_encodeBinary(const UA_BrowseResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_BROWSERESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_BrowseResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_BrowseResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_BROWSERESPONSE], 0, NULL);
}

/* CreateSessionResponse */
static UA_INLINE UA_StatusCode
UA_CreateSessionResponse_encodeBinary(const UA_CreateSessionResponse *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_CREATESESSIONRESPONSE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CreateSessionResponse_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CreateSessionResponse *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_CREATESESSIONRESPONSE], 0, NULL);
}

/* QueryFirstRequest */
static UA_INLINE UA_StatusCode
UA_QueryFirstRequest_encodeBinary(const UA_QueryFirstRequest *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES[UA_TYPES_QUERYFIRSTREQUEST], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_QueryFirstRequest_decodeBinary(const UA_ByteString *src, size_t *offset, UA_QueryFirstRequest *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES[UA_TYPES_QUERYFIRSTREQUEST], 0, NULL);
}
