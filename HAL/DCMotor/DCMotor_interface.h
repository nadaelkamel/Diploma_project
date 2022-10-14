/*
 * DCMotor_interface.h
 *
 *  Created on: Sep 20, 2022
 *      Author: nadakenzyali
 */

#ifndef HAL_DCMOTOR_DCMOTOR_INTERFACE_H_
#define HAL_DCMOTOR_DCMOTOR_INTERFACE_H_

#include "DIO_interface.h"
#include "DCMotor_Config.h"
#include "Timer_interface.h"

#define ACW 0
#define CW 1

void H_DCMotor_Void_DCMotorInit(void);
void H_DCMotor_Void_DCMotorSetSpeed(u32);
void H_DCMotor_Void_DCMotorSetDirection(u8);
void H_DCMotor_Void_DCMotorStart(void);
void H_DCMotor_Void_DCMotorStop(void);

#endif /* HAL_DCMOTOR_DCMOTOR_INTERFACE_H_ */
