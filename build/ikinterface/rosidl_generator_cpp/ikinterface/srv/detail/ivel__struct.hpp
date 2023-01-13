// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ikinterface:srv/Ivel.idl
// generated code does not contain a copyright notice

#ifndef IKINTERFACE__SRV__DETAIL__IVEL__STRUCT_HPP_
#define IKINTERFACE__SRV__DETAIL__IVEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ikinterface__srv__Ivel_Request __attribute__((deprecated))
#else
# define DEPRECATED__ikinterface__srv__Ivel_Request __declspec(deprecated)
#endif

namespace ikinterface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Ivel_Request_
{
  using Type = Ivel_Request_<ContainerAllocator>;

  explicit Ivel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->endeff_vel_x = 0.0f;
      this->endeff_vel_y = 0.0f;
      this->endeff_vel_z = 0.0f;
    }
  }

  explicit Ivel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->endeff_vel_x = 0.0f;
      this->endeff_vel_y = 0.0f;
      this->endeff_vel_z = 0.0f;
    }
  }

  // field types and members
  using _endeff_vel_x_type =
    float;
  _endeff_vel_x_type endeff_vel_x;
  using _endeff_vel_y_type =
    float;
  _endeff_vel_y_type endeff_vel_y;
  using _endeff_vel_z_type =
    float;
  _endeff_vel_z_type endeff_vel_z;

  // setters for named parameter idiom
  Type & set__endeff_vel_x(
    const float & _arg)
  {
    this->endeff_vel_x = _arg;
    return *this;
  }
  Type & set__endeff_vel_y(
    const float & _arg)
  {
    this->endeff_vel_y = _arg;
    return *this;
  }
  Type & set__endeff_vel_z(
    const float & _arg)
  {
    this->endeff_vel_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ikinterface::srv::Ivel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ikinterface::srv::Ivel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ikinterface::srv::Ivel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ikinterface::srv::Ivel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ikinterface::srv::Ivel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ikinterface::srv::Ivel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ikinterface::srv::Ivel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ikinterface::srv::Ivel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ikinterface::srv::Ivel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ikinterface::srv::Ivel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ikinterface__srv__Ivel_Request
    std::shared_ptr<ikinterface::srv::Ivel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ikinterface__srv__Ivel_Request
    std::shared_ptr<ikinterface::srv::Ivel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ivel_Request_ & other) const
  {
    if (this->endeff_vel_x != other.endeff_vel_x) {
      return false;
    }
    if (this->endeff_vel_y != other.endeff_vel_y) {
      return false;
    }
    if (this->endeff_vel_z != other.endeff_vel_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ivel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ivel_Request_

// alias to use template instance with default allocator
using Ivel_Request =
  ikinterface::srv::Ivel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ikinterface


#ifndef _WIN32
# define DEPRECATED__ikinterface__srv__Ivel_Response __attribute__((deprecated))
#else
# define DEPRECATED__ikinterface__srv__Ivel_Response __declspec(deprecated)
#endif

namespace ikinterface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Ivel_Response_
{
  using Type = Ivel_Response_<ContainerAllocator>;

  explicit Ivel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint1_vel = 0.0;
      this->joint2_vel = 0.0;
      this->joint3_vel = 0.0;
    }
  }

  explicit Ivel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint1_vel = 0.0;
      this->joint2_vel = 0.0;
      this->joint3_vel = 0.0;
    }
  }

  // field types and members
  using _joint1_vel_type =
    double;
  _joint1_vel_type joint1_vel;
  using _joint2_vel_type =
    double;
  _joint2_vel_type joint2_vel;
  using _joint3_vel_type =
    double;
  _joint3_vel_type joint3_vel;

  // setters for named parameter idiom
  Type & set__joint1_vel(
    const double & _arg)
  {
    this->joint1_vel = _arg;
    return *this;
  }
  Type & set__joint2_vel(
    const double & _arg)
  {
    this->joint2_vel = _arg;
    return *this;
  }
  Type & set__joint3_vel(
    const double & _arg)
  {
    this->joint3_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ikinterface::srv::Ivel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ikinterface::srv::Ivel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ikinterface::srv::Ivel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ikinterface::srv::Ivel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ikinterface::srv::Ivel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ikinterface::srv::Ivel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ikinterface::srv::Ivel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ikinterface::srv::Ivel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ikinterface::srv::Ivel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ikinterface::srv::Ivel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ikinterface__srv__Ivel_Response
    std::shared_ptr<ikinterface::srv::Ivel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ikinterface__srv__Ivel_Response
    std::shared_ptr<ikinterface::srv::Ivel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ivel_Response_ & other) const
  {
    if (this->joint1_vel != other.joint1_vel) {
      return false;
    }
    if (this->joint2_vel != other.joint2_vel) {
      return false;
    }
    if (this->joint3_vel != other.joint3_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ivel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ivel_Response_

// alias to use template instance with default allocator
using Ivel_Response =
  ikinterface::srv::Ivel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ikinterface

namespace ikinterface
{

namespace srv
{

struct Ivel
{
  using Request = ikinterface::srv::Ivel_Request;
  using Response = ikinterface::srv::Ivel_Response;
};

}  // namespace srv

}  // namespace ikinterface

#endif  // IKINTERFACE__SRV__DETAIL__IVEL__STRUCT_HPP_
