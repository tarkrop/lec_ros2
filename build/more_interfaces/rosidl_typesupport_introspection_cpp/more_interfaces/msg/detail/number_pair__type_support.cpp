// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from more_interfaces:msg/NumberPair.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "more_interfaces/msg/detail/number_pair__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace more_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void NumberPair_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) more_interfaces::msg::NumberPair(_init);
}

void NumberPair_fini_function(void * message_memory)
{
  auto typed_message = static_cast<more_interfaces::msg::NumberPair *>(message_memory);
  typed_message->~NumberPair();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NumberPair_message_member_array[2] = {
  {
    "number1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(more_interfaces::msg::NumberPair, number1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "number2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(more_interfaces::msg::NumberPair, number2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NumberPair_message_members = {
  "more_interfaces::msg",  // message namespace
  "NumberPair",  // message name
  2,  // number of fields
  sizeof(more_interfaces::msg::NumberPair),
  NumberPair_message_member_array,  // message members
  NumberPair_init_function,  // function to initialize message memory (memory has to be allocated)
  NumberPair_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NumberPair_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NumberPair_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace more_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<more_interfaces::msg::NumberPair>()
{
  return &::more_interfaces::msg::rosidl_typesupport_introspection_cpp::NumberPair_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, more_interfaces, msg, NumberPair)() {
  return &::more_interfaces::msg::rosidl_typesupport_introspection_cpp::NumberPair_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
