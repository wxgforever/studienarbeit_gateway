#include "ros/ros.h"
#include "studienarbeit_gateway/Gateway2Method.h"
#include "open62541.h"
#include <cstdlib>
#include <signal.h>
#include <cstring>
#include <boost/thread/thread.hpp>
#include <queue>
#include <sensor_msgs/PointField.h>

UA_Boolean running = true;
static void stopHandler(int sig) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "received ctrl-c");
    running = false;
    ros::shutdown();
}

static UA_StatusCode
IncInt32ArrayMethodCallback(UA_Server *server,
                            const UA_NodeId *sessionId, void *sessionContext,
                            const UA_NodeId *methodId, void *methodContext,
                            const UA_NodeId *objectId, void *objectContext,
                            size_t inputSize, const UA_Variant *input,
                            size_t outputSize, UA_Variant *output) {
    ros::NodeHandle n;
    ros::ServiceClient client;
    client = n.serviceClient<studienarbeit_gateway::Gateway2Method>("Gateway");
    studienarbeit_gateway::Gateway2Method srv;

    UA_Int32 inputArray = *(UA_Int32*)input[0].data;
    srv.request.a = inputArray;

    inputArray  = *(UA_Int32*)input[1].data;





    srv.request.b = inputArray;
    if (client.call(srv))
    {
      ROS_INFO("Sum: %ld", (long int)srv.response.sum);
    }
    else
    {
      ROS_ERROR("Failed to call service add_two_ints");
      return 1;
    }


        UA_Variant_setScalarCopy(&output[0], &srv.response.sum, &UA_TYPES[UA_TYPES_INT32]);


    return UA_STATUSCODE_GOOD;
}



static void
addIncInt32ArrayMethod(UA_Server *server) {
    /* Two input arguments */
    UA_Argument inputArguments[100];
    UA_Argument_init(&inputArguments[0]);
    inputArguments[0].description = UA_LOCALIZEDTEXT("en-US", "int32 a");
    inputArguments[0].name = UA_STRING("a");
    inputArguments[0].dataType = UA_TYPES[UA_TYPES_INT32].typeId;
    inputArguments[0].valueRank = -1;


    UA_Argument_init(&inputArguments[1]);
    inputArguments[1].description = UA_LOCALIZEDTEXT("en-US", "int32 b");
    inputArguments[1].name = UA_STRING("b");
    inputArguments[1].dataType = UA_TYPES[UA_TYPES_INT32].typeId;
    inputArguments[1].valueRank = -1; /* scalar */

    /* One output argument */
    UA_Argument outputArgument;
    UA_Argument_init(&outputArgument);
    outputArgument.description = UA_LOCALIZEDTEXT("en-US", "int32 sum");
    outputArgument.name = UA_STRING("sum");
    outputArgument.dataType = UA_TYPES[UA_TYPES_INT32].typeId;
    outputArgument.valueRank = -1;


    /* Add the method node */
    UA_MethodAttributes incAttr = UA_MethodAttributes_default;
    incAttr.description = UA_LOCALIZEDTEXT("en-US", "add_Int");
    incAttr.displayName = UA_LOCALIZEDTEXT("en-US", "add_Int");
    incAttr.executable = true;
    incAttr.userExecutable = true;
    UA_Server_addMethodNode(server, UA_NODEID_STRING(1, "IncInt32ArrayValues"),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                            UA_QUALIFIEDNAME(1, "IncInt32"),
                            incAttr, &IncInt32ArrayMethodCallback,
                            2, inputArguments, 1, &outputArgument,
                            NULL, NULL);
}



void threads_Server_run(){
  UA_ServerConfig *config = UA_ServerConfig_new_default();
  UA_Server *server = UA_Server_new(config);



  addIncInt32ArrayMethod(server);

  UA_StatusCode retval = UA_Server_run(server, &running);
  UA_Server_delete(server);
  UA_ServerConfig_delete(config);


}





int main(int argc, char **argv) {




    UA_ServerConfig *config = UA_ServerConfig_new_default();
    UA_Server *server = UA_Server_new(config);

    ros::init(argc, argv, "ros_client");
    ros::NodeHandle n;
    addIncInt32ArrayMethod(server);
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_StatusCode retval = UA_Server_run(server, &running);
    UA_Server_delete(server);
    UA_ServerConfig_delete(config);
    return (int)retval;
}

