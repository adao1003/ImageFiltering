# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/adao1003/Downloads/clion-2018.3.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/adao1003/Downloads/clion-2018.3.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/adao1003/Documents/JA/Zrodla/SO_C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adao1003/Documents/JA/Zrodla/SO_C/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SO_C.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SO_C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SO_C.dir/flags.make

CMakeFiles/SO_C.dir/library.cpp.o: CMakeFiles/SO_C.dir/flags.make
CMakeFiles/SO_C.dir/library.cpp.o: ../library.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adao1003/Documents/JA/Zrodla/SO_C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SO_C.dir/library.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SO_C.dir/library.cpp.o -c /home/adao1003/Documents/JA/Zrodla/SO_C/library.cpp

CMakeFiles/SO_C.dir/library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SO_C.dir/library.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adao1003/Documents/JA/Zrodla/SO_C/library.cpp > CMakeFiles/SO_C.dir/library.cpp.i

CMakeFiles/SO_C.dir/library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SO_C.dir/library.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adao1003/Documents/JA/Zrodla/SO_C/library.cpp -o CMakeFiles/SO_C.dir/library.cpp.s

# Object files for target SO_C
SO_C_OBJECTS = \
"CMakeFiles/SO_C.dir/library.cpp.o"

# External object files for target SO_C
SO_C_EXTERNAL_OBJECTS =

libSO_C.so: CMakeFiles/SO_C.dir/library.cpp.o
libSO_C.so: CMakeFiles/SO_C.dir/build.make
libSO_C.so: CMakeFiles/SO_C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adao1003/Documents/JA/Zrodla/SO_C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libSO_C.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SO_C.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SO_C.dir/build: libSO_C.so

.PHONY : CMakeFiles/SO_C.dir/build

CMakeFiles/SO_C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SO_C.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SO_C.dir/clean

CMakeFiles/SO_C.dir/depend:
	cd /home/adao1003/Documents/JA/Zrodla/SO_C/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adao1003/Documents/JA/Zrodla/SO_C /home/adao1003/Documents/JA/Zrodla/SO_C /home/adao1003/Documents/JA/Zrodla/SO_C/cmake-build-debug /home/adao1003/Documents/JA/Zrodla/SO_C/cmake-build-debug /home/adao1003/Documents/JA/Zrodla/SO_C/cmake-build-debug/CMakeFiles/SO_C.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SO_C.dir/depend

