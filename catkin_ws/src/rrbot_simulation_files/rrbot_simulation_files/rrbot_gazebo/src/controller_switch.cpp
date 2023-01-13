#include "rclcpp/rclcpp.hpp"
#include "controller_manager_msgs/srv/switch_controller.hpp" 

#include <chrono>
#include <cstdlib>
#include <memory>
#include <future>
#include <typeinfo>
#include <vector>

using namespace std::chrono_literals;
int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("controller_switch"); 
  rclcpp::Client<controller_manager_msgs::srv::SwitchController>::SharedPtr client =  node->create_client<controller_manager_msgs::srv::SwitchController>("/controller_manager/switch_controller");

  auto request = std::make_shared<controller_manager_msgs::srv::SwitchController::Request>();
  request->activate_controllers = {"forward_velocity_controller"};
  request->deactivate_controllers = {"forward_position_controller"};
  while (!client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  }

  auto result = client->async_send_request(request);
  // Wait for the result.
  if (rclcpp::spin_until_future_complete(node, result) ==
    rclcpp::FutureReturnCode::SUCCESS)
  { 
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "OK");
  } else {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service");    // CHANGE
  }

  rclcpp::shutdown();
  return 0;
}