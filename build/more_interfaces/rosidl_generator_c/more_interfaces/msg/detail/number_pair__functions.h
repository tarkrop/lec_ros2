// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from more_interfaces:msg/NumberPair.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__MSG__DETAIL__NUMBER_PAIR__FUNCTIONS_H_
#define MORE_INTERFACES__MSG__DETAIL__NUMBER_PAIR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "more_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "more_interfaces/msg/detail/number_pair__struct.h"

/// Initialize msg/NumberPair message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * more_interfaces__msg__NumberPair
 * )) before or use
 * more_interfaces__msg__NumberPair__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
bool
more_interfaces__msg__NumberPair__init(more_interfaces__msg__NumberPair * msg);

/// Finalize msg/NumberPair message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
void
more_interfaces__msg__NumberPair__fini(more_interfaces__msg__NumberPair * msg);

/// Create msg/NumberPair message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * more_interfaces__msg__NumberPair__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
more_interfaces__msg__NumberPair *
more_interfaces__msg__NumberPair__create();

/// Destroy msg/NumberPair message.
/**
 * It calls
 * more_interfaces__msg__NumberPair__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
void
more_interfaces__msg__NumberPair__destroy(more_interfaces__msg__NumberPair * msg);

/// Check for msg/NumberPair message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
bool
more_interfaces__msg__NumberPair__are_equal(const more_interfaces__msg__NumberPair * lhs, const more_interfaces__msg__NumberPair * rhs);

/// Copy a msg/NumberPair message.
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
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
bool
more_interfaces__msg__NumberPair__copy(
  const more_interfaces__msg__NumberPair * input,
  more_interfaces__msg__NumberPair * output);

/// Initialize array of msg/NumberPair messages.
/**
 * It allocates the memory for the number of elements and calls
 * more_interfaces__msg__NumberPair__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
bool
more_interfaces__msg__NumberPair__Sequence__init(more_interfaces__msg__NumberPair__Sequence * array, size_t size);

/// Finalize array of msg/NumberPair messages.
/**
 * It calls
 * more_interfaces__msg__NumberPair__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
void
more_interfaces__msg__NumberPair__Sequence__fini(more_interfaces__msg__NumberPair__Sequence * array);

/// Create array of msg/NumberPair messages.
/**
 * It allocates the memory for the array and calls
 * more_interfaces__msg__NumberPair__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
more_interfaces__msg__NumberPair__Sequence *
more_interfaces__msg__NumberPair__Sequence__create(size_t size);

/// Destroy array of msg/NumberPair messages.
/**
 * It calls
 * more_interfaces__msg__NumberPair__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
void
more_interfaces__msg__NumberPair__Sequence__destroy(more_interfaces__msg__NumberPair__Sequence * array);

/// Check for msg/NumberPair message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
bool
more_interfaces__msg__NumberPair__Sequence__are_equal(const more_interfaces__msg__NumberPair__Sequence * lhs, const more_interfaces__msg__NumberPair__Sequence * rhs);

/// Copy an array of msg/NumberPair messages.
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
ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
bool
more_interfaces__msg__NumberPair__Sequence__copy(
  const more_interfaces__msg__NumberPair__Sequence * input,
  more_interfaces__msg__NumberPair__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MORE_INTERFACES__MSG__DETAIL__NUMBER_PAIR__FUNCTIONS_H_
