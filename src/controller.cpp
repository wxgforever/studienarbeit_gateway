//能收又能发
#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_msgs/Float32.h"
#include "std_msgs/Float32MultiArray.h"
#include <stdio.h>
#include <sstream>
#include <iostream>



class controller{
	public:
		controller(){
			sub = n.subscribe("thisTopic", 1000, &controller::callback,this);
			pub = n.advertise<std_msgs::String>("anotherTopic", 1000);
		}

		void callback(const std_msgs::String::ConstPtr& msg){
			std_msgs::String pub_str;
			std::stringstream ss;

			ss << "controller heard:" << msg->data.c_str();

			pub_str.data = ss.str();

			std::cout << pub_str.data.c_str()<<std::endl;
			pub.publish(pub_str);
			ros::spinOnce();
		}

	private:
		ros::NodeHandle n;
		ros::Subscriber sub;
		ros::Publisher pub;


};

class method{
public:
	method(){

	}

private:
	ros::NodeHandle n;
	ros::Subscriber sub;
	ros::Publisher pub;
};

int main(int argc, char **argv)
{

  ros::init(argc, argv, "controller");
  controller ctrl;



  ros::spin();
  return 0;
}
