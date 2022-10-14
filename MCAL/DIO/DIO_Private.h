/*
 * DIO_Private.h
 *
 *  Created on: Aug 26, 2022
 *      Author: nadakenzyali
 */

#ifndef DIO_DIO_PRIVATE_H_
#define DIO_DIO_PRIVATE_H_

/*=============================== REGISTERS ===============================*/
/* A */
#define DDRA_REG  *(volatile u8*)0x3A
#define PORTA_REG *(volatile u8*)0x3B
#define PINA_REG  *(volatile u8*)0x39
/* B */
#define DDRB_REG  *(volatile u8*)0x37
#define PORTB_REG *(volatile u8*)0x38
#define PINB_REG  *(volatile u8*)0x36
/* C */
#define DDRC_REG  *(volatile u8*)0x34
#define PORTC_REG *(volatile u8*)0x35
#define PINC_REG  *(volatile u8*)0x33
/* D */
#define DDRD_REG  *(volatile u8*)0x31
#define PORTD_REG *(volatile u8*)0x32
#define PIND_REG  *(volatile u8*)0x30


#endif /* DIO_DIO_PRIVATE_H_ */
