# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wxg/open62541

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wxg/open62541/build

# Include any dependencies generated for this target.
include examples/nodeset/CMakeFiles/server_nodeset.dir/depend.make

# Include the progress variables for this target.
include examples/nodeset/CMakeFiles/server_nodeset.dir/progress.make

# Include the compile flags for this target's objects.
include examples/nodeset/CMakeFiles/server_nodeset.dir/flags.make

src_generated/example_nodeset.c: ../tools/schema/Opc.Ua.NodeSet2.Minimal.xml
src_generated/example_nodeset.c: ../tools/nodeset_compiler/nodeset_compiler.py
src_generated/example_nodeset.c: ../tools/nodeset_compiler/nodes.py
src_generated/example_nodeset.c: ../tools/nodeset_compiler/nodeset.py
src_generated/example_nodeset.c: ../tools/nodeset_compiler/datatypes.py
src_generated/example_nodeset.c: ../tools/nodeset_compiler/backend_open62541.py
src_generated/example_nodeset.c: ../tools/nodeset_compiler/backend_open62541_nodes.py
src_generated/example_nodeset.c: ../tools/nodeset_compiler/backend_open62541_datatypes.py
src_generated/example_nodeset.c: ../examples/nodeset/server_nodeset.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../../src_generated/example_nodeset.c, ../../src_generated/example_nodeset.h"
	cd /home/wxg/open62541/build/examples/nodeset && /usr/bin/python /home/wxg/open62541/tools/nodeset_compiler/nodeset_compiler.py --types-array=UA_TYPES --existing /home/wxg/open62541/tools/schema/Opc.Ua.NodeSet2.Minimal.xml --xml /home/wxg/open62541/examples/nodeset/server_nodeset.xml /home/wxg/open62541/build/src_generated/example_nodeset

src_generated/example_nodeset.h: src_generated/example_nodeset.c
	@$(CMAKE_COMMAND) -E touch_nocreate src_generated/example_nodeset.h

examples/nodeset/CMakeFiles/server_nodeset.dir/server_nodeset.c.o: examples/nodeset/CMakeFiles/server_nodeset.dir/flags.make
examples/nodeset/CMakeFiles/server_nodeset.dir/server_nodeset.c.o: ../examples/nodeset/server_nodeset.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object examples/nodeset/CMakeFiles/server_nodeset.dir/server_nodeset.c.o"
	cd /home/wxg/open62541/build/examples/nodeset && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/server_nodeset.dir/server_nodeset.c.o   -c /home/wxg/open62541/examples/nodeset/server_nodeset.c

examples/nodeset/CMakeFiles/server_nodeset.dir/server_nodeset.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/server_nodeset.dir/server_nodeset.c.i"
	cd /home/wxg/open62541/build/examples/nodeset && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/wxg/open62541/examples/nodeset/server_nodeset.c > CMakeFiles/server_nodeset.dir/server_nodeset.c.i

examples/nodeset/CMakeFiles/server_nodeset.dir/server_nodeset.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/server_nodeset.dir/server_nodeset.c.s"
	cd /home/wxg/open62541/build/examples/nodeset && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/wxg/open62541/examples/nodeset/server_nodeset.c -o CMakeFiles/server_nodeset.dir/server_nodeset.c.s

examples/nodeset/CMakeFiles/server_nodeset.dir/server_nodeset.c.o.requires:

.PHONY : examples/nodeset/CMakeFiles/server_nodeset.dir/server_nodeset.c.o.requires

examples/nodeset/CMakeFiles/server_nodeset.dir/server_nodeset.c.o.provides: examples/nodeset/CMakeFiles/server_nodeset.dir/server_nodeset.c.o.requires
	$(MAKE) -f examples/nodeset/CMakeFiles/server_nodeset.dir/build.make examples/nodeset/CMakeFiles/server_nodeset.dir/server_nodeset.c.o.provides.build
.PHONY : examples/nodeset/CMakeFiles/server_nodeset.dir/server_nodeset.c.o.provides

examples/nodeset/CMakeFiles/server_nodeset.dir/server_nodeset.c.o.provides.build: examples/nodeset/CMakeFiles/server_nodeset.dir/server_nodeset.c.o


examples/nodeset/CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.o: examples/nodeset/CMakeFiles/server_nodeset.dir/flags.make
examples/nodeset/CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.o: src_generated/example_nodeset.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object examples/nodeset/CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.o"
	cd /home/wxg/open62541/build/examples/nodeset && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.o   -c /home/wxg/open62541/build/src_generated/example_nodeset.c

examples/nodeset/CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.i"
	cd /home/wxg/open62541/build/examples/nodeset && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/wxg/open62541/build/src_generated/example_nodeset.c > CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.i

examples/nodeset/CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.s"
	cd /home/wxg/open62541/build/examples/nodeset && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/wxg/open62541/build/src_generated/example_nodeset.c -o CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.s

examples/nodeset/CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.o.requires:

.PHONY : examples/nodeset/CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.o.requires

examples/nodeset/CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.o.provides: examples/nodeset/CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.o.requires
	$(MAKE) -f examples/nodeset/CMakeFiles/server_nodeset.dir/build.make examples/nodeset/CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.o.provides.build
.PHONY : examples/nodeset/CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.o.provides

examples/nodeset/CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.o.provides.build: examples/nodeset/CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.o


# Object files for target server_nodeset
server_nodeset_OBJECTS = \
"CMakeFiles/server_nodeset.dir/server_nodeset.c.o" \
"CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.o"

# External object files for target server_nodeset
server_nodeset_EXTERNAL_OBJECTS =

bin/examples/server_nodeset: examples/nodeset/CMakeFiles/server_nodeset.dir/server_nodeset.c.o
bin/examples/server_nodeset: examples/nodeset/CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.o
bin/examples/server_nodeset: examples/nodeset/CMakeFiles/server_nodeset.dir/build.make
bin/examples/server_nodeset: bin/libopen62541.a
bin/examples/server_nodeset: examples/nodeset/CMakeFiles/server_nodeset.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable ../../bin/examples/server_nodeset"
	cd /home/wxg/open62541/build/examples/nodeset && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server_nodeset.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/nodeset/CMakeFiles/server_nodeset.dir/build: bin/examples/server_nodeset

.PHONY : examples/nodeset/CMakeFiles/server_nodeset.dir/build

examples/nodeset/CMakeFiles/server_nodeset.dir/requires: examples/nodeset/CMakeFiles/server_nodeset.dir/server_nodeset.c.o.requires
examples/nodeset/CMakeFiles/server_nodeset.dir/requires: examples/nodeset/CMakeFiles/server_nodeset.dir/__/__/src_generated/example_nodeset.c.o.requires

.PHONY : examples/nodeset/CMakeFiles/server_nodeset.dir/requires

examples/nodeset/CMakeFiles/server_nodeset.dir/clean:
	cd /home/wxg/open62541/build/examples/nodeset && $(CMAKE_COMMAND) -P CMakeFiles/server_nodeset.dir/cmake_clean.cmake
.PHONY : examples/nodeset/CMakeFiles/server_nodeset.dir/clean

examples/nodeset/CMakeFiles/server_nodeset.dir/depend: src_generated/example_nodeset.c
examples/nodeset/CMakeFiles/server_nodeset.dir/depend: src_generated/example_nodeset.h
	cd /home/wxg/open62541/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxg/open62541 /home/wxg/open62541/examples/nodeset /home/wxg/open62541/build /home/wxg/open62541/build/examples/nodeset /home/wxg/open62541/build/examples/nodeset/CMakeFiles/server_nodeset.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/nodeset/CMakeFiles/server_nodeset.dir/depend

