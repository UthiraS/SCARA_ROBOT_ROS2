import rclpy
import math as m
import numpy as np
from rclpy.node import Node
from ikinterface.srv import Fvel,Ivel

from std_msgs.msg import Float64MultiArray
from sensor_msgs.msg import JointState
from std_msgs.msg import String


class MinimalSubscriber(Node):
	def __init__(self):
		super().__init__('minimal_subscriber')
		global vel_error
		global d_error
		global effort
		global last_error
		global Kp
		global Kd
		Kp = [1,1,1]
		Kd = [0.01,0.01,0.1]

		last_error = [0 ,0, 0]
		effort = [0 ,0, 0]           
		d_error=[0,0,0]
		vel_error =[0,0,0]
		# desired_cartesian_velocity = [0, 0.1, 0]

		global vref1
		global vref2
		global vref3

		global vreq1
		global vreq2
		global vreq3
		vref1=0.0
		vref2=0.0
		vref3=0.0
		vreq1 = 0.0
		vreq2 = 0.0 
		vreq3 = 0.0
		
		
		self.srv = self.create_service(Ivel, 'Inverse_Velocity_Kinematics', self.serv_callback)
		self.subscription = self.create_subscription(JointState,'joint_states',self.listener_callback,10)
		self.publisher_ = self.create_publisher(Float64MultiArray, '/forward_effort_controller/commands', 10)
		self.subscription 
	def listener_callback(self, msg):
			global vel_error
			global d_error
			global effort
			global last_error
			global Kp
			global Kd
			msg2=Float64MultiArray()
			#self.get_logger().info('Hello')
			#st=String()
			#st1=String()
			# q1=msg.position[0]
			# q2=msg.position[1]
			# d1=msg.position[2]
			v1=msg.velocity[0]
			v2=msg.velocity[1]
			vd=msg.velocity[2]
			# inv_req = inv_velocity_kinematicsRequest()
			# inv_req.x = desired_cartesian_velocity[0]
			# inv_req.y = desired_cartesian_velocity[1]
			# inv_req.z = desired_cartesian_velocity[2]
			# inv_res = inv_velocity(inv_req)
			desired_velocity = [vreq1 ,vreq2 ,vreq3] 
			current_velocity = [v1,v2,vd]
			sec=msg.header.stamp.sec
			nanosec=msg.header.stamp.nanosec
			ms=((sec*1000)+(nanosec/1000000))/1000

		
			for i in range(3): 
				vel_error[i] = desired_velocity[i] - current_velocity[i]
				d_error[i] = (vel_error[i] - last_error[i]) / ms
				last_error[i] = vel_error[i]
				effort[i] = Kp[i] * vel_error[i] + Kd[i] * d_error[i]
				# joint_effort(joints[i], effort[i], rospy.Time(0), ms)

			# //clear_forces(joints[i]) 

			# tau1=kp1*(vref1-v1) - kd1*v1
			# tau2=kp2*(qref2-q2) - kd2*v2
			# tau3=-9.8+(kp3*(qref3-d1) - kd3*vd)

			msg2.data= effort[0],effort[1],effort[2]
			# self.file=open("crap.txt","a")


			# self.file.write(str(qref1)+" ")
			# self.file.write(str(qref2)+" ")
			# self.file.write(str(qref3)+" ")
			# self.file.write(str(q1)+" ")
			# self.file.write(str(q2)+" ")
			# self.file.write(str(d1)+" ")
			# self.file.write(str(ms)+"\n")
			# self.file.close()	
			#self.get_logger().info("%d" %msg2[0])	
			#self.get_logger().info("%d" %msg2[1])	
			#self.get_logger().info("%d" %msg2[2])	
			#msg2.data=st1
			self.get_logger().info("Finally")
			self.publisher_.publish(msg2) # publish it to the joint publisher and we are done 
	def serv_callback(self, request,response):
			global vref1,vref2,vref3, vreq1,vreq2,vreq3
			vref1 = request.endeff_vel_x
			vref2 = request.endeff_vel_y
			vref3 = request.endeff_vel_z
			vreq1 = response.joint1_vel 
			vreq2 = response.joint2_vel 
			vreq3 = response.joint3_vel  
			self.get_logger().info("Recieve")	
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
