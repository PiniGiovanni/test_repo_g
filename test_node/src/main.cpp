#include "include_file.h"

/****************************/
/****************************/

int main(int argc, char **argv) {


compile fail

    ros::init(argc, argv, NODE_NAME);

    ros::NodeHandle cNodeHandle;

    /********************
    * PARSE CONFIGURATION
    ********************/

	// PARSE YAML PARAMETERS
	int paramval = 0;
	if(!cNodeHandle.getParam("param_value", paramval)) {
		ROS_WARN("Error reading parameter from config file. Using node default (%d)", paramval);
	}
	else{
		ROS_INFO("PAram value: %d", paramval);
	}


    /*************
    * PUBLISHERS
    *************/

    system_status_pub      = cNodeHandle.advertise<std_msgs::Int32>("test_node_number", TOPIC_QUEUE_SIZE);


    ros::Rate loop_rate(1);
    int n_loop_counter = 1;


    ROS_INFO("status_manager initialised");

    while(ros::ok()) {

		publishNumber(n_loop_counter);
		n_loop_counter++;

        ros::spinOnce();
        loop_rate.sleep();
    }

    return 0;
}

/****************************/
/****************************/

void publishNumber(int n) {
	std_msgs::Int32 msg;
    msg.data = n;
	system_status_pub.publish(msg);
}

/****************************/
/****************************/
