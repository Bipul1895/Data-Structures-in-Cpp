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
CMAKE_COMMAND = /snap/clion/114/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/114/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/bipul/Documents/Learning Data Structures/Count Sort"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/bipul/Documents/Learning Data Structures/Count Sort/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Count_Sort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Count_Sort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Count_Sort.dir/flags.make

CMakeFiles/Count_Sort.dir/main.cpp.o: CMakeFiles/Count_Sort.dir/flags.make
CMakeFiles/Count_Sort.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/bipul/Documents/Learning Data Structures/Count Sort/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Count_Sort.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Count_Sort.dir/main.cpp.o -c "/home/bipul/Documents/Learning Data Structures/Count Sort/main.cpp"

CMakeFiles/Count_Sort.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Count_Sort.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/bipul/Documents/Learning Data Structures/Count Sort/main.cpp" > CMakeFiles/Count_Sort.dir/main.cpp.i

CMakeFiles/Count_Sort.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Count_Sort.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/bipul/Documents/Learning Data Structures/Count Sort/main.cpp" -o CMakeFiles/Count_Sort.dir/main.cpp.s

# Object files for target Count_Sort
Count_Sort_OBJECTS = \
"CMakeFiles/Count_Sort.dir/main.cpp.o"

# External object files for target Count_Sort
Count_Sort_EXTERNAL_OBJECTS =

Count_Sort: CMakeFiles/Count_Sort.dir/main.cpp.o
Count_Sort: CMakeFiles/Count_Sort.dir/build.make
Count_Sort: CMakeFiles/Count_Sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/bipul/Documents/Learning Data Structures/Count Sort/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Count_Sort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Count_Sort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Count_Sort.dir/build: Count_Sort

.PHONY : CMakeFiles/Count_Sort.dir/build

CMakeFiles/Count_Sort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Count_Sort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Count_Sort.dir/clean

CMakeFiles/Count_Sort.dir/depend:
	cd "/home/bipul/Documents/Learning Data Structures/Count Sort/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/bipul/Documents/Learning Data Structures/Count Sort" "/home/bipul/Documents/Learning Data Structures/Count Sort" "/home/bipul/Documents/Learning Data Structures/Count Sort/cmake-build-debug" "/home/bipul/Documents/Learning Data Structures/Count Sort/cmake-build-debug" "/home/bipul/Documents/Learning Data Structures/Count Sort/cmake-build-debug/CMakeFiles/Count_Sort.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Count_Sort.dir/depend

