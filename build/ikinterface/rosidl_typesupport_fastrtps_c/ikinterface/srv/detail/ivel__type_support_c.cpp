// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ikinterface:srv/Ivel.idl
// generated code does not contain a copyright notice
#include "ikinterface/srv/detail/ivel__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ikinterface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ikinterface/srv/detail/ivel__struct.h"
#include "ikinterface/srv/detail/ivel__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Ivel_Request__ros_msg_type = ikinterface__srv__Ivel_Request;

static bool _Ivel_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Ivel_Request__ros_msg_type * ros_message = static_cast<const _Ivel_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: endeff_vel_x
  {
    cdr << ros_message->endeff_vel_x;
  }

  // Field name: endeff_vel_y
  {
    cdr << ros_message->endeff_vel_y;
  }

  // Field name: endeff_vel_z
  {
    cdr << ros_message->endeff_vel_z;
  }

  return true;
}

static bool _Ivel_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Ivel_Request__ros_msg_type * ros_message = static_cast<_Ivel_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: endeff_vel_x
  {
    cdr >> ros_message->endeff_vel_x;
  }

  // Field name: endeff_vel_y
  {
    cdr >> ros_message->endeff_vel_y;
  }

  // Field name: endeff_vel_z
  {
    cdr >> ros_message->endeff_vel_z;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ikinterface
size_t get_serialized_size_ikinterface__srv__Ivel_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Ivel_Request__ros_msg_type * ros_message = static_cast<const _Ivel_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name endeff_vel_x
  {
    size_t item_size = sizeof(ros_message->endeff_vel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name endeff_vel_y
  {
    size_t item_size = sizeof(ros_message->endeff_vel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name endeff_vel_z
  {
    size_t item_size = sizeof(ros_message->endeff_vel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Ivel_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ikinterface__srv__Ivel_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ikinterface
size_t max_serialized_size_ikinterface__srv__Ivel_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: endeff_vel_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: endeff_vel_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: endeff_vel_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Ivel_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ikinterface__srv__Ivel_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Ivel_Request = {
  "ikinterface::srv",
  "Ivel_Request",
  _Ivel_Request__cdr_serialize,
  _Ivel_Request__cdr_deserialize,
  _Ivel_Request__get_serialized_size,
  _Ivel_Request__max_serialized_size
};

static rosidl_message_type_support_t _Ivel_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Ivel_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ikinterface, srv, Ivel_Request)() {
  return &_Ivel_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ikinterface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ikinterface/srv/detail/ivel__struct.h"
// already included above
// #include "ikinterface/srv/detail/ivel__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Ivel_Response__ros_msg_type = ikinterface__srv__Ivel_Response;

static bool _Ivel_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Ivel_Response__ros_msg_type * ros_message = static_cast<const _Ivel_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: joint1_vel
  {
    cdr << ros_message->joint1_vel;
  }

  // Field name: joint2_vel
  {
    cdr << ros_message->joint2_vel;
  }

  // Field name: joint3_vel
  {
    cdr << ros_message->joint3_vel;
  }

  return true;
}

static bool _Ivel_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Ivel_Response__ros_msg_type * ros_message = static_cast<_Ivel_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: joint1_vel
  {
    cdr >> ros_message->joint1_vel;
  }

  // Field name: joint2_vel
  {
    cdr >> ros_message->joint2_vel;
  }

  // Field name: joint3_vel
  {
    cdr >> ros_message->joint3_vel;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ikinterface
size_t get_serialized_size_ikinterface__srv__Ivel_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Ivel_Response__ros_msg_type * ros_message = static_cast<const _Ivel_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint1_vel
  {
    size_t item_size = sizeof(ros_message->joint1_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint2_vel
  {
    size_t item_size = sizeof(ros_message->joint2_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint3_vel
  {
    size_t item_size = sizeof(ros_message->joint3_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Ivel_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ikinterface__srv__Ivel_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ikinterface
size_t max_serialized_size_ikinterface__srv__Ivel_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: joint1_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint2_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint3_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Ivel_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ikinterface__srv__Ivel_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Ivel_Response = {
  "ikinterface::srv",
  "Ivel_Response",
  _Ivel_Response__cdr_serialize,
  _Ivel_Response__cdr_deserialize,
  _Ivel_Response__get_serialized_size,
  _Ivel_Response__max_serialized_size
};

static rosidl_message_type_support_t _Ivel_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Ivel_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ikinterface, srv, Ivel_Response)() {
  return &_Ivel_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "ikinterface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ikinterface/srv/ivel.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Ivel__callbacks = {
  "ikinterface::srv",
  "Ivel",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ikinterface, srv, Ivel_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ikinterface, srv, Ivel_Response)(),
};

static rosidl_service_type_support_t Ivel__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Ivel__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ikinterface, srv, Ivel)() {
  return &Ivel__handle;
}

#if defined(__cplusplus)
}
#endif
