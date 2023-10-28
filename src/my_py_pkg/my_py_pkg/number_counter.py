#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
from example_interfaces.srv import SetBool
 
class NumberCounterNode(Node): 
    def __init__(self):
        super().__init__("number_counter") 
        self.counter_ = 0

        self.subscriber_ = self.create_subscription(Int64, "number", self.callback_number_count, 10)

        self.get_logger().info("Numbers counter - Subscriber node has started")

        self.publisher_ = self.create_publisher(Int64, "number_count", 10)
        self.timer_ = self.create_timer(1, self.publish_counters)

        self.get_logger().info("Numbers counter - Publisher node has started")

        self.server_ = self.create_service(SetBool, "reset_counter", self.callback_reset_counter)
        self.get_logger().info("Reset counter server has started")

    def callback_number_count(self, num):
        self.counter_ += int(num.data)
        self.get_logger().info(str(self.counter_))

    def publish_counters(self):
        counter = Int64()
        counter.data = int(self.counter_)
        self.publisher_.publish(counter)

    def callback_reset_counter(self, request, response):
        if request.data == True: 
            self.counter_ = 0
            response.success = True
            response.message = "Counter has been reset"
        else:
            response.success = False
            response.message = "Counter has not been reset"
        return response
 
def main(args=None):
    rclpy.init(args=args)
    node = NumberCounterNode() 
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()