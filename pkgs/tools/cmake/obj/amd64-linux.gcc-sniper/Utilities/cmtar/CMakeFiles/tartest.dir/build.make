# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.6

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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
CMAKE_COMMAND = /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/obj/amd64-linux.gcc-sniper/Bootstrap.cmk/cmake

# The command to remove a file.
RM = /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/obj/amd64-linux.gcc-sniper/Bootstrap.cmk/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/obj/amd64-linux.gcc-sniper

# Include any dependencies generated for this target.
include Utilities/cmtar/CMakeFiles/tartest.dir/depend.make

# Include the progress variables for this target.
include Utilities/cmtar/CMakeFiles/tartest.dir/progress.make

# Include the compile flags for this target's objects.
include Utilities/cmtar/CMakeFiles/tartest.dir/flags.make

Utilities/cmtar/CMakeFiles/tartest.dir/libtar.o: Utilities/cmtar/CMakeFiles/tartest.dir/flags.make
Utilities/cmtar/CMakeFiles/tartest.dir/libtar.o: /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Utilities/cmtar/libtar.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/obj/amd64-linux.gcc-sniper/CMakeFiles $(CMAKE_PROGRESS_1)
	@echo "Building C object Utilities/cmtar/CMakeFiles/tartest.dir/libtar.o"
	cd /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/obj/amd64-linux.gcc-sniper/Utilities/cmtar && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/tartest.dir/libtar.o   -c /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Utilities/cmtar/libtar.c

Utilities/cmtar/CMakeFiles/tartest.dir/libtar.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/tartest.dir/libtar.i"
	cd /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/obj/amd64-linux.gcc-sniper/Utilities/cmtar && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Utilities/cmtar/libtar.c > CMakeFiles/tartest.dir/libtar.i

Utilities/cmtar/CMakeFiles/tartest.dir/libtar.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/tartest.dir/libtar.s"
	cd /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/obj/amd64-linux.gcc-sniper/Utilities/cmtar && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Utilities/cmtar/libtar.c -o CMakeFiles/tartest.dir/libtar.s

Utilities/cmtar/CMakeFiles/tartest.dir/libtar.o.requires:
.PHONY : Utilities/cmtar/CMakeFiles/tartest.dir/libtar.o.requires

Utilities/cmtar/CMakeFiles/tartest.dir/libtar.o.provides: Utilities/cmtar/CMakeFiles/tartest.dir/libtar.o.requires
	$(MAKE) -f Utilities/cmtar/CMakeFiles/tartest.dir/build.make Utilities/cmtar/CMakeFiles/tartest.dir/libtar.o.provides.build
.PHONY : Utilities/cmtar/CMakeFiles/tartest.dir/libtar.o.provides

Utilities/cmtar/CMakeFiles/tartest.dir/libtar.o.provides.build: Utilities/cmtar/CMakeFiles/tartest.dir/libtar.o
.PHONY : Utilities/cmtar/CMakeFiles/tartest.dir/libtar.o.provides.build

# Object files for target tartest
tartest_OBJECTS = \
"CMakeFiles/tartest.dir/libtar.o"

# External object files for target tartest
tartest_EXTERNAL_OBJECTS =

bin/tartest: Utilities/cmtar/CMakeFiles/tartest.dir/libtar.o
bin/tartest: Utilities/cmtar/libcmtar.a
bin/tartest: Utilities/cmzlib/libcmzlib.a
bin/tartest: Utilities/cmtar/CMakeFiles/tartest.dir/build.make
bin/tartest: Utilities/cmtar/CMakeFiles/tartest.dir/link.txt
	@echo "Linking C executable ../../bin/tartest"
	cd /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/obj/amd64-linux.gcc-sniper/Utilities/cmtar && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tartest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Utilities/cmtar/CMakeFiles/tartest.dir/build: bin/tartest
.PHONY : Utilities/cmtar/CMakeFiles/tartest.dir/build

Utilities/cmtar/CMakeFiles/tartest.dir/requires: Utilities/cmtar/CMakeFiles/tartest.dir/libtar.o.requires
.PHONY : Utilities/cmtar/CMakeFiles/tartest.dir/requires

Utilities/cmtar/CMakeFiles/tartest.dir/clean:
	cd /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/obj/amd64-linux.gcc-sniper/Utilities/cmtar && $(CMAKE_COMMAND) -P CMakeFiles/tartest.dir/cmake_clean.cmake
.PHONY : Utilities/cmtar/CMakeFiles/tartest.dir/clean

Utilities/cmtar/CMakeFiles/tartest.dir/depend:
	cd /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/obj/amd64-linux.gcc-sniper && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Utilities/cmtar /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/obj/amd64-linux.gcc-sniper /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/obj/amd64-linux.gcc-sniper/Utilities/cmtar /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/obj/amd64-linux.gcc-sniper/Utilities/cmtar/CMakeFiles/tartest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Utilities/cmtar/CMakeFiles/tartest.dir/depend

