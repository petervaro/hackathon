/* INFO **
** INFO */
/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
/* Include standard headers */
#include <stdio.h>
/*  func  : puts */
#include <stdlib.h>
/*  const : EXIT_SUCCESS
            EXIT_FAILURE */

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
/* Include kibu headers */
#include <kb/errors.h>
/*  type  : kb_Error
    const : kib_OKAY */
#include <kb/rpi2/contexts.h>
/*  type  : kb_rpi2_Context
    func  : kb_rpi2_Context_new
            kb_rpi2_Context_del
            kb_rpi2_Context_bind_on_cycle_begin
            kb_rpi2_Context_bind_on_cycle_end
            kb_rpi2_Context_bind_on_exit
            kb_rpi2_Context_start
            kb_rpi2_Context_stop */
#include <kb/rpi2/events.h>
/*  type  : kb_rpi2_Event
    func  : kb_rpi2_Event_new
            kb_rpi2_Event_del
            kb_rpi2_Event_activate */


/*----------------------------------------------------------------------------*/
kb_Error
on_cycle_end(kb_rpi2_Context *const context,
             kb_rpi2_Event   *const event)
{
    (void)event;
    puts("Context.on_cycle_end()");
    kb_rpi2_Context_stop(context);
    return kb_OKAY;
}


/*----------------------------------------------------------------------------*/
kb_Error
on_cycle_begin(kb_rpi2_Context *const context,
               kb_rpi2_Event   *const event)
{
    (void)event;
    puts("Context.on_cycle_begin()");
    kb_rpi2_Context_bind_on_cycle_end(context, on_cycle_end);
    return kb_OKAY;
}


/*----------------------------------------------------------------------------*/
kb_Error
on_stop(kb_rpi2_Context *const context,
        kb_rpi2_Event   *const event)
{
    (void)context;
    (void)event;
    puts("Context.on_stop()");
    return kb_OKAY;
}


/*----------------------------------------------------------------------------*/
int
main(void)
{
    kb_rpi2_Context *context;
    kb_rpi2_Event   *event;

    if (kb_rpi2_Context_new(&context))
    {
        puts("Context.new() allocation failed");
        return EXIT_FAILURE;
    }

    if (kb_rpi2_Event_new(&event, context))
    {
        puts("Event.new() allocation failed");
        return EXIT_FAILURE;
    }

    kb_rpi2_Context_bind_on_cycle_begin(context, on_cycle_begin);
    kb_rpi2_Context_bind_on_stop(context, on_stop);

    /* Enter event loop */
    kb_rpi2_Event_activate(event);
    kb_rpi2_Context_start(context);

    /* Clean up */
    kb_rpi2_Event_del(&event);
    kb_rpi2_Context_del(&context);

    /* Should not reach this point */
    puts("Exiting now...");
    return EXIT_SUCCESS;
}
