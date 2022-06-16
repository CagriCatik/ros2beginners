// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_interfaces:srv/ComputeRectangleArea.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_interfaces/srv/detail/compute_rectangle_area__rosidl_typesupport_introspection_c.h"
#include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_interfaces/srv/detail/compute_rectangle_area__functions.h"
#include "robot_interfaces/srv/detail/compute_rectangle_area__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ComputeRectangleArea_Request__rosidl_typesupport_introspection_c__ComputeRectangleArea_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__srv__ComputeRectangleArea_Request__init(message_memory);
}

void ComputeRectangleArea_Request__rosidl_typesupport_introspection_c__ComputeRectangleArea_Request_fini_function(void * message_memory)
{
  robot_interfaces__srv__ComputeRectangleArea_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ComputeRectangleArea_Request__rosidl_typesupport_introspection_c__ComputeRectangleArea_Request_message_member_array[2] = {
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__srv__ComputeRectangleArea_Request, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__srv__ComputeRectangleArea_Request, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ComputeRectangleArea_Request__rosidl_typesupport_introspection_c__ComputeRectangleArea_Request_message_members = {
  "robot_interfaces__srv",  // message namespace
  "ComputeRectangleArea_Request",  // message name
  2,  // number of fields
  sizeof(robot_interfaces__srv__ComputeRectangleArea_Request),
  ComputeRectangleArea_Request__rosidl_typesupport_introspection_c__ComputeRectangleArea_Request_message_member_array,  // message members
  ComputeRectangleArea_Request__rosidl_typesupport_introspection_c__ComputeRectangleArea_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputeRectangleArea_Request__rosidl_typesupport_introspection_c__ComputeRectangleArea_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ComputeRectangleArea_Request__rosidl_typesupport_introspection_c__ComputeRectangleArea_Request_message_type_support_handle = {
  0,
  &ComputeRectangleArea_Request__rosidl_typesupport_introspection_c__ComputeRectangleArea_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, srv, ComputeRectangleArea_Request)() {
  if (!ComputeRectangleArea_Request__rosidl_typesupport_introspection_c__ComputeRectangleArea_Request_message_type_support_handle.typesupport_identifier) {
    ComputeRectangleArea_Request__rosidl_typesupport_introspection_c__ComputeRectangleArea_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ComputeRectangleArea_Request__rosidl_typesupport_introspection_c__ComputeRectangleArea_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_interfaces/srv/detail/compute_rectangle_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_interfaces/srv/detail/compute_rectangle_area__functions.h"
// already included above
// #include "robot_interfaces/srv/detail/compute_rectangle_area__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ComputeRectangleArea_Response__rosidl_typesupport_introspection_c__ComputeRectangleArea_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__srv__ComputeRectangleArea_Response__init(message_memory);
}

void ComputeRectangleArea_Response__rosidl_typesupport_introspection_c__ComputeRectangleArea_Response_fini_function(void * message_memory)
{
  robot_interfaces__srv__ComputeRectangleArea_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ComputeRectangleArea_Response__rosidl_typesupport_introspection_c__ComputeRectangleArea_Response_message_member_array[1] = {
  {
    "area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__srv__ComputeRectangleArea_Response, area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ComputeRectangleArea_Response__rosidl_typesupport_introspection_c__ComputeRectangleArea_Response_message_members = {
  "robot_interfaces__srv",  // message namespace
  "ComputeRectangleArea_Response",  // message name
  1,  // number of fields
  sizeof(robot_interfaces__srv__ComputeRectangleArea_Response),
  ComputeRectangleArea_Response__rosidl_typesupport_introspection_c__ComputeRectangleArea_Response_message_member_array,  // message members
  ComputeRectangleArea_Response__rosidl_typesupport_introspection_c__ComputeRectangleArea_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputeRectangleArea_Response__rosidl_typesupport_introspection_c__ComputeRectangleArea_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ComputeRectangleArea_Response__rosidl_typesupport_introspection_c__ComputeRectangleArea_Response_message_type_support_handle = {
  0,
  &ComputeRectangleArea_Response__rosidl_typesupport_introspection_c__ComputeRectangleArea_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, srv, ComputeRectangleArea_Response)() {
  if (!ComputeRectangleArea_Response__rosidl_typesupport_introspection_c__ComputeRectangleArea_Response_message_type_support_handle.typesupport_identifier) {
    ComputeRectangleArea_Response__rosidl_typesupport_introspection_c__ComputeRectangleArea_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ComputeRectangleArea_Response__rosidl_typesupport_introspection_c__ComputeRectangleArea_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robot_interfaces/srv/detail/compute_rectangle_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robot_interfaces__srv__detail__compute_rectangle_area__rosidl_typesupport_introspection_c__ComputeRectangleArea_service_members = {
  "robot_interfaces__srv",  // service namespace
  "ComputeRectangleArea",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robot_interfaces__srv__detail__compute_rectangle_area__rosidl_typesupport_introspection_c__ComputeRectangleArea_Request_message_type_support_handle,
  NULL  // response message
  // robot_interfaces__srv__detail__compute_rectangle_area__rosidl_typesupport_introspection_c__ComputeRectangleArea_Response_message_type_support_handle
};

static rosidl_service_type_support_t robot_interfaces__srv__detail__compute_rectangle_area__rosidl_typesupport_introspection_c__ComputeRectangleArea_service_type_support_handle = {
  0,
  &robot_interfaces__srv__detail__compute_rectangle_area__rosidl_typesupport_introspection_c__ComputeRectangleArea_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, srv, ComputeRectangleArea_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, srv, ComputeRectangleArea_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, srv, ComputeRectangleArea)() {
  if (!robot_interfaces__srv__detail__compute_rectangle_area__rosidl_typesupport_introspection_c__ComputeRectangleArea_service_type_support_handle.typesupport_identifier) {
    robot_interfaces__srv__detail__compute_rectangle_area__rosidl_typesupport_introspection_c__ComputeRectangleArea_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robot_interfaces__srv__detail__compute_rectangle_area__rosidl_typesupport_introspection_c__ComputeRectangleArea_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, srv, ComputeRectangleArea_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, srv, ComputeRectangleArea_Response)()->data;
  }

  return &robot_interfaces__srv__detail__compute_rectangle_area__rosidl_typesupport_introspection_c__ComputeRectangleArea_service_type_support_handle;
}
