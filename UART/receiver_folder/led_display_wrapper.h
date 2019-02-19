//Wrapper for 7-segment display and on board LEDs

#ifndef LED_DISPLAY_WRAPPER_H__
#define LED_DISPLAY_WRAPPER_H__

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void led_on(uint8_t ledNum);
void led_off(uint8_t ledNum);
void led_toggle(uint8_t ledNum);
void led_display_set_number(char num);
void led_display_clear(void);


#ifdef __cplusplus
}
#endif
#endif /* LED_DISPLAY_WRAPPER_H__ */
