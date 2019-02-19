
#ifdef UNIT_TESTING
#define static /* blank */
#else
#define static static
#endif

#include "unity.h"
#include "c_periodic_callbacks.h"
#include "Mockuart_wrapper.h"
#include "Mockled_display_wrapper.h"

void setUp(void) 
{
	//empty
}

void tearDown(void) 
{
	//nothing here
}

void test_c_period_init(void) //testing init function
{
	uart3_init_ExpectAndReturn(38400, 64, 64, true);
	TEST_ASSERT_TRUE(c_period_init()); 
}

void test_c_period_reg_tlm(void) //c_period_reg_tlm function
{
	TEST_ASSERT_TRUE(c_period_reg_tlm());
}

void test_c_period_empty_functions(void) //empty functions
{
	c_period_1Hz(0);
	c_period_100Hz(0);
	c_period_1000Hz(0);
}

void test_c_period_10Hz(void) //testing 10hz function
{
	uart3_getChar_ExpectAnyArgsAndReturn(true);
	led_display_set_number_ExpectAnyArgs();
	c_period_10Hz(0);
	
}