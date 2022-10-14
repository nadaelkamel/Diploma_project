/*
 * G+IE_Prog.c
 *
 *  Created on: Sep 16, 2022
 *      Author: nadakenzyali
 */

#include "GIE_interface.h"
#include "GIE_Private.h"

void M_GIE_Void_GlobalInterruptEnable(void)
{
	SET_BIT(SREG_REG,I_BIT);
}
void M_GIE_Void_GlobalInterruptDisable(void)
{
	CLR_BIT(SREG_REG,I_BIT);
}



