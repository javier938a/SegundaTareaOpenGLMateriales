# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_SOURCE_DIR = "/home/javier/Documentos/Archivos/Algoritmos Graficos/SegundaTareaOpenGLMateriales"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/javier/Documentos/Archivos/Algoritmos Graficos/SegundaTareaOpenGLMateriales/build"

# Include any dependencies generated for this target.
include CMakeFiles/efera3D.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/efera3D.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/efera3D.dir/flags.make

CMakeFiles/efera3D.dir/efera3D.cpp.o: CMakeFiles/efera3D.dir/flags.make
CMakeFiles/efera3D.dir/efera3D.cpp.o: ../efera3D.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report "/home/javier/Documentos/Archivos/Algoritmos Graficos/SegundaTareaOpenGLMateriales/build/CMakeFiles" $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/efera3D.dir/efera3D.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/efera3D.dir/efera3D.cpp.o -c "/home/javier/Documentos/Archivos/Algoritmos Graficos/SegundaTareaOpenGLMateriales/efera3D.cpp"

CMakeFiles/efera3D.dir/efera3D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/efera3D.dir/efera3D.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E "/home/javier/Documentos/Archivos/Algoritmos Graficos/SegundaTareaOpenGLMateriales/efera3D.cpp" > CMakeFiles/efera3D.dir/efera3D.cpp.i

CMakeFiles/efera3D.dir/efera3D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/efera3D.dir/efera3D.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S "/home/javier/Documentos/Archivos/Algoritmos Graficos/SegundaTareaOpenGLMateriales/efera3D.cpp" -o CMakeFiles/efera3D.dir/efera3D.cpp.s

CMakeFiles/efera3D.dir/efera3D.cpp.o.requires:
.PHONY : CMakeFiles/efera3D.dir/efera3D.cpp.o.requires

CMakeFiles/efera3D.dir/efera3D.cpp.o.provides: CMakeFiles/efera3D.dir/efera3D.cpp.o.requires
	$(MAKE) -f CMakeFiles/efera3D.dir/build.make CMakeFiles/efera3D.dir/efera3D.cpp.o.provides.build
.PHONY : CMakeFiles/efera3D.dir/efera3D.cpp.o.provides

CMakeFiles/efera3D.dir/efera3D.cpp.o.provides.build: CMakeFiles/efera3D.dir/efera3D.cpp.o

# Object files for target efera3D
efera3D_OBJECTS = \
"CMakeFiles/efera3D.dir/efera3D.cpp.o"

# External object files for target efera3D
efera3D_EXTERNAL_OBJECTS =

efera3D: CMakeFiles/efera3D.dir/efera3D.cpp.o
efera3D: CMakeFiles/efera3D.dir/build.make
efera3D: /usr/lib/x86_64-linux-gnu/libGLU.so
efera3D: /usr/lib/x86_64-linux-gnu/libGL.so
efera3D: /usr/lib/x86_64-linux-gnu/libSM.so
efera3D: /usr/lib/x86_64-linux-gnu/libICE.so
efera3D: /usr/lib/x86_64-linux-gnu/libX11.so
efera3D: /usr/lib/x86_64-linux-gnu/libXext.so
efera3D: /usr/lib/x86_64-linux-gnu/libglut.so
efera3D: /usr/lib/x86_64-linux-gnu/libXmu.so
efera3D: /usr/lib/x86_64-linux-gnu/libXi.so
efera3D: CMakeFiles/efera3D.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable efera3D"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/efera3D.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/efera3D.dir/build: efera3D
.PHONY : CMakeFiles/efera3D.dir/build

CMakeFiles/efera3D.dir/requires: CMakeFiles/efera3D.dir/efera3D.cpp.o.requires
.PHONY : CMakeFiles/efera3D.dir/requires

CMakeFiles/efera3D.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/efera3D.dir/cmake_clean.cmake
.PHONY : CMakeFiles/efera3D.dir/clean

CMakeFiles/efera3D.dir/depend:
	cd "/home/javier/Documentos/Archivos/Algoritmos Graficos/SegundaTareaOpenGLMateriales/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/javier/Documentos/Archivos/Algoritmos Graficos/SegundaTareaOpenGLMateriales" "/home/javier/Documentos/Archivos/Algoritmos Graficos/SegundaTareaOpenGLMateriales" "/home/javier/Documentos/Archivos/Algoritmos Graficos/SegundaTareaOpenGLMateriales/build" "/home/javier/Documentos/Archivos/Algoritmos Graficos/SegundaTareaOpenGLMateriales/build" "/home/javier/Documentos/Archivos/Algoritmos Graficos/SegundaTareaOpenGLMateriales/build/CMakeFiles/efera3D.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/efera3D.dir/depend

