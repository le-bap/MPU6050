// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotState_fallen_side
{
public:
  explicit Init_RobotState_fallen_side(::custom_interfaces::msg::RobotState & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::RobotState fallen_side(::custom_interfaces::msg::RobotState::_fallen_side_type arg)
  {
    msg_.fallen_side = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::RobotState msg_;
};

class Init_RobotState_fallen_backwards
{
public:
  explicit Init_RobotState_fallen_backwards(::custom_interfaces::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_fallen_side fallen_backwards(::custom_interfaces::msg::RobotState::_fallen_backwards_type arg)
  {
    msg_.fallen_backwards = std::move(arg);
    return Init_RobotState_fallen_side(msg_);
  }

private:
  ::custom_interfaces::msg::RobotState msg_;
};

class Init_RobotState_fallen_forward
{
public:
  Init_RobotState_fallen_forward()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotState_fallen_backwards fallen_forward(::custom_interfaces::msg::RobotState::_fallen_forward_type arg)
  {
    msg_.fallen_forward = std::move(arg);
    return Init_RobotState_fallen_backwards(msg_);
  }

private:
  ::custom_interfaces::msg::RobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::RobotState>()
{
  return custom_interfaces::msg::builder::Init_RobotState_fallen_forward();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
