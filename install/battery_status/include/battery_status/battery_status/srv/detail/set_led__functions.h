// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from battery_status:srv/SetLED.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_STATUS__SRV__DETAIL__SET_LED__FUNCTIONS_H_
#define BATTERY_STATUS__SRV__DETAIL__SET_LED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "battery_status/msg/rosidl_generator_c__visibility_control.h"

#include "battery_status/srv/detail/set_led__struct.h"

/// Initialize srv/SetLED message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * battery_status__srv__SetLED_Request
 * )) before or use
 * battery_status__srv__SetLED_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
bool
battery_status__srv__SetLED_Request__init(battery_status__srv__SetLED_Request * msg);

/// Finalize srv/SetLED message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
void
battery_status__srv__SetLED_Request__fini(battery_status__srv__SetLED_Request * msg);

/// Create srv/SetLED message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * battery_status__srv__SetLED_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
battery_status__srv__SetLED_Request *
battery_status__srv__SetLED_Request__create();

/// Destroy srv/SetLED message.
/**
 * It calls
 * battery_status__srv__SetLED_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
void
battery_status__srv__SetLED_Request__destroy(battery_status__srv__SetLED_Request * msg);

/// Check for srv/SetLED message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
bool
battery_status__srv__SetLED_Request__are_equal(const battery_status__srv__SetLED_Request * lhs, const battery_status__srv__SetLED_Request * rhs);

/// Copy a srv/SetLED message.
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
battery_status__srv__SetLED_Request__copy(
  const battery_status__srv__SetLED_Request * input,
  battery_status__srv__SetLED_Request * output);

/// Initialize array of srv/SetLED messages.
/**
 * It allocates the memory for the number of elements and calls
 * battery_status__srv__SetLED_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
bool
battery_status__srv__SetLED_Request__Sequence__init(battery_status__srv__SetLED_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetLED messages.
/**
 * It calls
 * battery_status__srv__SetLED_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
void
battery_status__srv__SetLED_Request__Sequence__fini(battery_status__srv__SetLED_Request__Sequence * array);

/// Create array of srv/SetLED messages.
/**
 * It allocates the memory for the array and calls
 * battery_status__srv__SetLED_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
battery_status__srv__SetLED_Request__Sequence *
battery_status__srv__SetLED_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetLED messages.
/**
 * It calls
 * battery_status__srv__SetLED_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
void
battery_status__srv__SetLED_Request__Sequence__destroy(battery_status__srv__SetLED_Request__Sequence * array);

/// Check for srv/SetLED message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
bool
battery_status__srv__SetLED_Request__Sequence__are_equal(const battery_status__srv__SetLED_Request__Sequence * lhs, const battery_status__srv__SetLED_Request__Sequence * rhs);

/// Copy an array of srv/SetLED messages.
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
battery_status__srv__SetLED_Request__Sequence__copy(
  const battery_status__srv__SetLED_Request__Sequence * input,
  battery_status__srv__SetLED_Request__Sequence * output);

/// Initialize srv/SetLED message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * battery_status__srv__SetLED_Response
 * )) before or use
 * battery_status__srv__SetLED_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
bool
battery_status__srv__SetLED_Response__init(battery_status__srv__SetLED_Response * msg);

/// Finalize srv/SetLED message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
void
battery_status__srv__SetLED_Response__fini(battery_status__srv__SetLED_Response * msg);

/// Create srv/SetLED message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * battery_status__srv__SetLED_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
battery_status__srv__SetLED_Response *
battery_status__srv__SetLED_Response__create();

/// Destroy srv/SetLED message.
/**
 * It calls
 * battery_status__srv__SetLED_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
void
battery_status__srv__SetLED_Response__destroy(battery_status__srv__SetLED_Response * msg);

/// Check for srv/SetLED message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
bool
battery_status__srv__SetLED_Response__are_equal(const battery_status__srv__SetLED_Response * lhs, const battery_status__srv__SetLED_Response * rhs);

/// Copy a srv/SetLED message.
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
battery_status__srv__SetLED_Response__copy(
  const battery_status__srv__SetLED_Response * input,
  battery_status__srv__SetLED_Response * output);

/// Initialize array of srv/SetLED messages.
/**
 * It allocates the memory for the number of elements and calls
 * battery_status__srv__SetLED_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
bool
battery_status__srv__SetLED_Response__Sequence__init(battery_status__srv__SetLED_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetLED messages.
/**
 * It calls
 * battery_status__srv__SetLED_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
void
battery_status__srv__SetLED_Response__Sequence__fini(battery_status__srv__SetLED_Response__Sequence * array);

/// Create array of srv/SetLED messages.
/**
 * It allocates the memory for the array and calls
 * battery_status__srv__SetLED_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
battery_status__srv__SetLED_Response__Sequence *
battery_status__srv__SetLED_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetLED messages.
/**
 * It calls
 * battery_status__srv__SetLED_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
void
battery_status__srv__SetLED_Response__Sequence__destroy(battery_status__srv__SetLED_Response__Sequence * array);

/// Check for srv/SetLED message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_status
bool
battery_status__srv__SetLED_Response__Sequence__are_equal(const battery_status__srv__SetLED_Response__Sequence * lhs, const battery_status__srv__SetLED_Response__Sequence * rhs);

/// Copy an array of srv/SetLED messages.
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
battery_status__srv__SetLED_Response__Sequence__copy(
  const battery_status__srv__SetLED_Response__Sequence * input,
  battery_status__srv__SetLED_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_STATUS__SRV__DETAIL__SET_LED__FUNCTIONS_H_
