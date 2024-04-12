// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from more_interfaces:msg/NumberPair.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__MSG__DETAIL__NUMBER_PAIR__TRAITS_HPP_
#define MORE_INTERFACES__MSG__DETAIL__NUMBER_PAIR__TRAITS_HPP_

#include "more_interfaces/msg/detail/number_pair__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<more_interfaces::msg::NumberPair>()
{
  return "more_interfaces::msg::NumberPair";
}

template<>
inline const char * name<more_interfaces::msg::NumberPair>()
{
  return "more_interfaces/msg/NumberPair";
}

template<>
struct has_fixed_size<more_interfaces::msg::NumberPair>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<more_interfaces::msg::NumberPair>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<more_interfaces::msg::NumberPair>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORE_INTERFACES__MSG__DETAIL__NUMBER_PAIR__TRAITS_HPP_
