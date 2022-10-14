/*
 * PB_interface.h
 *
 *  Created on: Aug 27, 2022
 *      Author: nadakenzyali
 */

#ifndef HAL_PB_PB_INTERFACE_H_
#define HAL_PB_PB_INTERFACE_H_
/*================================ INCLUDES ===============================*/
#include "STD.h"
#include "PB_Config.h"
#include "DIO_interface.h"
#include <util/delay.h>
/*================================= MACROS ===============================*/
#define ACTIVE_HIGH 1
#define ACTIVE_LOW 2

#define PB0 		0
#define PB1 		1
#define PB2 		2

#if PB_MODE == ACTIVE_HIGH
#define RELEASED 	0
#define PRESSED  	1
#elif PB_MODE == ACTIVE_LOW
#define RELEASED 	1
#define PRESSED  	0
#endif
/*=============================== PROTOTYPES ===============================*/
void H_PB_Void_PBInit(u8);
u8 H_PB_Void_PBRead(u8);

#endif /* HAL_PB_PB_INTERFACE_H_ */
