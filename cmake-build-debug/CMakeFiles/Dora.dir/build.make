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
CMAKE_COMMAND = /home/frank_lu/DevelopTools/clion-2019.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/frank_lu/DevelopTools/clion-2019.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/frank_lu/SourceCode/C/Dora

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/frank_lu/SourceCode/C/Dora/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Dora.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Dora.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Dora.dir/flags.make

CMakeFiles/Dora.dir/main.cpp.o: CMakeFiles/Dora.dir/flags.make
CMakeFiles/Dora.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank_lu/SourceCode/C/Dora/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Dora.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dora.dir/main.cpp.o -c /home/frank_lu/SourceCode/C/Dora/main.cpp

CMakeFiles/Dora.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dora.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank_lu/SourceCode/C/Dora/main.cpp > CMakeFiles/Dora.dir/main.cpp.i

CMakeFiles/Dora.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dora.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank_lu/SourceCode/C/Dora/main.cpp -o CMakeFiles/Dora.dir/main.cpp.s

CMakeFiles/Dora.dir/Test/TestMessage/TestMessageListener.cpp.o: CMakeFiles/Dora.dir/flags.make
CMakeFiles/Dora.dir/Test/TestMessage/TestMessageListener.cpp.o: ../Test/TestMessage/TestMessageListener.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank_lu/SourceCode/C/Dora/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Dora.dir/Test/TestMessage/TestMessageListener.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dora.dir/Test/TestMessage/TestMessageListener.cpp.o -c /home/frank_lu/SourceCode/C/Dora/Test/TestMessage/TestMessageListener.cpp

CMakeFiles/Dora.dir/Test/TestMessage/TestMessageListener.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dora.dir/Test/TestMessage/TestMessageListener.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank_lu/SourceCode/C/Dora/Test/TestMessage/TestMessageListener.cpp > CMakeFiles/Dora.dir/Test/TestMessage/TestMessageListener.cpp.i

CMakeFiles/Dora.dir/Test/TestMessage/TestMessageListener.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dora.dir/Test/TestMessage/TestMessageListener.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank_lu/SourceCode/C/Dora/Test/TestMessage/TestMessageListener.cpp -o CMakeFiles/Dora.dir/Test/TestMessage/TestMessageListener.cpp.s

CMakeFiles/Dora.dir/Test/TestMessage/CompilerTester.cpp.o: CMakeFiles/Dora.dir/flags.make
CMakeFiles/Dora.dir/Test/TestMessage/CompilerTester.cpp.o: ../Test/TestMessage/CompilerTester.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank_lu/SourceCode/C/Dora/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Dora.dir/Test/TestMessage/CompilerTester.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dora.dir/Test/TestMessage/CompilerTester.cpp.o -c /home/frank_lu/SourceCode/C/Dora/Test/TestMessage/CompilerTester.cpp

CMakeFiles/Dora.dir/Test/TestMessage/CompilerTester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dora.dir/Test/TestMessage/CompilerTester.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank_lu/SourceCode/C/Dora/Test/TestMessage/CompilerTester.cpp > CMakeFiles/Dora.dir/Test/TestMessage/CompilerTester.cpp.i

CMakeFiles/Dora.dir/Test/TestMessage/CompilerTester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dora.dir/Test/TestMessage/CompilerTester.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank_lu/SourceCode/C/Dora/Test/TestMessage/CompilerTester.cpp -o CMakeFiles/Dora.dir/Test/TestMessage/CompilerTester.cpp.s

CMakeFiles/Dora.dir/Frontend/Token.cpp.o: CMakeFiles/Dora.dir/flags.make
CMakeFiles/Dora.dir/Frontend/Token.cpp.o: ../Frontend/Token.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank_lu/SourceCode/C/Dora/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Dora.dir/Frontend/Token.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dora.dir/Frontend/Token.cpp.o -c /home/frank_lu/SourceCode/C/Dora/Frontend/Token.cpp

CMakeFiles/Dora.dir/Frontend/Token.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dora.dir/Frontend/Token.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank_lu/SourceCode/C/Dora/Frontend/Token.cpp > CMakeFiles/Dora.dir/Frontend/Token.cpp.i

CMakeFiles/Dora.dir/Frontend/Token.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dora.dir/Frontend/Token.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank_lu/SourceCode/C/Dora/Frontend/Token.cpp -o CMakeFiles/Dora.dir/Frontend/Token.cpp.s

CMakeFiles/Dora.dir/Frontend/TokenType.cpp.o: CMakeFiles/Dora.dir/flags.make
CMakeFiles/Dora.dir/Frontend/TokenType.cpp.o: ../Frontend/TokenType.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank_lu/SourceCode/C/Dora/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Dora.dir/Frontend/TokenType.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dora.dir/Frontend/TokenType.cpp.o -c /home/frank_lu/SourceCode/C/Dora/Frontend/TokenType.cpp

CMakeFiles/Dora.dir/Frontend/TokenType.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dora.dir/Frontend/TokenType.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank_lu/SourceCode/C/Dora/Frontend/TokenType.cpp > CMakeFiles/Dora.dir/Frontend/TokenType.cpp.i

CMakeFiles/Dora.dir/Frontend/TokenType.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dora.dir/Frontend/TokenType.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank_lu/SourceCode/C/Dora/Frontend/TokenType.cpp -o CMakeFiles/Dora.dir/Frontend/TokenType.cpp.s

CMakeFiles/Dora.dir/Frontend/Source.cpp.o: CMakeFiles/Dora.dir/flags.make
CMakeFiles/Dora.dir/Frontend/Source.cpp.o: ../Frontend/Source.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank_lu/SourceCode/C/Dora/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Dora.dir/Frontend/Source.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dora.dir/Frontend/Source.cpp.o -c /home/frank_lu/SourceCode/C/Dora/Frontend/Source.cpp

CMakeFiles/Dora.dir/Frontend/Source.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dora.dir/Frontend/Source.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank_lu/SourceCode/C/Dora/Frontend/Source.cpp > CMakeFiles/Dora.dir/Frontend/Source.cpp.i

CMakeFiles/Dora.dir/Frontend/Source.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dora.dir/Frontend/Source.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank_lu/SourceCode/C/Dora/Frontend/Source.cpp -o CMakeFiles/Dora.dir/Frontend/Source.cpp.s

CMakeFiles/Dora.dir/Frontend/Scaner.cpp.o: CMakeFiles/Dora.dir/flags.make
CMakeFiles/Dora.dir/Frontend/Scaner.cpp.o: ../Frontend/Scaner.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank_lu/SourceCode/C/Dora/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Dora.dir/Frontend/Scaner.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dora.dir/Frontend/Scaner.cpp.o -c /home/frank_lu/SourceCode/C/Dora/Frontend/Scaner.cpp

CMakeFiles/Dora.dir/Frontend/Scaner.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dora.dir/Frontend/Scaner.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank_lu/SourceCode/C/Dora/Frontend/Scaner.cpp > CMakeFiles/Dora.dir/Frontend/Scaner.cpp.i

CMakeFiles/Dora.dir/Frontend/Scaner.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dora.dir/Frontend/Scaner.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank_lu/SourceCode/C/Dora/Frontend/Scaner.cpp -o CMakeFiles/Dora.dir/Frontend/Scaner.cpp.s

CMakeFiles/Dora.dir/Frontend/Parser.cpp.o: CMakeFiles/Dora.dir/flags.make
CMakeFiles/Dora.dir/Frontend/Parser.cpp.o: ../Frontend/Parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank_lu/SourceCode/C/Dora/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Dora.dir/Frontend/Parser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dora.dir/Frontend/Parser.cpp.o -c /home/frank_lu/SourceCode/C/Dora/Frontend/Parser.cpp

CMakeFiles/Dora.dir/Frontend/Parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dora.dir/Frontend/Parser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank_lu/SourceCode/C/Dora/Frontend/Parser.cpp > CMakeFiles/Dora.dir/Frontend/Parser.cpp.i

CMakeFiles/Dora.dir/Frontend/Parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dora.dir/Frontend/Parser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank_lu/SourceCode/C/Dora/Frontend/Parser.cpp -o CMakeFiles/Dora.dir/Frontend/Parser.cpp.s

CMakeFiles/Dora.dir/Test/TestIO.cpp.o: CMakeFiles/Dora.dir/flags.make
CMakeFiles/Dora.dir/Test/TestIO.cpp.o: ../Test/TestIO.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank_lu/SourceCode/C/Dora/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Dora.dir/Test/TestIO.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dora.dir/Test/TestIO.cpp.o -c /home/frank_lu/SourceCode/C/Dora/Test/TestIO.cpp

CMakeFiles/Dora.dir/Test/TestIO.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dora.dir/Test/TestIO.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank_lu/SourceCode/C/Dora/Test/TestIO.cpp > CMakeFiles/Dora.dir/Test/TestIO.cpp.i

CMakeFiles/Dora.dir/Test/TestIO.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dora.dir/Test/TestIO.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank_lu/SourceCode/C/Dora/Test/TestIO.cpp -o CMakeFiles/Dora.dir/Test/TestIO.cpp.s

CMakeFiles/Dora.dir/Frontend/FileSource.cpp.o: CMakeFiles/Dora.dir/flags.make
CMakeFiles/Dora.dir/Frontend/FileSource.cpp.o: ../Frontend/FileSource.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frank_lu/SourceCode/C/Dora/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Dora.dir/Frontend/FileSource.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dora.dir/Frontend/FileSource.cpp.o -c /home/frank_lu/SourceCode/C/Dora/Frontend/FileSource.cpp

CMakeFiles/Dora.dir/Frontend/FileSource.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dora.dir/Frontend/FileSource.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frank_lu/SourceCode/C/Dora/Frontend/FileSource.cpp > CMakeFiles/Dora.dir/Frontend/FileSource.cpp.i

CMakeFiles/Dora.dir/Frontend/FileSource.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dora.dir/Frontend/FileSource.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frank_lu/SourceCode/C/Dora/Frontend/FileSource.cpp -o CMakeFiles/Dora.dir/Frontend/FileSource.cpp.s

# Object files for target Dora
Dora_OBJECTS = \
"CMakeFiles/Dora.dir/main.cpp.o" \
"CMakeFiles/Dora.dir/Test/TestMessage/TestMessageListener.cpp.o" \
"CMakeFiles/Dora.dir/Test/TestMessage/CompilerTester.cpp.o" \
"CMakeFiles/Dora.dir/Frontend/Token.cpp.o" \
"CMakeFiles/Dora.dir/Frontend/TokenType.cpp.o" \
"CMakeFiles/Dora.dir/Frontend/Source.cpp.o" \
"CMakeFiles/Dora.dir/Frontend/Scaner.cpp.o" \
"CMakeFiles/Dora.dir/Frontend/Parser.cpp.o" \
"CMakeFiles/Dora.dir/Test/TestIO.cpp.o" \
"CMakeFiles/Dora.dir/Frontend/FileSource.cpp.o"

# External object files for target Dora
Dora_EXTERNAL_OBJECTS =

Dora: CMakeFiles/Dora.dir/main.cpp.o
Dora: CMakeFiles/Dora.dir/Test/TestMessage/TestMessageListener.cpp.o
Dora: CMakeFiles/Dora.dir/Test/TestMessage/CompilerTester.cpp.o
Dora: CMakeFiles/Dora.dir/Frontend/Token.cpp.o
Dora: CMakeFiles/Dora.dir/Frontend/TokenType.cpp.o
Dora: CMakeFiles/Dora.dir/Frontend/Source.cpp.o
Dora: CMakeFiles/Dora.dir/Frontend/Scaner.cpp.o
Dora: CMakeFiles/Dora.dir/Frontend/Parser.cpp.o
Dora: CMakeFiles/Dora.dir/Test/TestIO.cpp.o
Dora: CMakeFiles/Dora.dir/Frontend/FileSource.cpp.o
Dora: CMakeFiles/Dora.dir/build.make
Dora: CMakeFiles/Dora.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/frank_lu/SourceCode/C/Dora/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable Dora"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Dora.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Dora.dir/build: Dora

.PHONY : CMakeFiles/Dora.dir/build

CMakeFiles/Dora.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Dora.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Dora.dir/clean

CMakeFiles/Dora.dir/depend:
	cd /home/frank_lu/SourceCode/C/Dora/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frank_lu/SourceCode/C/Dora /home/frank_lu/SourceCode/C/Dora /home/frank_lu/SourceCode/C/Dora/cmake-build-debug /home/frank_lu/SourceCode/C/Dora/cmake-build-debug /home/frank_lu/SourceCode/C/Dora/cmake-build-debug/CMakeFiles/Dora.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Dora.dir/depend

