// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from battery_status:msg/LEDState.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_STATUS__MSG__DETAIL__LED_STATE__FUNCTIONS_H_
#define BATTERY_STATUS__MSG__DETAIL__LED_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "battery_status/msg/rosidl_generator_c__visibility_control.h"

#include "battery_status/msg/detail/led_state__struct.h"

/// Initialize msg/LEDState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * battery_status__msg__LEDState
 * )) before or use
 * battery_status__msg__LEDState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
bool
battery_status__msg__LEDState__init(battery_status__msg__LEDState * msg);

/// Finalize msg/LEDState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
void
battery_status__msg__LEDState__fini(battery_status__msg__LEDState * msg);

/// Create msg/LEDState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * battery_status__msg__LEDState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
battery_status__msg__LEDState *
battery_status__msg__LEDState__create();

/// Destroy msg/LEDState message.
/**
 * It calls
 * battery_status__msg__LEDState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
void
battery_status__msg__LEDState__destroy(battery_status__msg__LEDState * msg);

/// Check for msg/LEDState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
bool
battery_status__msg__LEDState__are_equal(const battery_status__msg__LEDState * lhs, const battery_status__msg__LEDState * rhs);

/// Copy a msg/LEDState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
bool
battery_status__msg__LEDState__copy(
  const battery_status__msg__LEDState * input,
  battery_status__msg__LEDState * output);

/// Initialize array of msg/LEDState messages.
/**
 * It allocates the memory for the number of elements and calls
 * battery_status__msg__LEDState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
bool
battery_status__msg__LEDState__Sequence__init(battery_status__msg__LEDState__Sequence * array, size_t size);

/// Finalize array of msg/LEDState messages.
/**
 * It calls
 * battery_status__msg__LEDState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
void
battery_status__msg__LEDState__Sequence__fini(battery_status__msg__LEDState__Sequence * array);

/// Create array of msg/LEDState messages.
/**
 * It allocates the memory for the array and calls
 * battery_status__msg__LEDState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
battery_status__msg__LEDState__Sequence *
battery_status__msg__LEDState__Sequence__create(size_t size);

/// Destroy array of msg/LEDState messages.
/**
 * It calls
 * battery_status__msg__LEDState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
void
battery_status__msg__LEDState__Sequence__destroy(battery_status__msg__LEDState__Sequence * array);

/// Check for msg/LEDState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
bool
battery_status__msg__LEDState__Sequence__are_equal(const battery_status__msg__LEDState__Sequence * lhs, const battery_status__msg__LEDState__Sequence * rhs);

/// Copy an array of msg/LEDState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
bool
battery_status__msg__LEDState__Sequence__copy(
  const battery_status__msg__LEDState__Sequence * input,
  battery_status__msg__LEDState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_STATUS__MSG__DETAIL__LED_STATE__FUNCTIONS_H_
