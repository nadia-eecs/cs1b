# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03/build

# Include any dependencies generated for this target.
include tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/progress.make

# Include the compile flags for this target's objects.
include tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/flags.make

tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/flags.make
tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: ../tests/lib/gtest-1.7.0/src/gtest_main.cc
tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"
	cd /home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03/build/tests/lib/gtest-1.7.0 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o -MF CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.d -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.o -c /home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03/tests/lib/gtest-1.7.0/src/gtest_main.cc

tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest_main.dir/src/gtest_main.cc.i"
	cd /home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03/build/tests/lib/gtest-1.7.0 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03/tests/lib/gtest-1.7.0/src/gtest_main.cc > CMakeFiles/gtest_main.dir/src/gtest_main.cc.i

tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest_main.dir/src/gtest_main.cc.s"
	cd /home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03/build/tests/lib/gtest-1.7.0 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03/tests/lib/gtest-1.7.0/src/gtest_main.cc -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.s

# Object files for target gtest_main
gtest_main_OBJECTS = \
"CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"

# External object files for target gtest_main
gtest_main_EXTERNAL_OBJECTS =

tests/lib/gtest-1.7.0/libgtest_main.a: tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
tests/lib/gtest-1.7.0/libgtest_main.a: tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/build.make
tests/lib/gtest-1.7.0/libgtest_main.a: tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libgtest_main.a"
	cd /home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03/build/tests/lib/gtest-1.7.0 && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean_target.cmake
	cd /home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03/build/tests/lib/gtest-1.7.0 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/build: tests/lib/gtest-1.7.0/libgtest_main.a
.PHONY : tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/build

tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/clean:
	cd /home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03/build/tests/lib/gtest-1.7.0 && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean.cmake
.PHONY : tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/clean

tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/depend:
	cd /home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03 /home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03/tests/lib/gtest-1.7.0 /home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03/build /home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03/build/tests/lib/gtest-1.7.0 /home/ahmedn/cs1b/na/github_classroom/classroom/cs1b/hw/hw03/build/tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/lib/gtest-1.7.0/CMakeFiles/gtest_main.dir/depend

