#!/bin/sh
[ -z "${TBB21_INSTALL_DIR}" ] && export TBB21_INSTALL_DIR="/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/libs/tbblib/obj/amd64-linux.gcc-sniper" #
tbb_bin="${TBB21_INSTALL_DIR}/build/linux_em64t_gcc_cc5.4.0_libc2.23_kernel6.6.19_release" #
if [ -z "$CPATH" ]; then #
    export CPATH="${TBB21_INSTALL_DIR}/include" #
else #
    export CPATH="${TBB21_INSTALL_DIR}/include:$CPATH" #
fi #
if [ -z "$LIBRARY_PATH" ]; then #
    export LIBRARY_PATH="${tbb_bin}" #
else #
    export LIBRARY_PATH="${tbb_bin}:$LIBRARY_PATH" #
fi #
if [ -z "$LD_LIBRARY_PATH" ]; then #
    export LD_LIBRARY_PATH="${tbb_bin}" #
else #
    export LD_LIBRARY_PATH="${tbb_bin}:$LD_LIBRARY_PATH" #
fi #
 #
