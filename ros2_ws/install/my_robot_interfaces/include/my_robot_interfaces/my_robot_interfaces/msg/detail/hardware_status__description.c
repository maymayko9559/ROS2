// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_robot_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#include "my_robot_interfaces/msg/detail/hardware_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__msg__HardwareStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x06, 0x0c, 0x8b, 0xd5, 0xea, 0x0c, 0x70, 0xed,
      0xe6, 0x52, 0x9c, 0x9b, 0x65, 0x95, 0x27, 0x8e,
      0xa0, 0x74, 0x6b, 0x2e, 0x90, 0x94, 0x75, 0x53,
      0xae, 0x7a, 0x51, 0xc8, 0xe1, 0x40, 0x72, 0xa2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_robot_interfaces__msg__HardwareStatus__TYPE_NAME[] = "my_robot_interfaces/msg/HardwareStatus";

// Define type names, field names, and default values
static char my_robot_interfaces__msg__HardwareStatus__FIELD_NAME__temperature[] = "temperature";
static char my_robot_interfaces__msg__HardwareStatus__FIELD_NAME__are_motors_ready[] = "are_motors_ready";
static char my_robot_interfaces__msg__HardwareStatus__FIELD_NAME__debug_messages[] = "debug_messages";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__msg__HardwareStatus__FIELDS[] = {
  {
    {my_robot_interfaces__msg__HardwareStatus__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__msg__HardwareStatus__FIELD_NAME__are_motors_ready, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__msg__HardwareStatus__FIELD_NAME__debug_messages, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__msg__HardwareStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__msg__HardwareStatus__TYPE_NAME, 38, 38},
      {my_robot_interfaces__msg__HardwareStatus__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 temperature\n"
  "bool are_motors_ready\n"
  "string debug_messages";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__msg__HardwareStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__msg__HardwareStatus__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 63, 63},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__msg__HardwareStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__msg__HardwareStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
