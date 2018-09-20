/* Generated from Opc.Ua.Types.bsd, Custom.Opc.Ua.Transport.bsd with script /home/wxg/open62541/tools/generate_datatypes.py
 * on host wxg-OMEN-by-HP-Laptop by user wxg at 2018-03-04 07:30:08 */

#ifndef UA_TRANSPORT_GENERATED_H_
#define UA_TRANSPORT_GENERATED_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "ua_types.h"
#include "ua_types_generated.h"

/**
 * Every type is assigned an index in an array containing the type descriptions.
 * These descriptions are used during type handling (copying, deletion,
 * binary encoding, ...). */
#define UA_TRANSPORT_COUNT 12
extern UA_EXPORT const UA_DataType UA_TRANSPORT[UA_TRANSPORT_COUNT];
/**
 * SecureConversationMessageAbortBody
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Secure Conversation Message Abort Body */
typedef struct {
    UA_UInt32 error;
    UA_String reason;
} UA_SecureConversationMessageAbortBody;

#define UA_TRANSPORT_SECURECONVERSATIONMESSAGEABORTBODY 0


/**
 * SecureConversationMessageFooter
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Secure Conversation Message Footer */
typedef struct {
    size_t paddingSize;
    UA_Byte *padding;
    UA_Byte signature;
} UA_SecureConversationMessageFooter;

#define UA_TRANSPORT_SECURECONVERSATIONMESSAGEFOOTER 1


/**
 * TcpHelloMessage
 * ^^^^^^^^^^^^^^^
 * Hello Message */
typedef struct {
    UA_UInt32 protocolVersion;
    UA_UInt32 receiveBufferSize;
    UA_UInt32 sendBufferSize;
    UA_UInt32 maxMessageSize;
    UA_UInt32 maxChunkCount;
    UA_String endpointUrl;
} UA_TcpHelloMessage;

#define UA_TRANSPORT_TCPHELLOMESSAGE 2


/**
 * TcpErrorMessage
 * ^^^^^^^^^^^^^^^
 * Error Message */
typedef struct {
    UA_UInt32 error;
    UA_String reason;
} UA_TcpErrorMessage;

#define UA_TRANSPORT_TCPERRORMESSAGE 3


/**
 * MessageType
 * ^^^^^^^^^^^
 * Message Type and whether the message contains an intermediate chunk */
typedef enum {
    UA_MESSAGETYPE_ACK = 0x4B4341,
    UA_MESSAGETYPE_HEL = 0x4C4548,
    UA_MESSAGETYPE_MSG = 0x47534D,
    UA_MESSAGETYPE_OPN = 0x4E504F,
    UA_MESSAGETYPE_CLO = 0x4F4C43,
    UA_MESSAGETYPE_ERR = 0x525245,
    __UA_MESSAGETYPE_FORCE32BIT = 0x7fffffff
} UA_MessageType;
UA_STATIC_ASSERT(sizeof(UA_MessageType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TRANSPORT_MESSAGETYPE 4


/**
 * AsymmetricAlgorithmSecurityHeader
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Security Header */
typedef struct {
    UA_ByteString securityPolicyUri;
    UA_ByteString senderCertificate;
    UA_ByteString receiverCertificateThumbprint;
} UA_AsymmetricAlgorithmSecurityHeader;

#define UA_TRANSPORT_ASYMMETRICALGORITHMSECURITYHEADER 5


/**
 * TcpAcknowledgeMessage
 * ^^^^^^^^^^^^^^^^^^^^^
 * Acknowledge Message */
typedef struct {
    UA_UInt32 protocolVersion;
    UA_UInt32 receiveBufferSize;
    UA_UInt32 sendBufferSize;
    UA_UInt32 maxMessageSize;
    UA_UInt32 maxChunkCount;
} UA_TcpAcknowledgeMessage;

#define UA_TRANSPORT_TCPACKNOWLEDGEMESSAGE 6


/**
 * SequenceHeader
 * ^^^^^^^^^^^^^^
 * Secure Layer Sequence Header */
typedef struct {
    UA_UInt32 sequenceNumber;
    UA_UInt32 requestId;
} UA_SequenceHeader;

#define UA_TRANSPORT_SEQUENCEHEADER 7


/**
 * TcpMessageHeader
 * ^^^^^^^^^^^^^^^^
 * TCP Header */
typedef struct {
    UA_UInt32 messageTypeAndChunkType;
    UA_UInt32 messageSize;
} UA_TcpMessageHeader;

#define UA_TRANSPORT_TCPMESSAGEHEADER 8


/**
 * ChunkType
 * ^^^^^^^^^
 * Type of the chunk */
typedef enum {
    UA_CHUNKTYPE_FINAL = 0x46000000,
    UA_CHUNKTYPE_INTERMEDIATE = 0x43000000,
    UA_CHUNKTYPE_ABORT = 0x41000000,
    __UA_CHUNKTYPE_FORCE32BIT = 0x7fffffff
} UA_ChunkType;
UA_STATIC_ASSERT(sizeof(UA_ChunkType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TRANSPORT_CHUNKTYPE 9


/**
 * SymmetricAlgorithmSecurityHeader
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Secure Layer Symmetric Algorithm Header */
typedef struct {
    UA_UInt32 tokenId;
} UA_SymmetricAlgorithmSecurityHeader;

#define UA_TRANSPORT_SYMMETRICALGORITHMSECURITYHEADER 10


/**
 * SecureConversationMessageHeader
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Secure Layer Sequence Header */
typedef struct {
    UA_TcpMessageHeader messageHeader;
    UA_UInt32 secureChannelId;
} UA_SecureConversationMessageHeader;

#define UA_TRANSPORT_SECURECONVERSATIONMESSAGEHEADER 11

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* UA_TRANSPORT_GENERATED_H_ */
