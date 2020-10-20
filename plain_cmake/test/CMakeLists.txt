cmake_minimum_required(VERSION 2.8.3)


enable_testing()
find_package(Threads REQUIRED)
find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIR})

link_directories(${CMAKE_SOURCE_DIR}/build/)

add_executable(test_all class_A_test.cpp)

add_executable(test_2 class_A_test_2.cpp)

target_link_libraries(test_all gtest
                               gtest_main
                               ${CMAKE_THREAD_LIBS_INIT}
                               testlib)

target_link_libraries(test_2 gtest
                               gtest_main
                               ${CMAKE_THREAD_LIBS_INIT}
                               testlib)

add_test(test_all test_all)
add_test(test_2 test_2)
