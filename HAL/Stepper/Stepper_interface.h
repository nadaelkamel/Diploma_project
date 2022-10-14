/*
 * Stepper_interface.h
 *
 *  Created on: Sep 30, 2022
 *      Author: nadakenzyali
 */

#ifndef HAL_STEPPER_STEPPER_INTERFACE_H_
#define HAL_STEPPER_STEPPER_INTERFACE_H_

#include "DIO_interface.h"
#include "Stepper_Config.h"
#include "STD.h"
#include <util/delay.h>

void H_Stepper_Void_StepperInit(void);
void H_Stepper_Void_StepperStart(u8);

#endif /* HAL_STEPPER_STEPPER_INTERFACE_H_ */
