cmake_minimum_required(VERSION 2.8.3)
project(test_node)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

catkin_package(
   INCLUDE_DIRS ../include ${catkin_INCLUDE_DIRS}
   CATKIN_DEPENDS roscpp rospy std_msgs
)

include_directories(../include  ${catkin_INCLUDE_DIRS})

add_executable(test_node main.cpp)
target_link_libraries(test_node ${catkin_LIBRARIES})

