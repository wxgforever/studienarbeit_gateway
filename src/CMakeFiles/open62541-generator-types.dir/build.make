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

# Utility rule file for open62541-generator-types.

# Include the progress variables for this target.
include CMakeFiles/open62541-generator-types.dir/progress.make

CMakeFiles/open62541-generator-types: src_generated/ua_types_generated.c
CMakeFiles/open62541-generator-types: src_generated/ua_types_generated.h
CMakeFiles/open62541-generator-types: src_generated/ua_types_generated_handling.h
CMakeFiles/open62541-generator-types: src_generated/ua_types_generated_encoding_binary.h


src_generated/ua_types_generated.c: ../tools/generate_datatypes.py
src_generated/ua_types_generated.c: ../tools/schema/NodeIds.csv
src_generated/ua_types_generated.c: ../tools/schema/Opc.Ua.Types.bsd
src_generated/ua_types_generated.c: ../tools/schema/datatypes_minimal.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/wxg/open62541/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating src_generated/ua_types_generated.c, src_generated/ua_types_generated.h, src_generated/ua_types_generated_handling.h, src_generated/ua_types_generated_encoding_binary.h"
	/usr/bin/python /home/wxg/open62541/tools/generate_datatypes.py --type-csv=/home/wxg/open62541/tools/schema/NodeIds.csv --selected-types=/home/wxg/open62541/tools/schema/datatypes_minimal.txt --type-bsd=/home/wxg/open62541/tools/schema/Opc.Ua.Types.bsd /home/wxg/open62541/build/src_generated/ua_types

src_generated/ua_types_generated.h: src_generated/ua_types_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate src_generated/ua_types_generated.h

src_generated/ua_types_generated_handling.h: src_generated/ua_types_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate src_generated/ua_types_generated_handling.h

src_generated/ua_types_generated_encoding_binary.h: src_generated/ua_types_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate src_generated/ua_types_generated_encoding_binary.h

open62541-generator-types: CMakeFiles/open62541-generator-types
open62541-generator-types: src_generated/ua_types_generated.c
open62541-generator-types: src_generated/ua_types_generated.h
open62541-generator-types: src_generated/ua_types_generated_handling.h
open62541-generator-types: src_generated/ua_types_generated_encoding_binary.h
open62541-generator-types: CMakeFiles/open62541-generator-types.dir/build.make

.PHONY : open62541-generator-types

# Rule to build all files generated by this target.
CMakeFiles/open62541-generator-types.dir/build: open62541-generator-types

.PHONY : CMakeFiles/open62541-generator-types.dir/build

CMakeFiles/open62541-generator-types.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/open62541-generator-types.dir/cmake_clean.cmake
.PHONY : CMakeFiles/open62541-generator-types.dir/clean

CMakeFiles/open62541-generator-types.dir/depend:
	cd /home/wxg/open62541/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxg/open62541 /home/wxg/open62541 /home/wxg/open62541/build /home/wxg/open62541/build /home/wxg/open62541/build/CMakeFiles/open62541-generator-types.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/open62541-generator-types.dir/depend
