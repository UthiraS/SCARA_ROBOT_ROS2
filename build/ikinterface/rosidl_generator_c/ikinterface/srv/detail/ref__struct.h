// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ikinterface:srv/Ref.idl
// generated code does not contain a copyright notice

#ifndef IKINTERFACE__SRV__DETAIL__REF__STRUCT_H_
#define IKINTERFACE__SRV__DETAIL__REF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Ref in the package ikinterface.
typedef struct ikinterface__srv__Ref_Request
{
  double a;
  double b;
  double c;
} ikinterface__srv__Ref_Request;

// Struct for a sequence of ikinterface__srv__Ref_Request.
typedef struct ikinterface__srv__Ref_Request__Sequence
{
  ikinterface__srv__Ref_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ikinterface__srv__Ref_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Ref in the package ikinterface.
typedef struct ikinterface__srv__Ref_Response
{
  float i;
} ikinterface__srv__Ref_Response;

// Struct for a sequence of ikinterface__srv__Ref_Response.
typedef struct ikinterface__srv__Ref_Response__Sequence
{
  ikinterface__srv__Ref_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ikinterface__srv__Ref_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IKINTERFACE__SRV__DETAIL__REF__STRUCT_H_
