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
include examples/CMakeFiles/tutorial_server_firststeps.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/tutorial_server_firststeps.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/tutorial_server_firststeps.dir/flags.make

examples/CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.o: examples/CMakeFiles/tutorial_server_firststeps.dir/flags.make
examples/CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.o: ../examples/tutorial_server_firststeps.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object examples/CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.o"
	cd /home/wxg/open62541/build/examples && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.o   -c /home/wxg/open62541/examples/tutorial_server_firststeps.c

examples/CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.i"
	cd /home/wxg/open62541/build/examples && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/wxg/open62541/examples/tutorial_server_firststeps.c > CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.i

examples/CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.s"
	cd /home/wxg/open62541/build/examples && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/wxg/open62541/examples/tutorial_server_firststeps.c -o CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.s

examples/CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.o.requires:

.PHONY : examples/CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.o.requires

examples/CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.o.provides: examples/CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.o.requires
	$(MAKE) -f examples/CMakeFiles/tutorial_server_firststeps.dir/build.make examples/CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.o.provides.build
.PHONY : examples/CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.o.provides

examples/CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.o.provides.build: examples/CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.o


# Object files for target tutorial_server_firststeps
tutorial_server_firststeps_OBJECTS = \
"CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.o"

# External object files for target tutorial_server_firststeps
tutorial_server_firststeps_EXTERNAL_OBJECTS =

bin/examples/tutorial_server_firststeps: examples/CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.o
bin/examples/tutorial_server_firststeps: examples/CMakeFiles/tutorial_server_firststeps.dir/build.make
bin/examples/tutorial_server_firststeps: bin/libopen62541.a
bin/examples/tutorial_server_firststeps: examples/CMakeFiles/tutorial_server_firststeps.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ../bin/examples/tutorial_server_firststeps"
	cd /home/wxg/open62541/build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tutorial_server_firststeps.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/tutorial_server_firststeps.dir/build: bin/examples/tutorial_server_firststeps

.PHONY : examples/CMakeFiles/tutorial_server_firststeps.dir/build

examples/CMakeFiles/tutorial_server_firststeps.dir/requires: examples/CMakeFiles/tutorial_server_firststeps.dir/tutorial_server_firststeps.c.o.requires

.PHONY : examples/CMakeFiles/tutorial_server_firststeps.dir/requires

examples/CMakeFiles/tutorial_server_firststeps.dir/clean:
	cd /home/wxg/open62541/build/examples && $(CMAKE_COMMAND) -P CMakeFiles/tutorial_server_firststeps.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/tutorial_server_firststeps.dir/clean

examples/CMakeFiles/tutorial_server_firststeps.dir/depend:
	cd /home/wxg/open62541/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxg/open62541 /home/wxg/open62541/examples /home/wxg/open62541/build /home/wxg/open62541/build/examples /home/wxg/open62541/build/examples/CMakeFiles/tutorial_server_firststeps.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/tutorial_server_firststeps.dir/depend

