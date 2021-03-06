/* INFO **
** INFO */

/* Header guard */
#ifndef KB_ERROR_H_8506093783091019
#define KB_ERROR_H_8506093783091019 1


/*----------------------------------------------------------------------------*/
typedef enum
{
    /* Generic error signals */
    kb_OKAY,
    kb_FAIL,

    /* Function call related error signals */
    kb_SELF_IS_NULL,
    kb_ARG1_IS_NULL,
    kb_ARG2_IS_NULL,
    kb_ARG3_IS_NULL,
    kb_ARG4_IS_NULL,
    kb_ARG5_IS_NULL,

    /* Memory management related error signals */
    kb_ALLOC_FAIL,

    /* Wrapped external library related errors */
    kb_BCM2835_INIT_FAIL,

    /* Utility related error signals */
    kb_ITEM_NOT_IN_CONTAINER,

    /* Pin related error signals */
    kb_INVALID_PIN_ID,
    kb_INVALID_PIN_STATE,
    kb_INVALID_PIN_ROLE,
    kb_INVALID_PIN_PULL,
    kb_PIN_ALREADY_USED,
    kb_PIN_DOES_NOT_EXIST,
    kb_TOO_MANY_PINS_USED,
    kb_PIN_IS_GROUND,
    kb_PIN_IS_POWER_V3_3,
    kb_PIN_IS_POWER_V5,
    kb_PIN_IS_RESERVED,

    /* Sensor related error signals */
    kb_PIN_INDEX_IS_OUT_OF_RANGE,

    /* Event related error signals */
    kb_SENSOR_IS_NOT_IN_EVENT,

    /* Context related error signals */
    kb_NO_EVENT_ACTIVATED,
    kb_EVENT_NOT_BOUND_TO_CONTEXT,
    kb_EVENT_LOOP_ALREADY_RUNNING,

} kb_Error;


/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
const char *
kb_Error_str(kb_Error error);

#endif /* KB_ERROR_H_8506093783091019 */
