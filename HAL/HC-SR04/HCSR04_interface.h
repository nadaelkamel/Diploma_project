/*
 * HCSR04_interface.h
 *
 *  Created on: Oct 4, 2022
 *      Author: nadakenzyali
 */

#ifndef HAL_HC_SR04_HCSR04_INTERFACE_H_
#define HAL_HC_SR04_HCSR04_INTERFACE_H_

#include "STD.h"
#include "BitMath.h"
#include "HCSR04_Config.h"
#include "DIO_interface.h"
#include <util/delay.h>
#include <avr/interrupt.h>


void H_HCSR04_Void_HCSR04Init(void);
void H_HCSR04_Void_HCSR04Start(void);

#endif /* HAL_HC_SR04_HCSR04_INTERFACE_H_ */
