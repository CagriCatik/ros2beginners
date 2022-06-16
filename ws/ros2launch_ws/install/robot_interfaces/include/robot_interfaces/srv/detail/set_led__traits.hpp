// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interfaces:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__SRV__DETAIL__SET_LED__TRAITS_HPP_
#define ROBOT_INTERFACES__SRV__DETAIL__SET_LED__TRAITS_HPP_

#include "robot_interfaces/srv/detail/set_led__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_interfaces::srv::SetLed_Request>()
{
  return "robot_interfaces::srv::SetLed_Request";
}

template<>
inline const char * name<robot_interfaces::srv::SetLed_Request>()
{
  return "robot_interfaces/srv/SetLed_Request";
}

template<>
struct has_fixed_size<robot_interfaces::srv::SetLed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_interfaces::srv::SetLed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_interfaces::srv::SetLed_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_interfaces::srv::SetLed_Response>()
{
  return "robot_interfaces::srv::SetLed_Response";
}

template<>
inline const char * name<robot_interfaces::srv::SetLed_Response>()
{
  return "robot_interfaces/srv/SetLed_Response";
}

template<>
struct has_fixed_size<robot_interfaces::srv::SetLed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_interfaces::srv::SetLed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_interfaces::srv::SetLed_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_interfaces::srv::SetLed>()
{
  return "robot_interfaces::srv::SetLed";
}

template<>
inline const char * name<robot_interfaces::srv::SetLed>()
{
  return "robot_interfaces/srv/SetLed";
}

template<>
struct has_fixed_size<robot_interfaces::srv::SetLed>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_interfaces::srv::SetLed_Request>::value &&
    has_fixed_size<robot_interfaces::srv::SetLed_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_interfaces::srv::SetLed>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_interfaces::srv::SetLed_Request>::value &&
    has_bounded_size<robot_interfaces::srv::SetLed_Response>::value
  >
{
};

template<>
struct is_service<robot_interfaces::srv::SetLed>
  : std::true_type
{
};

template<>
struct is_service_request<robot_interfaces::srv::SetLed_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_interfaces::srv::SetLed_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_INTERFACES__SRV__DETAIL__SET_LED__TRAITS_HPP_
