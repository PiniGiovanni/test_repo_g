cmake_minimum_required(VERSION 2.8.3)

add_executable(test_main main.cpp )

add_library(testlib class_A.cpp)

add_subdirectory(test)
