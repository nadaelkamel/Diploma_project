/*
 * UART_Private.h
 *
 *  Created on: Sep 21, 2022
 *      Author: nadakenzyali
 */

#ifndef MCAL_UART_UART_PRIVATE_H_
#define MCAL_UART_UART_PRIVATE_H_
/*=============================== REGISTERS ===============================*/
#define UDR_REG		    *(volatile u8*)0x2C
#define UCSRA_REG		*(volatile u8*)0x2B
#define UCSRB_REG		*(volatile u8*)0x2A
#define UCSRC_REG		*(volatile u8*)0x40
#define UBRRL_REG		*(volatile u8*)0x29
//A
#define RXC_BIT				6
#define TXC_BIT				7
//B
#define RXEN_BIT			4
#define TXEN_BIT			3
#define UCSZ2_BIT			2
//C
#define UCSZ0_BIT			1
#define UCSZ1_BIT			2

#define USBS_BIT 			3
#define UMSEL_BIT			6

#define UPM0_BIT			4
#define UPM1_BIT 			5


#define UART_PARITY_DISABLE 1
#define UART_PARITY_EVEN 2
#define UART_PARITY_ODD 3

#define UART_1_STOP_BIT 1
#define F_OSC 16

#define UART_FINISHED_RECIEVING 		1
#define UART_FINISHED_TRANSMITTING 		1
#define PULLING_TIME 				2000000

#endif /* MCAL_UART_UART_PRIVATE_H_ */
