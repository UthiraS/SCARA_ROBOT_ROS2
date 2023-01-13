// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ikinterface:srv/Ref.idl
// generated code does not contain a copyright notice

#ifndef IKINTERFACE__SRV__DETAIL__REF__STRUCT_HPP_
#define IKINTERFACE__SRV__DETAIL__REF__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ikinterface__srv__Ref_Request __attribute__((deprecated))
#else
# define DEPRECATED__ikinterface__srv__Ref_Request __declspec(deprecated)
#endif

namespace ikinterface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Ref_Request_
{
  using Type = Ref_Request_<ContainerAllocator>;

  explicit Ref_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
      this->c = 0.0;
    }
  }

  explicit Ref_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
      this->c = 0.0;
    }
  }

  // field types and members
  using _a_type =
    double;
  _a_type a;
  using _b_type =
    double;
  _b_type b;
  using _c_type =
    double;
  _c_type c;

  // setters for named parameter idiom
  Type & set__a(
    const double & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const double & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const double & _arg)
  {
    this->c = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ikinterface::srv::Ref_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ikinterface::srv::Ref_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ikinterface::srv::Ref_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ikinterface::srv::Ref_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ikinterface::srv::Ref_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ikinterface::srv::Ref_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ikinterface::srv::Ref_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ikinterface::srv::Ref_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ikinterface::srv::Ref_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ikinterface::srv::Ref_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ikinterface__srv__Ref_Request
    std::shared_ptr<ikinterface::srv::Ref_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ikinterface__srv__Ref_Request
    std::shared_ptr<ikinterface::srv::Ref_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ref_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ref_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ref_Request_

// alias to use template instance with default allocator
using Ref_Request =
  ikinterface::srv::Ref_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ikinterface


#ifndef _WIN32
# define DEPRECATED__ikinterface__srv__Ref_Response __attribute__((deprecated))
#else
# define DEPRECATED__ikinterface__srv__Ref_Response __declspec(deprecated)
#endif

namespace ikinterface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Ref_Response_
{
  using Type = Ref_Response_<ContainerAllocator>;

  explicit Ref_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->i = 0.0f;
    }
  }

  explicit Ref_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->i = 0.0f;
    }
  }

  // field types and members
  using _i_type =
    float;
  _i_type i;

  // setters for named parameter idiom
  Type & set__i(
    const float & _arg)
  {
    this->i = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ikinterface::srv::Ref_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ikinterface::srv::Ref_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ikinterface::srv::Ref_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ikinterface::srv::Ref_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ikinterface::srv::Ref_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ikinterface::srv::Ref_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ikinterface::srv::Ref_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ikinterface::srv::Ref_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ikinterface::srv::Ref_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ikinterface::srv::Ref_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ikinterface__srv__Ref_Response
    std::shared_ptr<ikinterface::srv::Ref_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ikinterface__srv__Ref_Response
    std::shared_ptr<ikinterface::srv::Ref_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ref_Response_ & other) const
  {
    if (this->i != other.i) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ref_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ref_Response_

// alias to use template instance with default allocator
using Ref_Response =
  ikinterface::srv::Ref_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ikinterface

namespace ikinterface
{

namespace srv
{

struct Ref
{
  using Request = ikinterface::srv::Ref_Request;
  using Response = ikinterface::srv::Ref_Response;
};

}  // namespace srv

}  // namespace ikinterface

#endif  // IKINTERFACE__SRV__DETAIL__REF__STRUCT_HPP_
