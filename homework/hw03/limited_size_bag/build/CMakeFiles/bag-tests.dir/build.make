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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gunnar/starter-code-ece0302/homework/hw03/limited_size_bag

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gunnar/starter-code-ece0302/homework/hw03/limited_size_bag/build

# Include any dependencies generated for this target.
include CMakeFiles/bag-tests.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bag-tests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bag-tests.dir/flags.make

CMakeFiles/bag-tests.dir/limited_size_bag_tests.cpp.o: CMakeFiles/bag-tests.dir/flags.make
CMakeFiles/bag-tests.dir/limited_size_bag_tests.cpp.o: ../limited_size_bag_tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gunnar/starter-code-ece0302/homework/hw03/limited_size_bag/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bag-tests.dir/limited_size_bag_tests.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bag-tests.dir/limited_size_bag_tests.cpp.o -c /home/gunnar/starter-code-ece0302/homework/hw03/limited_size_bag/limited_size_bag_tests.cpp

CMakeFiles/bag-tests.dir/limited_size_bag_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bag-tests.dir/limited_size_bag_tests.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gunnar/starter-code-ece0302/homework/hw03/limited_size_bag/limited_size_bag_tests.cpp > CMakeFiles/bag-tests.dir/limited_size_bag_tests.cpp.i

CMakeFiles/bag-tests.dir/limited_size_bag_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bag-tests.dir/limited_size_bag_tests.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gunnar/starter-code-ece0302/homework/hw03/limited_size_bag/limited_size_bag_tests.cpp -o CMakeFiles/bag-tests.dir/limited_size_bag_tests.cpp.s

# Object files for target bag-tests
bag__tests_OBJECTS = \
"CMakeFiles/bag-tests.dir/limited_size_bag_tests.cpp.o"

# External object files for target bag-tests
bag__tests_EXTERNAL_OBJECTS =

bag-tests: CMakeFiles/bag-tests.dir/limited_size_bag_tests.cpp.o
bag-tests: CMakeFiles/bag-tests.dir/build.make
bag-tests: CMakeFiles/bag-tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gunnar/starter-code-ece0302/homework/hw03/limited_size_bag/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bag-tests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bag-tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bag-tests.dir/build: bag-tests

.PHONY : CMakeFiles/bag-tests.dir/build

CMakeFiles/bag-tests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bag-tests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bag-tests.dir/clean

CMakeFiles/bag-tests.dir/depend:
	cd /home/gunnar/starter-code-ece0302/homework/hw03/limited_size_bag/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gunnar/starter-code-ece0302/homework/hw03/limited_size_bag /home/gunnar/starter-code-ece0302/homework/hw03/limited_size_bag /home/gunnar/starter-code-ece0302/homework/hw03/limited_size_bag/build /home/gunnar/starter-code-ece0302/homework/hw03/limited_size_bag/build /home/gunnar/starter-code-ece0302/homework/hw03/limited_size_bag/build/CMakeFiles/bag-tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bag-tests.dir/depend

