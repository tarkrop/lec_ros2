// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from more_interfaces:msg/NumberPair.idl
// generated code does not contain a copyright notice
#include "more_interfaces/msg/detail/number_pair__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "more_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "more_interfaces/msg/detail/number_pair__struct.h"
#include "more_interfaces/msg/detail/number_pair__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _NumberPair__ros_msg_type = more_interfaces__msg__NumberPair;

static bool _NumberPair__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NumberPair__ros_msg_type * ros_message = static_cast<const _NumberPair__ros_msg_type *>(untyped_ros_message);
  // Field name: number1
  {
    cdr << ros_message->number1;
  }

  // Field name: number2
  {
    cdr << ros_message->number2;
  }

  return true;
}

static bool _NumberPair__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NumberPair__ros_msg_type * ros_message = static_cast<_NumberPair__ros_msg_type *>(untyped_ros_message);
  // Field name: number1
  {
    cdr >> ros_message->number1;
  }

  // Field name: number2
  {
    cdr >> ros_message->number2;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_more_interfaces
size_t get_serialized_size_more_interfaces__msg__NumberPair(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NumberPair__ros_msg_type * ros_message = static_cast<const _NumberPair__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name number1
  {
    size_t item_size = sizeof(ros_message->number1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name number2
  {
    size_t item_size = sizeof(ros_message->number2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NumberPair__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_more_interfaces__msg__NumberPair(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_more_interfaces
size_t max_serialized_size_more_interfaces__msg__NumberPair(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: number1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: number2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _NumberPair__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_more_interfaces__msg__NumberPair(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NumberPair = {
  "more_interfaces::msg",
  "NumberPair",
  _NumberPair__cdr_serialize,
  _NumberPair__cdr_deserialize,
  _NumberPair__get_serialized_size,
  _NumberPair__max_serialized_size
};

static rosidl_message_type_support_t _NumberPair__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NumberPair,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, more_interfaces, msg, NumberPair)() {
  return &_NumberPair__type_support;
}

#if defined(__cplusplus)
}
#endif
