// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from battery_status:msg/LEDState.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_STATUS__MSG__DETAIL__LED_STATE__STRUCT_H_
#define BATTERY_STATUS__MSG__DETAIL__LED_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'led_states'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LEDState in the package battery_status.
typedef struct battery_status__msg__LEDState
{
  rosidl_runtime_c__int64__Sequence led_states;
} battery_status__msg__LEDState;

// Struct for a sequence of battery_status__msg__LEDState.
typedef struct battery_status__msg__LEDState__Sequence
{
  battery_status__msg__LEDState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_status__msg__LEDState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_STATUS__MSG__DETAIL__LED_STATE__STRUCT_H_
