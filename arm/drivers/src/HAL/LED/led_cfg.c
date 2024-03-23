/******************************************************************************
 *
 * Module: 
 *
 * File Name: led_cfg.c
 *
 * Description: 
 *
 * Author: Safia Hany
 * 
 * Date:  Feb 26, 2024
 ******************************************************************************/

#include "gpio.h"
#include"led.h"

const ledcfg_t leds[_led_num]={
		[led_alarm]={
				.port = GPIO_PORTA,
				.pin= PIN0,
				.connection= Led_conn_forward,
				.defaultstate= led_state_off
		},
		[led_green]={
				.port = GPIO_PORTA,
				.pin= PIN1,
				.connection= Led_conn_forward,
				.defaultstate= led_state_off
		}
};
