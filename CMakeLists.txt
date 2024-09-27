cmake_minimum_required(VERSION 3.20)

project(github-action-artifact-test)

find_package(Catch2 REQUIRED)

find_program(CCACHE_PROGRAM NAMES ccache REQUIRED)
set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CCACHE_PROGRAM}")

add_executable(testcase test.cc)
target_link_libraries(testcase PRIVATE Catch2::Catch2WithMain)

include(CTest)
include(Catch)
catch_discover_tests(testcase)
