// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces:msg/LedStateArray.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__STRUCT_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robot_interfaces__msg__LedStateArray __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__msg__LedStateArray __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedStateArray_
{
  using Type = LedStateArray_<ContainerAllocator>;

  explicit LedStateArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LedStateArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _led_states_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _led_states_type led_states;

  // setters for named parameter idiom
  Type & set__led_states(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->led_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::msg::LedStateArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::msg::LedStateArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::msg::LedStateArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::msg::LedStateArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::LedStateArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::LedStateArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::LedStateArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::LedStateArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::msg::LedStateArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::msg::LedStateArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__msg__LedStateArray
    std::shared_ptr<robot_interfaces::msg::LedStateArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__msg__LedStateArray
    std::shared_ptr<robot_interfaces::msg::LedStateArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedStateArray_ & other) const
  {
    if (this->led_states != other.led_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedStateArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedStateArray_

// alias to use template instance with default allocator
using LedStateArray =
  robot_interfaces::msg::LedStateArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__STRUCT_HPP_
