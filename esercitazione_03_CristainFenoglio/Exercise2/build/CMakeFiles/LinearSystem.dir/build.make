# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 4.0

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/cristian/Desktop/PCS/esercitazione_03_CristainFenoglio/Exercise2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/cristian/Desktop/PCS/esercitazione_03_CristainFenoglio/Exercise2/build

# Include any dependencies generated for this target.
include CMakeFiles/LinearSystem.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LinearSystem.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LinearSystem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LinearSystem.dir/flags.make

CMakeFiles/LinearSystem.dir/codegen:
.PHONY : CMakeFiles/LinearSystem.dir/codegen

CMakeFiles/LinearSystem.dir/main.cpp.o: CMakeFiles/LinearSystem.dir/flags.make
CMakeFiles/LinearSystem.dir/main.cpp.o: /Users/cristian/Desktop/PCS/esercitazione_03_CristainFenoglio/Exercise2/main.cpp
CMakeFiles/LinearSystem.dir/main.cpp.o: CMakeFiles/LinearSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/cristian/Desktop/PCS/esercitazione_03_CristainFenoglio/Exercise2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LinearSystem.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LinearSystem.dir/main.cpp.o -MF CMakeFiles/LinearSystem.dir/main.cpp.o.d -o CMakeFiles/LinearSystem.dir/main.cpp.o -c /Users/cristian/Desktop/PCS/esercitazione_03_CristainFenoglio/Exercise2/main.cpp

CMakeFiles/LinearSystem.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LinearSystem.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cristian/Desktop/PCS/esercitazione_03_CristainFenoglio/Exercise2/main.cpp > CMakeFiles/LinearSystem.dir/main.cpp.i

CMakeFiles/LinearSystem.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LinearSystem.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cristian/Desktop/PCS/esercitazione_03_CristainFenoglio/Exercise2/main.cpp -o CMakeFiles/LinearSystem.dir/main.cpp.s

# Object files for target LinearSystem
LinearSystem_OBJECTS = \
"CMakeFiles/LinearSystem.dir/main.cpp.o"

# External object files for target LinearSystem
LinearSystem_EXTERNAL_OBJECTS =

LinearSystem: CMakeFiles/LinearSystem.dir/main.cpp.o
LinearSystem: CMakeFiles/LinearSystem.dir/build.make
LinearSystem: /usr/local/lib/libgtest.a
LinearSystem: /usr/local/lib/libgtest_main.a
LinearSystem: /usr/local/lib/libgmock.a
LinearSystem: /usr/local/lib/libgmock_main.a
LinearSystem: /usr/local/lib/libgmock.a
LinearSystem: /usr/local/lib/libgtest.a
LinearSystem: CMakeFiles/LinearSystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/cristian/Desktop/PCS/esercitazione_03_CristainFenoglio/Exercise2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LinearSystem"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LinearSystem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LinearSystem.dir/build: LinearSystem
.PHONY : CMakeFiles/LinearSystem.dir/build

CMakeFiles/LinearSystem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LinearSystem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LinearSystem.dir/clean

CMakeFiles/LinearSystem.dir/depend:
	cd /Users/cristian/Desktop/PCS/esercitazione_03_CristainFenoglio/Exercise2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/cristian/Desktop/PCS/esercitazione_03_CristainFenoglio/Exercise2 /Users/cristian/Desktop/PCS/esercitazione_03_CristainFenoglio/Exercise2 /Users/cristian/Desktop/PCS/esercitazione_03_CristainFenoglio/Exercise2/build /Users/cristian/Desktop/PCS/esercitazione_03_CristainFenoglio/Exercise2/build /Users/cristian/Desktop/PCS/esercitazione_03_CristainFenoglio/Exercise2/build/CMakeFiles/LinearSystem.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/LinearSystem.dir/depend

