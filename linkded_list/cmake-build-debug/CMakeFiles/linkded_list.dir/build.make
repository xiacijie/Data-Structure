# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /home/jack/下载/clion-2017.1.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/jack/下载/clion-2017.1.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/jack/桌面/C programming/linkded_list"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/jack/桌面/C programming/linkded_list/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/linkded_list.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/linkded_list.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/linkded_list.dir/flags.make

CMakeFiles/linkded_list.dir/main.c.o: CMakeFiles/linkded_list.dir/flags.make
CMakeFiles/linkded_list.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/jack/桌面/C programming/linkded_list/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/linkded_list.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/linkded_list.dir/main.c.o   -c "/home/jack/桌面/C programming/linkded_list/main.c"

CMakeFiles/linkded_list.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/linkded_list.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/jack/桌面/C programming/linkded_list/main.c" > CMakeFiles/linkded_list.dir/main.c.i

CMakeFiles/linkded_list.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/linkded_list.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/jack/桌面/C programming/linkded_list/main.c" -o CMakeFiles/linkded_list.dir/main.c.s

CMakeFiles/linkded_list.dir/main.c.o.requires:

.PHONY : CMakeFiles/linkded_list.dir/main.c.o.requires

CMakeFiles/linkded_list.dir/main.c.o.provides: CMakeFiles/linkded_list.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/linkded_list.dir/build.make CMakeFiles/linkded_list.dir/main.c.o.provides.build
.PHONY : CMakeFiles/linkded_list.dir/main.c.o.provides

CMakeFiles/linkded_list.dir/main.c.o.provides.build: CMakeFiles/linkded_list.dir/main.c.o


CMakeFiles/linkded_list.dir/linked_list.c.o: CMakeFiles/linkded_list.dir/flags.make
CMakeFiles/linkded_list.dir/linked_list.c.o: ../linked_list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/jack/桌面/C programming/linkded_list/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/linkded_list.dir/linked_list.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/linkded_list.dir/linked_list.c.o   -c "/home/jack/桌面/C programming/linkded_list/linked_list.c"

CMakeFiles/linkded_list.dir/linked_list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/linkded_list.dir/linked_list.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/jack/桌面/C programming/linkded_list/linked_list.c" > CMakeFiles/linkded_list.dir/linked_list.c.i

CMakeFiles/linkded_list.dir/linked_list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/linkded_list.dir/linked_list.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/jack/桌面/C programming/linkded_list/linked_list.c" -o CMakeFiles/linkded_list.dir/linked_list.c.s

CMakeFiles/linkded_list.dir/linked_list.c.o.requires:

.PHONY : CMakeFiles/linkded_list.dir/linked_list.c.o.requires

CMakeFiles/linkded_list.dir/linked_list.c.o.provides: CMakeFiles/linkded_list.dir/linked_list.c.o.requires
	$(MAKE) -f CMakeFiles/linkded_list.dir/build.make CMakeFiles/linkded_list.dir/linked_list.c.o.provides.build
.PHONY : CMakeFiles/linkded_list.dir/linked_list.c.o.provides

CMakeFiles/linkded_list.dir/linked_list.c.o.provides.build: CMakeFiles/linkded_list.dir/linked_list.c.o


# Object files for target linkded_list
linkded_list_OBJECTS = \
"CMakeFiles/linkded_list.dir/main.c.o" \
"CMakeFiles/linkded_list.dir/linked_list.c.o"

# External object files for target linkded_list
linkded_list_EXTERNAL_OBJECTS =

linkded_list: CMakeFiles/linkded_list.dir/main.c.o
linkded_list: CMakeFiles/linkded_list.dir/linked_list.c.o
linkded_list: CMakeFiles/linkded_list.dir/build.make
linkded_list: CMakeFiles/linkded_list.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/jack/桌面/C programming/linkded_list/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable linkded_list"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/linkded_list.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/linkded_list.dir/build: linkded_list

.PHONY : CMakeFiles/linkded_list.dir/build

CMakeFiles/linkded_list.dir/requires: CMakeFiles/linkded_list.dir/main.c.o.requires
CMakeFiles/linkded_list.dir/requires: CMakeFiles/linkded_list.dir/linked_list.c.o.requires

.PHONY : CMakeFiles/linkded_list.dir/requires

CMakeFiles/linkded_list.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/linkded_list.dir/cmake_clean.cmake
.PHONY : CMakeFiles/linkded_list.dir/clean

CMakeFiles/linkded_list.dir/depend:
	cd "/home/jack/桌面/C programming/linkded_list/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/jack/桌面/C programming/linkded_list" "/home/jack/桌面/C programming/linkded_list" "/home/jack/桌面/C programming/linkded_list/cmake-build-debug" "/home/jack/桌面/C programming/linkded_list/cmake-build-debug" "/home/jack/桌面/C programming/linkded_list/cmake-build-debug/CMakeFiles/linkded_list.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/linkded_list.dir/depend
