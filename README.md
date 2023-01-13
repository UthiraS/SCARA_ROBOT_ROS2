# SCARA_ROBOT
Building Gazebo and running Forward and Inverse Kinematics 

For part 1:
```
$ cd cat_ws
$ colcon build
$ . install/setup.bash
$ ros2 launch rrbot_gazebo rrbot_world.launch.py
```

For part 2:
Stop the gazebo now and in the same terminal run
```
$ ros2 launch rrbot_description view_robot.launch.py
```
This should open an rviz window with the trackbar for the joints to set there
positions.
Now in a new terminal
```
$ cd proj_ws
$ colcon build
$ . install/setup.bash
$ ros2 run FK listener
```
In another terminal:
```
$ cd proj_ws
$ colcon build
$ . install/setup.bash
$ ros2 topic echo /h_mat
```
For Part 3:
Stop all the terminals and to start for part C in any of previous terminals
run:
```
$ ros2 run py_srvcli service
```
And in any of the other two terminals that were opened previous run:
```
$ ros2 service call Inverse_Kinematics ikinterface/srv/Ik '{a: 2, b: 0,c: 1}'
```
You can vary the values for a, b and c values to test the inverse kinematics



Position Controller:

Part 1: Position Controller
Open a terminal
Inside the proj_ws folder, code for Pd controller is written in
Foundation_Project, in the folder py_srvcl, traj_follow.py
Spawn the gazebo robot
```
ros2 launch rrbot_gazebo rrbot_world.launch.py
```
In another terminal
Run the Service
```
ros2 run py_srvcli service
```
In another terminal
Run Service Call to send data to service
```
ros2 service call q_ref ikinterface/srv/Ref '{a: 1, b: 2, c: 0}'
```




Veloity Kinematics and Controller: 
Part 1: Velocity Level Kinematics
Open a terminal
Inside the catkin_ws folder, code for Velocity level kinematics and Velocity Controller is written in
Foundation_Project, in the folder py_srvcli, control_velocity.py
Spawn the gazebo robot
```
ros2 launch rrbot_gazebo rrbot_world.launch.py
```

In another terminal
Run the Service
```
ros2 run py_srvcli control
```
In another terminal
Run Service Call to send data to service for Forward Velocity Kinematics
```
ros2 service call Forward_Velocity_Kinematics ikinterface/srv/Fvel '{joint1_vel: 1, joint2_vel: 2,
joint3_vel: 0}'
```
Run Service Call to send data to service for Inverse Velocity Kinematics
```
ros2 service call Inverse_Velocity_Kinematics ikinterface/srv/Ivel '{endeff_vel_x: 1,
endeff_vel_y: 2, endeff_vel_z: 0}'
```

Part 2: Velocity Controller
Open a terminal
Inside the catkin_ws folder, code for Velocity level kinematics and Velocity Controller is written in
Foundation_Project, in the folder py_srvcli, control_velocity.py
Spawn the gazebo robot
```
ros2 launch rrbot_gazebo rrbot_world.launch.py
```
In another terminal
Run the Service
```
ros2 run py_srvcli control
```
In another terminal
Run Service Call to send data to service for Inverse Velocity Kinematics
```
ros2 service call Inverse_Velocity_Kinematics ikinterface/srv/Ivel '{endeff_vel_x: 1,
endeff_vel_y: 2, endeff_vel_z: 0}
```

Open a terminal
Inside the catkin_ws folder, code for Velocity level kinematics and Velocity Controller is written in
Foundation_Project, in the folder py_srvcli, control_velocity.py
Spawn the gazebo robot
```
ros2 launch rrbot_gazebo rrbot_world.launch.py
```
In another terminal
Run the Service
```
ros2 run py_srvcli control
```
In another terminal
Run Service Call to send data to service for Inverse Velocity Kinematics
Here we want to test different cases of end effector velocity
```
ros2 service call Inverse_Velocity_Kinematics ikinterface/srv/Ivel '{endeff_vel_x: 0,
endeff_vel_y: 0.1, endeff_vel_z: 0}'
```
