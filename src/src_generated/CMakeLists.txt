cmake_minimum_required(VERSION 3.9)
project(src_generated)

set(CMAKE_CXX_STANDARD 11)

add_executable(src_generated
        example_nodeset.c
        example_nodeset.h
        ua_config.h
        ua_namespace0.c
        ua_namespace0.h
        ua_statuscode_descriptions.c
        ua_transport_generated.c
        ua_transport_generated.h
        ua_transport_generated_encoding_binary.h
        ua_transport_generated_handling.h
        ua_types_generated.c
        ua_types_generated.h
        ua_types_generated_encoding_binary.h
        ua_types_generated_handling.h)
