/* INFO **
** INFO */

/* Header guards */
#ifndef KBJS_TYPES_H_6530818369583821
#define KBJS_TYPES_H_6530818369583821 1

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
/* Include duktape headers */
#include <duktape.h>
/*  type  : duk_context
            duk_ret_t
            duk_idx_t
            duk_function_list_entry */

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
/* Include kibu headers */
#include <kb/rpi2/enums.h>
/*  type  : kb_rpi2_PinId */
#include <kb/rpi2/types.h>
/*  macro : KB_RPI2_CONTEXT_MEMBERS
            KB_RPI2_EVENT_MEMBERS */
#include <kb/rpi2/sensors/leds.h>
/*  macro : KB_RPI2_SENSORS_LED_MEMBERS */
#include <kb/rpi2/sensors/four_keys.h>
/*  macro : KB_RPI2_SENSORS_FOUR_KEYS_MEMBERS */
#include <kb/rpi2/sensors/rgb_leds.h>
/*  macro : KB_RPI2_SENSORS_RGB_LED_MEMBERS */
#include <kb/rpi2/sensors/step_motors.h>
/*  macro : KB_RPI2_SENSORS_STEP_MOTOR_MEMBERS */
#include <kb/rpi2/sensors/photo_resistors.h>
/*  macro : KB_RPI2_SENSORS_PHOTO_RESISTOR_MEMBERS */
#include <kb/rpi2/sensors/rotary_encoders.h>
/*  macro : KB_RPI2_SENSORS_ROTARY_ENCODER_MEMBERS */
#include <kb/rpi2/sensors/motion_sensors.h>
/*  macro : KB_RPI2_SENSORS_MOTION_SENSOR_MEMBERS */
#include <kb/rpi2/sensors/ultrasonic_sensors.h>
/*  macro : KB_RPI2_SENSORS_ULTRASONIC_SENSOR_MEMBERS */
#include <kb/rpi2/sensors/hall_effects.h>
/*  macro : KB_RPI2_SENSORS_HALL_EFFECT_MEMBERS */
#include <kb/rpi2/sensors/buttons.h>
/*  macro : KB_RPI2_SENSORS_BUTTONS_MEMBERS */


/*----------------------------------------------------------------------------*/
/* Helper function */
int
kbjs_get_stash_key(size_t  length,
                   char   *buffer);


/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
#define KBJS_TYPES_STASH_KEY_LENGTH (size_t)16
#define KBJS_TYPES_MEMBERS()                                                   \
    duk_context *js_context;                                                   \
    char         js_stash_key[KBJS_TYPES_STASH_KEY_LENGTH];

/*----------------------------------------------------------------------------*/
typedef struct
{
    KB_RPI2_CONTEXT_MEMBERS()
    KBJS_TYPES_MEMBERS()
} kbjs_Context;


/*----------------------------------------------------------------------------*/
typedef struct
{
    KB_RPI2_EVENT_MEMBERS()
    KBJS_TYPES_MEMBERS()
} kbjs_Event;


/*----------------------------------------------------------------------------*/
typedef struct
{
    kb_rpi2_PinId id;
    const char    str[(size_t)16];
    KBJS_TYPES_MEMBERS()
} kbjs_PinId;


/*----------------------------------------------------------------------------*/
typedef struct
{
    KB_RPI2_SENSORS_LED_MEMBERS()
    KBJS_TYPES_MEMBERS()
} kbjs_LED;


/*----------------------------------------------------------------------------*/
typedef struct
{
    KB_RPI2_SENSORS_FOUR_KEYS_MEMBERS()
    KBJS_TYPES_MEMBERS()
} kbjs_FourKeys;

/*----------------------------------------------------------------------------*/
typedef struct
{
    KB_RPI2_SENSORS_RGB_LED_MEMBERS()
    KBJS_TYPES_MEMBERS()
} kbjs_RGBLED;

/*----------------------------------------------------------------------------*/
typedef struct
{
    KB_RPI2_SENSORS_STEP_MOTOR_MEMBERS()
    KBJS_TYPES_MEMBERS()
} kbjs_StepMotor;

/*----------------------------------------------------------------------------*/
typedef struct
{
    KB_RPI2_SENSORS_PHOTO_RESISTOR_MEMBERS()
    KBJS_TYPES_MEMBERS()
} kbjs_PhotoResistor;

/*----------------------------------------------------------------------------*/
typedef struct
{
    KB_RPI2_SENSORS_ROTARY_ENCODER_MEMBERS()
    KBJS_TYPES_MEMBERS()
} kbjs_RotaryEncoder;

/*----------------------------------------------------------------------------*/
typedef struct
{
    KB_RPI2_SENSORS_MOTION_SENSOR_MEMBERS()
    KBJS_TYPES_MEMBERS()
} kbjs_MotionSensor;

/*----------------------------------------------------------------------------*/
typedef struct
{
    KB_RPI2_SENSORS_ULTRASONIC_SENSOR_MEMBERS()
    KBJS_TYPES_MEMBERS()
} kbjs_UltrasonicSensor;

/*----------------------------------------------------------------------------*/
typedef struct
{
    KB_RPI2_SENSORS_HALL_EFFECT_MEMBERS()
    KBJS_TYPES_MEMBERS()
} kbjs_HallEffect;

/*----------------------------------------------------------------------------*/
typedef struct
{
    KB_RPI2_SENSORS_BUTTON_MEMBERS()
    KBJS_TYPES_MEMBERS()
} kbjs_Button;


#undef KBJS_TYPES_MEMBERS
#endif /* KBJS_TYPES_H_6530818369583821 */
