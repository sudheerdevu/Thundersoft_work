# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/vaddikasulu/Thundersoft_work/Thundersoft/tensorflow/tensorflow/lite

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build

# Include any dependencies generated for this target.
include _deps/xnnpack-build/CMakeFiles/packing.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/xnnpack-build/CMakeFiles/packing.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/xnnpack-build/CMakeFiles/packing.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/xnnpack-build/CMakeFiles/packing.dir/flags.make

_deps/xnnpack-build/CMakeFiles/packing.dir/codegen:
.PHONY : _deps/xnnpack-build/CMakeFiles/packing.dir/codegen

_deps/xnnpack-build/CMakeFiles/packing.dir/src/reference/packing.cc.o: _deps/xnnpack-build/CMakeFiles/packing.dir/flags.make
_deps/xnnpack-build/CMakeFiles/packing.dir/src/reference/packing.cc.o: /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/xnnpack/src/reference/packing.cc
_deps/xnnpack-build/CMakeFiles/packing.dir/src/reference/packing.cc.o: _deps/xnnpack-build/CMakeFiles/packing.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object _deps/xnnpack-build/CMakeFiles/packing.dir/src/reference/packing.cc.o"
	cd /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/_deps/xnnpack-build && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/xnnpack-build/CMakeFiles/packing.dir/src/reference/packing.cc.o -MF CMakeFiles/packing.dir/src/reference/packing.cc.o.d -o CMakeFiles/packing.dir/src/reference/packing.cc.o -c /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/xnnpack/src/reference/packing.cc

_deps/xnnpack-build/CMakeFiles/packing.dir/src/reference/packing.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/packing.dir/src/reference/packing.cc.i"
	cd /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/_deps/xnnpack-build && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/xnnpack/src/reference/packing.cc > CMakeFiles/packing.dir/src/reference/packing.cc.i

_deps/xnnpack-build/CMakeFiles/packing.dir/src/reference/packing.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/packing.dir/src/reference/packing.cc.s"
	cd /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/_deps/xnnpack-build && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/xnnpack/src/reference/packing.cc -o CMakeFiles/packing.dir/src/reference/packing.cc.s

packing: _deps/xnnpack-build/CMakeFiles/packing.dir/src/reference/packing.cc.o
packing: _deps/xnnpack-build/CMakeFiles/packing.dir/build.make
.PHONY : packing

# Rule to build all files generated by this target.
_deps/xnnpack-build/CMakeFiles/packing.dir/build: packing
.PHONY : _deps/xnnpack-build/CMakeFiles/packing.dir/build

_deps/xnnpack-build/CMakeFiles/packing.dir/clean:
	cd /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/_deps/xnnpack-build && $(CMAKE_COMMAND) -P CMakeFiles/packing.dir/cmake_clean.cmake
.PHONY : _deps/xnnpack-build/CMakeFiles/packing.dir/clean

_deps/xnnpack-build/CMakeFiles/packing.dir/depend:
	cd /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/vaddikasulu/Thundersoft_work/Thundersoft/tensorflow/tensorflow/lite /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/xnnpack /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/_deps/xnnpack-build /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/_deps/xnnpack-build/CMakeFiles/packing.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : _deps/xnnpack-build/CMakeFiles/packing.dir/depend

