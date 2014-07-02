cmake_minimum_required (VERSION 2.6)
project (One)
list( APPEND CMAKE_CXX_FLAGS "-std=c++0x ${CMAKE_CXX_FLAGS} -g -ftest-coverage -fprofile-arcs")
add_executable (OneExe one.cxx)

include(CTest)