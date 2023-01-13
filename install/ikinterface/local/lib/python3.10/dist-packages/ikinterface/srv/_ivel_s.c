// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ikinterface:srv/Ivel.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ikinterface/srv/detail/ivel__struct.h"
#include "ikinterface/srv/detail/ivel__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ikinterface__srv__ivel__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ikinterface.srv._ivel.Ivel_Request", full_classname_dest, 34) == 0);
  }
  ikinterface__srv__Ivel_Request * ros_message = _ros_message;
  {  // endeff_vel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "endeff_vel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->endeff_vel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // endeff_vel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "endeff_vel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->endeff_vel_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // endeff_vel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "endeff_vel_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->endeff_vel_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ikinterface__srv__ivel__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Ivel_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ikinterface.srv._ivel");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Ivel_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ikinterface__srv__Ivel_Request * ros_message = (ikinterface__srv__Ivel_Request *)raw_ros_message;
  {  // endeff_vel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->endeff_vel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "endeff_vel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // endeff_vel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->endeff_vel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "endeff_vel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // endeff_vel_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->endeff_vel_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "endeff_vel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "ikinterface/srv/detail/ivel__struct.h"
// already included above
// #include "ikinterface/srv/detail/ivel__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ikinterface__srv__ivel__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ikinterface.srv._ivel.Ivel_Response", full_classname_dest, 35) == 0);
  }
  ikinterface__srv__Ivel_Response * ros_message = _ros_message;
  {  // joint1_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint1_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint1_vel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joint2_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint2_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint2_vel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joint3_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint3_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint3_vel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ikinterface__srv__ivel__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Ivel_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ikinterface.srv._ivel");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Ivel_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ikinterface__srv__Ivel_Response * ros_message = (ikinterface__srv__Ivel_Response *)raw_ros_message;
  {  // joint1_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint1_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint1_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint2_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint2_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint2_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint3_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint3_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint3_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
