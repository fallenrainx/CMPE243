#ifdef UNIT_TESTING
#define static /* blank */
#else
#define static static
#endif

#include "c_periodic_callbacks.h"
#include "uart_wrapper.h"
#include "switch_wrapper.h"
#include "led_display_wrapper.h"

bool c_period_init(void)
{
    //uart2_init(38400, 64, 64);
    uart3_init(38400, 64, 64);
    return true; // Must return true upon success
}

bool c_period_reg_tlm(void)
{
    return true;
}

void c_period_1Hz(uint32_t count)
{
    (void) count;

}

void c_period_10Hz(uint32_t count)
{
    (void) count;
    /*static bool previous_press = 0;
    static bool current_press = 0;
    if(switch_read(1) && (previous_press == false)) //if button is pressed and was previous not pressed
    {
        if(uart2_putChar('1'))
            current_press = true;
    }
    else if (switch_read(2) && previous_press == false)
    {
        if(uart2_putChar('2'))
            current_press = true;
    }
    else if (switch_read(3) && previous_press == false)
    {
        if(uart2_putChar('3'))
            current_press = true;
    }
    else if (switch_read(4) && previous_press == false)
    {
        if(uart2_putChar('4'))
            current_press = true;
    }
    else if (!switch_read(1) && !switch_read(2) && !switch_read(3) && !switch_read(4))
    {
        current_press = false;
    }
    previous_press = current_press; //update button press after exiting the task every time */
    char received_char;
    if(uart3_getChar(&received_char, 0))
        led_display_set_number(received_char);

   /* if(switch_read(1)) //if button is pressed
        {
            uart3_putChar('1', 0);
        }
        else if (switch_read(2))
        {
            uart3_putChar('2', 0);
        }
        else if (switch_read(3))
        {
            uart3_putChar('3', 0);
        }
        else if (switch_read(4))
        {
            uart3_putChar('4', 0);
        }
        else
        {
            //do nothing
        }*/
}

void c_period_100Hz(uint32_t count)
{
    (void) count;
}

void c_period_1000Hz(uint32_t count)
{
    (void) count;
}
