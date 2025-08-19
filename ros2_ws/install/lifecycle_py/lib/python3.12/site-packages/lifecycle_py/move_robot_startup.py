#!/usr/bin/env python3
import rclpy
import time
from rclpy.node import Node
from lifecycle_msgs.srv import ChangeState
from lifecycle_msgs.msg import Transition
from rcl_interfaces.msg import ParameterDescriptor, ParameterType, ParameterValue

class MoveRobotStartup(Node):
    def __init__(self):
        super().__init__("lifecycle_manager")
        
        desc = ParameterDescriptor(type=ParameterType.PARAMETER_STRING_ARRAY)
        # 기본값을 ParameterValue로 “문자열 배열”로 명시
        default_val = ParameterValue(
            type=ParameterType.PARAMETER_STRING_ARRAY,
            string_array_value=[]
        )
        self.declare_parameter("managed_node_names", default_val, descriptor=desc)

        node_name_list = list(
            self.get_parameter("managed_node_names").get_parameter_value().string_array_value
        )
        self.get_logger().info(f"Nodes: {node_name_list}")

        self.client_list = []
        for node_name in node_name_list:
            service_name = f"/{node_name}/change_state"
            self.client_list.append(self.create_client(ChangeState, service_name)) 
            
    def change_state(self, transition: Transition):
        for client in self.client_list:
            client.wait_for_service()
            request = ChangeState.Request()
            request.transition = transition
            future = client.call_async(request)
            rclpy.spin_until_future_complete(self, future)
    
    def initialization_sequence(self):
        # Unconfigured to Inactive
        self.get_logger().info("Trying to switch to configuring")
        transition = Transition()
        transition.id = Transition.TRANSITION_CONFIGURE
        transition.label = "configure"
        self.change_state(transition)
        self.get_logger().info("Configuring OK, now inactive")

        # sleep just for the example
        time.sleep(3)

        # Inactive to Active
        self.get_logger().info("Trying to switch to activating")
        transition = Transition()
        transition.id = Transition.TRANSITION_ACTIVATE
        transition.label = "activate"
        self.change_state(transition)
        self.get_logger().info("Activating OK, now active")


def main(args=None):
    rclpy.init(args=args)
    node = MoveRobotStartup()
    node.initialization_sequence()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
