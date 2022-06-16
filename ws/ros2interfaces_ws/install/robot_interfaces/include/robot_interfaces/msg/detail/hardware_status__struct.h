// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'debug_message'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/HardwareStatus in the package robot_interfaces.
typedef struct robot_interfaces__msg__HardwareStatus
{
  int64_t temperature;
  bool are_motors_ready;
  rosidl_runtime_c__String debug_message;
} robot_interfaces__msg__HardwareStatus;

// Struct for a sequence of robot_interfaces__msg__HardwareStatus.
typedef struct robot_interfaces__msg__HardwareStatus__Sequence
{
  robot_interfaces__msg__HardwareStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__HardwareStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__STRUCT_H_
