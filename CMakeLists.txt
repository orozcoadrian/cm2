cmake_minimum_required (VERSION 2.6)
project(mp1)
include(CTest)
add_executable(Tutorial tutorial.cxx)

install (TARGETS MathFunctions DESTINATION bin)