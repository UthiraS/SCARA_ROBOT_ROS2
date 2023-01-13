// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ikinterface:srv/Ref.idl
// generated code does not contain a copyright notice

#ifndef IKINTERFACE__SRV__DETAIL__REF__TRAITS_HPP_
#define IKINTERFACE__SRV__DETAIL__REF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ikinterface/srv/detail/ref__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ikinterface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Ref_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ref_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ref_Request & msg, bool use_flow_style = false)
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
  const ikinterface::srv::Ref_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ikinterface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ikinterface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ikinterface::srv::Ref_Request & msg)
{
  return ikinterface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ikinterface::srv::Ref_Request>()
{
  return "ikinterface::srv::Ref_Request";
}

template<>
inline const char * name<ikinterface::srv::Ref_Request>()
{
  return "ikinterface/srv/Ref_Request";
}

template<>
struct has_fixed_size<ikinterface::srv::Ref_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ikinterface::srv::Ref_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ikinterface::srv::Ref_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ikinterface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Ref_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: i
  {
    out << "i: ";
    rosidl_generator_traits::value_to_yaml(msg.i, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ref_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: i
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i: ";
    rosidl_generator_traits::value_to_yaml(msg.i, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ref_Response & msg, bool use_flow_style = false)
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
  const ikinterface::srv::Ref_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ikinterface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ikinterface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ikinterface::srv::Ref_Response & msg)
{
  return ikinterface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ikinterface::srv::Ref_Response>()
{
  return "ikinterface::srv::Ref_Response";
}

template<>
inline const char * name<ikinterface::srv::Ref_Response>()
{
  return "ikinterface/srv/Ref_Response";
}

template<>
struct has_fixed_size<ikinterface::srv::Ref_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ikinterface::srv::Ref_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ikinterface::srv::Ref_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ikinterface::srv::Ref>()
{
  return "ikinterface::srv::Ref";
}

template<>
inline const char * name<ikinterface::srv::Ref>()
{
  return "ikinterface/srv/Ref";
}

template<>
struct has_fixed_size<ikinterface::srv::Ref>
  : std::integral_constant<
    bool,
    has_fixed_size<ikinterface::srv::Ref_Request>::value &&
    has_fixed_size<ikinterface::srv::Ref_Response>::value
  >
{
};

template<>
struct has_bounded_size<ikinterface::srv::Ref>
  : std::integral_constant<
    bool,
    has_bounded_size<ikinterface::srv::Ref_Request>::value &&
    has_bounded_size<ikinterface::srv::Ref_Response>::value
  >
{
};

template<>
struct is_service<ikinterface::srv::Ref>
  : std::true_type
{
};

template<>
struct is_service_request<ikinterface::srv::Ref_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ikinterface::srv::Ref_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IKINTERFACE__SRV__DETAIL__REF__TRAITS_HPP_
