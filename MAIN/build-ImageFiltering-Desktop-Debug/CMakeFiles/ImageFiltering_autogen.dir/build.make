# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /home/adao1003/JA/ImageFiltering

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adao1003/JA/build-ImageFiltering-Desktop-Debug

# Utility rule file for ImageFiltering_autogen.

# Include the progress variables for this target.
include CMakeFiles/ImageFiltering_autogen.dir/progress.make

CMakeFiles/ImageFiltering_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/adao1003/JA/build-ImageFiltering-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target ImageFiltering"
	/usr/bin/cmake -E cmake_autogen /home/adao1003/JA/build-ImageFiltering-Desktop-Debug/CMakeFiles/ImageFiltering_autogen.dir/AutogenInfo.cmake Debug

ImageFiltering_autogen: CMakeFiles/ImageFiltering_autogen
ImageFiltering_autogen: CMakeFiles/ImageFiltering_autogen.dir/build.make

.PHONY : ImageFiltering_autogen

# Rule to build all files generated by this target.
CMakeFiles/ImageFiltering_autogen.dir/build: ImageFiltering_autogen

.PHONY : CMakeFiles/ImageFiltering_autogen.dir/build

CMakeFiles/ImageFiltering_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ImageFiltering_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ImageFiltering_autogen.dir/clean

CMakeFiles/ImageFiltering_autogen.dir/depend:
	cd /home/adao1003/JA/build-ImageFiltering-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adao1003/JA/ImageFiltering /home/adao1003/JA/ImageFiltering /home/adao1003/JA/build-ImageFiltering-Desktop-Debug /home/adao1003/JA/build-ImageFiltering-Desktop-Debug /home/adao1003/JA/build-ImageFiltering-Desktop-Debug/CMakeFiles/ImageFiltering_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ImageFiltering_autogen.dir/depend

