#include "unity.h" // Single Unity Test Framework include
#include <stdio.h>

#include "c_periodic_callbacks.h"

// Mock the UART2 C header API
#include "Mockuart_wrapper.h"
#include "Mockswitch_wrapper.h"
#include "MockLED_display_wrapper.h"


void setUp(void) {
}
void tearDown(void) {
}

void test_c_period_init(void) {
  
	uart2_init_ExpectAndReturn(38400, 64, 64, true);
  	TEST_ASSERT_TRUE(c_period_init());
}

void test_c_period_reg_tlm(void) {
  TEST_ASSERT_TRUE(c_period_reg_tlm());
}

void test_c_period_1Hz(void) {
    c_period_1Hz(0);
}

void test_c_period_100Hz(void) {
    c_period_100Hz(0);
}

void test_c_period_1000Hz(void) {
    c_period_1000Hz(0);
}

void test_c_period_10Hz(void) {
    
    switch_read_ExpectAndReturn(1,true);
    uart2_putChar_ExpectAndReturn('1', 10 ,true);
    c_period_10Hz(0);
    //TEST_ASSERT_EQUAL(1, num);

    switch_read_ExpectAndReturn(1,false);
    switch_read_ExpectAndReturn(2,true);
    uart2_putChar_ExpectAndReturn('2', 10 ,true);
    c_period_10Hz(0);
    //TEST_ASSERT_EQUAL(2, num);

    switch_read_ExpectAndReturn(1,false);
    switch_read_ExpectAndReturn(2,false);
    switch_read_ExpectAndReturn(3,true);
    uart2_putChar_ExpectAndReturn('3', 10 ,true);
    c_period_10Hz(0);
    //TEST_ASSERT_EQUAL(3, num);
    
    switch_read_ExpectAndReturn(1,false);
    switch_read_ExpectAndReturn(2,false);
    switch_read_ExpectAndReturn(3,false);
    switch_read_ExpectAndReturn(4,true);
    uart2_putChar_ExpectAndReturn('4', 10 ,true);
    c_period_10Hz(0);
    //TEST_ASSERT_EQUAL(4, num);
    //uart2_getchar_ExpectAndReturn(NULL, 0, false);
    //uart2_getchar_IgnoreArg_byte();
    //C_period_10Hz(0);
}
