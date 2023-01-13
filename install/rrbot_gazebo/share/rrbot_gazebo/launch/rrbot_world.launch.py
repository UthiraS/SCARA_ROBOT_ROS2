import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess, IncludeLaunchDescription, RegisterEventHandler
from launch.event_handlers import OnProcessExit
from launch.launch_description_sources import PythonLaunchDescriptionSource
import xacro
import yaml

def load_file(package_name, file_path):
    package_path = get_package_share_directory(package_name)
    absolute_file_path = os.path.join(package_path, file_path)
    try:
        with open(absolute_file_path, 'r') as file:
            return file.read()
    except EnvironmentError:
        # parent of IOError, OSError *and* WindowsError where available
        return None


def load_yaml(package_name, file_path):
    package_path = get_package_share_directory(package_name)
    absolute_file_path = os.path.join(package_path, file_path)
    try:
        with open(absolute_file_path, 'r') as file:
            return yaml.safe_load(file)
    except EnvironmentError:
        # parent of IOError, OSError *and* WindowsError where available
        return None

def generate_launch_description():

    rrbot_gazebo = os.path.join(
        get_package_share_directory('rrbot_gazebo'),
        'worlds',
        'rrbot.world')

    print(rrbot_gazebo)

    gazebo = IncludeLaunchDescription(
                PythonLaunchDescriptionSource([os.path.join(
                    get_package_share_directory('gazebo_ros'), 'launch'), '/gazebo.launch.py']),
                launch_arguments={'world': rrbot_gazebo}.items(),
             )

    rrbot_description_path = os.path.join(
        get_package_share_directory('rrbot_description'))

    xacro_file = os.path.join(rrbot_description_path,
                              'urdf',
                              'rrbot.urdf.xacro')

    doc = xacro.parse(open(xacro_file))
    xacro.process_doc(doc)
    robot_description_config = doc.toxml()
    robot_description = {'robot_description': robot_description_config}

    robot_controllers = os.path.join(get_package_share_directory("rrbot_gazebo"),"config","gazebo_controllers.yaml")

    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[robot_description]
    )

    controller_manager = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[
                {"robot_description": robot_description_config}, robot_controllers],
        output="both",
    )
    spawn_entity = Node(package='gazebo_ros', executable='spawn_entity.py',
                       arguments=['-topic', 'robot_description',
                                  '-entity', 'robot'],
                       output='screen')
    print("SPAWN ENTITY DONE")

    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_state_broadcaster",
                   "--controller-manager", "/controller_manager"],
        output="both",
    )

    robot_position_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["forward_position_controller", "-c", "/controller_manager","--stopped"],
    )

    robot_velocity_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["forward_velocity_controller", "-c", "/controller_manager", "--stopped"],
    )

    robot_effort_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["forward_effort_controller", "-c", "/controller_manager"],
    )


    delay_robot_position_controller_spawner_after_joint_state_broadcaster_spawner = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=joint_state_broadcaster_spawner,
            on_exit=[robot_position_controller_spawner],
        )
    )

    delay_robot_velocity_controller_spawner_after_robot_position_controller_spawner = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=robot_position_controller_spawner,
            on_exit=[robot_velocity_controller_spawner],
        )
    )

    delay_robot_effort_controller_spawner_after_robot_velocity_controller_spawner = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=robot_velocity_controller_spawner,
            on_exit=[robot_effort_controller_spawner],
        )
    )
    
    nodes = [
        gazebo,
        spawn_entity,
        controller_manager,
        node_robot_state_publisher,
        joint_state_broadcaster_spawner,
        delay_robot_position_controller_spawner_after_joint_state_broadcaster_spawner,
        delay_robot_velocity_controller_spawner_after_robot_position_controller_spawner,
        delay_robot_effort_controller_spawner_after_robot_velocity_controller_spawner
    ]

    return LaunchDescription(nodes)
