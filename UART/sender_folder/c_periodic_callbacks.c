#ifdef UNIT_TESTING
#define static /* blank */
#else
#define static static
#endif

#include "c_periodic_callbacks.h"
#include "uart_wrapper.h"
#include "switch_wrapper.h"
#include "LED_display_wrapper.h"

bool c_period_init(void)
{
    uart2_init(38400, 64, 64);
    return true; // Must return true upon success
}

bool c_period_reg_tlm(void)
{
    return true;
}

void c_period_1Hz(uint32_t count)
{
    //nothing here
    (void) count;
}

void c_period_10Hz(uint32_t count)
{
    (void) count;
#if 0
    int num = 0;

    bool prev_press = false;
    char numInChar = ' ';

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
    previous_press = current_press; //update button press after exiting the task every time
#endif

#if 1
    int num = 0;
   // char numInChar = ' ';

    if (switch_read(1)) {
        num = 1;
    }
    else if (switch_read(2))
    {
        num = 2;
    }
    else if (switch_read(3))
    {
        num = 3;
    }
    else if (switch_read(4))
    {
        num = 4;
    }

    //printf("Before Current RX buffer : %d\n", u2.getRxQueueSize());
    //if (u2.getRxQueueSize() > 10)
       // {
       //     uart2.getChar(&numInChar);
       // }
    //printf("After Current RX buffer : %d\n", u2.getRxQueueWatermark());
    //printf("\n");
    uart2_putChar((num +'0'),10);

#endif

#if 0
    char numInChar = ' ';
    uart2_getChar(&numInChar,10);
    //printf("Char Received: %c\n", numInChar - '0');
    LED_display_setNumber(numInChar);
#endif


}

void c_period_100Hz(uint32_t count)
{
    //empty
    (void) count;
}

void c_period_1000Hz(uint32_t count)
{
    //empty
    (void) count;
}
