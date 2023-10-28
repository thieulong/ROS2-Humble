// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from battery_status:msg/LEDState.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_STATUS__MSG__DETAIL__LED_STATE__BUILDER_HPP_
#define BATTERY_STATUS__MSG__DETAIL__LED_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "battery_status/msg/detail/led_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace battery_status
{

namespace msg
{

namespace builder
{

class Init_LEDState_led_states
{
public:
  Init_LEDState_led_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::battery_status::msg::LEDState led_states(::battery_status::msg::LEDState::_led_states_type arg)
  {
    msg_.led_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_status::msg::LEDState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_status::msg::LEDState>()
{
  return battery_status::msg::builder::Init_LEDState_led_states();
}

}  // namespace battery_status

#endif  // BATTERY_STATUS__MSG__DETAIL__LED_STATE__BUILDER_HPP_
