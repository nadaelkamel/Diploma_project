/*
 * Servo_Prog.c
 *
 *  Created on: Sep 20, 2022
 *      Author: nadakenzyali
 */

#include "Servo_interface.h"

void H_Servo_Void_ServoInit(void)
{
	M_Timer_Void_PWMInit(TIMER0_CHANNEL);
	M_Timer_Void_PWMSetFrequency(50);
}
void H_Servo_Void_ServoSetAngel(u16 Copy_U8_Angel)
{
	Copy_U8_Angel*=2;
	f32 Local_F32_Value =( ((Copy_U8_Angel * 5.0) / 180.0) + 5.0);
	M_Timer_Void_PWMSetDutyCycle(TIMER0_CHANNEL,Local_F32_Value);
}
void H_Servo_Void_ServoSetStart(void)
{
	M_Timer_Void_PWMStart(TIMER0_CHANNEL);
}
void H_Servo_Void_ServoSetStop(void)
{
	M_Timer_Void_PWMStop(TIMER0_CHANNEL);
}
