/*
 * I2C_Prog.c
 *
 *  Created on: Sep 23, 2022
 *      Author: nadakenzyali
 */

#include "I2C_interface.h"
#include "I2C_Private.h"


void M_I2C_Void_I2CInit(void)
{
#if I2C_MODE	 ==		I2C_MASTER_MODE
	/* TO SELECT F_SCL -> 400 KHZ*/
	TWBR_REG = 12;

#elif I2C_MODE	 ==		I2C_SLAVE_MODE
	TWAR_REG = (SLAVE_ADDRESS << 1)  | GENERAL_CALL_RESPONSE;
#endif
	/* TO ENABLE I2C CIRCUIT*/
	SET_BIT(TWCR_REG,TWEN_BIT);
}
void M_I2C_Void_I2CStartCondition(void)
{
	/* TO MAKE A START CONDITION */
	SET_BIT(TWCR_REG,TWSTA_BIT);
	/* TO CLEAR THE FLAG , clr flg by setting it (el3aks) */
	SET_BIT(TWCR_REG,TWINT_BIT);
	while(GET_BIT(TWCR_REG,TWINT_BIT) == I2C_STILL_PROCESSING);
	while((TWSR_REG & 0xF8) != START_CONDITION_HAS_BEEN_TRANSMITED);
}
void M_I2C_Void_I2CStopCondition(void)
{	/* TO MAKE A STOP CONDITION */
	SET_BIT(TWCR_REG,TWSTO_BIT);
	SET_BIT(TWCR_REG,TWINT_BIT);
}
void M_I2C_Void_I2CRepeatedStart(void)
{
	SET_BIT(TWCR_REG,TWSTA_BIT);
	/* TO CLEAR THE FLAG */
	SET_BIT(TWCR_REG,TWINT_BIT);
	while(GET_BIT(TWCR_REG,TWINT_BIT) == I2C_STILL_PROCESSING);
	while((TWSR_REG & 0xF8) != REPEATED_START_CONDITION_HAS_BEEN_TRANSMITED);
}
void M_I2C_Void_I2CSendSlaveAddressWrite(u8 Copy_U8_Address)
{
	TWDR_REG = Copy_U8_Address << 1; //To Avoid general code
	/* TO CLEAR THE FLAG */
	SET_BIT(TWCR_REG,TWINT_BIT);
	while(GET_BIT(TWCR_REG,TWINT_BIT) == I2C_STILL_PROCESSING);
	while((TWSR_REG & 0xF8) != SLAVE_ADDRESS_W_TRANSMITED_ACK_REC);
}
void M_I2C_Void_I2CSendSlaveAddressRead(u8 Copy_U8_Address)
{
	TWDR_REG = (Copy_U8_Address << 1) | 1;
	/* TO CLEAR THE FLAG */
	SET_BIT(TWCR_REG,TWINT_BIT);
	while(GET_BIT(TWCR_REG,TWINT_BIT) == I2C_STILL_PROCESSING);
	while((TWSR_REG & 0xF8) != SLAVE_ADDRESS_R_TRANSMITED_ACK_REC);
}
void M_I2C_Void_I2CSendByte(u8 Copy_U8_Data)
{	TWDR_REG = Copy_U8_Data;
    /* TO CLEAR START BIT ACCORDING TO TABLE*/
    CLR_BIT(TWCR_REG,TWSTA_BIT);
    /* TO CLEAR STOP BIT ACCORDING TO TABLE*/
    CLR_BIT(TWCR_REG,TWSTO_BIT);
	/* TO CLEAR THE FLAG */
	SET_BIT(TWCR_REG,TWINT_BIT);
	while(GET_BIT(TWCR_REG,TWINT_BIT) == I2C_STILL_PROCESSING);
	while((TWSR_REG & 0xF8) != BYTE_TRANSMITED_ACK_REC);
}
u8 M_I2C_Void_I2CReadByte(void)
{
	u8 Local_U8_Data = TWDR_REG;
	/* TO CLEAR THE FLAG */
	SET_BIT(TWCR_REG,TWINT_BIT);
	while(GET_BIT(TWCR_REG,TWINT_BIT) == I2C_STILL_PROCESSING);
	while((TWSR_REG & 0xF8) != BYTE_REC_ACK_TRANSMITED);
	return Local_U8_Data;
}
