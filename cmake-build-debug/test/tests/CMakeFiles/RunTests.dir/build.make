# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/brandon/Desktop/OrderBookDemo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/brandon/Desktop/OrderBookDemo/cmake-build-debug

# Include any dependencies generated for this target.
include test/tests/CMakeFiles/RunTests.dir/depend.make

# Include the progress variables for this target.
include test/tests/CMakeFiles/RunTests.dir/progress.make

# Include the compile flags for this target's objects.
include test/tests/CMakeFiles/RunTests.dir/flags.make

test/tests/CMakeFiles/RunTests.dir/SomeTests.cpp.o: test/tests/CMakeFiles/RunTests.dir/flags.make
test/tests/CMakeFiles/RunTests.dir/SomeTests.cpp.o: ../test/tests/SomeTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/brandon/Desktop/OrderBookDemo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/tests/CMakeFiles/RunTests.dir/SomeTests.cpp.o"
	cd /Users/brandon/Desktop/OrderBookDemo/cmake-build-debug/test/tests && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RunTests.dir/SomeTests.cpp.o -c /Users/brandon/Desktop/OrderBookDemo/test/tests/SomeTests.cpp

test/tests/CMakeFiles/RunTests.dir/SomeTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RunTests.dir/SomeTests.cpp.i"
	cd /Users/brandon/Desktop/OrderBookDemo/cmake-build-debug/test/tests && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/brandon/Desktop/OrderBookDemo/test/tests/SomeTests.cpp > CMakeFiles/RunTests.dir/SomeTests.cpp.i

test/tests/CMakeFiles/RunTests.dir/SomeTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RunTests.dir/SomeTests.cpp.s"
	cd /Users/brandon/Desktop/OrderBookDemo/cmake-build-debug/test/tests && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/brandon/Desktop/OrderBookDemo/test/tests/SomeTests.cpp -o CMakeFiles/RunTests.dir/SomeTests.cpp.s

# Object files for target RunTests
RunTests_OBJECTS = \
"CMakeFiles/RunTests.dir/SomeTests.cpp.o"

# External object files for target RunTests
RunTests_EXTERNAL_OBJECTS =

test/tests/RunTests: test/tests/CMakeFiles/RunTests.dir/SomeTests.cpp.o
test/tests/RunTests: test/tests/CMakeFiles/RunTests.dir/build.make
test/tests/RunTests: lib/libgtestd.a
test/tests/RunTests: lib/libgtest_maind.a
test/tests/RunTests: src/libsrc.a
test/tests/RunTests: lib/libgtestd.a
test/tests/RunTests: test/tests/CMakeFiles/RunTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/brandon/Desktop/OrderBookDemo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable RunTests"
	cd /Users/brandon/Desktop/OrderBookDemo/cmake-build-debug/test/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RunTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/tests/CMakeFiles/RunTests.dir/build: test/tests/RunTests

.PHONY : test/tests/CMakeFiles/RunTests.dir/build

test/tests/CMakeFiles/RunTests.dir/clean:
	cd /Users/brandon/Desktop/OrderBookDemo/cmake-build-debug/test/tests && $(CMAKE_COMMAND) -P CMakeFiles/RunTests.dir/cmake_clean.cmake
.PHONY : test/tests/CMakeFiles/RunTests.dir/clean

test/tests/CMakeFiles/RunTests.dir/depend:
	cd /Users/brandon/Desktop/OrderBookDemo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/brandon/Desktop/OrderBookDemo /Users/brandon/Desktop/OrderBookDemo/test/tests /Users/brandon/Desktop/OrderBookDemo/cmake-build-debug /Users/brandon/Desktop/OrderBookDemo/cmake-build-debug/test/tests /Users/brandon/Desktop/OrderBookDemo/cmake-build-debug/test/tests/CMakeFiles/RunTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/tests/CMakeFiles/RunTests.dir/depend

