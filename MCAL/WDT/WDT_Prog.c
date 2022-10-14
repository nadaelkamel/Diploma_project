/*
 * WDT_Prog.c
 *
 *  Created on: Sep 16, 2022
 *      Author: nadakenzyali
 */

#include "WDT_interface.h"
#include "WDT_Private.h"
void M_WTD_Void_WDTInit(void)
{
	/* TO ENABLE WDT */
	SET_BIT(WDTCR_REG,WDE_BIT);

	/* TO SELECT 2.1 SEC AS WINDOW TIME */
	SET_BIT(WDTCR_REG,WDP0_BIT);
	SET_BIT(WDTCR_REG,WDP1_BIT);
	SET_BIT(WDTCR_REG,WDP2_BIT);
}
void M_WTD_Void_WDTRefresh(void)
{
	/* Reads Assembly */
	asm("WDR");
}
