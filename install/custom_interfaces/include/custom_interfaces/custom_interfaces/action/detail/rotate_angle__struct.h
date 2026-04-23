// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:action/RotateAngle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/action/rotate_angle.h"


#ifndef CUSTOM_INTERFACES__ACTION__DETAIL__ROTATE_ANGLE__STRUCT_H_
#define CUSTOM_INTERFACES__ACTION__DETAIL__ROTATE_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/RotateAngle in the package custom_interfaces.
typedef struct custom_interfaces__action__RotateAngle_Goal
{
  float degrees;
} custom_interfaces__action__RotateAngle_Goal;

// Struct for a sequence of custom_interfaces__action__RotateAngle_Goal.
typedef struct custom_interfaces__action__RotateAngle_Goal__Sequence
{
  custom_interfaces__action__RotateAngle_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__RotateAngle_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/RotateAngle in the package custom_interfaces.
typedef struct custom_interfaces__action__RotateAngle_Result
{
  bool success;
} custom_interfaces__action__RotateAngle_Result;

// Struct for a sequence of custom_interfaces__action__RotateAngle_Result.
typedef struct custom_interfaces__action__RotateAngle_Result__Sequence
{
  custom_interfaces__action__RotateAngle_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__RotateAngle_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/RotateAngle in the package custom_interfaces.
typedef struct custom_interfaces__action__RotateAngle_Feedback
{
  float degrees_remaining;
} custom_interfaces__action__RotateAngle_Feedback;

// Struct for a sequence of custom_interfaces__action__RotateAngle_Feedback.
typedef struct custom_interfaces__action__RotateAngle_Feedback__Sequence
{
  custom_interfaces__action__RotateAngle_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__RotateAngle_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "custom_interfaces/action/detail/rotate_angle__struct.h"

/// Struct defined in action/RotateAngle in the package custom_interfaces.
typedef struct custom_interfaces__action__RotateAngle_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  custom_interfaces__action__RotateAngle_Goal goal;
} custom_interfaces__action__RotateAngle_SendGoal_Request;

// Struct for a sequence of custom_interfaces__action__RotateAngle_SendGoal_Request.
typedef struct custom_interfaces__action__RotateAngle_SendGoal_Request__Sequence
{
  custom_interfaces__action__RotateAngle_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__RotateAngle_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RotateAngle in the package custom_interfaces.
typedef struct custom_interfaces__action__RotateAngle_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} custom_interfaces__action__RotateAngle_SendGoal_Response;

// Struct for a sequence of custom_interfaces__action__RotateAngle_SendGoal_Response.
typedef struct custom_interfaces__action__RotateAngle_SendGoal_Response__Sequence
{
  custom_interfaces__action__RotateAngle_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__RotateAngle_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  custom_interfaces__action__RotateAngle_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  custom_interfaces__action__RotateAngle_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/RotateAngle in the package custom_interfaces.
typedef struct custom_interfaces__action__RotateAngle_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  custom_interfaces__action__RotateAngle_SendGoal_Request__Sequence request;
  custom_interfaces__action__RotateAngle_SendGoal_Response__Sequence response;
} custom_interfaces__action__RotateAngle_SendGoal_Event;

// Struct for a sequence of custom_interfaces__action__RotateAngle_SendGoal_Event.
typedef struct custom_interfaces__action__RotateAngle_SendGoal_Event__Sequence
{
  custom_interfaces__action__RotateAngle_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__RotateAngle_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RotateAngle in the package custom_interfaces.
typedef struct custom_interfaces__action__RotateAngle_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} custom_interfaces__action__RotateAngle_GetResult_Request;

// Struct for a sequence of custom_interfaces__action__RotateAngle_GetResult_Request.
typedef struct custom_interfaces__action__RotateAngle_GetResult_Request__Sequence
{
  custom_interfaces__action__RotateAngle_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__RotateAngle_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "custom_interfaces/action/detail/rotate_angle__struct.h"

/// Struct defined in action/RotateAngle in the package custom_interfaces.
typedef struct custom_interfaces__action__RotateAngle_GetResult_Response
{
  int8_t status;
  custom_interfaces__action__RotateAngle_Result result;
} custom_interfaces__action__RotateAngle_GetResult_Response;

// Struct for a sequence of custom_interfaces__action__RotateAngle_GetResult_Response.
typedef struct custom_interfaces__action__RotateAngle_GetResult_Response__Sequence
{
  custom_interfaces__action__RotateAngle_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__RotateAngle_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  custom_interfaces__action__RotateAngle_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  custom_interfaces__action__RotateAngle_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/RotateAngle in the package custom_interfaces.
typedef struct custom_interfaces__action__RotateAngle_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  custom_interfaces__action__RotateAngle_GetResult_Request__Sequence request;
  custom_interfaces__action__RotateAngle_GetResult_Response__Sequence response;
} custom_interfaces__action__RotateAngle_GetResult_Event;

// Struct for a sequence of custom_interfaces__action__RotateAngle_GetResult_Event.
typedef struct custom_interfaces__action__RotateAngle_GetResult_Event__Sequence
{
  custom_interfaces__action__RotateAngle_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__RotateAngle_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "custom_interfaces/action/detail/rotate_angle__struct.h"

/// Struct defined in action/RotateAngle in the package custom_interfaces.
typedef struct custom_interfaces__action__RotateAngle_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  custom_interfaces__action__RotateAngle_Feedback feedback;
} custom_interfaces__action__RotateAngle_FeedbackMessage;

// Struct for a sequence of custom_interfaces__action__RotateAngle_FeedbackMessage.
typedef struct custom_interfaces__action__RotateAngle_FeedbackMessage__Sequence
{
  custom_interfaces__action__RotateAngle_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__RotateAngle_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__ACTION__DETAIL__ROTATE_ANGLE__STRUCT_H_
