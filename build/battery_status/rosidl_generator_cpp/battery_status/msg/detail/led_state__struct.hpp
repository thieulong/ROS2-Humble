// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from battery_status:msg/LEDState.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_STATUS__MSG__DETAIL__LED_STATE__STRUCT_HPP_
#define BATTERY_STATUS__MSG__DETAIL__LED_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__battery_status__msg__LEDState __attribute__((deprecated))
#else
# define DEPRECATED__battery_status__msg__LEDState __declspec(deprecated)
#endif

namespace battery_status
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LEDState_
{
  using Type = LEDState_<ContainerAllocator>;

  explicit LEDState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LEDState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _led_states_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _led_states_type led_states;

  // setters for named parameter idiom
  Type & set__led_states(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->led_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    battery_status::msg::LEDState_<ContainerAllocator> *;
  using ConstRawPtr =
    const battery_status::msg::LEDState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<battery_status::msg::LEDState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<battery_status::msg::LEDState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      battery_status::msg::LEDState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<battery_status::msg::LEDState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      battery_status::msg::LEDState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<battery_status::msg::LEDState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<battery_status::msg::LEDState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<battery_status::msg::LEDState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__battery_status__msg__LEDState
    std::shared_ptr<battery_status::msg::LEDState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__battery_status__msg__LEDState
    std::shared_ptr<battery_status::msg::LEDState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LEDState_ & other) const
  {
    if (this->led_states != other.led_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const LEDState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LEDState_

// alias to use template instance with default allocator
using LEDState =
  battery_status::msg::LEDState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace battery_status

#endif  // BATTERY_STATUS__MSG__DETAIL__LED_STATE__STRUCT_HPP_
