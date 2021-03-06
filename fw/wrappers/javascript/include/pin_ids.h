/* INFO **
** INFO */

/* Header guard */
#ifndef KBJS_PIN_IDS_H_8971777515975902
#define KBJS_PIN_IDS_H_8971777515975902 1

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
/* Include duktape headers */
#include <duktape.h>
/*  type  : duk_context */


/*----------------------------------------------------------------------------*/
extern const char *const kbjs_PIN_ID_PROTO_STASH_KEY;
extern const char *const kbjs_PIN_ID_VALUE_KEY;

/*----------------------------------------------------------------------------*/
void
kbjs_register_PinIds(duk_context *context);

#endif /* KBJS_PIN_IDS_H_8971777515975902 */
