#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/int32.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"

using std::placeholders::_1;
using namespace std::chrono_literals;

class NumberPub : public rclcpp::Node
{
public:
    NumberPub(int number1, int number2) : Node("number_pub"), num1(number1), num2(number2)
    {
      publisher1 = this->create_publisher<std_msgs::msg::Int32>("/int1", 10);
      timer1 = this->create_wall_timer(500ms, std::bind(&NumberPub::publishInt1, this));
      publisher2 = this->create_publisher<std_msgs::msg::Int32>("/int2", 10);
      timer2 = this->create_wall_timer(500ms, std::bind(&NumberPub::publishInt2, this));
    }
private:
    int num1, num2;

    void publishInt1()
    {
        std_msgs::msg::Int32 msg;
        msg.data = num1; // 예시로 num1을 사용
        publisher1->publish(msg);
    }

    void publishInt2()
    {
        std_msgs::msg::Int32 msg;
        msg.data = num2; // 예시로 num1을 사용
        publisher2->publish(msg);
    }

    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr publisher1;
    rclcpp::TimerBase::SharedPtr timer1;
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr publisher2;
    rclcpp::TimerBase::SharedPtr timer2;

};

int main(int argc, char * argv[])
{
  int number1, number2;
  printf("Enter the first number: ");
  scanf("%d", &number1);
  printf("Enter the second number: ");
  scanf("%d",&number2);
    
  rclcpp::init(argc, argv);
  auto a = std::make_shared<NumberPub>(number1, number2);
  //RCLCPP_INFO(a->get_logger(), "GOOD!!");

  rclcpp::spin(a);
  rclcpp::shutdown();
  return 0;
}