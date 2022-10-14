/*
 * SPI_Prog.c
 *
 *  Created on: Sep 22, 2022
 *      Author: nadakenzyali
 */

#include "SPI_interface.h"
#include "SPI_Private.h"

void M_SPI_Void_SPIInit(void)
{
#if SPI_MODE   == SPI_MASTER_MODE
	SET_BIT(SPCR_REG,MSTR_BIT);
	/* To SELECT DV -> 1024 */
	SET_BIT(SPCR_REG,SPR0_BIT);
	SET_BIT(SPCR_REG,SPR1_BIT);
	M_DIO_Void_SetPinDirection(PB5_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(PB6_PIN,INPUT);
	M_DIO_Void_SetPinDirection(PB4_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(PB7_PIN,OUTPUT);
#elif SPI_MODE   == SPI_SLAVE_MODE
	CLR_BIT(SPCR_REG,MSTR_BIT);

	M_DIO_Void_SetPinDirection(PB5_PIN,INPUT);
	M_DIO_Void_SetPinDirection(PB6_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(PB4_PIN,INPUT);
	M_DIO_Void_SetPinDirection(PB7_PIN,INPUT);
#endif
	/* To select sending from LSB */
	SET_BIT(SPCR_REG,DORD_BIT);
	/* To enable SPI Circuit */
	SET_BIT(SPCR_REG,SPE_BIT);
}
u8 M_SPI_Void_SPITransive(u8 Copy_U8_DataSend)
{
	SPDR_REG = Copy_U8_DataSend;
	u32 Local_U32_Counter = 0;
		while(Local_U32_Counter < PULLING_TIME)
		{
			Local_U32_Counter++;
			if(GET_BIT(SPSR_REG,SPIF_BIT) == SPI_FINISHED_TRANSIVE)
			{
				break;
			}
		}
	return SPDR_REG;
}
