/*
 * AT24C16A_Prog.c
 *
 *  Created on: Sep 24, 2022
 *      Author: nadakenzyali
 */
#include "AT24C16A_interface.h"
#include "AT24C16A_Private.h"

void H_AT24C16A_Void_EEPROMInit(void)
{
	M_I2C_Void_I2CInit();
	_delay_ms(1000); //BEN3TALHA
}
void H_AT24C16A_Void_EEPROMWrite(u8 Copy_U8_Page,u8 Copy_U8_Byte,u8 Copy_U8_Data)
{
	M_I2C_Void_I2CStartCondition();
	M_I2C_Void_I2CSendSlaveAddressWrite(0x50 | Copy_U8_Page);//1010xxx0 //01010(to be shifted) //01010000= =0x50
	M_I2C_Void_I2CSendByte(Copy_U8_Byte);
	M_I2C_Void_I2CSendByte(Copy_U8_Data);
	M_I2C_Void_I2CStopCondition();
	_delay_ms(500);
}
u8 H_AT24C16A_Void_EEPROMRead(u8 Copy_U8_Page,u8 Copy_U8_Byte)
{
	u8 Local_U8_Reading = 0;
	M_I2C_Void_I2CStartCondition();
	M_I2C_Void_I2CSendSlaveAddressWrite(0x50 | Copy_U8_Page);
	M_I2C_Void_I2CSendByte(Copy_U8_Byte);
	M_I2C_Void_I2CRepeatedStart();
	M_I2C_Void_I2CSendSlaveAddressRead(0x50 | Copy_U8_Page);
	Local_U8_Reading = M_I2C_Void_I2CReadByte();
	M_I2C_Void_I2CStopCondition();
	_delay_ms(500);
	return Local_U8_Reading;
}



//repeated start changes operation









//2k bit = 256 byte
//1010 xxx ,ground 000, vcc 111
