#ifndef STATUSMANAGER_H_
#define STATUSMANAGER_H_


#include <ros/ros.h>

#include <std_msgs/Int32.h>

/////////////
// ROS 
/////////////

const char* NODE_NAME = "status_manager";

const int TOPIC_QUEUE_SIZE = 5;

ros::Publisher system_status_pub;

void publishNumber(int n);

#endif
