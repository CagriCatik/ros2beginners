
## [Understanding ROS 2 Services](https://docs.ros.org/en/foxy/Tutorials/Services/Understanding-ROS2-Services.html) - Client/Server Communication Between Nodes

ROS2 service is a client-server system . It can be either synchronous or asynchronous.  A service is defined by a name and a pair of messages, one message is the request, the other is the response.  As for know the topics, you can directliy create service clients inside ROS2 nodes using for example the rcl library for C++ and the rcl library for Python. A service server can exist only once, but have many clients.  

  <img src="./utils/drawio/_services.svg" width="500">

And basically, the service starts to exist when you create the server.  Services are a good complement to Topics.  Topics are used for unidirectional data. Services will be used when yo need a client server architecture. Topics are used for data streams, and Services for a client/server interaction. Services are another method of communication for nodes in the ROS graph. The goal is to understand what ROS2 services are and when to use them.  Services are based on a call-and-response model, versus topics’ publisher-subscriber model. While topics allow nodes to subscribe to data streams and get continual updates, services only provide data when they are specifically called by a client.

- **Example - Client/Server Communication**
  
The example with Battery and LED panel node can be a part of a real ROS2 application.  Suppose there is a node in the application that controls the panel.  The node turns the unit on and off and communicates with the outside world. Also, the node might ask these nodes to supply some power.   In this case, you create a ROS2 service called "Set LED".  Inside the "LED panel node", you create a service server for this service.  In addition, there is another node that deals with the battery. One of its functions is to check if the battery is low and notify the user if it is.  For this purpose, the battery node contains a service client to handle the service. When the battery becomes low, a request is sent to the ROS2 service.

  <img src="./utils/drawio/_services2.svg" width="500">

This sends an entity number and state notifies the server. If the data structure is the same as expected, the node can process the information, or as you can see in the example, the third LED.  Once this is done on the server, a response is sent back.  This response contains a "success flag". Throughout the service process, the battery node waits synchronously and asynchronously.  Upon receiving this response, the battery node knows that the requested action was successful or unsuccessful. Once the communication is finished, the server is still operating and waiting for new requests.  Later, after recharging the battery, the battery node finds that the battery is full and decides to send a new request to the city-managed service to withdraw from the city.  The server receives this request, executes the operation, and sends back a success message.  The communication is complete.  

- **Make Your Nodes Communicate Between Each Other with ROS2 Services**

- Single publisher and single subscriber

    <img src="./utils/gifs/Service-SingleServiceClient.gif" width="400">

- Multiple publisher and multiple subscriber

    <img src="./utils/gifs/Service-MultipleServiceClient.gif" width="400">

In this section you have discovered ROS2 Services, and seen how you can use them to add client/server communications between your nodes.  

To recap, Services are:
Used for client/server types of communication.
Synchronous or asynchronous (though it’s recommended to use them asynchronously, even if you decide to wait after in the thread).Anonymous: a client does not know which node is behind the service, it just calls the service. And the server does not know which nodes are clients, it just receives requests and responds to them.  To implement Services inside your nodes:      Create a node or start from an existing one. Add as many Service servers as you want (all with different names)      When you call a Service server from a Service client, make sure that the Service name, as well as the Service type (request + response) are identical.      You can only create one server for a Service, but you can create many clients.

When you want to add a new communication between your nodes, ask yourself this question: “Am I just sending some data, or do I expect a response after I send the message?”. This will tell you if you need to use a Topic or a Service. And, as you progress with ROS2, it will eventually become quite obvious for you.   So, now you can create nodes and make them communicate between each other. But, you’ve only used existing messages so far. What if you need to use other message types for your Topics and Services?  Well, in this case, you’ll need to build your own message types, and that’s what we’ll see in the next section

- **Exercise**

Service is defined by two things, a name which is a common interface between nodes so they can easily find the service and also a service type, a and b both  are requests in integers 64 primitive data type.  After three dashes (separation between the request and the response) comes client. Response ist one integer only, which name is sum. Client sends "a" and "b". Server becomes then the request "sum" processed by a and b.

```sh
ros2 interface show example_interfaces/srv/AddTwoInts 
touch add_two_ints_server.py
chmod +x add_two_ints_server.py
colcon build --packages-select my_py_pkg --symlink-install
ros2 service list
ros2 node list
ros2 node info /add_two_ints_server
ros2 service call /add_two_ints example_interfaces/srv/AddTwoInts "{a: 3 , b: 4}"
```

---

## [Understanding ROS 2 parameters](https://docs.ros.org/en/foxy/Tutorials/Parameters/Understanding-ROS2-Parameters.html)

```sh
#TODO
```
---

## [Understanding ROS 2 actions](https://docs.ros.org/en/foxy/Tutorials/Parameters/Understanding-ROS2-Parameters.html)

- Single publisher and single subscriber

    <img src="./utils/gifs/Action-SingleActionClient.gif" width="400">

---

## Create Custom ROS2 Interfaces (Msg and Srv)

If you read this, well, you’ve already made huge progress! The hardest is behind, now just a few more things and you’ll be ready to write your own complete ROS2 application.  In this quick section we’ll focus on ROS2 parameters.  Parameters will allow you to provide run-time settings for your nodes.  At the end of this section you will know:      What are ROS2 parameters and when to use them.      How to declare parameters for your nodes. How to get parameters from your node

---

## Change Node Settings at Runtime with ROS2 Parameters

If you read this, well, you’ve already made huge progress! The hardest is behind, now just a few more things and you’ll be ready to write your own complete ROS2 application.  In this quick section we’ll focus on ROS2 parameters.  Parameters will allow you to provide run-time settings for your nodes.  At the end of this section you will know:      What are ROS2 parameters and when to use them.      How to declare parameters for your nodes.      How to get parameters from your node.

---

## Scale Your Application With ROS2 Launch Files

So, you now have many nodes in your packages. When you start them, you can rename them, rename the topics, services, and set parameters.  That’s a lot of things! Now, imagine you have to start 10 nodes, each with a different configuration. Using the terminal is not something that scales well.  In this section we’ll see how to solve that problem with launch files.  At the end of this section you will be able to start all your nodes and parameters from one single ROS2 Launch File.  What you’ll do in this section:      Understand what launch files are and when to use them.      How to create, install, and start a launch file.      And another activity to practice on your own.

```sh
#TODO
```

Configure the nodes in a launch file

```sh
#TODO
```
