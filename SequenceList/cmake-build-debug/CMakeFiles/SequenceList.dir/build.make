# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.1.4\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.1.4\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\NMSL\Desktop\DSA_in_C\SequenceList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\NMSL\Desktop\DSA_in_C\SequenceList\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SequenceList.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SequenceList.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SequenceList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SequenceList.dir/flags.make

CMakeFiles/SequenceList.dir/main.cpp.obj: CMakeFiles/SequenceList.dir/flags.make
CMakeFiles/SequenceList.dir/main.cpp.obj: C:/Users/NMSL/Desktop/DSA_in_C/SequenceList/main.cpp
CMakeFiles/SequenceList.dir/main.cpp.obj: CMakeFiles/SequenceList.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\NMSL\Desktop\DSA_in_C\SequenceList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SequenceList.dir/main.cpp.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SequenceList.dir/main.cpp.obj -MF CMakeFiles\SequenceList.dir\main.cpp.obj.d -o CMakeFiles\SequenceList.dir\main.cpp.obj -c C:\Users\NMSL\Desktop\DSA_in_C\SequenceList\main.cpp

CMakeFiles/SequenceList.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SequenceList.dir/main.cpp.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\NMSL\Desktop\DSA_in_C\SequenceList\main.cpp > CMakeFiles\SequenceList.dir\main.cpp.i

CMakeFiles/SequenceList.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SequenceList.dir/main.cpp.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\NMSL\Desktop\DSA_in_C\SequenceList\main.cpp -o CMakeFiles\SequenceList.dir\main.cpp.s

CMakeFiles/SequenceList.dir/SqList.cpp.obj: CMakeFiles/SequenceList.dir/flags.make
CMakeFiles/SequenceList.dir/SqList.cpp.obj: C:/Users/NMSL/Desktop/DSA_in_C/SequenceList/SqList.cpp
CMakeFiles/SequenceList.dir/SqList.cpp.obj: CMakeFiles/SequenceList.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\NMSL\Desktop\DSA_in_C\SequenceList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SequenceList.dir/SqList.cpp.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SequenceList.dir/SqList.cpp.obj -MF CMakeFiles\SequenceList.dir\SqList.cpp.obj.d -o CMakeFiles\SequenceList.dir\SqList.cpp.obj -c C:\Users\NMSL\Desktop\DSA_in_C\SequenceList\SqList.cpp

CMakeFiles/SequenceList.dir/SqList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SequenceList.dir/SqList.cpp.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\NMSL\Desktop\DSA_in_C\SequenceList\SqList.cpp > CMakeFiles\SequenceList.dir\SqList.cpp.i

CMakeFiles/SequenceList.dir/SqList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SequenceList.dir/SqList.cpp.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\NMSL\Desktop\DSA_in_C\SequenceList\SqList.cpp -o CMakeFiles\SequenceList.dir\SqList.cpp.s

# Object files for target SequenceList
SequenceList_OBJECTS = \
"CMakeFiles/SequenceList.dir/main.cpp.obj" \
"CMakeFiles/SequenceList.dir/SqList.cpp.obj"

# External object files for target SequenceList
SequenceList_EXTERNAL_OBJECTS =

SequenceList.exe: CMakeFiles/SequenceList.dir/main.cpp.obj
SequenceList.exe: CMakeFiles/SequenceList.dir/SqList.cpp.obj
SequenceList.exe: CMakeFiles/SequenceList.dir/build.make
SequenceList.exe: CMakeFiles/SequenceList.dir/linkLibs.rsp
SequenceList.exe: CMakeFiles/SequenceList.dir/objects1.rsp
SequenceList.exe: CMakeFiles/SequenceList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\NMSL\Desktop\DSA_in_C\SequenceList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable SequenceList.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SequenceList.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SequenceList.dir/build: SequenceList.exe
.PHONY : CMakeFiles/SequenceList.dir/build

CMakeFiles/SequenceList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SequenceList.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SequenceList.dir/clean

CMakeFiles/SequenceList.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\NMSL\Desktop\DSA_in_C\SequenceList C:\Users\NMSL\Desktop\DSA_in_C\SequenceList C:\Users\NMSL\Desktop\DSA_in_C\SequenceList\cmake-build-debug C:\Users\NMSL\Desktop\DSA_in_C\SequenceList\cmake-build-debug C:\Users\NMSL\Desktop\DSA_in_C\SequenceList\cmake-build-debug\CMakeFiles\SequenceList.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/SequenceList.dir/depend

