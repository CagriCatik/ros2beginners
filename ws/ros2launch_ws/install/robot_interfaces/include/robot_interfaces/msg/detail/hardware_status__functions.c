// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice
#include "robot_interfaces/msg/detail/hardware_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `debug_message`
#include "rosidl_runtime_c/string_functions.h"

bool
robot_interfaces__msg__HardwareStatus__init(robot_interfaces__msg__HardwareStatus * msg)
{
  if (!msg) {
    return false;
  }
  // temperature
  // are_motors_ready
  // debug_message
  if (!rosidl_runtime_c__String__init(&msg->debug_message)) {
    robot_interfaces__msg__HardwareStatus__fini(msg);
    return false;
  }
  return true;
}

void
robot_interfaces__msg__HardwareStatus__fini(robot_interfaces__msg__HardwareStatus * msg)
{
  if (!msg) {
    return;
  }
  // temperature
  // are_motors_ready
  // debug_message
  rosidl_runtime_c__String__fini(&msg->debug_message);
}

robot_interfaces__msg__HardwareStatus *
robot_interfaces__msg__HardwareStatus__create()
{
  robot_interfaces__msg__HardwareStatus * msg = (robot_interfaces__msg__HardwareStatus *)malloc(sizeof(robot_interfaces__msg__HardwareStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__msg__HardwareStatus));
  bool success = robot_interfaces__msg__HardwareStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__msg__HardwareStatus__destroy(robot_interfaces__msg__HardwareStatus * msg)
{
  if (msg) {
    robot_interfaces__msg__HardwareStatus__fini(msg);
  }
  free(msg);
}


bool
robot_interfaces__msg__HardwareStatus__Sequence__init(robot_interfaces__msg__HardwareStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robot_interfaces__msg__HardwareStatus * data = NULL;
  if (size) {
    data = (robot_interfaces__msg__HardwareStatus *)calloc(size, sizeof(robot_interfaces__msg__HardwareStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__msg__HardwareStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__msg__HardwareStatus__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_interfaces__msg__HardwareStatus__Sequence__fini(robot_interfaces__msg__HardwareStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_interfaces__msg__HardwareStatus__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_interfaces__msg__HardwareStatus__Sequence *
robot_interfaces__msg__HardwareStatus__Sequence__create(size_t size)
{
  robot_interfaces__msg__HardwareStatus__Sequence * array = (robot_interfaces__msg__HardwareStatus__Sequence *)malloc(sizeof(robot_interfaces__msg__HardwareStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__msg__HardwareStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robot_interfaces__msg__HardwareStatus__Sequence__destroy(robot_interfaces__msg__HardwareStatus__Sequence * array)
{
  if (array) {
    robot_interfaces__msg__HardwareStatus__Sequence__fini(array);
  }
  free(array);
}
