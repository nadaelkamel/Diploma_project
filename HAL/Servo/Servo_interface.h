/*
 * Servo_interface.h
 *
 *  Created on: Sep 20, 2022
 *      Author: nadakenzyali
 */

#ifndef HAL_SERVO_SERVO_INTERFACE_H_
#define HAL_SERVO_SERVO_INTERFACE_H_

#include "DIO_interface.h"
#include "STD.h"
#include "BitMath.h"
#include "Servo_Config.h"
#include "Timer_interface.h"

void H_Servo_Void_ServoInit(void);
void H_Servo_Void_ServoSetAngel(u16);
void H_Servo_Void_ServoSetStart(void);
void H_Servo_Void_ServoSetStop(void);

#endif /* HAL_SERVO_SERVO_INTERFACE_H_ */
