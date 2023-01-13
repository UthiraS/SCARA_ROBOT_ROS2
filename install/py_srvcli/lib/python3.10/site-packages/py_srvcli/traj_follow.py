import rclpy
import math as m
import numpy as np
from rclpy.node import Node
from ikinterface.srv import Ref

from std_msgs.msg import Float64MultiArray
from sensor_msgs.msg import JointState
from std_msgs.msg import String


class MinimalSubscriber(Node):
	def __init__(self):
		super().__init__('minimal_subscriber')
		global qref1
		global qref2
		global qref3
		qref1=0.0
		qref2=0.0
		qref3=0.0
		self.srv = self.create_service(Ref, 'q_ref', self.serv_callback)
		self.subscription = self.create_subscription(JointState,'joint_states',self.listener_callback,10)
		self.publisher_ = self.create_publisher(Float64MultiArray, '/forward_effort_controller/commands', 10)
		self.subscription 
	def listener_callback(self, msg):
		msg2=Float64MultiArray()
		#self.get_logger().info('Hello')
		#st=String()
		#st1=String()
		q1=msg.position[0]
		q2=msg.position[1]
		d1=msg.position[2]
		v1=msg.velocity[0]
		v2=msg.velocity[1]
		vd=msg.velocity[2]
		sec=msg.header.stamp.sec
		nanosec=msg.header.stamp.nanosec
		ms=(sec*1000)+(nanosec/1000000)
		kp1=1
		kp2=1.5
		kp3=1
		kd1=2.5
		kd2=2.5
		kd3=2.5
		tau1=kp1*(qref1-q1) - kd1*v1
		tau2=kp2*(qref2-q2) - kd2*v2
		tau3=-9.8+(kp3*(qref3-d1) - kd3*vd)
		
		msg2.data= tau1,tau2,tau3
		self.file=open("crap.txt","a")
		
		
		self.file.write(str(qref1)+" ")
		self.file.write(str(qref2)+" ")
		self.file.write(str(qref3)+" ")
		self.file.write(str(q1)+" ")
		self.file.write(str(q2)+" ")
		self.file.write(str(d1)+" ")
		self.file.write(str(ms)+"\n")
		self.file.close()	
		#self.get_logger().info("%d" %msg2[0])	
		#self.get_logger().info("%d" %msg2[1])	
		#self.get_logger().info("%d" %msg2[2])	
		#msg2.data=st1
		self.get_logger().info("Finally")
		self.publisher_.publish(msg2) # publish it to the joint publisher and we are done 
	def serv_callback(self, request,response):
		global qref1,qref2,qref3
		qref1 = request.a
		qref2 = request.b
		qref3 = request.c
		response.i=qref1
		self.get_logger().info("REcie")	
		return response


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
