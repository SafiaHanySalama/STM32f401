/******************************************************************************
 *
 * Module: 
 *
 * File Name: systick.h
 *
 * Description: 
 *
 * Author: Safia Hany
 * 
 * Date:  Mar 23, 2024
 ******************************************************************************/
#ifndef INCLUDE_MCAL_SYSTICK_H_
#define INCLUDE_MCAL_SYSTICK_H_

#include "Std_Types.h"

#define ONESHOOT			0
#define PERIODIC			1
#define SYSTICK_MODE		PERIODIC
typedef void (*systick_cbf_t) (void);

void setCall_Back(systick_cbf_t cbf);
void SYSTICK_Init(void);
void SYSTICK_set_ms(uint32 time);



#endif /* INCLUDE_MCAL_SYSTICK_H_ */
