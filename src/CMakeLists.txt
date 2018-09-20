cmake_minimum_required(VERSION 3.9)
project(build)

set(CMAKE_CXX_STANDARD 11)

add_executable(build
        src_generated/example_nodeset.c
        src_generated/example_nodeset.h
        src_generated/ua_config.h
        src_generated/ua_namespace0.c
        src_generated/ua_namespace0.h
        src_generated/ua_statuscode_descriptions.c
        src_generated/ua_transport_generated.c
        src_generated/ua_transport_generated.h
        src_generated/ua_transport_generated_encoding_binary.h
        src_generated/ua_transport_generated_handling.h
        src_generated/ua_types_generated.c
        src_generated/ua_types_generated.h
        src_generated/ua_types_generated_encoding_binary.h
        src_generated/ua_types_generated_handling.h
        myClient.c
        myServer.c
        open62541.c
        open62541.h
        test.c)
