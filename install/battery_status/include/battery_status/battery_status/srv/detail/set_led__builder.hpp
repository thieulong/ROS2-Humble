// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from battery_status:srv/SetLED.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_STATUS__SRV__DETAIL__SET_LED__BUILDER_HPP_
#define BATTERY_STATUS__SRV__DETAIL__SET_LED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "battery_status/srv/detail/set_led__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace battery_status
{

namespace srv
{

namespace builder
{

class Init_SetLED_Request_state
{
public:
  explicit Init_SetLED_Request_state(::battery_status::srv::SetLED_Request & msg)
  : msg_(msg)
  {}
  ::battery_status::srv::SetLED_Request state(::battery_status::srv::SetLED_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_status::srv::SetLED_Request msg_;
};

class Init_SetLED_Request_led_number
{
public:
  Init_SetLED_Request_led_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLED_Request_state led_number(::battery_status::srv::SetLED_Request::_led_number_type arg)
  {
    msg_.led_number = std::move(arg);
    return Init_SetLED_Request_state(msg_);
  }

private:
  ::battery_status::srv::SetLED_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_status::srv::SetLED_Request>()
{
  return battery_status::srv::builder::Init_SetLED_Request_led_number();
}

}  // namespace battery_status


namespace battery_status
{

namespace srv
{

namespace builder
{

class Init_SetLED_Response_success
{
public:
  Init_SetLED_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::battery_status::srv::SetLED_Response success(::battery_status::srv::SetLED_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_status::srv::SetLED_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_status::srv::SetLED_Response>()
{
  return battery_status::srv::builder::Init_SetLED_Response_success();
}

}  // namespace battery_status

#endif  // BATTERY_STATUS__SRV__DETAIL__SET_LED__BUILDER_HPP_
