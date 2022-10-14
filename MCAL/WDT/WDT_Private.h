/*
 * WDT_Private.h
 *
 *  Created on: Sep 16, 2022
 *      Author: nadakenzyali
 */

#ifndef MCAL_WDT_WDT_PRIVATE_H_
#define MCAL_WDT_WDT_PRIVATE_H_
/*=============================== REGISTERS ===============================*/
#define WDTCR_REG		*(volatile u8*)0x41
/*================================ BITS ===============================*/
#define WDE_BIT 		3
#define WDP0_BIT		0
#define WDP1_BIT        1
#define WDP2_BIT        2

#endif /* MCAL_WDT_WDT_PRIVATE_H_ */
