prefix=/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/./parsec/parsec-2.1/pkgs/apps/x264/inst/amd64-linux.gcc-sniper
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
libdir=${exec_prefix}/lib
includedir=${prefix}/include
ARCH=X86_64
SYS=LINUX
CC=gcc
CFLAGS=-O4 -ffast-math -O3 -funroll-loops -fprefetch-loop-arrays -static-libgcc -Wl,--hash-style=both,--as-needed -DPARSEC_VERSION=2.1 -DENABLE_PARSEC_HOOKS -I/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/./parsec/parsec-2.1/pkgs/libs/hooks/inst/amd64-linux.gcc-sniper/include -I/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/tools/hooks -I/home/pager/Documents/approx_computing/HotSniper-LoopPerf/include -DENABLE_PARMACS -Wall -I. -O3 -funroll-loops -fprefetch-loop-arrays -static-libgcc -Wl,--hash-style=both,--as-needed -DPARSEC_VERSION=2.1 -DENABLE_PARSEC_HOOKS -I/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/./parsec/parsec-2.1/pkgs/libs/hooks/inst/amd64-linux.gcc-sniper/include -I/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/tools/hooks -I/home/pager/Documents/approx_computing/HotSniper-LoopPerf/include -DENABLE_PARMACS -DHAVE_MALLOC_H -DHAVE_MMX -DARCH_X86_64 -DSYS_LINUX -DHAVE_PTHREAD -s -fomit-frame-pointer
ALTIVECFLAGS=
LDFLAGS=-L/usr/lib64 -L/usr/lib -L/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/./parsec/parsec-2.1/pkgs/libs/hooks/inst/amd64-linux.gcc-sniper/lib -uparmacs_roi_end -uparmacs_roi_start -L/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/tools/hooks -lhooks_base -lrt -pthread -L/usr/lib64 -L/usr/lib -L/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/./parsec/parsec-2.1/pkgs/libs/hooks/inst/amd64-linux.gcc-sniper/lib -uparmacs_roi_end -uparmacs_roi_start -L/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/tools/hooks -lhooks_base -lrt -pthread -lhooks -lhb-shared -lm -lpthread -s
AS=yasm
ASFLAGS=-f elf -m amd64
EXE=
VIS=no
HAVE_GETOPT_LONG=1
DEVNULL=/dev/null
ECHON=echo -n
CONFIGURE_ARGS= '--enable-pthread' '--extra-asflags=' '--extra-cflags=-O3 -funroll-loops -fprefetch-loop-arrays -static-libgcc -Wl,--hash-style=both,--as-needed -DPARSEC_VERSION=2.1 -DENABLE_PARSEC_HOOKS -I/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/./parsec/parsec-2.1/pkgs/libs/hooks/inst/amd64-linux.gcc-sniper/include -I/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/tools/hooks -I/home/pager/Documents/approx_computing/HotSniper-LoopPerf/include -DENABLE_PARMACS' '--extra-ldflags=-L/usr/lib64 -L/usr/lib -L/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/./parsec/parsec-2.1/pkgs/libs/hooks/inst/amd64-linux.gcc-sniper/lib -uparmacs_roi_end -uparmacs_roi_start -L/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/tools/hooks -lhooks_base -lrt -pthread -lhooks -lhb-shared' '--prefix=/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/./parsec/parsec-2.1/pkgs/apps/x264/inst/amd64-linux.gcc-sniper'
