/*
 * AT24C16A_interface.h
 *
 *  Created on: Sep 24, 2022
 *      Author: nadakenzyali
 */

#ifndef HAL_AT24C16A_AT24C16A_INTERFACE_H_
#define HAL_AT24C16A_AT24C16A_INTERFACE_H_

/*================================ INCLUDES ===============================*/
#include "AT24C16A_Config.h"
#include "I2C_Interface.h"
#include <util/delay.h>
#include "BitMath.h"
#include "STD.h"

/*=============================== PROTOTYPES ===============================*/
void H_AT24C16A_Void_EEPROMInit(void);
void H_AT24C16A_Void_EEPROMWrite(u8,u8,u8);
u8   H_AT24C16A_Void_EEPROMRead(u8,u8);


#endif /* HAL_AT24C16A_AT24C16A_INTERFACE_H_ */
