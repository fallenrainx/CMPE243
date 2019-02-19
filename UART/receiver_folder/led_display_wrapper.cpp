//Wrapper for the UART

#include "led_display_wrapper.h"
#include "io.hpp"

void led_on(uint8_t ledNum)
{
    LE.on(ledNum);
}

void led_off(uint8_t ledNum)
{
	LE.off(ledNum);
}

void led_toggle(uint8_t ledNum)
{
	LE.toggle(ledNum);
}

void led_display_set_number(char num)
{
	LD.setNumber(num - '0');
}

void led_display_clear(void)
{
	LD.clear();
}

