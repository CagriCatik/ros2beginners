<div align="center">

  <img src="utils/img/logo.png" alt="logo" width="200" height="auto" />
  <h1>ROS2 for Beginners</h1>
  
  <p>
    Step by Step ROS2 Basics
  </p>

  
<!-- Badges -->
<p>
  <a href="https://github.com/CagriCatik/ros2beginners/graphs/contributors">
    <img src="https://img.shields.io/github/contributors/cagricatik/ros2beginners" alt="contributors" />
  </a>
  <a href="">
    <img src="https://img.shields.io/github/last-commit/CagriCatik/ros2beginners" alt="last update" />
  </a>
  <a href="https://github.com/CagriCatik/ros2beginners/network/members">
    <img src="https://img.shields.io/github/forks/CagriCatik/ros2beginners" alt="forks" />
  </a>
  <a href="https://github.com/CagriCatik/ros2beginners/stargazers">
    <img src="https://img.shields.io/github/stars/CagriCatik/ros2beginners" alt="stars" />
  </a>
  <a href="https://github.com/CagriCatik/ros2beginners/issues/">
    <img src="https://img.shields.io/github/issues/CagriCatik/ros2beginners" alt="open issues" />
  </a>
</p>
   
 </div>



<!-- Table of Contents -->
# Table of Contents

This repository covers all the new features of ROS 2 using various examples from different sources:

1. [Introduction to ROS2](https://github.com/CagriCatik/ros2beginners/tree/main/ros2intro)
2. [Understanding ROS2 Nodes](https://github.com/CagriCatik/ros2beginners/tree/main/ros2nodes_ws)
3. [Understanding ROS2 topics](https://github.com/CagriCatik/ros2beginners/tree/main/ros2topics_ws)
5. [Understanding ROS2 parameters](https://github.com/CagriCatik/ros2beginners/tree/main/ros2params_ws)
5. [Understanding ROS2 actions](https://github.com/CagriCatik/ros2beginners/tree/main/ros2actions_ws)
6. [Understanding ROS2 Launch Files](https://github.com/CagriCatik/ros2beginners/tree/main/ros2launch_ws)
7. [Useful debugging tools for ROS2 ecosystem](https://github.com/CagriCatik/ros2beginners/tree/main/ros2nodes_ws)
8. [Logging and logger configuration](https://github.com/CagriCatik/ros2beginners/tree/main/ros2configs_ws)
9. [Project: Turtlesim](https://github.com/CagriCatik/ros2beginners/tree/main/ros2node_ws)
10. [Project: Follower Dolly](https://github.com/CagriCatik/ros2beginners/tree/main/project_followerdolly_ws)
11. [Project: Warehouse](https://github.com/CagriCatik/ros2beginners/tree/main/project_warehouse_ws)

<!-- About the Project -->
## About this Repository

This repository is for introduction and **induction** with the Robot Operating System 2 (or ROS2) framework, and consists of various sources on the Internet, forums, MOOCs, and so on **(in other words, it may include copy-pastes and non-cited stuff from internet. For the most part, I tried to describe or rewrite the whole thing in my own words)**. The applications in this repository are intended to be limited to self-driving cars, hence the name of repository. ROS places great emphasis on modularity and composability. In this way, software modules can be developed independently of the target platform without losing the ability to tailor them to the deployment characteristics of a specific robot. It therefore requires strict separation between the logical structure of the application and the mapping of this structure to hosts, processors and threads. While the former is defined by the package developer, the latter is entirely in the hands of the system integrator.

---

## Install ROS2 and Setup Your Environment

### Install development packages

- Different packages, which provide to development in ROS2
  
  ```sh
  chmod +x /install/requirements.sh
  bash install.sh
  ```

### Install ROS2 Galactic Geochelone on Ubuntu 20.04

- Run single line code for installation Galactic Geochelone

  ```sh
  chmod +x ros2beginners/install/ros2_install_galactic.sh
  bash ros2_install_galactic.sh
  ```

### Setup your Environment for ROS2

- Source the environment before you use ROS2 and set up it by sourcing the following echo command in bashrc so that bash runs whenever it is started interactively.

  ```sh
  echo 'source /opt/ros/galactic/setup.bash' >> ~/.bashrc 
  echo 'source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash' >> ~/.bashrc 
  ```

### Test your Installation: Launch the Talker-Node and Listener-Node

- Terminal 1: Talker node
  
  ```sh
  ros2 run demo_nodes_cpp talker
  ```

- Terminal 2: Listener node
  
  ```sh
  ros2 run demo_nodes_cpp listener
  ```

## Configuring the ROS 2 environment and workspace

### Create a ROS2 workspace in your home directory

- Make a directory for source code and build it with colcon command
- In ROS2, no more catkin. Ament is the new building system, and on top of that you get the colcon command line tool.
- To compile, you’ll use the command “colcon build” in your ROS2 workspace.

  ```sh
  mkdir .p ~/beginners_ws/src
  cd ws
  colcon build
  cd install
  echo 'source ~/ros2beginners/ws/ros2nodes_ws/install/local_setup.bash' >> ~/.bashrc 
  echo 'source ~/ros2beginners/ws/ros2nodes_ws/install/setup.bash' >> ~/.bashrc 
  ```

### Create a Package inside this workspace

- Create Python package
  
  ```sh
  cd beginners_ws/src/
  # Create a package with ament_python and rclpy client library
  ros2 pkg create my_py_pkg --build-type ament_python --dependencies rclpy
  cd beginners_ws
  colcon build --packages-select my_py_pkg
  ```

- The created workspace contents following files
  
  ```sh
  .
  └── src
  └── install
  └── build
  └── log
  ```

    **src:** A single workspace can contain as many packages as you want, each in their own folder. You can also have packages of different build types in one workspace (CMake, Python, etc.). You cannot have nested packages.Best practice is to have a src folder within your workspace, and to create your packages in there. This keeps the top level of the workspace “clean”.

    **build:** The build directory will be where intermediate files are stored. For each package a subfolder will be created in which e.g. CMake is being invoked.

    **install:** The install directory is where each package will be installed to. By default each package will be installed into a separate subdirectory.

    **log:** The log directory contains various logging information about each colcon invocation.

    **CMakeLists:** CMakeLists.txt defines all the build system logic to compile and execute C++ code in the workspace.

    **setup.py:** setup.py defines all the build system logic to build and execute Python code in the workspace.

---

<!-- Roadmap -->
## Roadmap

* [x] Nodes: Template Node, Talker & Listener Nodes
* [ ] Topics
* [ ] Parameters
* [ ] Actions
* [ ] Launch Files
* [ ] Debugging
* [ ] Logging and Logger Configuration
* [ ] Turtle Sim
* [ ] Follower Dolly
* [ ] Warehouse

---

<!-- Acknowledgments -->
## Acknowledgements

Use this section to mention useful resources and libraries that you have used in your projects.

 - [ROS2 - Changes](http://design.ros2.org/articles/changes.html)
 - [ROS2 - Tutorials](https://docs.ros.org/en/galactic/Tutorials.html)
 - [Readme Template](https://github.com/othneildrew/Best-README-Template)
