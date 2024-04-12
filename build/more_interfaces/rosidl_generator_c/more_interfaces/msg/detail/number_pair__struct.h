// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from more_interfaces:msg/NumberPair.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__MSG__DETAIL__NUMBER_PAIR__STRUCT_H_
#define MORE_INTERFACES__MSG__DETAIL__NUMBER_PAIR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/NumberPair in the package more_interfaces.
typedef struct more_interfaces__msg__NumberPair
{
  int64_t number1;
  int64_t number2;
} more_interfaces__msg__NumberPair;

// Struct for a sequence of more_interfaces__msg__NumberPair.
typedef struct more_interfaces__msg__NumberPair__Sequence
{
  more_interfaces__msg__NumberPair * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} more_interfaces__msg__NumberPair__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORE_INTERFACES__MSG__DETAIL__NUMBER_PAIR__STRUCT_H_
