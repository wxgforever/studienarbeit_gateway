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
include examples/CMakeFiles/server_mainloop.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/server_mainloop.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/server_mainloop.dir/flags.make

examples/CMakeFiles/server_mainloop.dir/server_mainloop.c.o: examples/CMakeFiles/server_mainloop.dir/flags.make
examples/CMakeFiles/server_mainloop.dir/server_mainloop.c.o: ../examples/server_mainloop.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object examples/CMakeFiles/server_mainloop.dir/server_mainloop.c.o"
	cd /home/wxg/open62541/build/examples && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/server_mainloop.dir/server_mainloop.c.o   -c /home/wxg/open62541/examples/server_mainloop.c

examples/CMakeFiles/server_mainloop.dir/server_mainloop.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/server_mainloop.dir/server_mainloop.c.i"
	cd /home/wxg/open62541/build/examples && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/wxg/open62541/examples/server_mainloop.c > CMakeFiles/server_mainloop.dir/server_mainloop.c.i

examples/CMakeFiles/server_mainloop.dir/server_mainloop.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/server_mainloop.dir/server_mainloop.c.s"
	cd /home/wxg/open62541/build/examples && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/wxg/open62541/examples/server_mainloop.c -o CMakeFiles/server_mainloop.dir/server_mainloop.c.s

examples/CMakeFiles/server_mainloop.dir/server_mainloop.c.o.requires:

.PHONY : examples/CMakeFiles/server_mainloop.dir/server_mainloop.c.o.requires

examples/CMakeFiles/server_mainloop.dir/server_mainloop.c.o.provides: examples/CMakeFiles/server_mainloop.dir/server_mainloop.c.o.requires
	$(MAKE) -f examples/CMakeFiles/server_mainloop.dir/build.make examples/CMakeFiles/server_mainloop.dir/server_mainloop.c.o.provides.build
.PHONY : examples/CMakeFiles/server_mainloop.dir/server_mainloop.c.o.provides

examples/CMakeFiles/server_mainloop.dir/server_mainloop.c.o.provides.build: examples/CMakeFiles/server_mainloop.dir/server_mainloop.c.o


# Object files for target server_mainloop
server_mainloop_OBJECTS = \
"CMakeFiles/server_mainloop.dir/server_mainloop.c.o"

# External object files for target server_mainloop
server_mainloop_EXTERNAL_OBJECTS =

bin/examples/server_mainloop: examples/CMakeFiles/server_mainloop.dir/server_mainloop.c.o
bin/examples/server_mainloop: examples/CMakeFiles/server_mainloop.dir/build.make
bin/examples/server_mainloop: bin/libopen62541.a
bin/examples/server_mainloop: examples/CMakeFiles/server_mainloop.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ../bin/examples/server_mainloop"
	cd /home/wxg/open62541/build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server_mainloop.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/server_mainloop.dir/build: bin/examples/server_mainloop

.PHONY : examples/CMakeFiles/server_mainloop.dir/build

examples/CMakeFiles/server_mainloop.dir/requires: examples/CMakeFiles/server_mainloop.dir/server_mainloop.c.o.requires

.PHONY : examples/CMakeFiles/server_mainloop.dir/requires

examples/CMakeFiles/server_mainloop.dir/clean:
	cd /home/wxg/open62541/build/examples && $(CMAKE_COMMAND) -P CMakeFiles/server_mainloop.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/server_mainloop.dir/clean

examples/CMakeFiles/server_mainloop.dir/depend:
	cd /home/wxg/open62541/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxg/open62541 /home/wxg/open62541/examples /home/wxg/open62541/build /home/wxg/open62541/build/examples /home/wxg/open62541/build/examples/CMakeFiles/server_mainloop.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/server_mainloop.dir/depend
