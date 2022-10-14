/*
 * UART_interface.h
 *
 *  Created on: Sep 21, 2022
 *      Author: nadakenzyali
 */

#ifndef MCAL_UART_UART_INTERFACE_H_
#define MCAL_UART_UART_INTERFACE_H_
/*================================ INCLUDES ===============================*/
#include "DIO_interface.h"
#include "UART_Config.h"
#include "BitMath.h"
#include "STD.h"
/*=============================== PROTOTYPES ===============================*/
void M_UART_Void_UARTInit(void);
void M_UART_Void_UARTSetBaudRate(u32);
void M_UART_Void_UARTSend(u8);
u8 M_UART_Void_UARTRec(void);

#endif /* MCAL_UART_UART_INTERFACE_H_ */
