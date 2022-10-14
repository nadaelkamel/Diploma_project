/*
 * Timer_interface.h
 *
 *  Created on: Sep 13, 2022
 *      Author: nadakenzyali
 */

#ifndef MCAL_TIMER_TIMER_INTERFACE_H_
#define MCAL_TIMER_TIMER_INTERFACE_H_
/*================================ INCLUDES ===============================*/
#include "STD.h"
#include "BitMath.h"
#include "Timer_Config.h"
#include "DIO_interface.h"
#include <avr/interrupt.h>
/*=============================== PROTOTYPES ===============================*/
void M_Timer_Void_TimerInit(u8);
void M_Timer_Void_PWMInit(u8);

void M_Timer_Void_TimerStart(u8);
void M_Timer_Void_PWMStart(u8);

void M_Timer_Void_TimerStop(u8);
void M_Timer_Void_PWMStop(u8);

void M_Timer_Void_TimerSetTime(u8,u32);
void M_Timer_Void_PWMSetDutyCycle(u8,f32);

void M_Timer_Void_PWMSetFrequency(u8);
void M_Timer_Void_SetCallBack(u8,void(*)(void));
/*=============================== MACROS ===============================*/
#define TIMER0_CHANNEL 		0
#define TIMER1_CHANNEL 		1
#define TIMER2_CHANNEL 		2

#endif /* MCAL_TIMER_TIMER_INTERFACE_H_ */
