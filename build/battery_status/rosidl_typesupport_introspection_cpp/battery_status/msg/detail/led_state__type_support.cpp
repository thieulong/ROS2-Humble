// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from battery_status:msg/LEDState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "battery_status/msg/detail/led_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace battery_status
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LEDState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) battery_status::msg::LEDState(_init);
}

void LEDState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<battery_status::msg::LEDState *>(message_memory);
  typed_message->~LEDState();
}

size_t size_function__LEDState__led_states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LEDState__led_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LEDState__led_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LEDState__led_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__LEDState__led_states(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__LEDState__led_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__LEDState__led_states(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__LEDState__led_states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LEDState_message_member_array[1] = {
  {
    "led_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(battery_status::msg::LEDState, led_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__LEDState__led_states,  // size() function pointer
    get_const_function__LEDState__led_states,  // get_const(index) function pointer
    get_function__LEDState__led_states,  // get(index) function pointer
    fetch_function__LEDState__led_states,  // fetch(index, &value) function pointer
    assign_function__LEDState__led_states,  // assign(index, value) function pointer
    resize_function__LEDState__led_states  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LEDState_message_members = {
  "battery_status::msg",  // message namespace
  "LEDState",  // message name
  1,  // number of fields
  sizeof(battery_status::msg::LEDState),
  LEDState_message_member_array,  // message members
  LEDState_init_function,  // function to initialize message memory (memory has to be allocated)
  LEDState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LEDState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LEDState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace battery_status


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<battery_status::msg::LEDState>()
{
  return &::battery_status::msg::rosidl_typesupport_introspection_cpp::LEDState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, battery_status, msg, LEDState)() {
  return &::battery_status::msg::rosidl_typesupport_introspection_cpp::LEDState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
