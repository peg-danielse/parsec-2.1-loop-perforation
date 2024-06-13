# Install script for directory: /home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules" TYPE FILE FILES
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindASPELL.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/UsePkgConfig.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakePrintSystemInformation.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CTest.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeFindFrameworks.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindTclsh.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPkgConfig.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckSizeOf.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindOpenAL.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindGLUT.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindQt3.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeImportBuildSettings.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindSDL.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeJavaInformation.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindZLIB.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeMSYSFindMake.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/GetPrerequisites.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindFreetype.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPackageMessage.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindSDL_net.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindDoxygen.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPackZIP.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindOpenSSL.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineFortranCompiler.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeGenericSystem.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindCups.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindCABLE.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/InstallRequiredSystemLibraries.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/UsewxWidgets.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindQt.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindFLTK2.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgSim.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeBorlandFindMake.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindMPEG.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgShadow.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindLua50.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineRCCompiler.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgManipulator.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindX11.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestForANSIForScope.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeMinGWFindMake.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Findosg.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckCCompilerFlag.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgProducer.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeVS6FindMake.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeSystemSpecificInformation.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindGLU.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCommonLanguageInclude.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeFortranInformation.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPythonInterp.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestForSTDNamespace.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindTclStub.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindSDL_ttf.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineCCompiler.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestForANSIStreamHeaders.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindUnixCommands.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeNMakeFindMake.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindSDL_image.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineCXXCompiler.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckFunctionExists.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgIntrospection.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindKDE3.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckStructHasMember.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeVS7BackwardCompatibility.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindTCL.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestJavaCompiler.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindCURL.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCXXInformation.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestCXXCompiler.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindWget.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckIncludeFiles.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestCCompiler.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPackRPM.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineSystem.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindEXPAT.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindJava.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/KDE3Macros.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindDCMTK.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestFortranCompiler.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeBackwardCompatibilityCXX.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestForSSTREAM.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindCygwin.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPerlLibs.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindFLTK.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPHP4.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeVS9FindMake.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Documentation.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDependentOption.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeForceCompiler.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestRCCompiler.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCInformation.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindMPEG2.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeASM-ATTInformation.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineASM-ATTCompiler.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestCXXAcceptsFlag.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckCXXCompilerFlag.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindGIF.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindXMLRPC.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindLibXml2.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckIncludeFileCXX.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineASMCompiler.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindJNI.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindRuby.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeASMInformation.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckIncludeFile.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindGnuplot.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindLua51.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindLAPACK.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckCXXSourceCompiles.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/UseSWIG.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgFX.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPhysFS.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FeatureSummary.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPNG.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindMotif.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindQt4.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckVariableExists.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindGTK.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgGA.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeVS7FindMake.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FLTKCompatibility.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgDB.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/ecos_clean.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPythonLibs.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindwxWidgets.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeVS6BackwardCompatibility.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Dart.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindHSPELL.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindBoost.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckCSourceCompiles.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/ITKCompatibility.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindGettext.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/AddFileDependencies.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/UseQt4.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindLibXslt.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindMFC.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgUtil.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/UseVTKConfig40.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeVS71FindMake.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPackDeb.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPike.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestASM-ATTCompiler.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineCompilerABI.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindGCCXML.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CTestTargets.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindProducer.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindMatlab.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPerl.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeRCInformation.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgTerrain.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindOpenThreads.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestASMCompiler.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindBLAS.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindThreads.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindJasper.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeVS8FindMake.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeUnixFindMake.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindBZip2.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckSymbolExists.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindOpenGL.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/VTKCompatibility.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckLibraryExists.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindSDL_mixer.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindImageMagick.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/UseEcos.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineCompilerId.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMake.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckCSourceRuns.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeDetermineJavaCompiler.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindwxWindows.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindSWIG.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindMPI.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeFindWMake.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/SystemInformation.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindSDL_sound.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindHTMLHelp.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindDart.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindKDE4.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeFindBinUtils.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeBackwardCompatibilityC.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/UseVTKBuildSettings40.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindVTK.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindQuickTime.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindGDAL.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindWish.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/UseVTK40.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindJPEG.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/Use_wxWindows.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeFindXCode.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckCXXSourceRuns.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindCurses.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindPackageHandleStandardArgs.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindITK.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeExportBuildSettings.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindSelfPackers.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgParticle.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckFortranFunctionExists.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindCVS.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestBigEndian.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/kde3uic.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/MacroAddFileDependencies.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindLATEX.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckTypeSize.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgViewer.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindosgText.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindTIFF.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindSubversion.cmake"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/FindAVIFile.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules" TYPE FILE FILES "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCXXCompilerABI.cpp")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules" TYPE FILE FILES
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestForSSTREAM.cxx"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestForFreeVC.cxx"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestForSTDNamespace.cxx"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/DummyCXXFile.cxx"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestForAnsiForScope.cxx"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestForANSIStreamHeaders.cxx"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules" TYPE FILE FILES
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeSystem.cmake.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.Info.plist.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.STGZ_Header.sh.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeJavaCompiler.cmake.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/NSIS.template.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/MacOSXBundleInfo.plist.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCXXCompiler.cmake.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckIncludeFile.c.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.Description.plist.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/SystemInformation.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/NSIS.InstallOptions.ini.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCCompiler.cmake.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/kde3init_dummy.cpp.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeRCCompiler.cmake.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.VolumeIcon.icns.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeBuildSettings.cmake.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckTypeSizeC.c.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCCompilerId.c.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.background.png.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.OSXScriptLauncher.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCXXCompilerId.cpp.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.DS_Store.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/DartConfiguration.tcl.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeFortranCompilerId.F90.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeFortranCompiler.cmake.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeConfigurableFile.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.RuntimeScript.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakePlatformId.h.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.distribution.dist.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CPack.OSXX11.Info.plist.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeASMCompiler.cmake.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckLibraryExists.lists.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/TestEndianess.c.in"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckIncludeFile.cxx.in"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules" TYPE FILE FILES
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCCompilerABI.c"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestNMakeCLVersion.c"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeTestGNU.c"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckVariableExists.c"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckFunctionExists.c"
    "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CheckForPthreads.c"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules" TYPE FILE FILES "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/CMakeCompilerABI.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules" TYPE FILE FILES
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake-2.6/Modules" TYPE FILE FILES "/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/src/Modules/readme.txt")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/pager/Documents/approx_computing/HotSniper-LoopPerf/benchmarks/parsec/parsec-2.1/pkgs/tools/cmake/obj/amd64-linux.gcc-sniper/Modules/Platform/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

