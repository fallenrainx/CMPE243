//Wrapper for the SWITCH

#include "switch_wrapper.h"
#include "io.hpp"

bool switch_read(uint32_t button_number){
    return SW.getSwitch(button_number);
  }

bool switch_readAll(void){
	return SW.getSwitchValues();
}
