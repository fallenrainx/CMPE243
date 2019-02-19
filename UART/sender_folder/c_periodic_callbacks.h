#ifndef C_PERIODIC_CALLBACKS_H__
#define C_PERIODIC_CALLBACKS_H__

#ifdef UNIT_TESTING
#define static /* blank */
#else
#define static static
#endif

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

bool c_period_init(void);

bool c_period_reg_tlm(void);

void c_period_1Hz(uint32_t count); //1s

void c_period_10Hz(uint32_t count); //100ms

void c_period_100Hz(uint32_t count); //10ms

void c_period_1000Hz(uint32_t count); //1ms

#ifdef __cplusplus
}
#endif
#endif /* C_PERIOD_CALLBACKS_H__ */
