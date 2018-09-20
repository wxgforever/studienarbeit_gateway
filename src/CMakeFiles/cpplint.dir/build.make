# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/wxg/clion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/wxg/clion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wxg/open62541

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wxg/open62541/build

# Utility rule file for cpplint.

# Include the progress variables for this target.
include CMakeFiles/cpplint.dir/progress.make

CMakeFiles/cpplint: ../src/ua_types.c
CMakeFiles/cpplint: ../src/ua_types_encoding_binary.c
CMakeFiles/cpplint: src_generated/ua_types_generated.c
CMakeFiles/cpplint: src_generated/ua_transport_generated.c
CMakeFiles/cpplint: src_generated/ua_statuscode_descriptions.c
CMakeFiles/cpplint: ../src/ua_util.c
CMakeFiles/cpplint: ../src/ua_timer.c
CMakeFiles/cpplint: ../src/ua_connection.c
CMakeFiles/cpplint: ../src/ua_securechannel.c
CMakeFiles/cpplint: ../src/server/ua_session.c
CMakeFiles/cpplint: ../src/server/ua_nodes.c
CMakeFiles/cpplint: ../src/server/ua_server.c
CMakeFiles/cpplint: ../src/server/ua_server_ns0.c
CMakeFiles/cpplint: src_generated/ua_namespace0.c
CMakeFiles/cpplint: ../src/server/ua_server_binary.c
CMakeFiles/cpplint: ../src/server/ua_server_utils.c
CMakeFiles/cpplint: ../src/server/ua_server_worker.c
CMakeFiles/cpplint: ../src/server/ua_server_discovery.c
CMakeFiles/cpplint: ../src/server/ua_securechannel_manager.c
CMakeFiles/cpplint: ../src/server/ua_session_manager.c
CMakeFiles/cpplint: ../src/server/ua_subscription.c
CMakeFiles/cpplint: ../src/server/ua_subscription_datachange.c
CMakeFiles/cpplint: ../src/server/ua_services_view.c
CMakeFiles/cpplint: ../src/server/ua_services_call.c
CMakeFiles/cpplint: ../src/server/ua_services_session.c
CMakeFiles/cpplint: ../src/server/ua_services_attribute.c
CMakeFiles/cpplint: ../src/server/ua_services_discovery.c
CMakeFiles/cpplint: ../src/server/ua_services_subscription.c
CMakeFiles/cpplint: ../src/server/ua_services_securechannel.c
CMakeFiles/cpplint: ../src/server/ua_services_nodemanagement.c
CMakeFiles/cpplint: ../src/server/ua_services_discovery_multicast.c
CMakeFiles/cpplint: ../src/client/ua_client.c
CMakeFiles/cpplint: ../src/client/ua_client_connect.c
CMakeFiles/cpplint: ../src/client/ua_client_discovery.c
CMakeFiles/cpplint: ../src/client/ua_client_highlevel.c
CMakeFiles/cpplint: ../src/client/ua_client_subscriptions.c
CMakeFiles/cpplint: ../src/client/ua_client_subscriptions_deprecated.c
CMakeFiles/cpplint: ../deps/libc_time.c
CMakeFiles/cpplint: ../deps/pcg_basic.c
CMakeFiles/cpplint: ../deps/queue.h
CMakeFiles/cpplint: ../deps/pcg_basic.h
CMakeFiles/cpplint: ../deps/libc_time.h
CMakeFiles/cpplint: ../src/ua_util.h
CMakeFiles/cpplint: ../src/ua_types_encoding_binary.h
CMakeFiles/cpplint: src_generated/ua_types_generated_encoding_binary.h
CMakeFiles/cpplint: src_generated/ua_transport_generated.h
CMakeFiles/cpplint: src_generated/ua_transport_generated_handling.h
CMakeFiles/cpplint: src_generated/ua_transport_generated_encoding_binary.h
CMakeFiles/cpplint: ../src/ua_connection_internal.h
CMakeFiles/cpplint: ../src/ua_securechannel.h
CMakeFiles/cpplint: ../src/ua_timer.h
CMakeFiles/cpplint: ../src/server/ua_session.h
CMakeFiles/cpplint: ../src/server/ua_subscription.h
CMakeFiles/cpplint: ../src/server/ua_session_manager.h
CMakeFiles/cpplint: ../src/server/ua_securechannel_manager.h
CMakeFiles/cpplint: ../src/server/ua_server_internal.h
CMakeFiles/cpplint: ../src/server/ua_services.h
CMakeFiles/cpplint: src_generated/ua_namespace0.h
CMakeFiles/cpplint: ../src/client/ua_client_internal.h
CMakeFiles/cpplint: ../plugins/ua_network_tcp.h
CMakeFiles/cpplint: ../plugins/ua_accesscontrol_default.h
CMakeFiles/cpplint: ../plugins/ua_pki_certificate.h
CMakeFiles/cpplint: ../plugins/ua_log_stdout.h
CMakeFiles/cpplint: ../plugins/ua_nodestore_default.h
CMakeFiles/cpplint: ../plugins/ua_config_default.h
CMakeFiles/cpplint: ../plugins/ua_securitypolicy_none.h
CMakeFiles/cpplint: ../plugins/ua_log_socket_error.h
CMakeFiles/cpplint: ../plugins/ua_network_tcp.c
CMakeFiles/cpplint: ../plugins/ua_clock.c
CMakeFiles/cpplint: ../plugins/ua_log_stdout.c
CMakeFiles/cpplint: ../plugins/ua_accesscontrol_default.c
CMakeFiles/cpplint: ../plugins/ua_pki_certificate.c
CMakeFiles/cpplint: ../plugins/ua_nodestore_default.c
CMakeFiles/cpplint: ../plugins/ua_config_default.c
CMakeFiles/cpplint: ../plugins/ua_securitypolicy_none.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Run cpplint code style checker on the library"
	cpplint /home/wxg/open62541/src/ua_types.c /home/wxg/open62541/src/ua_types_encoding_binary.c /home/wxg/open62541/build/src_generated/ua_types_generated.c /home/wxg/open62541/build/src_generated/ua_transport_generated.c /home/wxg/open62541/build/src_generated/ua_statuscode_descriptions.c /home/wxg/open62541/src/ua_util.c /home/wxg/open62541/src/ua_timer.c /home/wxg/open62541/src/ua_connection.c /home/wxg/open62541/src/ua_securechannel.c /home/wxg/open62541/src/server/ua_session.c /home/wxg/open62541/src/server/ua_nodes.c /home/wxg/open62541/src/server/ua_server.c /home/wxg/open62541/src/server/ua_server_ns0.c /home/wxg/open62541/build/src_generated/ua_namespace0.c /home/wxg/open62541/src/server/ua_server_binary.c /home/wxg/open62541/src/server/ua_server_utils.c /home/wxg/open62541/src/server/ua_server_worker.c /home/wxg/open62541/src/server/ua_server_discovery.c /home/wxg/open62541/src/server/ua_securechannel_manager.c /home/wxg/open62541/src/server/ua_session_manager.c /home/wxg/open62541/src/server/ua_subscription.c /home/wxg/open62541/src/server/ua_subscription_datachange.c /home/wxg/open62541/src/server/ua_services_view.c /home/wxg/open62541/src/server/ua_services_call.c /home/wxg/open62541/src/server/ua_services_session.c /home/wxg/open62541/src/server/ua_services_attribute.c /home/wxg/open62541/src/server/ua_services_discovery.c /home/wxg/open62541/src/server/ua_services_subscription.c /home/wxg/open62541/src/server/ua_services_securechannel.c /home/wxg/open62541/src/server/ua_services_nodemanagement.c /home/wxg/open62541/src/server/ua_services_discovery_multicast.c /home/wxg/open62541/src/client/ua_client.c /home/wxg/open62541/src/client/ua_client_connect.c /home/wxg/open62541/src/client/ua_client_discovery.c /home/wxg/open62541/src/client/ua_client_highlevel.c /home/wxg/open62541/src/client/ua_client_subscriptions.c /home/wxg/open62541/src/client/ua_client_subscriptions_deprecated.c /home/wxg/open62541/deps/libc_time.c /home/wxg/open62541/deps/pcg_basic.c /home/wxg/open62541/deps/queue.h /home/wxg/open62541/deps/pcg_basic.h /home/wxg/open62541/deps/libc_time.h /home/wxg/open62541/src/ua_util.h /home/wxg/open62541/src/ua_types_encoding_binary.h /home/wxg/open62541/build/src_generated/ua_types_generated_encoding_binary.h /home/wxg/open62541/build/src_generated/ua_transport_generated.h /home/wxg/open62541/build/src_generated/ua_transport_generated_handling.h /home/wxg/open62541/build/src_generated/ua_transport_generated_encoding_binary.h /home/wxg/open62541/src/ua_connection_internal.h /home/wxg/open62541/src/ua_securechannel.h /home/wxg/open62541/src/ua_timer.h /home/wxg/open62541/src/server/ua_session.h /home/wxg/open62541/src/server/ua_subscription.h /home/wxg/open62541/src/server/ua_session_manager.h /home/wxg/open62541/src/server/ua_securechannel_manager.h /home/wxg/open62541/src/server/ua_server_internal.h /home/wxg/open62541/src/server/ua_services.h /home/wxg/open62541/build/src_generated/ua_namespace0.h /home/wxg/open62541/src/client/ua_client_internal.h /home/wxg/open62541/plugins/ua_network_tcp.h /home/wxg/open62541/plugins/ua_accesscontrol_default.h /home/wxg/open62541/plugins/ua_pki_certificate.h /home/wxg/open62541/plugins/ua_log_stdout.h /home/wxg/open62541/plugins/ua_nodestore_default.h /home/wxg/open62541/plugins/ua_config_default.h /home/wxg/open62541/plugins/ua_securitypolicy_none.h /home/wxg/open62541/plugins/ua_log_socket_error.h /home/wxg/open62541/plugins/ua_network_tcp.c /home/wxg/open62541/plugins/ua_clock.c /home/wxg/open62541/plugins/ua_log_stdout.c /home/wxg/open62541/plugins/ua_accesscontrol_default.c /home/wxg/open62541/plugins/ua_pki_certificate.c /home/wxg/open62541/plugins/ua_nodestore_default.c /home/wxg/open62541/plugins/ua_config_default.c /home/wxg/open62541/plugins/ua_securitypolicy_none.c

src_generated/ua_types_generated.c: ../tools/generate_datatypes.py
src_generated/ua_types_generated.c: ../tools/schema/NodeIds.csv
src_generated/ua_types_generated.c: ../tools/schema/Opc.Ua.Types.bsd
src_generated/ua_types_generated.c: ../tools/schema/datatypes_minimal.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating src_generated/ua_types_generated.c, src_generated/ua_types_generated.h, src_generated/ua_types_generated_handling.h, src_generated/ua_types_generated_encoding_binary.h"
	/usr/bin/python /home/wxg/open62541/tools/generate_datatypes.py --type-csv=/home/wxg/open62541/tools/schema/NodeIds.csv --selected-types=/home/wxg/open62541/tools/schema/datatypes_minimal.txt --type-bsd=/home/wxg/open62541/tools/schema/Opc.Ua.Types.bsd /home/wxg/open62541/build/src_generated/ua_types

src_generated/ua_types_generated.h: src_generated/ua_types_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate src_generated/ua_types_generated.h

src_generated/ua_types_generated_handling.h: src_generated/ua_types_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate src_generated/ua_types_generated_handling.h

src_generated/ua_types_generated_encoding_binary.h: src_generated/ua_types_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate src_generated/ua_types_generated_encoding_binary.h

src_generated/ua_transport_generated.c: ../tools/generate_datatypes.py
src_generated/ua_transport_generated.c: ../tools/schema/datatypes_transport.txt
src_generated/ua_transport_generated.c: ../tools/schema/Opc.Ua.Types.bsd
src_generated/ua_transport_generated.c: ../tools/schema/Custom.Opc.Ua.Transport.bsd
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating src_generated/ua_transport_generated.c, src_generated/ua_transport_generated.h, src_generated/ua_transport_generated_handling.h, src_generated/ua_transport_generated_encoding_binary.h"
	/usr/bin/python /home/wxg/open62541/tools/generate_datatypes.py --namespace=1 --selected-types=/home/wxg/open62541/tools/schema/datatypes_transport.txt --type-bsd=/home/wxg/open62541/tools/schema/Opc.Ua.Types.bsd --type-bsd=/home/wxg/open62541/tools/schema/Custom.Opc.Ua.Transport.bsd --no-builtin /home/wxg/open62541/build/src_generated/ua_transport

src_generated/ua_transport_generated.h: src_generated/ua_transport_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate src_generated/ua_transport_generated.h

src_generated/ua_transport_generated_handling.h: src_generated/ua_transport_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate src_generated/ua_transport_generated_handling.h

src_generated/ua_transport_generated_encoding_binary.h: src_generated/ua_transport_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate src_generated/ua_transport_generated_encoding_binary.h

src_generated/ua_statuscode_descriptions.c: ../tools/generate_statuscode_descriptions.py
src_generated/ua_statuscode_descriptions.c: ../tools/schema/Opc.Ua.StatusCodes.csv
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating src_generated/ua_statuscode_descriptions.c"
	/usr/bin/python /home/wxg/open62541/tools/generate_statuscode_descriptions.py /home/wxg/open62541/tools/schema/Opc.Ua.StatusCodes.csv /home/wxg/open62541/build/src_generated/ua_statuscode_descriptions

src_generated/ua_namespace0.c: ../tools/schema/Opc.Ua.NodeSet2.Minimal.xml
src_generated/ua_namespace0.c: ../tools/nodeset_compiler/nodeset_compiler.py
src_generated/ua_namespace0.c: ../tools/nodeset_compiler/nodes.py
src_generated/ua_namespace0.c: ../tools/nodeset_compiler/nodeset.py
src_generated/ua_namespace0.c: ../tools/nodeset_compiler/datatypes.py
src_generated/ua_namespace0.c: ../tools/nodeset_compiler/backend_open62541.py
src_generated/ua_namespace0.c: ../tools/nodeset_compiler/backend_open62541_nodes.py
src_generated/ua_namespace0.c: ../tools/nodeset_compiler/backend_open62541_datatypes.py
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating src_generated/ua_namespace0.c, src_generated/ua_namespace0.h"
	/usr/bin/python /home/wxg/open62541/tools/nodeset_compiler/nodeset_compiler.py --generate-ns0 --internal-headers --max-string-length=0 --ignore /home/wxg/open62541/tools/nodeset_compiler/NodeID_NS0_Base.txt --xml /home/wxg/open62541/tools/schema/Opc.Ua.NodeSet2.Minimal.xml /home/wxg/open62541/build/src_generated/ua_namespace0

src_generated/ua_namespace0.h: src_generated/ua_namespace0.c
	@$(CMAKE_COMMAND) -E touch_nocreate src_generated/ua_namespace0.h

cpplint: CMakeFiles/cpplint
cpplint: src_generated/ua_types_generated.c
cpplint: src_generated/ua_types_generated.h
cpplint: src_generated/ua_types_generated_handling.h
cpplint: src_generated/ua_types_generated_encoding_binary.h
cpplint: src_generated/ua_transport_generated.c
cpplint: src_generated/ua_transport_generated.h
cpplint: src_generated/ua_transport_generated_handling.h
cpplint: src_generated/ua_transport_generated_encoding_binary.h
cpplint: src_generated/ua_statuscode_descriptions.c
cpplint: src_generated/ua_namespace0.c
cpplint: src_generated/ua_namespace0.h
cpplint: CMakeFiles/cpplint.dir/build.make

.PHONY : cpplint

# Rule to build all files generated by this target.
CMakeFiles/cpplint.dir/build: cpplint

.PHONY : CMakeFiles/cpplint.dir/build

CMakeFiles/cpplint.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpplint.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpplint.dir/clean

CMakeFiles/cpplint.dir/depend:
	cd /home/wxg/open62541/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxg/open62541 /home/wxg/open62541 /home/wxg/open62541/build /home/wxg/open62541/build /home/wxg/open62541/build/CMakeFiles/cpplint.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpplint.dir/depend
