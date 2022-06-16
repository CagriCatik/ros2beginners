// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interfaces:msg/LedStateArray.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__TRAITS_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__TRAITS_HPP_

#include "robot_interfaces/msg/detail/led_state_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_interfaces::msg::LedStateArray>()
{
  return "robot_interfaces::msg::LedStateArray";
}

template<>
inline const char * name<robot_interfaces::msg::LedStateArray>()
{
  return "robot_interfaces/msg/LedStateArray";
}

template<>
struct has_fixed_size<robot_interfaces::msg::LedStateArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_interfaces::msg::LedStateArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_interfaces::msg::LedStateArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__TRAITS_HPP_
