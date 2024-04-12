#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "std_msgs/msg/int32.hpp"

using std::placeholders::_1;

class laser_read : public rclcpp::Node
{
public:
    laser_read() : Node("lidar__")
    {

      auto default_qos = rclcpp::QoS(rclcpp::SystemDefaultsQoS());
      lidar_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
        "/scan", default_qos,
        std::bind(&laser_read::lidar_callback, this, _1));

      int1_sub_ = this->create_subscription<std_msgs::msg::Int32>(
      "/int1", 10, std::bind(&laser_read::int1_callback, this, _1));

      int2_sub_ = this->create_subscription<std_msgs::msg::Int32>(
      "/int2", 10, std::bind(&laser_read::int2_callback, this, _1));
    }

private:
    int num1, num2;
    float prev_range1;
    float prev_range2;
    void lidar_callback(const sensor_msgs::msg::LaserScan::SharedPtr _msg)
    {
      RCLCPP_INFO(this->get_logger(), "[%dth] = '%f' [%dth] = '%f'", num1, num2, _msg->ranges[num1], _msg->ranges[num2]);
      if(_msg->ranges[num1] != 0){
      if (prev_range1 < 0.40&& _msg->ranges[num1] >= 0.40){
      RCLCPP_INFO(this->get_logger(), "change of num1 = '%f'", _msg->ranges[num1] - prev_range1);
      }
      else if (prev_range1 >= 0.40 && _msg->ranges[num1] < 0.40){
        RCLCPP_INFO(this->get_logger(), "change of num1 = '%f'", _msg->ranges[num1] - prev_range1);
      }}
      if(_msg->ranges[num2] != 0){
      if (prev_range2 < 0.40&& _msg->ranges[num2] >= 0.40){
      RCLCPP_INFO(this->get_logger(), "change of num2 = '%f'", _msg->ranges[num2] - prev_range2);
      }
      else if (prev_range2 >= 0.40&& _msg->ranges[num2] < 0.40){
        RCLCPP_INFO(this->get_logger(), "change of num2 = '%f'", _msg->ranges[num2] - prev_range2);
      }}
      prev_range1 = _msg->ranges[num1];
      prev_range2 = _msg->ranges[num2];
    }
    void int1_callback(const std_msgs::msg::Int32::SharedPtr msg)
    {
      num1 = msg->data; // 받은 데이터를 클래스 변수에 저장
    }
    void int2_callback(const std_msgs::msg::Int32::SharedPtr msg)
    {
      num2 = msg->data; // 받은 데이터를 클래스 변수에 저장
    }

    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr lidar_;
    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr int1_sub_;
    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr int2_sub_;



};

int main(int argc, char * argv[])
{

  rclcpp::init(argc, argv);
  auto a = std::make_shared<laser_read>();
  //RCLCPP_INFO(a->get_logger(), "GOOD!!");
  rclcpp::spin(a);
  rclcpp::shutdown();
  return 0;
}