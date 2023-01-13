from ikinterface.srv import Ik

import rclpy
from rclpy.node import Node
import numpy as np

class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(Ik, 'Inverse_Kinematics', self.IK_callback)

    def IK_callback(self, request, response):
        
        self.get_logger().info('Incoming request\na: %d b: %d c: %d' % (request.a, request.b,request.c))
        xc = request.a
        yc = request.b
        zc = request.c
        print ("Given the end-effector pose of RRP  robot : xc = ",xc,"yc = ",yc,"zc = ",zc)
        l1 = 2.0	
        l2 = 1.0	
        l3 = 1.0	
        l4 = 1.0 
        print(" Computing the Inverse Kinematics of RRP Robot :")
        print("l1, l2,l3 are in m ")
        print("l1 :"+str(l1)+" m")
        print("l2 :"+str(l2)+" m")
        print("l3 :"+str(l3)+" m")
        print("l4 :"+str(l4)+" m")
        co = np.sqrt(np.square(xc)+np.square(yc))
            
        #Calculating Theta 1
        B = (np.square(l2)+np.square(co)-np.square(l3))/(2*l2*co)
        beta1 = np.arctan2([np.sqrt(1-np.square(B))], [B]) #taking positive square root 
        beta2 = np.arctan2([-np.sqrt(1-np.square(B))], [B]) #taking negative square root 
        psi = np.arctan2([xc],[yc])
        theta11 = psi - beta1 -np.radians([90])
        theta12 = psi - beta2 - np.radians([90])
        

        #Calculating Theta 2
        G = (np.square(l2)+np.square(l3)-np.square(co))/(2*l2*l3)
        gamma1 = np.arctan2([np.sqrt(1-np.square(G))], [G])  #taking positive square root 
        gamma2 = np.arctan2([-np.sqrt(1-np.square(G))], [G]) #taking negative square root
        theta21 = np.radians([180])-gamma1
        theta22 = np.radians([180])-gamma2-np.radians([360])

        #Calculating D3
        d3 = -zc-l4+l1
        
    
        print("The IK solution for RRP Robot are (angles in radians)")
        print("First Solution :")
        print("Joint angle 1 = ",theta11)
        print("Joint angle 2 = ",theta21)
        print("Prismatic length= ",d3)
        print("Second Solution :")
        print("Joint angle 1 = ",theta11)
        print("Joint angle 2 = ",theta22)
        print("Prismatic length= ",d3)
        print("Third Solution :")
        print("Joint angle 1 = ",theta12)
        print("Joint angle 2 = ",theta21)
        print("Prismatic length= ",d3)
        print("Fourth Solution :")
        print("Joint angle 1 = ",theta12)
        print("Joint angle 2 = ",theta22)
        print("Prismatic length= ",d3)
        
        response.theta1_1 = theta11[0]
        response.theta1_2 = theta12[0]
        response.theta2_1 = theta21[0]
        response.theta2_2 = theta22[0]
        response.d3 = d3
        return response


def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()