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
include examples/CMakeFiles/access_control_client.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/access_control_client.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/access_control_client.dir/flags.make

examples/CMakeFiles/access_control_client.dir/access_control/client_access_control.c.o: examples/CMakeFiles/access_control_client.dir/flags.make
examples/CMakeFiles/access_control_client.dir/access_control/client_access_control.c.o: ../examples/access_control/client_access_control.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object examples/CMakeFiles/access_control_client.dir/access_control/client_access_control.c.o"
	cd /home/wxg/open62541/build/examples && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/access_control_client.dir/access_control/client_access_control.c.o   -c /home/wxg/open62541/examples/access_control/client_access_control.c

examples/CMakeFiles/access_control_client.dir/access_control/client_access_control.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/access_control_client.dir/access_control/client_access_control.c.i"
	cd /home/wxg/open62541/build/examples && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/wxg/open62541/examples/access_control/client_access_control.c > CMakeFiles/access_control_client.dir/access_control/client_access_control.c.i

examples/CMakeFiles/access_control_client.dir/access_control/client_access_control.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/access_control_client.dir/access_control/client_access_control.c.s"
	cd /home/wxg/open62541/build/examples && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/wxg/open62541/examples/access_control/client_access_control.c -o CMakeFiles/access_control_client.dir/access_control/client_access_control.c.s

examples/CMakeFiles/access_control_client.dir/access_control/client_access_control.c.o.requires:

.PHONY : examples/CMakeFiles/access_control_client.dir/access_control/client_access_control.c.o.requires

examples/CMakeFiles/access_control_client.dir/access_control/client_access_control.c.o.provides: examples/CMakeFiles/access_control_client.dir/access_control/client_access_control.c.o.requires
	$(MAKE) -f examples/CMakeFiles/access_control_client.dir/build.make examples/CMakeFiles/access_control_client.dir/access_control/client_access_control.c.o.provides.build
.PHONY : examples/CMakeFiles/access_control_client.dir/access_control/client_access_control.c.o.provides

examples/CMakeFiles/access_control_client.dir/access_control/client_access_control.c.o.provides.build: examples/CMakeFiles/access_control_client.dir/access_control/client_access_control.c.o


# Object files for target access_control_client
access_control_client_OBJECTS = \
"CMakeFiles/access_control_client.dir/access_control/client_access_control.c.o"

# External object files for target access_control_client
access_control_client_EXTERNAL_OBJECTS =

bin/examples/access_control_client: examples/CMakeFiles/access_control_client.dir/access_control/client_access_control.c.o
bin/examples/access_control_client: examples/CMakeFiles/access_control_client.dir/build.make
bin/examples/access_control_client: bin/libopen62541.a
bin/examples/access_control_client: examples/CMakeFiles/access_control_client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ../bin/examples/access_control_client"
	cd /home/wxg/open62541/build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/access_control_client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/access_control_client.dir/build: bin/examples/access_control_client

.PHONY : examples/CMakeFiles/access_control_client.dir/build

examples/CMakeFiles/access_control_client.dir/requires: examples/CMakeFiles/access_control_client.dir/access_control/client_access_control.c.o.requires

.PHONY : examples/CMakeFiles/access_control_client.dir/requires

examples/CMakeFiles/access_control_client.dir/clean:
	cd /home/wxg/open62541/build/examples && $(CMAKE_COMMAND) -P CMakeFiles/access_control_client.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/access_control_client.dir/clean

examples/CMakeFiles/access_control_client.dir/depend:
	cd /home/wxg/open62541/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxg/open62541 /home/wxg/open62541/examples /home/wxg/open62541/build /home/wxg/open62541/build/examples /home/wxg/open62541/build/examples/CMakeFiles/access_control_client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/access_control_client.dir/depend

