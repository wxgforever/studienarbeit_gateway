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

# Utility rule file for open62541-generator-statuscode.

# Include the progress variables for this target.
include CMakeFiles/open62541-generator-statuscode.dir/progress.make

CMakeFiles/open62541-generator-statuscode: src_generated/ua_statuscode_descriptions.c


src_generated/ua_statuscode_descriptions.c: ../tools/generate_statuscode_descriptions.py
src_generated/ua_statuscode_descriptions.c: ../tools/schema/Opc.Ua.StatusCodes.csv
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating src_generated/ua_statuscode_descriptions.c"
	/usr/bin/python /home/wxg/open62541/tools/generate_statuscode_descriptions.py /home/wxg/open62541/tools/schema/Opc.Ua.StatusCodes.csv /home/wxg/open62541/build/src_generated/ua_statuscode_descriptions

open62541-generator-statuscode: CMakeFiles/open62541-generator-statuscode
open62541-generator-statuscode: src_generated/ua_statuscode_descriptions.c
open62541-generator-statuscode: CMakeFiles/open62541-generator-statuscode.dir/build.make

.PHONY : open62541-generator-statuscode

# Rule to build all files generated by this target.
CMakeFiles/open62541-generator-statuscode.dir/build: open62541-generator-statuscode

.PHONY : CMakeFiles/open62541-generator-statuscode.dir/build

CMakeFiles/open62541-generator-statuscode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/open62541-generator-statuscode.dir/cmake_clean.cmake
.PHONY : CMakeFiles/open62541-generator-statuscode.dir/clean

CMakeFiles/open62541-generator-statuscode.dir/depend:
	cd /home/wxg/open62541/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxg/open62541 /home/wxg/open62541 /home/wxg/open62541/build /home/wxg/open62541/build /home/wxg/open62541/build/CMakeFiles/open62541-generator-statuscode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/open62541-generator-statuscode.dir/depend
