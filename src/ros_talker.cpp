#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_msgs/Float32.h"
#include "std_msgs/Float32MultiArray.h"
#include <stdio.h>
#include <sstream>
#include <iostream>
#include "std_msgs/Int16.h"
#include "std_msgs/UInt8MultiArray.h"
#include "std_msgs/MultiArrayDimension.h"
#include "studienarbeit_gateway/test.h"



using namespace std;



#define Test_Zahl 10


int main(int argc, char **argv) {

	ros::init(argc, argv, "ros_talker");
	ros::NodeHandle n;

	ros::Publisher chatter_pub = n.advertise<studienarbeit_gateway::test>("chatter", 1000);
	//studienarbeit_gateway::test
	//std_msgs::UInt8MultiArray
	ros::Rate loop_rate(1);
	int count=0;
	studienarbeit_gateway::test bank[Test_Zahl];
	char dim_label[]="abcdefghijklmn";
	char kos_name[]="1234567890123456";
	char ichbinString[]="abcdefghijklmn";
	for (int i=0;i<Test_Zahl;i++){
		bank[i].dim.label=dim_label[i];
		bank[i].dim.size=i+2;
		bank[i].dim.stride=i+5;
		bank[i].object.kos.x=2.0*i;
		bank[i].object.kos.y=3.0*i;
		bank[i].object.kos.z=4.0*i;
		bank[i].object.name=kos_name[i];
		bank[i].object.group=i;
		bank[i].ichbinString=ichbinString[i];
		bank[i].ichbinZahl=i*i;

	}

	studienarbeit_gateway::test m;
	while (ros::ok()) {
		m=bank[count];


		std::cout<<"["<<count<<"]"<<"ich habe ein Message zum Testen veröffentlicht:\n";
		std::cout<<"["<<count<<"]"<<"dim.label ="<<m.dim.label<<"\n";
		std::cout<<"["<<count<<"]"<<"dim.size ="<<m.dim.size<<"\n";
		std::cout<<"["<<count<<"]"<<"dim.stride ="<<m.dim.stride<<"\n";
		std::cout<<"["<<count<<"]"<<"zuobiaoxi.kos.x ="<<m.object.kos.x<<"\n";
		std::cout<<"["<<count<<"]"<<"zuobiaoxi.kos.y ="<<m.object.kos.y<<"\n";
		std::cout<<"["<<count<<"]"<<"zuobiaoxi.kos.z ="<<m.object.kos.z<<"\n";
		std::cout<<"["<<count<<"]"<<"zuobiaoxi.name ="<<m.object.name<<"\n";
		std::cout<<"["<<count<<"]"<<"zuobiaoxi.group ="<<m.object.group<<"\n";
		std::cout<<"["<<count<<"]"<<"ichbinString ="<<m.ichbinString<<"\n";
		std::cout<<"["<<count<<"]"<<"ichbinZahl ="<<m.ichbinZahl<<"\n";

		std::cout<<"-------------------------------------------------------\n";

		count++;
		if(count==10) count=0;



		chatter_pub.publish(m);
		ros::spinOnce();

		loop_rate.sleep();


	}

	return 0;
}




