# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = "/home/simon/eclipse-workspace 3/RugbyKickSim"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/simon/eclipse-workspace 3/RugbyKickSim/build/cmake.debug.linux.x86_64"

# Include any dependencies generated for this target.
include CMakeFiles/RugbyKickSim.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RugbyKickSim.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RugbyKickSim.dir/flags.make

CMakeFiles/RugbyKickSim.dir/RugbyKickSim.cpp.o: CMakeFiles/RugbyKickSim.dir/flags.make
CMakeFiles/RugbyKickSim.dir/RugbyKickSim.cpp.o: ../../RugbyKickSim.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/simon/eclipse-workspace 3/RugbyKickSim/build/cmake.debug.linux.x86_64/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RugbyKickSim.dir/RugbyKickSim.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RugbyKickSim.dir/RugbyKickSim.cpp.o -c "/home/simon/eclipse-workspace 3/RugbyKickSim/RugbyKickSim.cpp"

CMakeFiles/RugbyKickSim.dir/RugbyKickSim.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RugbyKickSim.dir/RugbyKickSim.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/simon/eclipse-workspace 3/RugbyKickSim/RugbyKickSim.cpp" > CMakeFiles/RugbyKickSim.dir/RugbyKickSim.cpp.i

CMakeFiles/RugbyKickSim.dir/RugbyKickSim.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RugbyKickSim.dir/RugbyKickSim.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/simon/eclipse-workspace 3/RugbyKickSim/RugbyKickSim.cpp" -o CMakeFiles/RugbyKickSim.dir/RugbyKickSim.cpp.s

# Object files for target RugbyKickSim
RugbyKickSim_OBJECTS = \
"CMakeFiles/RugbyKickSim.dir/RugbyKickSim.cpp.o"

# External object files for target RugbyKickSim
RugbyKickSim_EXTERNAL_OBJECTS =

RugbyKickSim: CMakeFiles/RugbyKickSim.dir/RugbyKickSim.cpp.o
RugbyKickSim: CMakeFiles/RugbyKickSim.dir/build.make
RugbyKickSim: CMakeFiles/RugbyKickSim.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/simon/eclipse-workspace 3/RugbyKickSim/build/cmake.debug.linux.x86_64/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable RugbyKickSim"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RugbyKickSim.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RugbyKickSim.dir/build: RugbyKickSim

.PHONY : CMakeFiles/RugbyKickSim.dir/build

CMakeFiles/RugbyKickSim.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RugbyKickSim.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RugbyKickSim.dir/clean

CMakeFiles/RugbyKickSim.dir/depend:
	cd "/home/simon/eclipse-workspace 3/RugbyKickSim/build/cmake.debug.linux.x86_64" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/simon/eclipse-workspace 3/RugbyKickSim" "/home/simon/eclipse-workspace 3/RugbyKickSim" "/home/simon/eclipse-workspace 3/RugbyKickSim/build/cmake.debug.linux.x86_64" "/home/simon/eclipse-workspace 3/RugbyKickSim/build/cmake.debug.linux.x86_64" "/home/simon/eclipse-workspace 3/RugbyKickSim/build/cmake.debug.linux.x86_64/CMakeFiles/RugbyKickSim.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/RugbyKickSim.dir/depend

