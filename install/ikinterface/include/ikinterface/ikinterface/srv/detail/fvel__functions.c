// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ikinterface:srv/Fvel.idl
// generated code does not contain a copyright notice
#include "ikinterface/srv/detail/fvel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
ikinterface__srv__Fvel_Request__init(ikinterface__srv__Fvel_Request * msg)
{
  if (!msg) {
    return false;
  }
  // joint1_vel
  // joint2_vel
  // joint3_vel
  return true;
}

void
ikinterface__srv__Fvel_Request__fini(ikinterface__srv__Fvel_Request * msg)
{
  if (!msg) {
    return;
  }
  // joint1_vel
  // joint2_vel
  // joint3_vel
}

bool
ikinterface__srv__Fvel_Request__are_equal(const ikinterface__srv__Fvel_Request * lhs, const ikinterface__srv__Fvel_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint1_vel
  if (lhs->joint1_vel != rhs->joint1_vel) {
    return false;
  }
  // joint2_vel
  if (lhs->joint2_vel != rhs->joint2_vel) {
    return false;
  }
  // joint3_vel
  if (lhs->joint3_vel != rhs->joint3_vel) {
    return false;
  }
  return true;
}

bool
ikinterface__srv__Fvel_Request__copy(
  const ikinterface__srv__Fvel_Request * input,
  ikinterface__srv__Fvel_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // joint1_vel
  output->joint1_vel = input->joint1_vel;
  // joint2_vel
  output->joint2_vel = input->joint2_vel;
  // joint3_vel
  output->joint3_vel = input->joint3_vel;
  return true;
}

ikinterface__srv__Fvel_Request *
ikinterface__srv__Fvel_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ikinterface__srv__Fvel_Request * msg = (ikinterface__srv__Fvel_Request *)allocator.allocate(sizeof(ikinterface__srv__Fvel_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ikinterface__srv__Fvel_Request));
  bool success = ikinterface__srv__Fvel_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ikinterface__srv__Fvel_Request__destroy(ikinterface__srv__Fvel_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ikinterface__srv__Fvel_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ikinterface__srv__Fvel_Request__Sequence__init(ikinterface__srv__Fvel_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ikinterface__srv__Fvel_Request * data = NULL;

  if (size) {
    data = (ikinterface__srv__Fvel_Request *)allocator.zero_allocate(size, sizeof(ikinterface__srv__Fvel_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ikinterface__srv__Fvel_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ikinterface__srv__Fvel_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ikinterface__srv__Fvel_Request__Sequence__fini(ikinterface__srv__Fvel_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ikinterface__srv__Fvel_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ikinterface__srv__Fvel_Request__Sequence *
ikinterface__srv__Fvel_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ikinterface__srv__Fvel_Request__Sequence * array = (ikinterface__srv__Fvel_Request__Sequence *)allocator.allocate(sizeof(ikinterface__srv__Fvel_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ikinterface__srv__Fvel_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ikinterface__srv__Fvel_Request__Sequence__destroy(ikinterface__srv__Fvel_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ikinterface__srv__Fvel_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ikinterface__srv__Fvel_Request__Sequence__are_equal(const ikinterface__srv__Fvel_Request__Sequence * lhs, const ikinterface__srv__Fvel_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ikinterface__srv__Fvel_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ikinterface__srv__Fvel_Request__Sequence__copy(
  const ikinterface__srv__Fvel_Request__Sequence * input,
  ikinterface__srv__Fvel_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ikinterface__srv__Fvel_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ikinterface__srv__Fvel_Request * data =
      (ikinterface__srv__Fvel_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ikinterface__srv__Fvel_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ikinterface__srv__Fvel_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ikinterface__srv__Fvel_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ikinterface__srv__Fvel_Response__init(ikinterface__srv__Fvel_Response * msg)
{
  if (!msg) {
    return false;
  }
  // endeff_vel_x
  // endeff_vel_y
  // endeff_vel_z
  return true;
}

void
ikinterface__srv__Fvel_Response__fini(ikinterface__srv__Fvel_Response * msg)
{
  if (!msg) {
    return;
  }
  // endeff_vel_x
  // endeff_vel_y
  // endeff_vel_z
}

bool
ikinterface__srv__Fvel_Response__are_equal(const ikinterface__srv__Fvel_Response * lhs, const ikinterface__srv__Fvel_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // endeff_vel_x
  if (lhs->endeff_vel_x != rhs->endeff_vel_x) {
    return false;
  }
  // endeff_vel_y
  if (lhs->endeff_vel_y != rhs->endeff_vel_y) {
    return false;
  }
  // endeff_vel_z
  if (lhs->endeff_vel_z != rhs->endeff_vel_z) {
    return false;
  }
  return true;
}

bool
ikinterface__srv__Fvel_Response__copy(
  const ikinterface__srv__Fvel_Response * input,
  ikinterface__srv__Fvel_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // endeff_vel_x
  output->endeff_vel_x = input->endeff_vel_x;
  // endeff_vel_y
  output->endeff_vel_y = input->endeff_vel_y;
  // endeff_vel_z
  output->endeff_vel_z = input->endeff_vel_z;
  return true;
}

ikinterface__srv__Fvel_Response *
ikinterface__srv__Fvel_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ikinterface__srv__Fvel_Response * msg = (ikinterface__srv__Fvel_Response *)allocator.allocate(sizeof(ikinterface__srv__Fvel_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ikinterface__srv__Fvel_Response));
  bool success = ikinterface__srv__Fvel_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ikinterface__srv__Fvel_Response__destroy(ikinterface__srv__Fvel_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ikinterface__srv__Fvel_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ikinterface__srv__Fvel_Response__Sequence__init(ikinterface__srv__Fvel_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ikinterface__srv__Fvel_Response * data = NULL;

  if (size) {
    data = (ikinterface__srv__Fvel_Response *)allocator.zero_allocate(size, sizeof(ikinterface__srv__Fvel_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ikinterface__srv__Fvel_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ikinterface__srv__Fvel_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ikinterface__srv__Fvel_Response__Sequence__fini(ikinterface__srv__Fvel_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ikinterface__srv__Fvel_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ikinterface__srv__Fvel_Response__Sequence *
ikinterface__srv__Fvel_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ikinterface__srv__Fvel_Response__Sequence * array = (ikinterface__srv__Fvel_Response__Sequence *)allocator.allocate(sizeof(ikinterface__srv__Fvel_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ikinterface__srv__Fvel_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ikinterface__srv__Fvel_Response__Sequence__destroy(ikinterface__srv__Fvel_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ikinterface__srv__Fvel_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ikinterface__srv__Fvel_Response__Sequence__are_equal(const ikinterface__srv__Fvel_Response__Sequence * lhs, const ikinterface__srv__Fvel_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ikinterface__srv__Fvel_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ikinterface__srv__Fvel_Response__Sequence__copy(
  const ikinterface__srv__Fvel_Response__Sequence * input,
  ikinterface__srv__Fvel_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ikinterface__srv__Fvel_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ikinterface__srv__Fvel_Response * data =
      (ikinterface__srv__Fvel_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ikinterface__srv__Fvel_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ikinterface__srv__Fvel_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ikinterface__srv__Fvel_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
