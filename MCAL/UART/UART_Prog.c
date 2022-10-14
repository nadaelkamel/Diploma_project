/*
 * UART_Prog.c
 *
 *  Created on: Sep 21, 2022
 *      Author: nadakenzyali
 */

#include "UART_interface.h"
#include "UART_Private.h"

void M_UART_Void_UARTInit(void)
{
	u8 Local_U8_UCSRValue = 0b10000000;
	M_DIO_Void_SetPinDirection(PD0_PIN,INPUT);
	M_DIO_Void_SetPinDirection(PD1_PIN,OUTPUT);

	/* TO SELECT CHARACTERSIZE -> 8 BITS */
	SET_BIT(Local_U8_UCSRValue,UCSZ0_BIT);
	SET_BIT(Local_U8_UCSRValue,UCSZ1_BIT);
	CLR_BIT(UCSRB_REG,UCSZ2_BIT);
	/* TO SELECT ASYNCHRONOUS MODE */
	CLR_BIT(Local_U8_UCSRValue,UMSEL_BIT);
	/* TO SELECT PARITY MODE */
#if UART_PARITY_MODE  ==  UART_PARITY_DISABLE
	CLR_BIT(Local_U8_UCSRValue,UPM0_BIT);
	CLR_BIT(Local_U8_UCSRValue,UPM1_BIT);
#elif UART_PARITY_MODE  ==  UART_PARITY_EVEN
	CLR_BIT(Local_U8_UCSRValue,UPM0_BIT);
	SET_BIT(Local_U8_UCSRValue,UPM1_BIT);
#elif UART_PARITY_MODE  ==  UART_PARITY_ODD
	SET_BIT(Local_U8_UCSRValue,UPM0_BIT);
	SET_BIT(Local_U8_UCSRValue,UPM1_BIT);
#endif
#if UART_STOP_BITS == UART_1_STOP_BIT
	CLR_BIT(Local_U8_UCSRValue,USBS_BIT);
#elif UART_STOP_BITS == UART_2_STOP_BIT
	SET_BIT(Local_U8_UCSRValue,USBS_BIT);
#endif
	/* TO SELECT BRADRATE=9600 */
	UBRRL_REG =((u32)F_OSC*1000000 / ((u32)16*UART_BAUDRATE))-1 ;

	UCSRC_REG = Local_U8_UCSRValue;
	/* TO ENABLE [RX] Circuit */
	SET_BIT(UCSRB_REG,RXEN_BIT);
	/* TO ENABLE [TX] Circuit */
	SET_BIT(UCSRB_REG,TXEN_BIT);
}

void M_UART_Void_UARTSend(u8 Copy_U8_Data)
{
	u32 Local_U32_Counter = 0;
	while(Local_U32_Counter < PULLING_TIME)
	{
		Local_U32_Counter++;
		if(GET_BIT(UCSRA_REG,TXC_BIT) == UART_FINISHED_TRANSMITTING)
		{
			break;
		}
	}
	UDR_REG = Copy_U8_Data;
	/* check flag */
}
u8 M_UART_Void_UARTRec(void)
{
	u32 Local_U32_Counter = 0;
	while(Local_U32_Counter < PULLING_TIME)
	{
		Local_U32_Counter++;
		if(GET_BIT(UCSRA_REG,RXC_BIT) == UART_FINISHED_RECIEVING)
		{
			break;
		}
	}
	/* check flag */

	return UDR_REG;
}
