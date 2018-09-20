#include <signal.h>
#include "open62541.h"








static void addkoordinate(UA_Server *server) {
	UA_NodeId pumpId; /* get the nodeid assigned by the server */
	UA_ObjectAttributes oAttr = UA_ObjectAttributes_default;
	oAttr.displayName = UA_LOCALIZEDTEXT("en-US", "Pump (Manual)");
	UA_Server_addObjectNode(server, UA_NODEID_NULL,
			UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
			UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
			UA_QUALIFIEDNAME(1, "Pump (Manual)"),
			UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE), oAttr, NULL,
			&pumpId);

	UA_VariableAttributes mnAttr = UA_VariableAttributes_default;
	UA_Int32 num = 0;
	UA_Variant_setScalar(&mnAttr.value, &num, &UA_TYPES[UA_TYPES_INT32]);
	mnAttr.displayName = UA_LOCALIZEDTEXT("en-US", "num");
	mnAttr.description = UA_LOCALIZEDTEXT("en-US", "num");
	mnAttr.dataType = UA_TYPES[UA_TYPES_INT32].typeId;
	mnAttr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
	UA_NodeId myNumNodeId = UA_NODEID_STRING(1, "num");
	UA_Server_addVariableNode(server, myNumNodeId, pumpId,
			UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
			UA_QUALIFIEDNAME(1, "num"),
			UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), mnAttr, NULL,
			NULL);

	UA_VariableAttributes xAttr = UA_VariableAttributes_default;
	UA_Double xachse = 0;
	UA_Variant_setScalar(&xAttr.value, &xachse, &UA_TYPES[UA_TYPES_DOUBLE]);
	xAttr.displayName = UA_LOCALIZEDTEXT("en-US", "xachse");
	xAttr.description = UA_LOCALIZEDTEXT("en-US", "xachse");
	xAttr.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
	xAttr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
	UA_NodeId xachseNodeId = UA_NODEID_STRING(1, "xachse");
	UA_Server_addVariableNode(server, xachseNodeId, pumpId,
			UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
			UA_QUALIFIEDNAME(1, "xachse"),
			UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), xAttr, NULL,
			NULL);

	UA_VariableAttributes yAttr = UA_VariableAttributes_default;
	UA_Double yachse = 0;
	UA_Variant_setScalar(&yAttr.value, &yachse, &UA_TYPES[UA_TYPES_DOUBLE]);
	yAttr.displayName = UA_LOCALIZEDTEXT("en-US", "yachse");
	yAttr.description = UA_LOCALIZEDTEXT("en-US", "yachse");
	yAttr.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
	yAttr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
	UA_NodeId yachseNodeId = UA_NODEID_STRING(1, "yachse");
	UA_Server_addVariableNode(server, yachseNodeId, pumpId,
			UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
			UA_QUALIFIEDNAME(1, "yachse"),
			UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), yAttr, NULL,
			NULL);

	UA_VariableAttributes zAttr = UA_VariableAttributes_default;
	UA_Double zachse = 0;
	UA_Variant_setScalar(&zAttr.value, &zachse, &UA_TYPES[UA_TYPES_DOUBLE]);
	zAttr.displayName = UA_LOCALIZEDTEXT("en-US", "zachse");
	zAttr.description = UA_LOCALIZEDTEXT("en-US", "zachse");
	zAttr.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
	zAttr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
	UA_NodeId zachseNodeId = UA_NODEID_STRING(1, "zachse");
	UA_Server_addVariableNode(server, zachseNodeId,
			pumpId,    //必须给出nodeId，不然无法定位更改
			UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
			UA_QUALIFIEDNAME(1, "zachse"),
			UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), zAttr, NULL,
			NULL);

	UA_VariableAttributes nameAttr = UA_VariableAttributes_default;
	UA_String name=UA_STRING("zuobiaoxi");
	UA_Variant_setScalar(&nameAttr.value,&name,&UA_TYPES[UA_TYPES_STRING]);	zAttr.displayName = UA_LOCALIZEDTEXT("en-US", "zuobiaoxi");
	nameAttr.displayName = UA_LOCALIZEDTEXT("en-US", "zuobiaoxi");
	nameAttr.description = UA_LOCALIZEDTEXT("en-US", "zuobiaoxi");
	nameAttr.dataType = UA_TYPES[UA_TYPES_STRING].typeId;
	nameAttr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
	UA_NodeId nameNodeId = UA_NODEID_STRING(1,"zuobiaoxi1");
	UA_Server_addVariableNode(server, nameNodeId,
			pumpId,    //必须给出nodeId，不然无法定位更改
			UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
			UA_QUALIFIEDNAME(1, "zuobiaoxi2"),//对应输出的browsename
			UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), nameAttr, NULL,
			NULL);

}


static void writeVariable(UA_Server *server) {    //测试变量
	UA_NodeId myNumNodeId = UA_NODEID_STRING(1, "num");

	/* Write a different integer value */
	UA_Int32 myNum = 1;
	UA_Variant myVar_Num;
	UA_Variant_init(&myVar_Num);
	UA_Variant_setScalar(&myVar_Num, &myNum, &UA_TYPES[UA_TYPES_INT32]);
	UA_Server_writeValue(server, myNumNodeId, myVar_Num);

	UA_NodeId xachseNodeId = UA_NODEID_STRING(1, "xachse");
	UA_Double myX = 1.0;
	UA_Variant myVar_X;
	UA_Variant_init(&myVar_X);
	UA_Variant_setScalar(&myVar_X, &myX, &UA_TYPES[UA_TYPES_DOUBLE]);
	UA_Server_writeValue(server, xachseNodeId, myVar_X);

	UA_NodeId yachseNodeId = UA_NODEID_STRING(1, "yachse");
	UA_Double myY = 1.0;
	UA_Variant myVar_Y;
	UA_Variant_init(&myVar_Y);
	UA_Variant_setScalar(&myVar_Y, &myY, &UA_TYPES[UA_TYPES_DOUBLE]);
	UA_Server_writeValue(server, yachseNodeId, myVar_Y);

	UA_NodeId zachseNodeId = UA_NODEID_STRING(1, "zachse");
	UA_Double myZ = 1.0;
	UA_Variant myVar_Z;
	UA_Variant_init(&myVar_Z);
	UA_Variant_setScalar(&myVar_Z, &myZ, &UA_TYPES[UA_TYPES_DOUBLE]);
	UA_Server_writeValue(server, zachseNodeId, myVar_Z);

}

static UA_StatusCode
helloWorldMethodCallback(UA_Server *server,
                         const UA_NodeId *sessionId, void *sessionHandle,
                         const UA_NodeId *methodId, void *methodContext,
                         const UA_NodeId *objectId, void *objectContext,
                         size_t inputSize, const UA_Variant *input,
                         size_t outputSize, UA_Variant *output) {
    UA_String *inputStr = (UA_String*)input->data;
    UA_String tmp = UA_STRING_ALLOC("Hello ");
    if(inputStr->length > 0) {
        tmp.data = (UA_Byte *)UA_realloc(tmp.data, tmp.length + inputStr->length);
        memcpy(&tmp.data[tmp.length], inputStr->data, inputStr->length);
        tmp.length += inputStr->length;
    }
    UA_Variant_setScalarCopy(output, &tmp, &UA_TYPES[UA_TYPES_STRING]);
    UA_String_deleteMembers(&tmp);
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Hello World was called");
    return UA_STATUSCODE_GOOD;
}

static void
addHellWorldMethod(UA_Server *server) {
    UA_Argument inputArgument;
    UA_Argument_init(&inputArgument);
    inputArgument.description = UA_LOCALIZEDTEXT("en-US", "A String");
    inputArgument.name = UA_STRING("MyInput");
    inputArgument.dataType = UA_TYPES[UA_TYPES_STRING].typeId;
    inputArgument.valueRank = -1; /* scalar */

    UA_Argument outputArgument;
    UA_Argument_init(&outputArgument);
    outputArgument.description = UA_LOCALIZEDTEXT("en-US", "A String");
    outputArgument.name = UA_STRING("MyOutput");
    outputArgument.dataType = UA_TYPES[UA_TYPES_STRING].typeId;
    outputArgument.valueRank = -1; /* scalar */

    UA_MethodAttributes helloAttr = UA_MethodAttributes_default;
    helloAttr.description = UA_LOCALIZEDTEXT("en-US","Say `Hello World`");
    helloAttr.displayName = UA_LOCALIZEDTEXT("en-US","Hello World");
    helloAttr.executable = true;
    helloAttr.userExecutable = true;
    UA_Server_addMethodNode(server, UA_NODEID_NUMERIC(1,62541),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASORDEREDCOMPONENT),
                            UA_QUALIFIEDNAME(1, "hello world"),
                            helloAttr, &helloWorldMethodCallback,
                            1, &inputArgument, 1, &outputArgument, NULL, NULL);
}


static UA_StatusCode
IncInt32ArrayMethodCallback(UA_Server *server,
                            const UA_NodeId *sessionId, void *sessionContext,
                            const UA_NodeId *methodId, void *methodContext,
                            const UA_NodeId *objectId, void *objectContext,
                            size_t inputSize, const UA_Variant *input,
                            size_t outputSize, UA_Variant *output) {
    UA_Int32 *inputArray = (UA_Int32*)input[0].data;
    UA_Int32 delta = *(UA_Int32*)input[1].data;

    /* Copy the input array */
    UA_StatusCode retval = UA_Variant_setScalarCopy(output, inputArray,
                                                   &UA_TYPES[UA_TYPES_INT32]);
    if(retval != UA_STATUSCODE_GOOD)
        return retval;

    /* Increate the elements */
    UA_Int32 *outputArray = (UA_Int32*)output->data;

        *outputArray = *inputArray + delta;

    return UA_STATUSCODE_GOOD;
}

static void
addIncInt32ArrayMethod(UA_Server *server) {
    /* Two input arguments */
    UA_Argument inputArguments[2];
    UA_Argument_init(&inputArguments[0]);
    inputArguments[0].description = UA_LOCALIZEDTEXT("en-US", "int32 Scalar");
    inputArguments[0].name = UA_STRING("number1");
    inputArguments[0].dataType = UA_TYPES[UA_TYPES_INT32].typeId;
    inputArguments[0].valueRank = -1;


    UA_Argument_init(&inputArguments[1]);
    inputArguments[1].description = UA_LOCALIZEDTEXT("en-US", "int32 delta");
    inputArguments[1].name = UA_STRING("number2");
    inputArguments[1].dataType = UA_TYPES[UA_TYPES_INT32].typeId;
    inputArguments[1].valueRank = -1; /* scalar */

    /* One output argument */
    UA_Argument outputArgument;
    UA_Argument_init(&outputArgument);
    outputArgument.description = UA_LOCALIZEDTEXT("en-US", "int32 Scalar");
    outputArgument.name = UA_STRING("Result");
    outputArgument.dataType = UA_TYPES[UA_TYPES_INT32].typeId;
    outputArgument.valueRank = -1;


    /* Add the method node */
    UA_MethodAttributes incAttr = UA_MethodAttributes_default;
    incAttr.description = UA_LOCALIZEDTEXT("en-US", "add");
    incAttr.displayName = UA_LOCALIZEDTEXT("en-US", "add");
    incAttr.executable = true;
    incAttr.userExecutable = true;
    UA_Server_addMethodNode(server, UA_NODEID_NUMERIC(0, 50188),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                            UA_QUALIFIEDNAME(1, "add"),
                            incAttr, &IncInt32ArrayMethodCallback,
                            2, inputArguments, 1, &outputArgument,
                            NULL, NULL);
}


UA_Boolean running = true;
static void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

int main(void) {
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_ServerConfig *config = UA_ServerConfig_new_default();
    UA_Server *server = UA_Server_new(config);

    addHellWorldMethod(server);
    addIncInt32ArrayMethod(server);
	addkoordinate(server);
	writeVariable(server);

    UA_StatusCode retval = UA_Server_run(server, &running);
    UA_Server_delete(server);
    UA_ServerConfig_delete(config);
    return (int)retval;
}
