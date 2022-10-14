/*
 * SPI_Private.h
 *
 *  Created on: Sep 22, 2022
 *      Author: nadakenzyali
 */

#ifndef MCAL_SPI_SPI_PRIVATE_H_
#define MCAL_SPI_SPI_PRIVATE_H_
/*=============================== REGISTERS ===============================*/
#define SPCR_REG	    *(volatile u8*)0x2D
#define SPDR_REG		*(volatile u8*)0x2F
#define SPSR_REG		*(volatile u8*)0x2E

#define SPI_MASTER_MODE  1
#define SPI_SLAVE_MODE   2

#define PULLING_TIME   20000000
#define SPI_FINISHED_TRANSIVE		1
/*SPCR REG*/
#define SPR0_BIT  0
#define SPR1_BIT  1

#define SPE_BIT  6
#define DORD_BIT 5
#define MSTR_BIT 4
/*SPSR REG*/
#define SPIF_BIT 7

#endif /* MCAL_SPI_SPI_PRIVATE_H_ */
