cmake_minimum_required (VERSION 2.6)
project(mp1)
include(CTest)
add_executable(Tutorial tutorial.cxx)

install (TARGETS MathFunctions DESTINATION bin)

# does the application run
add_test (TutorialRuns Tutorial 25)
 
# does it sqrt of 25
add_test (TutorialComp25 Tutorial 25)
 
set_tests_properties (TutorialComp25 
  PROPERTIES PASS_REGULAR_EXPRESSION "25 is 5")