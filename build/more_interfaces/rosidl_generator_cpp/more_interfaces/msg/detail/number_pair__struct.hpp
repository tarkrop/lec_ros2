// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from more_interfaces:msg/NumberPair.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__MSG__DETAIL__NUMBER_PAIR__STRUCT_HPP_
#define MORE_INTERFACES__MSG__DETAIL__NUMBER_PAIR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__more_interfaces__msg__NumberPair __attribute__((deprecated))
#else
# define DEPRECATED__more_interfaces__msg__NumberPair __declspec(deprecated)
#endif

namespace more_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NumberPair_
{
  using Type = NumberPair_<ContainerAllocator>;

  explicit NumberPair_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number1 = 0ll;
      this->number2 = 0ll;
    }
  }

  explicit NumberPair_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number1 = 0ll;
      this->number2 = 0ll;
    }
  }

  // field types and members
  using _number1_type =
    int64_t;
  _number1_type number1;
  using _number2_type =
    int64_t;
  _number2_type number2;

  // setters for named parameter idiom
  Type & set__number1(
    const int64_t & _arg)
  {
    this->number1 = _arg;
    return *this;
  }
  Type & set__number2(
    const int64_t & _arg)
  {
    this->number2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    more_interfaces::msg::NumberPair_<ContainerAllocator> *;
  using ConstRawPtr =
    const more_interfaces::msg::NumberPair_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<more_interfaces::msg::NumberPair_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<more_interfaces::msg::NumberPair_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      more_interfaces::msg::NumberPair_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::msg::NumberPair_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      more_interfaces::msg::NumberPair_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::msg::NumberPair_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<more_interfaces::msg::NumberPair_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<more_interfaces::msg::NumberPair_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__more_interfaces__msg__NumberPair
    std::shared_ptr<more_interfaces::msg::NumberPair_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__more_interfaces__msg__NumberPair
    std::shared_ptr<more_interfaces::msg::NumberPair_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NumberPair_ & other) const
  {
    if (this->number1 != other.number1) {
      return false;
    }
    if (this->number2 != other.number2) {
      return false;
    }
    return true;
  }
  bool operator!=(const NumberPair_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NumberPair_

// alias to use template instance with default allocator
using NumberPair =
  more_interfaces::msg::NumberPair_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__MSG__DETAIL__NUMBER_PAIR__STRUCT_HPP_
