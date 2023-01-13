// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ikinterface:srv/Ivel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ikinterface/srv/detail/ivel__rosidl_typesupport_introspection_c.h"
#include "ikinterface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ikinterface/srv/detail/ivel__functions.h"
#include "ikinterface/srv/detail/ivel__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ikinterface__srv__Ivel_Request__rosidl_typesupport_introspection_c__Ivel_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ikinterface__srv__Ivel_Request__init(message_memory);
}

void ikinterface__srv__Ivel_Request__rosidl_typesupport_introspection_c__Ivel_Request_fini_function(void * message_memory)
{
  ikinterface__srv__Ivel_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ikinterface__srv__Ivel_Request__rosidl_typesupport_introspection_c__Ivel_Request_message_member_array[3] = {
  {
    "endeff_vel_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ikinterface__srv__Ivel_Request, endeff_vel_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "endeff_vel_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ikinterface__srv__Ivel_Request, endeff_vel_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "endeff_vel_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ikinterface__srv__Ivel_Request, endeff_vel_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ikinterface__srv__Ivel_Request__rosidl_typesupport_introspection_c__Ivel_Request_message_members = {
  "ikinterface__srv",  // message namespace
  "Ivel_Request",  // message name
  3,  // number of fields
  sizeof(ikinterface__srv__Ivel_Request),
  ikinterface__srv__Ivel_Request__rosidl_typesupport_introspection_c__Ivel_Request_message_member_array,  // message members
  ikinterface__srv__Ivel_Request__rosidl_typesupport_introspection_c__Ivel_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ikinterface__srv__Ivel_Request__rosidl_typesupport_introspection_c__Ivel_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ikinterface__srv__Ivel_Request__rosidl_typesupport_introspection_c__Ivel_Request_message_type_support_handle = {
  0,
  &ikinterface__srv__Ivel_Request__rosidl_typesupport_introspection_c__Ivel_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ikinterface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ikinterface, srv, Ivel_Request)() {
  if (!ikinterface__srv__Ivel_Request__rosidl_typesupport_introspection_c__Ivel_Request_message_type_support_handle.typesupport_identifier) {
    ikinterface__srv__Ivel_Request__rosidl_typesupport_introspection_c__Ivel_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ikinterface__srv__Ivel_Request__rosidl_typesupport_introspection_c__Ivel_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ikinterface/srv/detail/ivel__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ikinterface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ikinterface/srv/detail/ivel__functions.h"
// already included above
// #include "ikinterface/srv/detail/ivel__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ikinterface__srv__Ivel_Response__rosidl_typesupport_introspection_c__Ivel_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ikinterface__srv__Ivel_Response__init(message_memory);
}

void ikinterface__srv__Ivel_Response__rosidl_typesupport_introspection_c__Ivel_Response_fini_function(void * message_memory)
{
  ikinterface__srv__Ivel_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ikinterface__srv__Ivel_Response__rosidl_typesupport_introspection_c__Ivel_Response_message_member_array[3] = {
  {
    "joint1_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ikinterface__srv__Ivel_Response, joint1_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint2_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ikinterface__srv__Ivel_Response, joint2_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint3_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ikinterface__srv__Ivel_Response, joint3_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ikinterface__srv__Ivel_Response__rosidl_typesupport_introspection_c__Ivel_Response_message_members = {
  "ikinterface__srv",  // message namespace
  "Ivel_Response",  // message name
  3,  // number of fields
  sizeof(ikinterface__srv__Ivel_Response),
  ikinterface__srv__Ivel_Response__rosidl_typesupport_introspection_c__Ivel_Response_message_member_array,  // message members
  ikinterface__srv__Ivel_Response__rosidl_typesupport_introspection_c__Ivel_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ikinterface__srv__Ivel_Response__rosidl_typesupport_introspection_c__Ivel_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ikinterface__srv__Ivel_Response__rosidl_typesupport_introspection_c__Ivel_Response_message_type_support_handle = {
  0,
  &ikinterface__srv__Ivel_Response__rosidl_typesupport_introspection_c__Ivel_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ikinterface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ikinterface, srv, Ivel_Response)() {
  if (!ikinterface__srv__Ivel_Response__rosidl_typesupport_introspection_c__Ivel_Response_message_type_support_handle.typesupport_identifier) {
    ikinterface__srv__Ivel_Response__rosidl_typesupport_introspection_c__Ivel_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ikinterface__srv__Ivel_Response__rosidl_typesupport_introspection_c__Ivel_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ikinterface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ikinterface/srv/detail/ivel__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ikinterface__srv__detail__ivel__rosidl_typesupport_introspection_c__Ivel_service_members = {
  "ikinterface__srv",  // service namespace
  "Ivel",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ikinterface__srv__detail__ivel__rosidl_typesupport_introspection_c__Ivel_Request_message_type_support_handle,
  NULL  // response message
  // ikinterface__srv__detail__ivel__rosidl_typesupport_introspection_c__Ivel_Response_message_type_support_handle
};

static rosidl_service_type_support_t ikinterface__srv__detail__ivel__rosidl_typesupport_introspection_c__Ivel_service_type_support_handle = {
  0,
  &ikinterface__srv__detail__ivel__rosidl_typesupport_introspection_c__Ivel_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ikinterface, srv, Ivel_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ikinterface, srv, Ivel_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ikinterface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ikinterface, srv, Ivel)() {
  if (!ikinterface__srv__detail__ivel__rosidl_typesupport_introspection_c__Ivel_service_type_support_handle.typesupport_identifier) {
    ikinterface__srv__detail__ivel__rosidl_typesupport_introspection_c__Ivel_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ikinterface__srv__detail__ivel__rosidl_typesupport_introspection_c__Ivel_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ikinterface, srv, Ivel_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ikinterface, srv, Ivel_Response)()->data;
  }

  return &ikinterface__srv__detail__ivel__rosidl_typesupport_introspection_c__Ivel_service_type_support_handle;
}
