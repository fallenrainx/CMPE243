//Wrapper for the UART Assignment

#ifndef SWITCH_WRAPPER_H__
#define SWITCH_WRAPPER_H__

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

bool switch_readAll(void);
bool switch_read(uint32_t button_number);

#ifdef __cplusplus
}
#endif
#endif /* SWITCH_WRAPPER_H__ */
