/******************************************************************************
 *
 * Module: 
 *
 * File Name: switch.c
 *
 * Description: 
 *
 * Author: Safia Hany
 * 
 * Date:  Feb 26, 2024
 ******************************************************************************/
#include "switch.h"

#include <mcal/gpio.h>

extern const SWITCH_Config_t switches[_sw_num];

void SWITCH_init(void){
	GPIO_ConfigPin_t button;
	button.Speed=GPIO_HIGH_SPEED;
	for (uint32 idx=0; idx < _sw_num ; idx++)
	{
		button.Port = switches[idx].port;

		button.Pin = switches[idx].pin;
		if (switches[idx].connection == SWITCH_PULLUP){
			button.Mode = GPIO_MODE_IN_PU;
		}

		else{
			button.Mode = GPIO_MODE_IN_PD;
		}
		GPIO_init(&button);
	}
}
SWITCH_State_t SWITCH_Getstatus(uint32 switch_num){
	uint8 state = GPIO_getPinValue(switches[switch_num].port,switches[switch_num].pin);
	//if state = HIGH and switch pull up i want to return RELEASED
	return (state ^switches[switch_num].connection) ;
}


