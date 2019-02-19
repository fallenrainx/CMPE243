//Wrapper for the UART Assignment

#ifndef LED_WRAPPER_H__
#define LED_WRAPPER_H__

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void on(uint8_t ledNum);            ///< Turns  ON LED. @param ledNum The LED # from 1-4
void off(uint8_t ledNum);           ///< Turns OFF LED. @param ledNum The LED # from 1-4
void set(uint8_t ledNum, bool on);  ///< Turns on/off led based on @param on
void toggle(uint8_t ledNum);        ///< Toggles the LED
void setAll(uint8_t value);         ///< Sets 8-bit value of 8 LEDs; 1 bit per LED
uint8_t getValues(void);      ///< Get the LED bit values currently set

#ifdef __cplusplus
}
#endif
#endif /* SWITCH_WRAPPER_H__ */
