# Introduction to ROS2

**Why ROS2?**

ROS stands for “Robot Operating System”, but it is not a true operating system. ROS is called a meta operating system (collaborative middleware) and is a free and open-source robotics software framework, mainly for programming complex robots just like Self Driving Cars. There are also weak points of using ROS. At present, ROS presents many important drawbacks for autonomous vehicles, which will be covered in the following. All ROS applications rely on a software component called the roscore. That component, provided by ROS itself, is in charge of handling all coordination between the different parts of the ROS application. If the component fails, then the whole ROS system goes down. This implies that it does not matter how well your ROS application has been constructed. If roscore dies, your application dies with another words single point of failure. Software components should be as independent of each other as possible, since sensors and actuators can fail. The control software should be so resilient to errors that occur that, as far as possible, no damage occurs to robots or the environment.mRobot software components vary extremely in terms of, e.g. timing, data rate, computational complexity The current version of ROS does not implement any security mechanism for preventing third parties to get into the ROS network and read the communication between nodes. This implies that anybody with access to the network of the car can get into the ROS messaging and kidnap the car behavior.

**Why ROS2 for Self Driving Cars?**

There is already a lot of code for autonomous cars. Autonomous cars require the development of algorithms capable of creating a map, locating the robot using lidars or GPS, planning paths along maps, avoiding obstacles, processing point clouds or camera data to extract information, etc. All types of algorithms required for wheeled robot navigation are almost directly applicable to autonomous cars. Since these algorithms have already been created in ROS, self-driving cars can easily use them off-the-shelf. Visualization tools already available. ROS has developed a set of graphical tools that make it easy to record and visualize the data collected by the sensors and present the status of the vehicle in a comprehensive way. It also provides an easy way to create additional visualizations needed for specific requirements. This is of great benefit when developing control software and debugging code. It is relatively easy to start an autonomous vehicle project with ROS on board. You can start immediately with a simple RC car equipped with a Jetson Nano, a camera, a laser scanner, and the ROS navigation stack, and you'll be ready to go in a few hours. That could serve as a foundation to understand how it all works. Then you can move on to more professional setups, such as the research vehicle that is already prepared for autonomous car experiments, with full ROS support

---

## ROS1 vs. ROS2 - Design Concepts

To understand ROS2, one must look back at ROS1 because ROS2 is a complete refactoring of ROS1, moving to a more modern and improved architecture. This is best explained with the help of terms of software architecture and after a layer-by-layer walkthrough.

### **Architecturel differences between ROS 1 and ROS 2**

ROS1 uses a simple publish-subscribe model where a master node is used to establish a connection between nodes and communicate data. The communication model of ROS1 mainly involves communication mechanisms such as Topics and Services. ROS2 was designed to be fully distributed, support multiple robotic systems, and reduce the gap between prototype and production.  In addition, ROS2 is intended to be used for real-time systems and applications, and the concept of quality of service providers is particularly important.  ROS2 is also expected to be fault-tolerant and able to operate in lossy networks.  In addition, ROS2 is designed to be cross-platform, so that it runs on different operating systems,

  <img src="../utils/img/ros1vsros2.png" width="500">

### **Layer by layer architecture walkthrough**

The ROS architecture can be divided into three levels: OS layer, middle layer and application layer.

**OS Layer:**

- ROS1 - OS layer:
  - supports mainly Linux-based operating systems.
- ROS2 - OS layer:
  - provides more portability for use on underlying operating systems, such as Linux, Windows, Mac and RTOS.
  
**Middleware layer:**

- ROS1 - TCPROS/UDPROS custom developed middleware:
  - The ROS data transport protocol uses TCPROS/UDPROS, and communication is highly dependent on the operation of the master node.
- ROS1 - Nodelet API
  - Nodelets are designed to allow multiple algorithms to run on a single machine in a single process without incurring transmission costs when passing messages within the process.
  - Nodelet is a parallel layer with TCPROS/UDPROS and is responsible for communication
- ROS2 - Abstract DDS Layer:
  - communication in ROS2 is based on the DDS standard, which increases fault tolerance.
- ROS2 - Intra-Process API:
  - The data transfer method is maintained in ROS2, but it is called "intra-process", which is also independent of DDS

**Application layer:**

- ROS1 - Application layer:
  - ROS1 needs to run a manager-Master, responsible for managing the normal operation of the entire system.
- ROS2 - Application layer:
  - ROS2 is based on DDS and thus it is fully distributed and no central node is needed.