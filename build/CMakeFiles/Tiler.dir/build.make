# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/paul/Repositories/Tiler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/paul/Repositories/Tiler/build

# Include any dependencies generated for this target.
include CMakeFiles/Tiler.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Tiler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Tiler.dir/flags.make

CMakeFiles/Tiler.dir/src/main.cpp.o: CMakeFiles/Tiler.dir/flags.make
CMakeFiles/Tiler.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/paul/Repositories/Tiler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Tiler.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tiler.dir/src/main.cpp.o -c /home/paul/Repositories/Tiler/src/main.cpp

CMakeFiles/Tiler.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tiler.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/paul/Repositories/Tiler/src/main.cpp > CMakeFiles/Tiler.dir/src/main.cpp.i

CMakeFiles/Tiler.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tiler.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/paul/Repositories/Tiler/src/main.cpp -o CMakeFiles/Tiler.dir/src/main.cpp.s

CMakeFiles/Tiler.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/Tiler.dir/src/main.cpp.o.requires

CMakeFiles/Tiler.dir/src/main.cpp.o.provides: CMakeFiles/Tiler.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tiler.dir/build.make CMakeFiles/Tiler.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/Tiler.dir/src/main.cpp.o.provides

CMakeFiles/Tiler.dir/src/main.cpp.o.provides.build: CMakeFiles/Tiler.dir/src/main.cpp.o


CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.o: CMakeFiles/Tiler.dir/flags.make
CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.o: ../src/sdlgraphics.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/paul/Repositories/Tiler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.o -c /home/paul/Repositories/Tiler/src/sdlgraphics.cpp

CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/paul/Repositories/Tiler/src/sdlgraphics.cpp > CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.i

CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/paul/Repositories/Tiler/src/sdlgraphics.cpp -o CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.s

CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.o.requires:

.PHONY : CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.o.requires

CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.o.provides: CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tiler.dir/build.make CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.o.provides.build
.PHONY : CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.o.provides

CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.o.provides.build: CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.o


CMakeFiles/Tiler.dir/src/sprite.cpp.o: CMakeFiles/Tiler.dir/flags.make
CMakeFiles/Tiler.dir/src/sprite.cpp.o: ../src/sprite.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/paul/Repositories/Tiler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Tiler.dir/src/sprite.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tiler.dir/src/sprite.cpp.o -c /home/paul/Repositories/Tiler/src/sprite.cpp

CMakeFiles/Tiler.dir/src/sprite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tiler.dir/src/sprite.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/paul/Repositories/Tiler/src/sprite.cpp > CMakeFiles/Tiler.dir/src/sprite.cpp.i

CMakeFiles/Tiler.dir/src/sprite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tiler.dir/src/sprite.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/paul/Repositories/Tiler/src/sprite.cpp -o CMakeFiles/Tiler.dir/src/sprite.cpp.s

CMakeFiles/Tiler.dir/src/sprite.cpp.o.requires:

.PHONY : CMakeFiles/Tiler.dir/src/sprite.cpp.o.requires

CMakeFiles/Tiler.dir/src/sprite.cpp.o.provides: CMakeFiles/Tiler.dir/src/sprite.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tiler.dir/build.make CMakeFiles/Tiler.dir/src/sprite.cpp.o.provides.build
.PHONY : CMakeFiles/Tiler.dir/src/sprite.cpp.o.provides

CMakeFiles/Tiler.dir/src/sprite.cpp.o.provides.build: CMakeFiles/Tiler.dir/src/sprite.cpp.o


# Object files for target Tiler
Tiler_OBJECTS = \
"CMakeFiles/Tiler.dir/src/main.cpp.o" \
"CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.o" \
"CMakeFiles/Tiler.dir/src/sprite.cpp.o"

# External object files for target Tiler
Tiler_EXTERNAL_OBJECTS =

Tiler: CMakeFiles/Tiler.dir/src/main.cpp.o
Tiler: CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.o
Tiler: CMakeFiles/Tiler.dir/src/sprite.cpp.o
Tiler: CMakeFiles/Tiler.dir/build.make
Tiler: CMakeFiles/Tiler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/paul/Repositories/Tiler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Tiler"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Tiler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Tiler.dir/build: Tiler

.PHONY : CMakeFiles/Tiler.dir/build

CMakeFiles/Tiler.dir/requires: CMakeFiles/Tiler.dir/src/main.cpp.o.requires
CMakeFiles/Tiler.dir/requires: CMakeFiles/Tiler.dir/src/sdlgraphics.cpp.o.requires
CMakeFiles/Tiler.dir/requires: CMakeFiles/Tiler.dir/src/sprite.cpp.o.requires

.PHONY : CMakeFiles/Tiler.dir/requires

CMakeFiles/Tiler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Tiler.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Tiler.dir/clean

CMakeFiles/Tiler.dir/depend:
	cd /home/paul/Repositories/Tiler/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/paul/Repositories/Tiler /home/paul/Repositories/Tiler /home/paul/Repositories/Tiler/build /home/paul/Repositories/Tiler/build /home/paul/Repositories/Tiler/build/CMakeFiles/Tiler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Tiler.dir/depend
