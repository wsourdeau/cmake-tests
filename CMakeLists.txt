cmake_minimum_required(VERSION 3.28)
project(cmake-test VERSION 0.0.1 LANGUAGES CXX)

include (CTest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(cmake-tester)
add_subdirectory(exe)
add_subdirectory(tests)
