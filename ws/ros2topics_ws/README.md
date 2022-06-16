# [Understanding ROS 2 topics](https://docs.ros.org/en/foxy/Tutorials/Topics/Understanding-ROS2-Topics.html#understanding-ros-2-topics)

## **Topics in ROS2 - Make Your Nodes Communicate Between Each Other**

ROS 2 breaks complex systems down into many modular nodes. Topics are a vital element of the ROS graph that act as a bus for nodes to exchange messages. Topic is a named bus over which nodes exchange messages      Used for unidirectional data streams. Anonymous: publishers don’t know who is subscribing, and subscribers don’t know who is publishing.  By using nodes, you can easily separate your code into different independent modules, one for each part of your application. And with topics, you can make them communicate.

- A node may publish data to any number of topics and simultaneously have subscriptions to any number of topics.

    <img src="./utils/gifs/Topic-SinglePublisherandSingleSubscriber.gif" width="400">

- Topics are one of the main ways in which data is moved between nodes and therefore between different parts of the system.

  <img src="./utils/gifs/Topic-MultiplePublisherandMultipleSubscriber.gif" width="400">

So, what is a ros2 topic and what is important about the ros2 topics? It is easier to understand with a real life analogy. A topic is a named bus over which node exchange messages. The unidirectional data stram between publisher and subscriber possible. The publishers and subscriber are anonymus. A topic has a message type. A node can have many publishers and subscribers for many different topics. This following examples shows how to write a publiser and subscriber which are anonymous and are not directly linked. They are only linked to the topic interface.  They both publish, are subscribed to, but no one is aware of the other way.
To implement topics in your ROS2 application:

- First create a node (or start from an existing one), then inside your node you can create any number of publishers/subscribers.
- A publisher and subscriber must publish/subscribe to the same topic name, and use the same data type. Those are the 2 conditions for successful topic communication.
- Then, once you’ve added some publishers/subscribers in your nodes, just launch your nodes, and the communication starts! You can debug them using the “ros2” command line tool, as well as rqt.

- **Create a workspace for ROS2 Topics**

```sh
cd ./ros2topics_ws
mkdir -p src
cd ./ros2topics_ws
colcon build
cd install
echo 'source ~/ros2topics_ws/install/local_setup.bash' >> ~/.bashrc 
echo 'source ~/ros2topics_ws/install/setup.bash' >> ~/.bashrc 
```

- **Create a Package inside this workspace**

Create Python package
  
```sh
cd ros2topics_ws/src/
# Create a package with ament_python and rclpy client library
ros2 pkg create topics_pkg --build-type ament_python --dependencies rclpy
cd ros2topics_ws
colcon build --packages-select topics_pkg
```

- **Add the nodes into launch file**

```py
'console_scripts': [
"py_node = topics_pkg.my_first_node:main",
"talker_node = topics_pkg.talker:main",
"listener_node = topics_pkg.listener:main",
],
```


- **Write a Python Publisher Node**

Create a node for robots news station and make it executable
After the writing the node with topic build the package with symlink-install
Source in an another terminal to launch the node

```sh
cd ./src/my_py_pkg/my_py_pkg
touch robot_news_station.py
chmod +x robot_news_station.py
colcon build --packages-select my_py_pkg  --symlink-install
source ~/.bashrc
ros2 run my_py_pkg robot_news_station
ros2 node list
ros2 topic list
ros2 topic echo /robot_news
```

Use the template for node robot_news_station and add into setup.py

```py
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

# add this change also in the package.xml as dependency
from example_interfaces.msg import String

# Construct of the node
class RobotNewsStationNode(Node): # Modify name
    def __init__(self):
        super().__init__("robot_news_station") # Modify name -> same name with the file

        self.robot_name_ = "C3PO"
        # Create a publisher with queue size 10
        self.publisher_ = self.create_publisher(String, "robot_news", 10)
        # Create a timer 
        self.timer_ = self.create_timer(0.5, self.publish_news)
        self.get_logger().info("Robot News Station has been started")

    # Create a function to publish this news
    def publish_news(self):
        msg = String()
        msg.data = "Hi, this is " + \
            str(self.robot_name_) + " from the robot news station."
        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = RobotNewsStationNode() # Modify name
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
```

- **Write a Python Subscriber Node**

Create a node for robots news station and make it executable
After the writing the node with topic build the package with symlink-install
Source in an another terminal to launch the node

```sh
cd ./src/my_py_pkg/my_py_pkg
touch smartphone.py
chmod +x smartphone.py
colcon build --packages-select my_py_pkg  --symlink-install
source ~/.bashrc
ros2 run my_py_pkg smartphone
```

Use the template for node robot_news_station and add into setup.py

```py
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.msg import String


class SmartphoneNode(Node):
    def __init__(self):
        super().__init__("smartphone")
        
        # Create a subscriber with queue size 10
        self.subscriber_ = self.create_subscription(
            String, "robot_news", self.callback_robot_news, 1)
        self.get_logger().info("Smartphone has been started.")

    def callback_robot_news(self, msg):
        self.get_logger().info(msg.data)


def main(args=None):
    rclpy.init(args=args)
    node = SmartphoneNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
```

- **Debug ROS2 Topics with CLI**

With CLI commands it is possible to debug the topics and see the type and the number of publishers and subscribers. The important cli commands to debug the ros node and topics are following:

```sh
ros2 topic
ros2 topic list
ros2 topic info /<name_of_the_topic>
ros2 interface show example_interfaces/msg/String
ros2 topic hz /robot_news 
ros2 topic bw /robot_news 
ros2 topic pub -r 10 /robot_news example_interfaces/msg/String "{data: 'hello from terminal'}"
ros2 node info /robot_news_station
```

- **Remap a Topic at Runtime**

Remapping topics will be quite useful in the applications. For example, when you have an existing publisher and you can change the topic name, then you can change  the topic name for the subscriber if it's not the same in the code.

```sh
ros2 run my_py_pkg robot_news_station --ros-args -r __node:=my_station
ros2 node list
ros2 topic list

ros2 run my_py_pkg robot_news_station --ros-args -r __node:=my_station -r robot_news:=my_news
ros2 node list
ros2 topic list

ros2 run my_py_pkg smartphone --ros-args -r __node:=my_station -r robot_news:=my_news
ros2 node list
ros2 topic list
```

- **Monitor Topics with rqt and rqt_graph**

```sh
rqt_graph

ros2 run my_py_pkg robot_news_station
ros2 run my_py_pkg smartphone

ros2 run my_py_pkg robot_news_station --ros-args -r __node:=my_station
ros2 run my_py_pkg robot_news_station --ros-args -r __node:=my_station2
ros2 run my_py_pkg robot_news_station --ros-args -r __node:=my_station3
ros2 run my_py_pkg robot_news_station --ros-args -r __node:=other_station -r robot_news:=my_news

ros2 run my_py_pkg smartphone --ros-args -r __node:=smartphone2
ros2 run my_py_pkg smartphone --ros-args -r __node:=smartphone3
ros2 run my_py_pkg smartphone --ros-args -r __node:=other_smarthpne -r robot_news:=my_news
```

The remapping nodes and topics is very powerful in this case if you want to have communication through the topic, but don't want to mix everything.  For example, that station should not punish for those nodes. we don't want those smartphones to get from that station. So we would remap the topic and of course, the other smartphone. We need to remove the topic to listen to this one instead of this one.

- **Experiments on Topics with another message type**

  - Create 2 Nodes for "publisher" and "publisher + subscriber"
  - The number_publisher node publishes a number (always the same) on the “/number” topic, with the existing type example_interfaces/msg/Int64.
  - The number_counter node subscribes to the “/number” topic.
  - It keeps a counter variable. Every time a new number is received, it’s added to the counter.
  - The node also has a publisher on the “/number_count” topic.
  - When the counter is updated, the publisher directly publishes the new value on the topic.
  - Check what to put into the example_interfaces/msg/Int64 with the “ros2 interface show” command line tool.
      <img src="./utils/gifs/rosgraph_topics.svg" width="1000">


**Publisher:**

```py
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.msg import Int64


class NumberPublisherNode(Node):
    def __init__(self):
        super().__init__("number_publisher")
        self.number_ = 2
        self.number_publisher_ = self.create_publisher(Int64, "number", 10)
        self.number_timer_ = self.create_timer(1.0, self.publish_number)
        self.get_logger().info("Number publisher has been started.")

    def publish_number(self):
        msg = Int64()
        msg.data = self.number_
        self.number_publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = NumberPublisherNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
```

**Subscriber:**

```py
#!/usr/bin/env python3
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.msg import Int64


class NumberCounterNode(Node):
    def __init__(self):
        super().__init__("number_counter")
        self.counter_ = 0
        self.number_count_publisher_ = self.create_publisher(
            Int64, "number_count", 10)
        self.number_subscriber_ = self.create_subscription(
            Int64, "number", self.callback_number, 10)
        self.get_logger().info("Number Counter has been started.")

    def callback_number(self, msg):
        self.counter_ += msg.data
        new_msg = Int64()
        new_msg.data = self.counter_
        self.number_count_publisher_.publish(new_msg)


def main(args=None):
    rclpy.init(args=args)
    node = NumberCounterNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
```

- **Experiments on Topics with Turtlesim**

```sh
#TODO
```
