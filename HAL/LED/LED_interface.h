/*
 * LED_interface.h
 *
 *  Created on: Aug 27, 2022
 *      Author: nadakenzyali
 */

#ifndef LED_LED_INTERFACE_H_
#define LED_LED_INTERFACE_H_
/*================================ INCLUDES ===============================*/
#include "DIO_interface.h"
#include "LED_Config.h"
/*================================= MACROS ===============================*/
#define LED0 	0
#define LED1 	1
#define LED2 	2
/*=============================== PROTOTYPES ===============================*/
void H_LED_Void_LedInit(u8);
void H_LED_Void_LedSetOn(u8);
void H_LED_Void_LedSetOff(u8);
void H_LED_Void_LedTog(u8);

#endif /* LED_LED_INTERFACE_H_ */
