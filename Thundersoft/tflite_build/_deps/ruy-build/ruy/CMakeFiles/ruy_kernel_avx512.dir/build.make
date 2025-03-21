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
include _deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/flags.make

_deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/codegen:
.PHONY : _deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/codegen

_deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/kernel_avx512.cc.o: _deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/flags.make
_deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/kernel_avx512.cc.o: /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/ruy/ruy/kernel_avx512.cc
_deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/kernel_avx512.cc.o: _deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object _deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/kernel_avx512.cc.o"
	cd /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/_deps/ruy-build/ruy && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/kernel_avx512.cc.o -MF CMakeFiles/ruy_kernel_avx512.dir/kernel_avx512.cc.o.d -o CMakeFiles/ruy_kernel_avx512.dir/kernel_avx512.cc.o -c /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/ruy/ruy/kernel_avx512.cc

_deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/kernel_avx512.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ruy_kernel_avx512.dir/kernel_avx512.cc.i"
	cd /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/_deps/ruy-build/ruy && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/ruy/ruy/kernel_avx512.cc > CMakeFiles/ruy_kernel_avx512.dir/kernel_avx512.cc.i

_deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/kernel_avx512.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ruy_kernel_avx512.dir/kernel_avx512.cc.s"
	cd /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/_deps/ruy-build/ruy && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/ruy/ruy/kernel_avx512.cc -o CMakeFiles/ruy_kernel_avx512.dir/kernel_avx512.cc.s

# Object files for target ruy_kernel_avx512
ruy_kernel_avx512_OBJECTS = \
"CMakeFiles/ruy_kernel_avx512.dir/kernel_avx512.cc.o"

# External object files for target ruy_kernel_avx512
ruy_kernel_avx512_EXTERNAL_OBJECTS =

_deps/ruy-build/ruy/libruy_kernel_avx512.a: _deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/kernel_avx512.cc.o
_deps/ruy-build/ruy/libruy_kernel_avx512.a: _deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/build.make
_deps/ruy-build/ruy/libruy_kernel_avx512.a: _deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libruy_kernel_avx512.a"
	cd /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/_deps/ruy-build/ruy && $(CMAKE_COMMAND) -P CMakeFiles/ruy_kernel_avx512.dir/cmake_clean_target.cmake
	cd /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/_deps/ruy-build/ruy && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ruy_kernel_avx512.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/build: _deps/ruy-build/ruy/libruy_kernel_avx512.a
.PHONY : _deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/build

_deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/clean:
	cd /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/_deps/ruy-build/ruy && $(CMAKE_COMMAND) -P CMakeFiles/ruy_kernel_avx512.dir/cmake_clean.cmake
.PHONY : _deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/clean

_deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/depend:
	cd /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/vaddikasulu/Thundersoft_work/Thundersoft/tensorflow/tensorflow/lite /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/ruy/ruy /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/_deps/ruy-build/ruy /Users/vaddikasulu/Thundersoft_work/Thundersoft/tflite_build/_deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : _deps/ruy-build/ruy/CMakeFiles/ruy_kernel_avx512.dir/depend

