//Wrapper for the SWITCH

#include "LED_display_wrapper.h"
#include "io.hpp"

void LED_display_setNumber(char num) {
    return LD.setNumber(num - '0');
  }

void LED_display_clear(void){
	return LD.clear();
}

void LED_display_setLeftDigit(char alpha)
{
	return LD.setLeftDigit(alpha);
}

void setRightDigit(char alpha)
{
	return LD.setRightDigit(alpha);
}
