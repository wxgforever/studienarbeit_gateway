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
include examples/CMakeFiles/discovery_server_register.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/discovery_server_register.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/discovery_server_register.dir/flags.make

examples/CMakeFiles/discovery_server_register.dir/discovery/server_register.c.o: examples/CMakeFiles/discovery_server_register.dir/flags.make
examples/CMakeFiles/discovery_server_register.dir/discovery/server_register.c.o: ../examples/discovery/server_register.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object examples/CMakeFiles/discovery_server_register.dir/discovery/server_register.c.o"
	cd /home/wxg/open62541/build/examples && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/discovery_server_register.dir/discovery/server_register.c.o   -c /home/wxg/open62541/examples/discovery/server_register.c

examples/CMakeFiles/discovery_server_register.dir/discovery/server_register.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/discovery_server_register.dir/discovery/server_register.c.i"
	cd /home/wxg/open62541/build/examples && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/wxg/open62541/examples/discovery/server_register.c > CMakeFiles/discovery_server_register.dir/discovery/server_register.c.i

examples/CMakeFiles/discovery_server_register.dir/discovery/server_register.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/discovery_server_register.dir/discovery/server_register.c.s"
	cd /home/wxg/open62541/build/examples && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/wxg/open62541/examples/discovery/server_register.c -o CMakeFiles/discovery_server_register.dir/discovery/server_register.c.s

examples/CMakeFiles/discovery_server_register.dir/discovery/server_register.c.o.requires:

.PHONY : examples/CMakeFiles/discovery_server_register.dir/discovery/server_register.c.o.requires

examples/CMakeFiles/discovery_server_register.dir/discovery/server_register.c.o.provides: examples/CMakeFiles/discovery_server_register.dir/discovery/server_register.c.o.requires
	$(MAKE) -f examples/CMakeFiles/discovery_server_register.dir/build.make examples/CMakeFiles/discovery_server_register.dir/discovery/server_register.c.o.provides.build
.PHONY : examples/CMakeFiles/discovery_server_register.dir/discovery/server_register.c.o.provides

examples/CMakeFiles/discovery_server_register.dir/discovery/server_register.c.o.provides.build: examples/CMakeFiles/discovery_server_register.dir/discovery/server_register.c.o


# Object files for target discovery_server_register
discovery_server_register_OBJECTS = \
"CMakeFiles/discovery_server_register.dir/discovery/server_register.c.o"

# External object files for target discovery_server_register
discovery_server_register_EXTERNAL_OBJECTS =

bin/examples/discovery_server_register: examples/CMakeFiles/discovery_server_register.dir/discovery/server_register.c.o
bin/examples/discovery_server_register: examples/CMakeFiles/discovery_server_register.dir/build.make
bin/examples/discovery_server_register: bin/libopen62541.a
bin/examples/discovery_server_register: examples/CMakeFiles/discovery_server_register.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ../bin/examples/discovery_server_register"
	cd /home/wxg/open62541/build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/discovery_server_register.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/discovery_server_register.dir/build: bin/examples/discovery_server_register

.PHONY : examples/CMakeFiles/discovery_server_register.dir/build

examples/CMakeFiles/discovery_server_register.dir/requires: examples/CMakeFiles/discovery_server_register.dir/discovery/server_register.c.o.requires

.PHONY : examples/CMakeFiles/discovery_server_register.dir/requires

examples/CMakeFiles/discovery_server_register.dir/clean:
	cd /home/wxg/open62541/build/examples && $(CMAKE_COMMAND) -P CMakeFiles/discovery_server_register.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/discovery_server_register.dir/clean

examples/CMakeFiles/discovery_server_register.dir/depend:
	cd /home/wxg/open62541/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxg/open62541 /home/wxg/open62541/examples /home/wxg/open62541/build /home/wxg/open62541/build/examples /home/wxg/open62541/build/examples/CMakeFiles/discovery_server_register.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/discovery_server_register.dir/depend

