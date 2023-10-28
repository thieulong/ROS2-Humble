// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from battery_status:msg/LEDState.idl
// generated code does not contain a copyright notice
#include "battery_status/msg/detail/led_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `led_states`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
battery_status__msg__LEDState__init(battery_status__msg__LEDState * msg)
{
  if (!msg) {
    return false;
  }
  // led_states
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->led_states, 0)) {
    battery_status__msg__LEDState__fini(msg);
    return false;
  }
  return true;
}

void
battery_status__msg__LEDState__fini(battery_status__msg__LEDState * msg)
{
  if (!msg) {
    return;
  }
  // led_states
  rosidl_runtime_c__int64__Sequence__fini(&msg->led_states);
}

bool
battery_status__msg__LEDState__are_equal(const battery_status__msg__LEDState * lhs, const battery_status__msg__LEDState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led_states
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->led_states), &(rhs->led_states)))
  {
    return false;
  }
  return true;
}

bool
battery_status__msg__LEDState__copy(
  const battery_status__msg__LEDState * input,
  battery_status__msg__LEDState * output)
{
  if (!input || !output) {
    return false;
  }
  // led_states
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->led_states), &(output->led_states)))
  {
    return false;
  }
  return true;
}

battery_status__msg__LEDState *
battery_status__msg__LEDState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_status__msg__LEDState * msg = (battery_status__msg__LEDState *)allocator.allocate(sizeof(battery_status__msg__LEDState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_status__msg__LEDState));
  bool success = battery_status__msg__LEDState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
battery_status__msg__LEDState__destroy(battery_status__msg__LEDState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    battery_status__msg__LEDState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
battery_status__msg__LEDState__Sequence__init(battery_status__msg__LEDState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_status__msg__LEDState * data = NULL;

  if (size) {
    data = (battery_status__msg__LEDState *)allocator.zero_allocate(size, sizeof(battery_status__msg__LEDState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_status__msg__LEDState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_status__msg__LEDState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
battery_status__msg__LEDState__Sequence__fini(battery_status__msg__LEDState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_status__msg__LEDState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

battery_status__msg__LEDState__Sequence *
battery_status__msg__LEDState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_status__msg__LEDState__Sequence * array = (battery_status__msg__LEDState__Sequence *)allocator.allocate(sizeof(battery_status__msg__LEDState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = battery_status__msg__LEDState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
battery_status__msg__LEDState__Sequence__destroy(battery_status__msg__LEDState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    battery_status__msg__LEDState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
battery_status__msg__LEDState__Sequence__are_equal(const battery_status__msg__LEDState__Sequence * lhs, const battery_status__msg__LEDState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!battery_status__msg__LEDState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
battery_status__msg__LEDState__Sequence__copy(
  const battery_status__msg__LEDState__Sequence * input,
  battery_status__msg__LEDState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(battery_status__msg__LEDState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    battery_status__msg__LEDState * data =
      (battery_status__msg__LEDState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!battery_status__msg__LEDState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          battery_status__msg__LEDState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!battery_status__msg__LEDState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
