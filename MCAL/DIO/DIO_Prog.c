/*
 * DIO_Prog.c
 *
 *  Created on: Aug 26, 2022
 *      Author: nadakenzyali
 */
#include "DIO_Private.h"
#include "DIO_interface.h"

void M_DIO_Void_SetPinDirection(u8 Copy_U8_Num,u8 Copy_U8_State)
{
	u8 Local_U8_Pin =  Copy_U8_Num % 10;
	u8 Local_U8_Port = Copy_U8_Num / 10;
	switch(Copy_U8_State)
	{
	case INPUT: 				//0
		switch(Local_U8_Port)
		{
		case 1: CLR_BIT(DDRA_REG,Local_U8_Pin);		break;
		case 2: CLR_BIT(DDRB_REG,Local_U8_Pin);		break;
		case 3: CLR_BIT(DDRC_REG,Local_U8_Pin);		break;
		case 4: CLR_BIT(DDRD_REG,Local_U8_Pin);     break;
		}
		break;
	case OUTPUT:				 //1
		switch(Local_U8_Port)
		{
		case 1: SET_BIT(DDRA_REG,Local_U8_Pin);		break;
		case 2: SET_BIT(DDRB_REG,Local_U8_Pin);		break;
		case 3: SET_BIT(DDRC_REG,Local_U8_Pin);		break;
		case 4: SET_BIT(DDRD_REG,Local_U8_Pin);     break;
		}
		break;
	}
}

void M_DIO_Void_SetPinValue(u8 Copy_U8_Num,u8 Copy_U8_State)
{
	u8 Local_U8_Pin =  Copy_U8_Num % 10;
	u8 Local_U8_Port = Copy_U8_Num / 10;
	switch(Copy_U8_State)
	{
	case LOW: 				//0
		switch(Local_U8_Port)
		{
		case 1: CLR_BIT(PORTA_REG,Local_U8_Pin);		break;
		case 2: CLR_BIT(PORTB_REG,Local_U8_Pin);		break;
		case 3: CLR_BIT(PORTC_REG,Local_U8_Pin);		break;
		case 4: CLR_BIT(PORTD_REG,Local_U8_Pin);        break;
		}
		break;
	case HIGH:				 //1
		switch(Local_U8_Port)
		{
		case 1: SET_BIT(PORTA_REG,Local_U8_Pin);		break;
		case 2: SET_BIT(PORTB_REG,Local_U8_Pin);		break;
		case 3: SET_BIT(PORTC_REG,Local_U8_Pin);		break;
		case 4: SET_BIT(PORTD_REG,Local_U8_Pin);        break;
		}
		break;
	}
}

void M_DIO_Void_TogPin(u8 Copy_U8_Num)
{
	u8 Local_U8_Pin = Copy_U8_Num % 10;
	u8 Local_U8_Port = Copy_U8_Num / 10;

		switch (Local_U8_Port) {
			case 1:     TOG_BIT(PORTA_REG, Local_U8_Pin);    break;
			case 2:		TOG_BIT(PORTB_REG, Local_U8_Pin);    break;
			case 3:     TOG_BIT(PORTC_REG, Local_U8_Pin);    break;
			case 4:     TOG_BIT(PORTD_REG, Local_U8_Pin);    break;
			default:                                             break;
      }
}

u8   M_DIO_U8_GetPinValue(u8 Copy_U8_Num)
{
	u8 Local_U8_Pin =  Copy_U8_Num % 10;
	u8 Local_U8_Port = Copy_U8_Num / 10;
	u8 Local_U8_Reading = 0;
	    switch(Local_U8_Port)
		{
		case 1: Local_U8_Reading = GET_BIT(PINA_REG,Local_U8_Pin);		    break;
		case 2: Local_U8_Reading = GET_BIT(PINB_REG,Local_U8_Pin);		    break;
		case 3: Local_U8_Reading = GET_BIT(PINC_REG,Local_U8_Pin);			break;
		case 4: Local_U8_Reading = GET_BIT(PIND_REG,Local_U8_Pin);          break;
		}
	return Local_U8_Reading;
}
void M_DIO_Void_SetPinPullUpRes(u8 Copy_U8_Num,u8 Copy_U8_State)
{
	u8 Local_U8_Pin =  Copy_U8_Num % 10;
		u8 Local_U8_Port = Copy_U8_Num / 10;

		switch(Copy_U8_State)
		{
		case DISABLE: 				//0
			switch(Local_U8_Port)
			{
			case 1: CLR_BIT(PORTA_REG,Local_U8_Pin);		break;
			case 2: CLR_BIT(PORTB_REG,Local_U8_Pin);		break;
			case 3: CLR_BIT(PORTC_REG,Local_U8_Pin);		break;
			case 4: CLR_BIT(PORTD_REG,Local_U8_Pin);        break;
			}
			break;
		case ENABLE:				 //1
			switch(Local_U8_Port)
			{
			case 1: SET_BIT(PORTA_REG,Local_U8_Pin);		break;
			case 2: SET_BIT(PORTB_REG,Local_U8_Pin);		break;
			case 3: SET_BIT(PORTC_REG,Local_U8_Pin);		break;
			case 4: SET_BIT(PORTD_REG,Local_U8_Pin);        break;
			}
			break;
		}
}
