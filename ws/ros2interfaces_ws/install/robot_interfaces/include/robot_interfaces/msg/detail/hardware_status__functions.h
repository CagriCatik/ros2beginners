// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robot_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__FUNCTIONS_H_
#define ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "robot_interfaces/msg/detail/hardware_status__struct.h"

/// Initialize msg/HardwareStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_interfaces__msg__HardwareStatus
 * )) before or use
 * robot_interfaces__msg__HardwareStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__msg__HardwareStatus__init(robot_interfaces__msg__HardwareStatus * msg);

/// Finalize msg/HardwareStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__msg__HardwareStatus__fini(robot_interfaces__msg__HardwareStatus * msg);

/// Create msg/HardwareStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_interfaces__msg__HardwareStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__msg__HardwareStatus *
robot_interfaces__msg__HardwareStatus__create();

/// Destroy msg/HardwareStatus message.
/**
 * It calls
 * robot_interfaces__msg__HardwareStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__msg__HardwareStatus__destroy(robot_interfaces__msg__HardwareStatus * msg);


/// Initialize array of msg/HardwareStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_interfaces__msg__HardwareStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__msg__HardwareStatus__Sequence__init(robot_interfaces__msg__HardwareStatus__Sequence * array, size_t size);

/// Finalize array of msg/HardwareStatus messages.
/**
 * It calls
 * robot_interfaces__msg__HardwareStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__msg__HardwareStatus__Sequence__fini(robot_interfaces__msg__HardwareStatus__Sequence * array);

/// Create array of msg/HardwareStatus messages.
/**
 * It allocates the memory for the array and calls
 * robot_interfaces__msg__HardwareStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__msg__HardwareStatus__Sequence *
robot_interfaces__msg__HardwareStatus__Sequence__create(size_t size);

/// Destroy array of msg/HardwareStatus messages.
/**
 * It calls
 * robot_interfaces__msg__HardwareStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__msg__HardwareStatus__Sequence__destroy(robot_interfaces__msg__HardwareStatus__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__FUNCTIONS_H_
