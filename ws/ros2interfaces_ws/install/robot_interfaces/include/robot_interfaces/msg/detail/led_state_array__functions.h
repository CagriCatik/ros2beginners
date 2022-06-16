// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robot_interfaces:msg/LedStateArray.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__FUNCTIONS_H_
#define ROBOT_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "robot_interfaces/msg/detail/led_state_array__struct.h"

/// Initialize msg/LedStateArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_interfaces__msg__LedStateArray
 * )) before or use
 * robot_interfaces__msg__LedStateArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__msg__LedStateArray__init(robot_interfaces__msg__LedStateArray * msg);

/// Finalize msg/LedStateArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__msg__LedStateArray__fini(robot_interfaces__msg__LedStateArray * msg);

/// Create msg/LedStateArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_interfaces__msg__LedStateArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__msg__LedStateArray *
robot_interfaces__msg__LedStateArray__create();

/// Destroy msg/LedStateArray message.
/**
 * It calls
 * robot_interfaces__msg__LedStateArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__msg__LedStateArray__destroy(robot_interfaces__msg__LedStateArray * msg);


/// Initialize array of msg/LedStateArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_interfaces__msg__LedStateArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__msg__LedStateArray__Sequence__init(robot_interfaces__msg__LedStateArray__Sequence * array, size_t size);

/// Finalize array of msg/LedStateArray messages.
/**
 * It calls
 * robot_interfaces__msg__LedStateArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__msg__LedStateArray__Sequence__fini(robot_interfaces__msg__LedStateArray__Sequence * array);

/// Create array of msg/LedStateArray messages.
/**
 * It allocates the memory for the array and calls
 * robot_interfaces__msg__LedStateArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__msg__LedStateArray__Sequence *
robot_interfaces__msg__LedStateArray__Sequence__create(size_t size);

/// Destroy array of msg/LedStateArray messages.
/**
 * It calls
 * robot_interfaces__msg__LedStateArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__msg__LedStateArray__Sequence__destroy(robot_interfaces__msg__LedStateArray__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__FUNCTIONS_H_
