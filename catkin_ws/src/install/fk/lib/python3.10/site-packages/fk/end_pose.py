# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
import math as m
from rclpy.node import Node

from std_msgs.msg import Float32MultiArray
from std_msgs.msg import String

class MinimalSubscriber(Node):
	def __init__(self):
		super().__init__('minimal_subscriber')
		self.subscription = self.create_subscription(
		Float32MultiArray,
		'topic',
		self.listener_callback,
		10)
		self.subscription 

def listener_callback(self, msg):
	st=String()
	st1=String()
	l1=1
	l2=1
	l3=1
	l4=1
	self.get_logger().info('I recieved q1: "%f" ' %msg.data[0] )	
	self.get_logger().info('I recieved q2: "%f" ' %msg.data[1] )	
	self.get_logger().info('I recieved q3: "%f" ' %msg.data[2] )
	q1=msg.data[0]
	q2=msg.data[1]
	d1=msg.data[2]		
	c1=m.cos(q1)
	c2=m.cos(q2)
	s1=m.sin(q1)
	s2=m.sin(q2)
	A1=[[c1,-1*s1,0,l2*c1],[s1,c1,0,l2*s1],[0,0,1,0],[0,0,0,1]]
	A2=[[c2,s2,0,l3*c2],[s2,-1*c2,0,l3*s2],[0,0,-1,0],[0,0,0,1]]
	A3=[[1,0,0,0],[0,1,0,0],[0,0,1,d1+l4],[0,0,0,1]]
	H=A1*A2*A3
	st1=''
	for i in H:
		st=' '.join(str(e) for e in i)
		st1 +='['+ st + ']'
		
	self.get_logger().info('The Homogenous matrix is "%s"' %st1)	
	self.flag=1


def main(args=None):
	rclpy.init(args=args)

	minimal_subscriber = MinimalSubscriber()

	rclpy.spin(minimal_subscriber)

	# Destroy the node explicitly
	# (optional - otherwise it will be done automatically
	# when the garbage collector destroys the node object)
	minimal_subscriber.destroy_node()
	rclpy.shutdown()


if __name__ == '__main__':
	main()
