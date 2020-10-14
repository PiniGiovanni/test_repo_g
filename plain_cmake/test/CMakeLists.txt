cmake_minimum_required(VERSION 2.8.3)


enable_testing()
find_package(Threads REQUIRED)
find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIR})

link_directories(${CMAKE_SOURCE_DIR}/build/)

add_executable(test_all class_A_test.cpp)

target_link_libraries(test_all pthread
							   gtest
                               gtest_main
                               testlib)

add_test(test_all test_all)
