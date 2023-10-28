// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from battery_status:msg/LEDState.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_STATUS__MSG__DETAIL__LED_STATE__TRAITS_HPP_
#define BATTERY_STATUS__MSG__DETAIL__LED_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "battery_status/msg/detail/led_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace battery_status
{

namespace msg
{

inline void to_flow_style_yaml(
  const LEDState & msg,
  std::ostream & out)
{
  out << "{";
  // member: led_states
  {
    if (msg.led_states.size() == 0) {
      out << "led_states: []";
    } else {
      out << "led_states: [";
      size_t pending_items = msg.led_states.size();
      for (auto item : msg.led_states) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LEDState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.led_states.size() == 0) {
      out << "led_states: []\n";
    } else {
      out << "led_states:\n";
      for (auto item : msg.led_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LEDState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace battery_status

namespace rosidl_generator_traits
{

[[deprecated("use battery_status::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const battery_status::msg::LEDState & msg,
  std::ostream & out, size_t indentation = 0)
{
  battery_status::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use battery_status::msg::to_yaml() instead")]]
inline std::string to_yaml(const battery_status::msg::LEDState & msg)
{
  return battery_status::msg::to_yaml(msg);
}

template<>
inline const char * data_type<battery_status::msg::LEDState>()
{
  return "battery_status::msg::LEDState";
}

template<>
inline const char * name<battery_status::msg::LEDState>()
{
  return "battery_status/msg/LEDState";
}

template<>
struct has_fixed_size<battery_status::msg::LEDState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<battery_status::msg::LEDState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<battery_status::msg::LEDState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BATTERY_STATUS__MSG__DETAIL__LED_STATE__TRAITS_HPP_
