// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from battery_status:msg/LEDState.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_STATUS__MSG__DETAIL__LED_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BATTERY_STATUS__MSG__DETAIL__LED_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "battery_status/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "battery_status/msg/detail/led_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace battery_status
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_status
cdr_serialize(
  const battery_status::msg::LEDState & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_status
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  battery_status::msg::LEDState & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_status
get_serialized_size(
  const battery_status::msg::LEDState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_status
max_serialized_size_LEDState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace battery_status

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_status
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_status, msg, LEDState)();

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_STATUS__MSG__DETAIL__LED_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
