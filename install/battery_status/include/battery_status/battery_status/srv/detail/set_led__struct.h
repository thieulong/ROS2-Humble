// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from battery_status:srv/SetLED.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_STATUS__SRV__DETAIL__SET_LED__STRUCT_H_
#define BATTERY_STATUS__SRV__DETAIL__SET_LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetLED in the package battery_status.
typedef struct battery_status__srv__SetLED_Request
{
  int64_t led_number;
  int64_t state;
} battery_status__srv__SetLED_Request;

// Struct for a sequence of battery_status__srv__SetLED_Request.
typedef struct battery_status__srv__SetLED_Request__Sequence
{
  battery_status__srv__SetLED_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_status__srv__SetLED_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetLED in the package battery_status.
typedef struct battery_status__srv__SetLED_Response
{
  bool success;
} battery_status__srv__SetLED_Response;

// Struct for a sequence of battery_status__srv__SetLED_Response.
typedef struct battery_status__srv__SetLED_Response__Sequence
{
  battery_status__srv__SetLED_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_status__srv__SetLED_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_STATUS__SRV__DETAIL__SET_LED__STRUCT_H_
