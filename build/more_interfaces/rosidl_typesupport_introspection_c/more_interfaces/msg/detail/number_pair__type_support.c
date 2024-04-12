// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from more_interfaces:msg/NumberPair.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "more_interfaces/msg/detail/number_pair__rosidl_typesupport_introspection_c.h"
#include "more_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "more_interfaces/msg/detail/number_pair__functions.h"
#include "more_interfaces/msg/detail/number_pair__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void NumberPair__rosidl_typesupport_introspection_c__NumberPair_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  more_interfaces__msg__NumberPair__init(message_memory);
}

void NumberPair__rosidl_typesupport_introspection_c__NumberPair_fini_function(void * message_memory)
{
  more_interfaces__msg__NumberPair__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NumberPair__rosidl_typesupport_introspection_c__NumberPair_message_member_array[2] = {
  {
    "number1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(more_interfaces__msg__NumberPair, number1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(more_interfaces__msg__NumberPair, number2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NumberPair__rosidl_typesupport_introspection_c__NumberPair_message_members = {
  "more_interfaces__msg",  // message namespace
  "NumberPair",  // message name
  2,  // number of fields
  sizeof(more_interfaces__msg__NumberPair),
  NumberPair__rosidl_typesupport_introspection_c__NumberPair_message_member_array,  // message members
  NumberPair__rosidl_typesupport_introspection_c__NumberPair_init_function,  // function to initialize message memory (memory has to be allocated)
  NumberPair__rosidl_typesupport_introspection_c__NumberPair_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NumberPair__rosidl_typesupport_introspection_c__NumberPair_message_type_support_handle = {
  0,
  &NumberPair__rosidl_typesupport_introspection_c__NumberPair_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_more_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, more_interfaces, msg, NumberPair)() {
  if (!NumberPair__rosidl_typesupport_introspection_c__NumberPair_message_type_support_handle.typesupport_identifier) {
    NumberPair__rosidl_typesupport_introspection_c__NumberPair_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NumberPair__rosidl_typesupport_introspection_c__NumberPair_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
