# [Understanding ROS 2 interfaces](https://docs.ros.org/en/foxy/Concepts/About-ROS-Interfaces.html)

ROS applications typically communicate through interfaces of one of three types:

- messages: .msg files are simple text files that describe the fields of a ROS message. They are used to generate source code for messages in different languages.

- services: .srv files describe a service. They are composed of two parts: a request and a response. The request and response are message declarations.
  
- actions: .action files describe actions.They are composed of three parts: a goal, a result, and feedback. Each part is a message declaration itself.

**Message description specification** 

Fields
```
int32 my_int
string my_string
```

Field types
```
int32 my_int
string my_string
```

Field names
```
int32 my_int
string my_string
```

Field default value
```
int32 my_int
string my_string
```

**Service description specification**



<img src="./utils/gifs/Action-SingleActionClient.gif" width="400">