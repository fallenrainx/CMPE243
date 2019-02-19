//Wrapper for the UART Assignment

#ifndef LED_DISPLAY_WRAPPER_H__
#define LED_DISPLAY_WRAPPER_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void LED_display_setNumber(char num);
void LED_display_clear(void);
void setLeftDigit(char alpha);
void setRightDigit(char alpha);

#ifdef __cplusplus
}
#endif
#endif /* SWITCH_WRAPPER_H__ */
