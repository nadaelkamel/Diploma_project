/*
 * EXT_INT_Prog.c
 *
 *  Created on: Sep 6, 2022
 *      Author: nadakenzyali
 */

#include "EXT_INT_interface.h"
#include "EXT_INT_Private.h"
void (*EXT_INT_CallBack)(void);

void M_EXT_INT_Void_ExtIntInit(u8 Copy_U8_Num)
{
  switch(Copy_U8_Num)
  {
   case EXT_INT_0 :
        #if SENSE_CONTROL0 == RISING_EDGE //11
	    SET_BIT(MCUCR_REG,ISC00_BIT);
	    SET_BIT(MCUCR_REG,ISC01_BIT);
        #elif SENSE_CONTROL0 == FALLING_EDGE //01
	    CLR_BIT(MCUCR_REG,ISC00_BIT);
	    SET_BIT(MCUCR_REG,ISC01_BIT);
		#elif SENSE_CONTROL0 == LOW_LEVEL//00
		CLR_BIT(MCUCR_REG,ISC00_BIT);
		CLR_BIT(MCUCR_REG,ISC01_BIT);
		#elif SENSE_CONTROL0 == ANY_LOGICAL_CHANGE //10
		SET_BIT(MCUCR_REG,ISC00_BIT);
		CLR_BIT(MCUCR_REG,ISC01_BIT);
		#endif
		/*to enable EXT_INT_0 */
		SET_BIT(GICR_REG,INT0_BIT);
		break;

	case EXT_INT_1 :
		#if SENSE_CONTROL1 == RISING_EDGE //11
		SET_BIT(MCUCR_REG,ISC10_BIT);
		SET_BIT(MCUCR_REG,ISC11_BIT);
		#elif SENSE_CONTROL1 == FALLING_EDGE //01
		CLR_BIT(MCUCR_REG,ISC10_BIT);
		SET_BIT(MCUCR_REG,ISC11_BIT);
		#elif SENSE_CONTROL1 == LOW_LEVEL//00
		CLR_BIT(MCUCR_REG,ISC10_BIT);
		CLR_BIT(MCUCR_REG,ISC11_BIT);
		#elif SENSE_CONTROL1 == ANY_LOGICAL_CHANGE //10
		SET_BIT(MCUCR_REG,ISC10_BIT);
		CLR_BIT(MCUCR_REG,ISC11_BIT);
		#endif
		/*to enable EXT_INT_1 */
		SET_BIT(GICR_REG,INT1_BIT);
		break;

	case EXT_INT_2 :
		#if SENSE_CONTROL2 == RISING_EDGE //11
		SET_BIT(MCUCSR_REG,ISC2_BIT);
		#elif SENSE_CONTROL2 == FALLING_EDGE //01
		SET_BIT(MCUCSR_REG,ISC2_BIT);
		#endif
		/*to enable EXT_INT_2 */
		SET_BIT(GICR_REG,INT2_BIT);
		break;

	default:				break;
  }
}
void M_EXT_INT_Void_SetCallBack(void (*Copy_Ptr)(void))
{
	EXT_INT_CallBack = Copy_Ptr;
}

ISR(INT0_vect)
{
	EXT_INT_CallBack();
}
ISR(INT1_vect)
{
	EXT_INT_CallBack();
}
ISR(INT2_vect)
{
	EXT_INT_CallBack();
}

