// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from battery_status:srv/SetLED.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_STATUS__SRV__DETAIL__SET_LED__TRAITS_HPP_
#define BATTERY_STATUS__SRV__DETAIL__SET_LED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "battery_status/srv/detail/set_led__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace battery_status
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLED_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: led_number
  {
    out << "led_number: ";
    rosidl_generator_traits::value_to_yaml(msg.led_number, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLED_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_number: ";
    rosidl_generator_traits::value_to_yaml(msg.led_number, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLED_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace battery_status

namespace rosidl_generator_traits
{

[[deprecated("use battery_status::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const battery_status::srv::SetLED_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  battery_status::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use battery_status::srv::to_yaml() instead")]]
inline std::string to_yaml(const battery_status::srv::SetLED_Request & msg)
{
  return battery_status::srv::to_yaml(msg);
}

template<>
inline const char * data_type<battery_status::srv::SetLED_Request>()
{
  return "battery_status::srv::SetLED_Request";
}

template<>
inline const char * name<battery_status::srv::SetLED_Request>()
{
  return "battery_status/srv/SetLED_Request";
}

template<>
struct has_fixed_size<battery_status::srv::SetLED_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<battery_status::srv::SetLED_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<battery_status::srv::SetLED_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace battery_status
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLED_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLED_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLED_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace battery_status

namespace rosidl_generator_traits
{

[[deprecated("use battery_status::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const battery_status::srv::SetLED_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  battery_status::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use battery_status::srv::to_yaml() instead")]]
inline std::string to_yaml(const battery_status::srv::SetLED_Response & msg)
{
  return battery_status::srv::to_yaml(msg);
}

template<>
inline const char * data_type<battery_status::srv::SetLED_Response>()
{
  return "battery_status::srv::SetLED_Response";
}

template<>
inline const char * name<battery_status::srv::SetLED_Response>()
{
  return "battery_status/srv/SetLED_Response";
}

template<>
struct has_fixed_size<battery_status::srv::SetLED_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<battery_status::srv::SetLED_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<battery_status::srv::SetLED_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<battery_status::srv::SetLED>()
{
  return "battery_status::srv::SetLED";
}

template<>
inline const char * name<battery_status::srv::SetLED>()
{
  return "battery_status/srv/SetLED";
}

template<>
struct has_fixed_size<battery_status::srv::SetLED>
  : std::integral_constant<
    bool,
    has_fixed_size<battery_status::srv::SetLED_Request>::value &&
    has_fixed_size<battery_status::srv::SetLED_Response>::value
  >
{
};

template<>
struct has_bounded_size<battery_status::srv::SetLED>
  : std::integral_constant<
    bool,
    has_bounded_size<battery_status::srv::SetLED_Request>::value &&
    has_bounded_size<battery_status::srv::SetLED_Response>::value
  >
{
};

template<>
struct is_service<battery_status::srv::SetLED>
  : std::true_type
{
};

template<>
struct is_service_request<battery_status::srv::SetLED_Request>
  : std::true_type
{
};

template<>
struct is_service_response<battery_status::srv::SetLED_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BATTERY_STATUS__SRV__DETAIL__SET_LED__TRAITS_HPP_
