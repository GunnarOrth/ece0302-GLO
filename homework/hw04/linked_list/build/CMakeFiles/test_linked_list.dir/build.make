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
CMAKE_SOURCE_DIR = /home/gunnar/starter-code-ece0302/homework/hw04/linked_list

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gunnar/starter-code-ece0302/homework/hw04/linked_list/build

# Include any dependencies generated for this target.
include CMakeFiles/test_linked_list.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_linked_list.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_linked_list.dir/flags.make

CMakeFiles/test_linked_list.dir/test_linked_list.cpp.o: CMakeFiles/test_linked_list.dir/flags.make
CMakeFiles/test_linked_list.dir/test_linked_list.cpp.o: ../test_linked_list.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gunnar/starter-code-ece0302/homework/hw04/linked_list/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_linked_list.dir/test_linked_list.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_linked_list.dir/test_linked_list.cpp.o -c /home/gunnar/starter-code-ece0302/homework/hw04/linked_list/test_linked_list.cpp

CMakeFiles/test_linked_list.dir/test_linked_list.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_linked_list.dir/test_linked_list.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gunnar/starter-code-ece0302/homework/hw04/linked_list/test_linked_list.cpp > CMakeFiles/test_linked_list.dir/test_linked_list.cpp.i

CMakeFiles/test_linked_list.dir/test_linked_list.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_linked_list.dir/test_linked_list.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gunnar/starter-code-ece0302/homework/hw04/linked_list/test_linked_list.cpp -o CMakeFiles/test_linked_list.dir/test_linked_list.cpp.s

# Object files for target test_linked_list
test_linked_list_OBJECTS = \
"CMakeFiles/test_linked_list.dir/test_linked_list.cpp.o"

# External object files for target test_linked_list
test_linked_list_EXTERNAL_OBJECTS =

test_linked_list: CMakeFiles/test_linked_list.dir/test_linked_list.cpp.o
test_linked_list: CMakeFiles/test_linked_list.dir/build.make
test_linked_list: CMakeFiles/test_linked_list.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gunnar/starter-code-ece0302/homework/hw04/linked_list/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_linked_list"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_linked_list.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_linked_list.dir/build: test_linked_list

.PHONY : CMakeFiles/test_linked_list.dir/build

CMakeFiles/test_linked_list.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_linked_list.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_linked_list.dir/clean

CMakeFiles/test_linked_list.dir/depend:
	cd /home/gunnar/starter-code-ece0302/homework/hw04/linked_list/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gunnar/starter-code-ece0302/homework/hw04/linked_list /home/gunnar/starter-code-ece0302/homework/hw04/linked_list /home/gunnar/starter-code-ece0302/homework/hw04/linked_list/build /home/gunnar/starter-code-ece0302/homework/hw04/linked_list/build /home/gunnar/starter-code-ece0302/homework/hw04/linked_list/build/CMakeFiles/test_linked_list.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_linked_list.dir/depend

