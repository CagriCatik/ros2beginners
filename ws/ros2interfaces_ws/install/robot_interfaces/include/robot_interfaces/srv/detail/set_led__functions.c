// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_interfaces:srv/SetLed.idl
// generated code does not contain a copyright notice
#include "robot_interfaces/srv/detail/set_led__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
robot_interfaces__srv__SetLed_Request__init(robot_interfaces__srv__SetLed_Request * msg)
{
  if (!msg) {
    return false;
  }
  // led_number
  // state
  return true;
}

void
robot_interfaces__srv__SetLed_Request__fini(robot_interfaces__srv__SetLed_Request * msg)
{
  if (!msg) {
    return;
  }
  // led_number
  // state
}

robot_interfaces__srv__SetLed_Request *
robot_interfaces__srv__SetLed_Request__create()
{
  robot_interfaces__srv__SetLed_Request * msg = (robot_interfaces__srv__SetLed_Request *)malloc(sizeof(robot_interfaces__srv__SetLed_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__srv__SetLed_Request));
  bool success = robot_interfaces__srv__SetLed_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__srv__SetLed_Request__destroy(robot_interfaces__srv__SetLed_Request * msg)
{
  if (msg) {
    robot_interfaces__srv__SetLed_Request__fini(msg);
  }
  free(msg);
}


bool
robot_interfaces__srv__SetLed_Request__Sequence__init(robot_interfaces__srv__SetLed_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robot_interfaces__srv__SetLed_Request * data = NULL;
  if (size) {
    data = (robot_interfaces__srv__SetLed_Request *)calloc(size, sizeof(robot_interfaces__srv__SetLed_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__srv__SetLed_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__srv__SetLed_Request__fini(&data[i - 1]);
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
robot_interfaces__srv__SetLed_Request__Sequence__fini(robot_interfaces__srv__SetLed_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_interfaces__srv__SetLed_Request__fini(&array->data[i]);
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

robot_interfaces__srv__SetLed_Request__Sequence *
robot_interfaces__srv__SetLed_Request__Sequence__create(size_t size)
{
  robot_interfaces__srv__SetLed_Request__Sequence * array = (robot_interfaces__srv__SetLed_Request__Sequence *)malloc(sizeof(robot_interfaces__srv__SetLed_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__srv__SetLed_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robot_interfaces__srv__SetLed_Request__Sequence__destroy(robot_interfaces__srv__SetLed_Request__Sequence * array)
{
  if (array) {
    robot_interfaces__srv__SetLed_Request__Sequence__fini(array);
  }
  free(array);
}


bool
robot_interfaces__srv__SetLed_Response__init(robot_interfaces__srv__SetLed_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
robot_interfaces__srv__SetLed_Response__fini(robot_interfaces__srv__SetLed_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

robot_interfaces__srv__SetLed_Response *
robot_interfaces__srv__SetLed_Response__create()
{
  robot_interfaces__srv__SetLed_Response * msg = (robot_interfaces__srv__SetLed_Response *)malloc(sizeof(robot_interfaces__srv__SetLed_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__srv__SetLed_Response));
  bool success = robot_interfaces__srv__SetLed_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__srv__SetLed_Response__destroy(robot_interfaces__srv__SetLed_Response * msg)
{
  if (msg) {
    robot_interfaces__srv__SetLed_Response__fini(msg);
  }
  free(msg);
}


bool
robot_interfaces__srv__SetLed_Response__Sequence__init(robot_interfaces__srv__SetLed_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robot_interfaces__srv__SetLed_Response * data = NULL;
  if (size) {
    data = (robot_interfaces__srv__SetLed_Response *)calloc(size, sizeof(robot_interfaces__srv__SetLed_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__srv__SetLed_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__srv__SetLed_Response__fini(&data[i - 1]);
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
robot_interfaces__srv__SetLed_Response__Sequence__fini(robot_interfaces__srv__SetLed_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_interfaces__srv__SetLed_Response__fini(&array->data[i]);
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

robot_interfaces__srv__SetLed_Response__Sequence *
robot_interfaces__srv__SetLed_Response__Sequence__create(size_t size)
{
  robot_interfaces__srv__SetLed_Response__Sequence * array = (robot_interfaces__srv__SetLed_Response__Sequence *)malloc(sizeof(robot_interfaces__srv__SetLed_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__srv__SetLed_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robot_interfaces__srv__SetLed_Response__Sequence__destroy(robot_interfaces__srv__SetLed_Response__Sequence * array)
{
  if (array) {
    robot_interfaces__srv__SetLed_Response__Sequence__fini(array);
  }
  free(array);
}
