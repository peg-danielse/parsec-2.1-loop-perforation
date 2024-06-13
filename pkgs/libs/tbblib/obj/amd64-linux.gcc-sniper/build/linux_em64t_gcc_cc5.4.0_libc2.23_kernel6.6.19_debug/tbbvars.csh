#!/bin/csh
if (! $?TBB21_INSTALL_DIR) then #
    setenv TBB21_INSTALL_DIR "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/libs/tbblib/obj/amd64-linux.gcc-sniper" #
endif #
setenv tbb_bin "${TBB21_INSTALL_DIR}/build/linux_em64t_gcc_cc5.4.0_libc2.23_kernel6.6.19_debug" #
if (! $?CPATH) then #
    setenv CPATH "${TBB21_INSTALL_DIR}/include" #
else #
    setenv CPATH "${TBB21_INSTALL_DIR}/include:$CPATH" #
endif #
if (! $?LIBRARY_PATH) then #
    setenv LIBRARY_PATH "${tbb_bin}" #
else #
    setenv LIBRARY_PATH "${tbb_bin}:$LIBRARY_PATH" #
endif #
if (! $?LD_LIBRARY_PATH) then #
    setenv LD_LIBRARY_PATH "${tbb_bin}" #
else #
    setenv LD_LIBRARY_PATH "${tbb_bin}:$LD_LIBRARY_PATH" #
endif #
 #
