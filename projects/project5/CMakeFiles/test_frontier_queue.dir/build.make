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
CMAKE_SOURCE_DIR = /home/gunnar/starter-code-ece0302/projects/project5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gunnar/starter-code-ece0302/projects/project5

# Include any dependencies generated for this target.
include CMakeFiles/test_frontier_queue.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_frontier_queue.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_frontier_queue.dir/flags.make

CMakeFiles/test_frontier_queue.dir/test_frontier_queue.cpp.o: CMakeFiles/test_frontier_queue.dir/flags.make
CMakeFiles/test_frontier_queue.dir/test_frontier_queue.cpp.o: test_frontier_queue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gunnar/starter-code-ece0302/projects/project5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_frontier_queue.dir/test_frontier_queue.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_frontier_queue.dir/test_frontier_queue.cpp.o -c /home/gunnar/starter-code-ece0302/projects/project5/test_frontier_queue.cpp

CMakeFiles/test_frontier_queue.dir/test_frontier_queue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_frontier_queue.dir/test_frontier_queue.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gunnar/starter-code-ece0302/projects/project5/test_frontier_queue.cpp > CMakeFiles/test_frontier_queue.dir/test_frontier_queue.cpp.i

CMakeFiles/test_frontier_queue.dir/test_frontier_queue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_frontier_queue.dir/test_frontier_queue.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gunnar/starter-code-ece0302/projects/project5/test_frontier_queue.cpp -o CMakeFiles/test_frontier_queue.dir/test_frontier_queue.cpp.s

# Object files for target test_frontier_queue
test_frontier_queue_OBJECTS = \
"CMakeFiles/test_frontier_queue.dir/test_frontier_queue.cpp.o"

# External object files for target test_frontier_queue
test_frontier_queue_EXTERNAL_OBJECTS =

test_frontier_queue: CMakeFiles/test_frontier_queue.dir/test_frontier_queue.cpp.o
test_frontier_queue: CMakeFiles/test_frontier_queue.dir/build.make
test_frontier_queue: CMakeFiles/test_frontier_queue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gunnar/starter-code-ece0302/projects/project5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_frontier_queue"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_frontier_queue.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_frontier_queue.dir/build: test_frontier_queue

.PHONY : CMakeFiles/test_frontier_queue.dir/build

CMakeFiles/test_frontier_queue.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_frontier_queue.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_frontier_queue.dir/clean

CMakeFiles/test_frontier_queue.dir/depend:
	cd /home/gunnar/starter-code-ece0302/projects/project5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gunnar/starter-code-ece0302/projects/project5 /home/gunnar/starter-code-ece0302/projects/project5 /home/gunnar/starter-code-ece0302/projects/project5 /home/gunnar/starter-code-ece0302/projects/project5 /home/gunnar/starter-code-ece0302/projects/project5/CMakeFiles/test_frontier_queue.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_frontier_queue.dir/depend

