// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from more_interfaces:msg/NumberPair.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__MSG__DETAIL__NUMBER_PAIR__BUILDER_HPP_
#define MORE_INTERFACES__MSG__DETAIL__NUMBER_PAIR__BUILDER_HPP_

#include "more_interfaces/msg/detail/number_pair__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace more_interfaces
{

namespace msg
{

namespace builder
{

class Init_NumberPair_number2
{
public:
  explicit Init_NumberPair_number2(::more_interfaces::msg::NumberPair & msg)
  : msg_(msg)
  {}
  ::more_interfaces::msg::NumberPair number2(::more_interfaces::msg::NumberPair::_number2_type arg)
  {
    msg_.number2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::msg::NumberPair msg_;
};

class Init_NumberPair_number1
{
public:
  Init_NumberPair_number1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NumberPair_number2 number1(::more_interfaces::msg::NumberPair::_number1_type arg)
  {
    msg_.number1 = std::move(arg);
    return Init_NumberPair_number2(msg_);
  }

private:
  ::more_interfaces::msg::NumberPair msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::msg::NumberPair>()
{
  return more_interfaces::msg::builder::Init_NumberPair_number1();
}

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__MSG__DETAIL__NUMBER_PAIR__BUILDER_HPP_
