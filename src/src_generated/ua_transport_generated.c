/* Generated from Opc.Ua.Types.bsd, Custom.Opc.Ua.Transport.bsd with script /home/wxg/open62541/tools/generate_datatypes.py
 * on host wxg-OMEN-by-HP-Laptop by user wxg at 2018-03-04 07:30:08 */

#include "ua_transport_generated.h"

/* SecureConversationMessageAbortBody */
static UA_DataTypeMember SecureConversationMessageAbortBody_members[2] = {
{
    UA_TYPENAME("error") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("reason") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SecureConversationMessageAbortBody, reason) - offsetof(UA_SecureConversationMessageAbortBody, error) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* SecureConversationMessageFooter */
static UA_DataTypeMember SecureConversationMessageFooter_members[2] = {
{
    UA_TYPENAME("padding") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("signature") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_SecureConversationMessageFooter, signature) - offsetof(UA_SecureConversationMessageFooter, padding) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* TcpHelloMessage */
static UA_DataTypeMember TcpHelloMessage_members[6] = {
{
    UA_TYPENAME("protocolVersion") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("receiveBufferSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TcpHelloMessage, receiveBufferSize) - offsetof(UA_TcpHelloMessage, protocolVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("sendBufferSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TcpHelloMessage, sendBufferSize) - offsetof(UA_TcpHelloMessage, receiveBufferSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("maxMessageSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TcpHelloMessage, maxMessageSize) - offsetof(UA_TcpHelloMessage, sendBufferSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("maxChunkCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TcpHelloMessage, maxChunkCount) - offsetof(UA_TcpHelloMessage, maxMessageSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("endpointUrl") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_TcpHelloMessage, endpointUrl) - offsetof(UA_TcpHelloMessage, maxChunkCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* TcpErrorMessage */
static UA_DataTypeMember TcpErrorMessage_members[2] = {
{
    UA_TYPENAME("error") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("reason") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_TcpErrorMessage, reason) - offsetof(UA_TcpErrorMessage, error) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* MessageType */
static UA_DataTypeMember MessageType_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* AsymmetricAlgorithmSecurityHeader */
static UA_DataTypeMember AsymmetricAlgorithmSecurityHeader_members[3] = {
{
    UA_TYPENAME("securityPolicyUri") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("senderCertificate") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_AsymmetricAlgorithmSecurityHeader, senderCertificate) - offsetof(UA_AsymmetricAlgorithmSecurityHeader, securityPolicyUri) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("receiverCertificateThumbprint") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_AsymmetricAlgorithmSecurityHeader, receiverCertificateThumbprint) - offsetof(UA_AsymmetricAlgorithmSecurityHeader, senderCertificate) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* TcpAcknowledgeMessage */
static UA_DataTypeMember TcpAcknowledgeMessage_members[5] = {
{
    UA_TYPENAME("protocolVersion") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("receiveBufferSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TcpAcknowledgeMessage, receiveBufferSize) - offsetof(UA_TcpAcknowledgeMessage, protocolVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("sendBufferSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TcpAcknowledgeMessage, sendBufferSize) - offsetof(UA_TcpAcknowledgeMessage, receiveBufferSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("maxMessageSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TcpAcknowledgeMessage, maxMessageSize) - offsetof(UA_TcpAcknowledgeMessage, sendBufferSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("maxChunkCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TcpAcknowledgeMessage, maxChunkCount) - offsetof(UA_TcpAcknowledgeMessage, maxMessageSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* SequenceHeader */
static UA_DataTypeMember SequenceHeader_members[2] = {
{
    UA_TYPENAME("sequenceNumber") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("requestId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SequenceHeader, requestId) - offsetof(UA_SequenceHeader, sequenceNumber) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* TcpMessageHeader */
static UA_DataTypeMember TcpMessageHeader_members[2] = {
{
    UA_TYPENAME("messageTypeAndChunkType") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("messageSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TcpMessageHeader, messageSize) - offsetof(UA_TcpMessageHeader, messageTypeAndChunkType) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* ChunkType */
static UA_DataTypeMember ChunkType_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* SymmetricAlgorithmSecurityHeader */
static UA_DataTypeMember SymmetricAlgorithmSecurityHeader_members[1] = {
{
    UA_TYPENAME("tokenId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};

/* SecureConversationMessageHeader */
static UA_DataTypeMember SecureConversationMessageHeader_members[2] = {
{
    UA_TYPENAME("messageHeader") /* .memberName */
    UA_TRANSPORT_TCPMESSAGEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    false, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("secureChannelId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SecureConversationMessageHeader, secureChannelId) - offsetof(UA_SecureConversationMessageHeader, messageHeader) - sizeof(UA_TcpMessageHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
}};
const UA_DataType UA_TRANSPORT[UA_TRANSPORT_COUNT] = {
/* SecureConversationMessageAbortBody */
{
    UA_TYPENAME("SecureConversationMessageAbortBody") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    sizeof(UA_SecureConversationMessageAbortBody), /* .memSize */
    UA_TRANSPORT_SECURECONVERSATIONMESSAGEABORTBODY, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .binaryEncodingId */
    SecureConversationMessageAbortBody_members /* .members */
},
/* SecureConversationMessageFooter */
{
    UA_TYPENAME("SecureConversationMessageFooter") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    sizeof(UA_SecureConversationMessageFooter), /* .memSize */
    UA_TRANSPORT_SECURECONVERSATIONMESSAGEFOOTER, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .binaryEncodingId */
    SecureConversationMessageFooter_members /* .members */
},
/* TcpHelloMessage */
{
    UA_TYPENAME("TcpHelloMessage") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    sizeof(UA_TcpHelloMessage), /* .memSize */
    UA_TRANSPORT_TCPHELLOMESSAGE, /* .typeIndex */
    6, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .binaryEncodingId */
    TcpHelloMessage_members /* .members */
},
/* TcpErrorMessage */
{
    UA_TYPENAME("TcpErrorMessage") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    sizeof(UA_TcpErrorMessage), /* .memSize */
    UA_TRANSPORT_TCPERRORMESSAGE, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .binaryEncodingId */
    TcpErrorMessage_members /* .members */
},
/* MessageType */
{
    UA_TYPENAME("MessageType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    sizeof(UA_MessageType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    MessageType_members /* .members */
},
/* AsymmetricAlgorithmSecurityHeader */
{
    UA_TYPENAME("AsymmetricAlgorithmSecurityHeader") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    sizeof(UA_AsymmetricAlgorithmSecurityHeader), /* .memSize */
    UA_TRANSPORT_ASYMMETRICALGORITHMSECURITYHEADER, /* .typeIndex */
    3, /* .membersSize */
    false, /* .builtin */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .binaryEncodingId */
    AsymmetricAlgorithmSecurityHeader_members /* .members */
},
/* TcpAcknowledgeMessage */
{
    UA_TYPENAME("TcpAcknowledgeMessage") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    sizeof(UA_TcpAcknowledgeMessage), /* .memSize */
    UA_TRANSPORT_TCPACKNOWLEDGEMESSAGE, /* .typeIndex */
    5, /* .membersSize */
    false, /* .builtin */
    true, /* .pointerFree */
    true && UA_BINARY_OVERLAYABLE_INTEGER && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_TcpAcknowledgeMessage, receiveBufferSize) == (offsetof(UA_TcpAcknowledgeMessage, protocolVersion) + sizeof(UA_UInt32)) && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_TcpAcknowledgeMessage, sendBufferSize) == (offsetof(UA_TcpAcknowledgeMessage, receiveBufferSize) + sizeof(UA_UInt32)) && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_TcpAcknowledgeMessage, maxMessageSize) == (offsetof(UA_TcpAcknowledgeMessage, sendBufferSize) + sizeof(UA_UInt32)) && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_TcpAcknowledgeMessage, maxChunkCount) == (offsetof(UA_TcpAcknowledgeMessage, maxMessageSize) + sizeof(UA_UInt32)), /* .overlayable */
    0, /* .binaryEncodingId */
    TcpAcknowledgeMessage_members /* .members */
},
/* SequenceHeader */
{
    UA_TYPENAME("SequenceHeader") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    sizeof(UA_SequenceHeader), /* .memSize */
    UA_TRANSPORT_SEQUENCEHEADER, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    true, /* .pointerFree */
    true && UA_BINARY_OVERLAYABLE_INTEGER && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_SequenceHeader, requestId) == (offsetof(UA_SequenceHeader, sequenceNumber) + sizeof(UA_UInt32)), /* .overlayable */
    0, /* .binaryEncodingId */
    SequenceHeader_members /* .members */
},
/* TcpMessageHeader */
{
    UA_TYPENAME("TcpMessageHeader") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    sizeof(UA_TcpMessageHeader), /* .memSize */
    UA_TRANSPORT_TCPMESSAGEHEADER, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    true, /* .pointerFree */
    true && UA_BINARY_OVERLAYABLE_INTEGER && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_TcpMessageHeader, messageSize) == (offsetof(UA_TcpMessageHeader, messageTypeAndChunkType) + sizeof(UA_UInt32)), /* .overlayable */
    0, /* .binaryEncodingId */
    TcpMessageHeader_members /* .members */
},
/* ChunkType */
{
    UA_TYPENAME("ChunkType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    sizeof(UA_ChunkType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    ChunkType_members /* .members */
},
/* SymmetricAlgorithmSecurityHeader */
{
    UA_TYPENAME("SymmetricAlgorithmSecurityHeader") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    sizeof(UA_SymmetricAlgorithmSecurityHeader), /* .memSize */
    UA_TRANSPORT_SYMMETRICALGORITHMSECURITYHEADER, /* .typeIndex */
    1, /* .membersSize */
    false, /* .builtin */
    true, /* .pointerFree */
    true && UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .binaryEncodingId */
    SymmetricAlgorithmSecurityHeader_members /* .members */
},
/* SecureConversationMessageHeader */
{
    UA_TYPENAME("SecureConversationMessageHeader") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    sizeof(UA_SecureConversationMessageHeader), /* .memSize */
    UA_TRANSPORT_SECURECONVERSATIONMESSAGEHEADER, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    true, /* .pointerFree */
    true && true && UA_BINARY_OVERLAYABLE_INTEGER && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_TcpMessageHeader, messageSize) == (offsetof(UA_TcpMessageHeader, messageTypeAndChunkType) + sizeof(UA_UInt32)) && UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_SecureConversationMessageHeader, secureChannelId) == (offsetof(UA_SecureConversationMessageHeader, messageHeader) + sizeof(UA_TcpMessageHeader)), /* .overlayable */
    0, /* .binaryEncodingId */
    SecureConversationMessageHeader_members /* .members */
},
};

