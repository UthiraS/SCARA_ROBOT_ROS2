// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ikinterface:srv/Ref.idl
// generated code does not contain a copyright notice

#ifndef IKINTERFACE__SRV__DETAIL__REF__BUILDER_HPP_
#define IKINTERFACE__SRV__DETAIL__REF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ikinterface/srv/detail/ref__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ikinterface
{

namespace srv
{

namespace builder
{

class Init_Ref_Request_c
{
public:
  explicit Init_Ref_Request_c(::ikinterface::srv::Ref_Request & msg)
  : msg_(msg)
  {}
  ::ikinterface::srv::Ref_Request c(::ikinterface::srv::Ref_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ikinterface::srv::Ref_Request msg_;
};

class Init_Ref_Request_b
{
public:
  explicit Init_Ref_Request_b(::ikinterface::srv::Ref_Request & msg)
  : msg_(msg)
  {}
  Init_Ref_Request_c b(::ikinterface::srv::Ref_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Ref_Request_c(msg_);
  }

private:
  ::ikinterface::srv::Ref_Request msg_;
};

class Init_Ref_Request_a
{
public:
  Init_Ref_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ref_Request_b a(::ikinterface::srv::Ref_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Ref_Request_b(msg_);
  }

private:
  ::ikinterface::srv::Ref_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ikinterface::srv::Ref_Request>()
{
  return ikinterface::srv::builder::Init_Ref_Request_a();
}

}  // namespace ikinterface


namespace ikinterface
{

namespace srv
{

namespace builder
{

class Init_Ref_Response_i
{
public:
  Init_Ref_Response_i()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ikinterface::srv::Ref_Response i(::ikinterface::srv::Ref_Response::_i_type arg)
  {
    msg_.i = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ikinterface::srv::Ref_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ikinterface::srv::Ref_Response>()
{
  return ikinterface::srv::builder::Init_Ref_Response_i();
}

}  // namespace ikinterface

#endif  // IKINTERFACE__SRV__DETAIL__REF__BUILDER_HPP_
