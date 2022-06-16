# [Understanding ROS2 Nodes](https://docs.ros.org/en/foxy/Tutorials/Understanding-ROS2-Nodes.html)

## Nodes in ROS2

- Each node in ROS should be responsible for a single, module purpose (e.g. one node for controlling wheel motors, one node for controlling a laser range-finder, etc). Each node can send and receive data to other nodes via topics, services, actions, or parameters.
    
  <img src="https://github.com/CagriCatik/ros2beginners/blob/main/utils/gifs/Nodes-TopicandService.gif" width="400">

## Create the first ROS2 nodes in Python

- Nodes are subprograms in your application. Each node is responsible for only one thing. And nodes communicate between each other through topics, services, and parameters. Here’s an example of an architecture for a ROS2 application, where you can see packages and nodes:Example ROS2 Application

  <img src="https://github.com/CagriCatik/ros2beginners/blob/main/utils/drawio/node.svg" width="500">

- For example, you can have one package that will handle a camera, another package for the wheels of  your robot, and yet another package that will handle motion planning for the robot in the environment. A full robotic system is comprised of many nodes working in concert. In ROS 2, a single executable (C++ program, Python program, etc.) can contain one or more nodes.

  ```sh
  # run the package with executable name
  ros2 run <package_name> <executable_name>

  # shows running nodes
  ros2 node list

  # access more information about the node: 
  # subscribers, publishers, services, action servers, action clients
  ros2 node info <node_name>

  # Remapping
  ros2 run <package_name> <executable_name> --ros-args --remap __node:=<node_name>
  ```

- **Write a Python Node in Python**
  
  To create a ROS2 node, you need a package first packages will allow you to separate your code into reusable blocks. 
  Each package is an independent unit.

  ```sh
  cd ros2_ws/src/my_py_pkg/my_py_pkg
  # create a node -> this should be a very simple template node
  touch my_first_node.py 
  ```

  First simple functional ROS2 node in Python

  ```py
  #!/usr/bin/env python3
  # Source: https://docs.ros2.org/latest/api/rclpy/api/init_shutdown.html
  import rclpy
  import time
  from rclpy.node import Node


  def main(args=None):

      # 1. Step - init
      rclpy.init(args=args)
      
      # 3. Step - add node with name as parameter - not the same with file name
      node = Node("py_test")
      
      # 4. Step - print something
      node.get_logger().info("Hello ROS2 - Functional")

      # Calculate elapsed time
      start_time = time.time()
      current_time = time.time()
      elapsed_time = current_time - start_time
      node.get_logger().info("Elapsed time: " + str(elapsed_time))    
      
      # 5. Step - spin the node - optional spin_once(), spin_until_future_complete()
      rclpy.spin(node)
      
      # 2. Step - shutdown
      rclpy.shutdown()


  if __name__ == "__main__":
      main()
  ```

  Test the node in terminal without running "ros2 run"
  
  ```sh
  # make it executable and simply launch
  chmod +x my_first_node.py
  ./my_first_node.py
  ```

  gedit setup.py file and add the node under entry points - console_scripts

  ```py
  entry_points={
        'console_scripts': [
            "py_node = my_py_pkg.my_first_node:main"
        ],
    },
  ```

  Build the package with colcon command

  ```sh
  cd ~/ros2_ws
  colcon build --packages-select my_py_pkg
  ```

  Before executing ./py_node, run "source ~/.bashrc" to source the workspace

  ```sh
  source ~/.bashrc
  ros2 run my_py_pkg py_node
  ```

- **Write a Python Node with OOP**

  Template ROS2 Node in OOP

  ```py
  #!/usr/bin/env python3
  import rclpy
  from rclpy.node import Node


  class MyCustomNode(Node): # MODIFY NAME
      def __init__(self):
          super().__init__("node_name") # MODIFY NAME


  def main(args=None):
      rclpy.init(args=args)
      node = MyCustomNode() # MODIFY NAME
      rclpy.spin(node)
      rclpy.shutdown()


  if __name__ == "__main__":
    main()
  ```