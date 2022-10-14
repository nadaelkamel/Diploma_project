/*
 * I2C_interface.h
 *
 *  Created on: Sep 23, 2022
 *      Author: nadakenzyali
 */

#ifndef MCAL_I2C_I2C_INTERFACE_H_
#define MCAL_I2C_I2C_INTERFACE_H_
/*================================ INCLUDES ===============================*/
#include "I2C_Config.h"
#include "BitMath.h"
#include "STD.h"
/*=============================== PROTOTYPES ===============================*/
void M_I2C_Void_I2CInit(void);
void M_I2C_Void_I2CStartCondition(void);
void M_I2C_Void_I2CStopCondition(void);
void M_I2C_Void_I2CRepeatedStart(void);
void M_I2C_Void_I2CSendSlaveAddressWrite(u8);
void M_I2C_Void_I2CSendSlaveAddressRead(u8);
void M_I2C_Void_I2CWriteByte(u8);
u8 M_I2C_Void_I2CReadByte(void);

#endif /* MCAL_I2C_I2C_INTERFACE_H_ */
