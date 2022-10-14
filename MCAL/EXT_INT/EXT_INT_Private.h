/*
 * EXT_INT_Private.h
 *
 *  Created on: Sep 6, 2022
 *      Author: nadakenzyali
 */

#ifndef MCAL_EXT_INT_EXT_INT_PRIVATE_H_
#define MCAL_EXT_INT_EXT_INT_PRIVATE_H_

/*=============================== REGISTERS ===============================*/
#define MCUCR_REG 		*(volatile u8*)0x55
#define GICR_REG 		*(volatile u8*)0x5B 		 //Local INT
#define MCUCSR_REG		*(volatile u8*)0x54
/*================================ BITS ===============================*/
/*MCUCSR BITS FOR EXT_INT2 */
#define ISC2_BIT 	    6

/*MCUCR BITS FOR EXT_INT[0/1] */
#define ISC11_BIT		3
#define ISC10_BIT		2
#define ISC01_BIT		1
#define ISC00_BIT		0

/*GICR BITS TO ENABLE LOCAL INT */
#define INT0_BIT		6
#define INT1_BIT		7
#define INT2_BIT		5

/*================================ MACROS ===============================*/
#define RISING_EDGE				1
#define FALLING_EDGE			2
#define LOW_LEVEL				3
#define ANY_LOGICAL_CHANGE		4



#endif /* MCAL_EXT_INT_EXT_INT_PRIVATE_H_ */
