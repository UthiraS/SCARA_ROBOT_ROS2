import rclpy
import math as m
import numpy as np
from rclpy.node import Node

from std_msgs.msg import Float32MultiArray
from sensor_msgs.msg import JointState
from std_msgs.msg import String

class MinimalSubscriber(Node):
	def __init__(self):
		super().__init__('minimal_subscriber')
		self.subscription = self.create_subscription(
		JointState,
		'joint_states',
		self.listener_callback,
		10)
		self.publisher_ = self.create_publisher(String, 'h_mat', 10)
		self.subscription 
	def listener_callback(self, msg):
		msg2=String()
		st=String()
		st1=String()
		l1=2
		l2=1
		l3=1
		l4=1
		q1=msg.position[0]
		q2=msg.position[1]
		d1=msg.position[2]		
		c1=m.cos(q1)
		c2=m.cos(q2)
		s1=m.sin(q1)
		s2=m.sin(q2)
		A1=np.matrix([[c1,-1*s1,0,l2*c1],[s1,c1,0,l2*s1],[0,0,1,l1],[0,0,0,1]])
		A2=np.matrix([[c2,s2,0,l3*c2],[s2,-1*c2,0,l3*s2],[0,0,-1,0],[0,0,0,1]])
		A3=np.matrix([[1,0,0,0],[0,1,0,0],[0,0,1,d1+l4],[0,0,0,1]])
		H=A1*A2*A3
		st1=''
		for i in H:
			st=' '.join(str(e) for e in i)
			st1 += str(st +'\n')
			
		#self.get_logger().info('The Homogenous matrix is "%s"' %st1)	
		msg2.data=st1
		self.publisher_.publish(msg2)


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
