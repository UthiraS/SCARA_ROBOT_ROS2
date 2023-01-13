// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ikinterface:srv/Fvel.idl
// generated code does not contain a copyright notice

#ifndef IKINTERFACE__SRV__DETAIL__FVEL__TRAITS_HPP_
#define IKINTERFACE__SRV__DETAIL__FVEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ikinterface/srv/detail/fvel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ikinterface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Fvel_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint1_vel
  {
    out << "joint1_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.joint1_vel, out);
    out << ", ";
  }

  // member: joint2_vel
  {
    out << "joint2_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.joint2_vel, out);
    out << ", ";
  }

  // member: joint3_vel
  {
    out << "joint3_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.joint3_vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Fvel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint1_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint1_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.joint1_vel, out);
    out << "\n";
  }

  // member: joint2_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint2_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.joint2_vel, out);
    out << "\n";
  }

  // member: joint3_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint3_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.joint3_vel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Fvel_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ikinterface

namespace rosidl_generator_traits
{

[[deprecated("use ikinterface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ikinterface::srv::Fvel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ikinterface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ikinterface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ikinterface::srv::Fvel_Request & msg)
{
  return ikinterface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ikinterface::srv::Fvel_Request>()
{
  return "ikinterface::srv::Fvel_Request";
}

template<>
inline const char * name<ikinterface::srv::Fvel_Request>()
{
  return "ikinterface/srv/Fvel_Request";
}

template<>
struct has_fixed_size<ikinterface::srv::Fvel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ikinterface::srv::Fvel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ikinterface::srv::Fvel_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ikinterface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Fvel_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: endeff_vel_x
  {
    out << "endeff_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.endeff_vel_x, out);
    out << ", ";
  }

  // member: endeff_vel_y
  {
    out << "endeff_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.endeff_vel_y, out);
    out << ", ";
  }

  // member: endeff_vel_z
  {
    out << "endeff_vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.endeff_vel_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Fvel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: endeff_vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "endeff_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.endeff_vel_x, out);
    out << "\n";
  }

  // member: endeff_vel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "endeff_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.endeff_vel_y, out);
    out << "\n";
  }

  // member: endeff_vel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "endeff_vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.endeff_vel_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Fvel_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ikinterface

namespace rosidl_generator_traits
{

[[deprecated("use ikinterface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ikinterface::srv::Fvel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ikinterface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ikinterface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ikinterface::srv::Fvel_Response & msg)
{
  return ikinterface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ikinterface::srv::Fvel_Response>()
{
  return "ikinterface::srv::Fvel_Response";
}

template<>
inline const char * name<ikinterface::srv::Fvel_Response>()
{
  return "ikinterface/srv/Fvel_Response";
}

template<>
struct has_fixed_size<ikinterface::srv::Fvel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ikinterface::srv::Fvel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ikinterface::srv::Fvel_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ikinterface::srv::Fvel>()
{
  return "ikinterface::srv::Fvel";
}

template<>
inline const char * name<ikinterface::srv::Fvel>()
{
  return "ikinterface/srv/Fvel";
}

template<>
struct has_fixed_size<ikinterface::srv::Fvel>
  : std::integral_constant<
    bool,
    has_fixed_size<ikinterface::srv::Fvel_Request>::value &&
    has_fixed_size<ikinterface::srv::Fvel_Response>::value
  >
{
};

template<>
struct has_bounded_size<ikinterface::srv::Fvel>
  : std::integral_constant<
    bool,
    has_bounded_size<ikinterface::srv::Fvel_Request>::value &&
    has_bounded_size<ikinterface::srv::Fvel_Response>::value
  >
{
};

template<>
struct is_service<ikinterface::srv::Fvel>
  : std::true_type
{
};

template<>
struct is_service_request<ikinterface::srv::Fvel_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ikinterface::srv::Fvel_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IKINTERFACE__SRV__DETAIL__FVEL__TRAITS_HPP_
