//Wrapper for the SWITCH

#include "LED_wrapper.h"
#include "io.hpp"

void LED_on(uint8_t ledNum) {
    return LE.on(ledNum);
  }

void LED_off(uint8_t ledNum) {
    return LE.off(ledNum);
  }

void LED_set(uint8_t ledNum, bool on)
{
	return LE.set(ledNum, on);
}

void LED_toggle(uint8_t ledNum)
{
	return LE.toggle(ledNum);
}

void LED_setAll(uint8_t value)
{
	return LE.setAll(value);
}

uint8_t LED_getValues(void) 
{
	return LE.getValues();
}
