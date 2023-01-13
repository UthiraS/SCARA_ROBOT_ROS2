// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ikinterface:srv/Fvel.idl
// generated code does not contain a copyright notice

#ifndef IKINTERFACE__SRV__DETAIL__FVEL__BUILDER_HPP_
#define IKINTERFACE__SRV__DETAIL__FVEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ikinterface/srv/detail/fvel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ikinterface
{

namespace srv
{

namespace builder
{

class Init_Fvel_Request_joint3_vel
{
public:
  explicit Init_Fvel_Request_joint3_vel(::ikinterface::srv::Fvel_Request & msg)
  : msg_(msg)
  {}
  ::ikinterface::srv::Fvel_Request joint3_vel(::ikinterface::srv::Fvel_Request::_joint3_vel_type arg)
  {
    msg_.joint3_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ikinterface::srv::Fvel_Request msg_;
};

class Init_Fvel_Request_joint2_vel
{
public:
  explicit Init_Fvel_Request_joint2_vel(::ikinterface::srv::Fvel_Request & msg)
  : msg_(msg)
  {}
  Init_Fvel_Request_joint3_vel joint2_vel(::ikinterface::srv::Fvel_Request::_joint2_vel_type arg)
  {
    msg_.joint2_vel = std::move(arg);
    return Init_Fvel_Request_joint3_vel(msg_);
  }

private:
  ::ikinterface::srv::Fvel_Request msg_;
};

class Init_Fvel_Request_joint1_vel
{
public:
  Init_Fvel_Request_joint1_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fvel_Request_joint2_vel joint1_vel(::ikinterface::srv::Fvel_Request::_joint1_vel_type arg)
  {
    msg_.joint1_vel = std::move(arg);
    return Init_Fvel_Request_joint2_vel(msg_);
  }

private:
  ::ikinterface::srv::Fvel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ikinterface::srv::Fvel_Request>()
{
  return ikinterface::srv::builder::Init_Fvel_Request_joint1_vel();
}

}  // namespace ikinterface


namespace ikinterface
{

namespace srv
{

namespace builder
{

class Init_Fvel_Response_endeff_vel_z
{
public:
  explicit Init_Fvel_Response_endeff_vel_z(::ikinterface::srv::Fvel_Response & msg)
  : msg_(msg)
  {}
  ::ikinterface::srv::Fvel_Response endeff_vel_z(::ikinterface::srv::Fvel_Response::_endeff_vel_z_type arg)
  {
    msg_.endeff_vel_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ikinterface::srv::Fvel_Response msg_;
};

class Init_Fvel_Response_endeff_vel_y
{
public:
  explicit Init_Fvel_Response_endeff_vel_y(::ikinterface::srv::Fvel_Response & msg)
  : msg_(msg)
  {}
  Init_Fvel_Response_endeff_vel_z endeff_vel_y(::ikinterface::srv::Fvel_Response::_endeff_vel_y_type arg)
  {
    msg_.endeff_vel_y = std::move(arg);
    return Init_Fvel_Response_endeff_vel_z(msg_);
  }

private:
  ::ikinterface::srv::Fvel_Response msg_;
};

class Init_Fvel_Response_endeff_vel_x
{
public:
  Init_Fvel_Response_endeff_vel_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fvel_Response_endeff_vel_y endeff_vel_x(::ikinterface::srv::Fvel_Response::_endeff_vel_x_type arg)
  {
    msg_.endeff_vel_x = std::move(arg);
    return Init_Fvel_Response_endeff_vel_y(msg_);
  }

private:
  ::ikinterface::srv::Fvel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ikinterface::srv::Fvel_Response>()
{
  return ikinterface::srv::builder::Init_Fvel_Response_endeff_vel_x();
}

}  // namespace ikinterface

#endif  // IKINTERFACE__SRV__DETAIL__FVEL__BUILDER_HPP_
