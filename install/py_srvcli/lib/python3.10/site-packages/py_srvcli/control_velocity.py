import rclpy
import math as m
from math import sin, cos
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
		global e_error
		global effort
		global last_error
		global Kp
		global Kd
		global Ki
		global ev1 ,ev2,ev3
		global t_prev
		global q1,q2,qd
		t_prev=0
		ev1=0.0
		ev2=0.0
		ev3=0.0
		q1=0.0
		q2=0.0
		qd=0.0
		Kp = [6,6,7]
		Ki = [0.1,0.1,0.1]
		Kd = [0.01,0.01,0.01]

		last_error = [0 ,0, 0]
		effort = [0 ,0, 0]           
		d_error=[0,0,0]
		e_error=[0,0,0]
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


		self.srv = self.create_service(Fvel, 'Forward_Velocity_Kinematics', self.Fvel_callback)
		self.srv = self.create_service(Ivel, 'Inverse_Velocity_Kinematics', self.Ivel_callback)
		self.subscription = self.create_subscription(JointState,'joint_states',self.listener_callback,10)
		self.publisher_ = self.create_publisher(Float64MultiArray, '/forward_effort_controller/commands', 10)
		self.subscription 
	def listener_callback(self, msg):
		global vel_error
		global d_error
		global e_error
		global effort
		global last_error
		global Kp
		global Kd,Ki
		global q1,q2,qd
		
		global t_prev
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
		Ev = np.matrix([[ev1],[ev2],[ev3]])
		l1 = 2.0	
		l2 = 1.0	
		l3 = 1.0	
		l4 = 1.0 
		theta1 = msg.position[0]
		theta2 = msg.position[1]
		d3 = msg.position[2]
		#print("the end effector velocities",Ev)
		

		
		if(abs(sin(theta2))>0.01):
			J_inv =np.matrix([[cos(theta1 + theta2)/(l2*sin(theta2)),sin(theta1 + theta2)/(l2*sin(theta2)),  0],
					[-(l3*cos(theta1 + theta2) + l2*cos(theta1))/(l2*l3*sin(theta2)), -(l3*sin(theta1 + theta2) + l2*sin(theta1))/(l2*l3*sin(theta2)),  0],[0,0, -1]])
		else:
			J_inv= np.matrix([[0.1,0.1,0],[0.1,-0.1,0],[0,0,-1]])
		# inv_req = inv_velocity_kinematicsRequest()
		# inv_req.x = desired_cartesian_velocity[0]
		# inv_req.y = desired_cartesian_velocity[1]
		# inv_req.z = desired_cartesian_velocity[2]
		# inv_res = inv_velocity(inv_req)
		Jv = J_inv* Ev

		
		desired_velocity = [float(Jv[0][0][0]) ,float(Jv[1][0][0]) ,float(Jv[2][0][0])] 
		current_velocity = [v1,v2,vd]
		sec=msg.header.stamp.sec
		nanosec=msg.header.stamp.nanosec
		ms=((sec*1000)+(nanosec/1000000))/1000


		for i in range(3): 
			vel_error[i] = desired_velocity[i] - current_velocity[i]
			e_error[i] += (vel_error[i])*(ms-t_prev)
			d_error[i]=(vel_error[i]-last_error[i])*(ms-t_prev)
			last_error[i] = vel_error[i]
			effort[i] = Kp[i] * vel_error[i] + Ki[i] * e_error[i]+Kd[i]*d_error[i]
		effort[2]+=-9.8
		t_prev=ms
		# joint_effort(joints[i], effort[i], rospy.Time(0), ms)

		# //clear_forces(joints[i]) 

		# tau1=kp1*(vref1-v1) - kd1*v1
		# tau2=kp2*(qref2-q2) - kd2*v2
		# tau3=-9.8+(kp3*(qref3-d1) - kd3*vd)
		#print("the desired_velocity",desired_velocity)
		#print("the current_velocity",current_velocity)
		#print("the velocity error",vel_error)
		#print("the effort",effort)

		msg2.data= effort[0],effort[1],effort[2]
		self.file=open("npi.txt","a")
		vel=np.matrix([[v1],[v2],[vd]])
		J=np.matrix([[- l3*sin(theta1 + theta2) - l2*sin(theta1), -l3*sin(theta1 + theta2),  0],
[  l3*cos(theta1 + theta2) + l2*cos(theta1),  l3*cos(theta1 + theta2),  0],
[                                         0,                        0, -1]])
		end_vel=J*vel
		print(end_vel)
		a=float(end_vel[0][0][0])
		b=float(end_vel[1][0][0])
		c=float(end_vel[2][0][0])
		
		self.file.write(str(ev1)+" ")
		self.file.write(str(ev2)+" ")
		self.file.write(str(ev3)+" ")
		self.file.write(str(a)+" ")
		self.file.write(str(b)+" ")
		self.file.write(str(c)+" ")
		self.file.write(str(ms)+"\n")
		self.file.close()	
		#self.get_logger().info("%d" %msg2[0])	
		#self.get_logger().info("%d" %msg2[1])	
		#self.get_logger().info("%d" %msg2[2])	
		#msg2.data=st1
		self.get_logger().info("Finally")
		
		self.publisher_.publish(msg2) # publish it to the joint publisher and we are done 
		# def serv_callback(self, request,response):
		# 		global vref1,vref2,vref3, vreq1,vreq2,vreq3
		# 		vref1 = request.endeff_vel_x
		# 		vref2 = request.endeff_vel_y
		# 		vref3 = request.endeff_vel_z
		# 		vreq1 = response.joint1_vel 
		# 		vreq2 = response.joint2_vel 
		# 		vreq3 = response.joint3_vel  
		# 		self.get_logger().info("Recieve")	
		# 		return response

	def Fvel_callback(self, request, response):
		global q1,q2,qd
		self.get_logger().info('Incoming request\n Joint1vel: %d Joint2vel: %d Joint3vel: %d' % (request.joint1_vel, request.joint2_vel,request.joint3_vel))
		jv1= request.joint1_vel
		jv2= request.joint2_vel
		jv3= request.joint3_vel

		Jv = np.matrix([[jv1],[jv2],[jv3]])
		l1 = 2.0	
		l2 = 1.0	
		l3 = 1.0	
		l4 = 1.0 
		theta1 = q1
		theta2 = q2
		d3 = qd

		J =np.matrix([[- l2*np.sin(theta1) - l3*np.cos(theta1)*np.sin(theta2) - l3*np.cos(theta2)*np.sin(theta1), - l3*np.cos(theta1)*np.sin(theta2) - l3*np.cos(theta2)*np.sin(theta1),  0],
		[  l2*np.cos(theta1) + l3*np.cos(theta1)*np.cos(theta2) - l3*np.sin(theta1)*np.sin(theta2),   l3*np.cos(theta1)*np.cos(theta2) - l3*np.sin(theta1)*np.sin(theta2),  0],
		[                                                                         0,                                                         0, -1]])        
		Ev = J* Jv

		print("The end-effector velocity for the given joint velocities :",Ev)
		# print(Ev.shape)
		# print(Ev[0,:1].ravel())
		response.endeff_vel_x = float(Ev[0][0][0])
		response.endeff_vel_y = float(Ev[1][0][0])
		response.endeff_vel_z = float(Ev[2][0][0])

		return response

	def Ivel_callback(self, request, response):
		global ev1 ,ev2,ev3
		global d_error, e_error
		global q1,q2,qd
		d_error=[0, 0, 0]
		e_error=[0, 0, 0]

		self.get_logger().info('Incoming request\n EndEff_VelX: %d EndEff_VelY: %d EndEff_VelZ: %d' % (request.endeff_vel_x, request.endeff_vel_y,request.endeff_vel_z))
		ev1= request.endeff_vel_x
		ev2= request.endeff_vel_y
		ev3= request.endeff_vel_z

		Ev = np.matrix([[ev1],[ev2],[ev3]])
		l1 = 2.0	
		l2 = 1.0	
		l3 = 1.0	
		l4 = 1.0 
		theta1 = q1
		theta2 = q2
		d3 = qd

		J =np.matrix([[- l2*np.sin(theta1) - l3*np.cos(theta1)*np.sin(theta2) - l3*np.cos(theta2)*np.sin(theta1), - l3*np.cos(theta1)*np.sin(theta2) - l3*np.cos(theta2)*np.sin(theta1),  0],
		[  l2*np.cos(theta1) + l3*np.cos(theta1)*np.cos(theta2) - l3*np.sin(theta1)*np.sin(theta2),   l3*np.cos(theta1)*np.cos(theta2) - l3*np.sin(theta1)*np.sin(theta2),  0],
		[                                                                         0,                                                         0, -1]])  

		J_inv = np.linalg.inv(J)     
		print("The Jacobian Matrix :",J) 
		print("The Inverse Jacobian Matrix :",J_inv) 
		Jv = J_inv* Ev

		print("The joint velocities for the given end- effector velocities :",Jv)
		# print(Ev.shape)
		# print(Ev[0,:1].ravel())
		response.joint1_vel = float(Jv[0][0][0])
		response.joint2_vel = float(Jv[1][0][0])
		response.joint3_vel = float(Jv[2][0][0])
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
