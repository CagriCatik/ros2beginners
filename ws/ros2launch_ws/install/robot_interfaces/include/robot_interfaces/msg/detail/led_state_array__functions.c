// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_interfaces:msg/LedStateArray.idl
// generated code does not contain a copyright notice
#include "robot_interfaces/msg/detail/led_state_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `led_states`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robot_interfaces__msg__LedStateArray__init(robot_interfaces__msg__LedStateArray * msg)
{
  if (!msg) {
    return false;
  }
  // led_states
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->led_states, 0)) {
    robot_interfaces__msg__LedStateArray__fini(msg);
    return false;
  }
  return true;
}

void
robot_interfaces__msg__LedStateArray__fini(robot_interfaces__msg__LedStateArray * msg)
{
  if (!msg) {
    return;
  }
  // led_states
  rosidl_runtime_c__int64__Sequence__fini(&msg->led_states);
}

robot_interfaces__msg__LedStateArray *
robot_interfaces__msg__LedStateArray__create()
{
  robot_interfaces__msg__LedStateArray * msg = (robot_interfaces__msg__LedStateArray *)malloc(sizeof(robot_interfaces__msg__LedStateArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__msg__LedStateArray));
  bool success = robot_interfaces__msg__LedStateArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__msg__LedStateArray__destroy(robot_interfaces__msg__LedStateArray * msg)
{
  if (msg) {
    robot_interfaces__msg__LedStateArray__fini(msg);
  }
  free(msg);
}


bool
robot_interfaces__msg__LedStateArray__Sequence__init(robot_interfaces__msg__LedStateArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robot_interfaces__msg__LedStateArray * data = NULL;
  if (size) {
    data = (robot_interfaces__msg__LedStateArray *)calloc(size, sizeof(robot_interfaces__msg__LedStateArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__msg__LedStateArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__msg__LedStateArray__fini(&data[i - 1]);
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
robot_interfaces__msg__LedStateArray__Sequence__fini(robot_interfaces__msg__LedStateArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_interfaces__msg__LedStateArray__fini(&array->data[i]);
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

robot_interfaces__msg__LedStateArray__Sequence *
robot_interfaces__msg__LedStateArray__Sequence__create(size_t size)
{
  robot_interfaces__msg__LedStateArray__Sequence * array = (robot_interfaces__msg__LedStateArray__Sequence *)malloc(sizeof(robot_interfaces__msg__LedStateArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__msg__LedStateArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robot_interfaces__msg__LedStateArray__Sequence__destroy(robot_interfaces__msg__LedStateArray__Sequence * array)
{
  if (array) {
    robot_interfaces__msg__LedStateArray__Sequence__fini(array);
  }
  free(array);
}
