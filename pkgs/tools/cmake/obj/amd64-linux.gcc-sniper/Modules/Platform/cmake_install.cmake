# Install script for directory: /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/./pkgs/tools/cmake/inst/amd64-linux.gcc-sniper")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules/Platform" TYPE FILE FILES
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/BlueGeneL.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/cl.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-wcl386.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Generic-ADSP-Common.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Generic-ADSP-CXX.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-VisualAge-Fortran.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/GNU.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/IRIX64.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-Intel-CXX.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-Intel-C.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Generic.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/IRIX.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/eCos.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-SunPro-C.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/SunOS.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Darwin.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-g77.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/BSDOS.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Xenix.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-gcc.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-SunPro-CXX.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-icl.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-PGI-Fortran.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Generic-SDCC-C.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/UnixPaths.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-PGI-CXX.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/g77.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/NetBSD.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/AIX.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-g++.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-ifort.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/SunOS-SunPro-Fortran.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/CYGWIN-g77.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/SCO_SV.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/QNX.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/SINIX.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/RISCos.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-como.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/OSF1.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/BeOS.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/gas.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/OpenBSD.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-df.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-ifort.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/ULTRIX.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-Intel-Fortran.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/gcc.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-SunPro-Fortran.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Generic-ADSP-C.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-VisualAge-C.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/AIX-VisualAge-Fortran.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-cl.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-bcc32.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Catamount.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/UnixWare.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/kFreeBSD.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/WindowsPaths.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Darwin-icpc.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/HP-UX.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/DragonFly.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/syllable.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/CYGWIN.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-icpc.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/FreeBSD.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/xlf.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-PGI-C.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Linux-GNU-Fortran.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Tru64.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/MP-RAS.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Darwin-icc.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Generic-ADSP-ASM.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Darwin-xlc.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/UNIX_SV.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules/Platform" TYPE FILE FILES "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Platform/Windows-cl.cmake.in")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

