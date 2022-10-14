/*
 * ADC_interface.h
 *
 *  Created on: Sep 10, 2022
 *      Author: nadakenzyali
 */

#ifndef MCAL_ADC_ADC_INTERFACE_H_
#define MCAL_ADC_ADC_INTERFACE_H_


#include "ADC_Private.h"

#include "BitMath.h"
#include "STD.h"
#include "ADC_Config.h"

#define ADC_CHANNEL_0         0
#define ADC_CHANNEL_1         1
#define ADC_CHANNEL_2         2
#define ADC_CHANNEL_3         3
#define ADC_CHANNEL_4         4
#define ADC_CHANNEL_5         5
#define ADC_CHANNEL_6         6
#define ADC_CHANNEL_7         7


void M_ADC_Void_ADCInit(void);
u16 M_ADC_U16_ADCRead(u8);


#endif /* MCAL_ADC_ADC_INTERFACE_H_ */
