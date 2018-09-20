#include "ros/ros.h"
#include "studienarbeit_gateway/Gateway2Method.h"
#include "studienarbeit_gateway/test2Method.h"
#include <stdio.h>
#include <assert.h>
#include <cassert>
#include <cstring>
#include <fstream>
#include <iostream>
#include <queue>
#include <signal.h>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <unistd.h>
#include "studienarbeit_gateway/test.h"

#define Test_Zahl 10


bool add(studienarbeit_gateway::Gateway2Method::Request  &req,
         studienarbeit_gateway::Gateway2Method::Response &res)
{
  ROS_INFO("Ready to add two ints.");
  res.sum = req.a + req.b;
  ROS_INFO("request: a=%ld, b=%ld", (long int)req.a, (long int)req.b);
  ROS_INFO("sending back response: [%ld]", (long int)res.sum);
  return true;
}

static void average(studienarbeit_gateway::test2Method::Request &req,
	     studienarbeit_gateway::test2Method::Response &res){

	res.result=(req.x+req.y+req.z)/3;
}

static void sum(studienarbeit_gateway::test2Method::Request &req,
	     studienarbeit_gateway::test2Method::Response &res){

	res.result=req.x+req.y+req.z;
}

bool multiplication(studienarbeit_gateway::test2Method::Request &req,
	     studienarbeit_gateway::test2Method::Response &res){

	res.result=req.x*req.y*req.z;
	return true;
}



bool rechnen(studienarbeit_gateway::test2Method::Request &req,
		     studienarbeit_gateway::test2Method::Response &res){


	multiplication(req,res);

	res.describe=req.function;
	res.describe.append("erfolgreich!!!");
	return true;
}






int main(int argc, char **argv)
{
  ros::init(argc, argv, "ros_server");
  ros::NodeHandle n;

  ros::Publisher chatter_pub = n.advertise<studienarbeit_gateway::test>("chatter", 1000);

  ros::ServiceServer service = n.advertiseService("service1", add);
  ros::ServiceServer service2= n.advertiseService("service2",rechnen);
  ros::ServiceServer service3= n.advertiseService("service3",multiplication);
  ROS_INFO("I am wating for your question.");











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












  ros::spin();

  return 0;
}
