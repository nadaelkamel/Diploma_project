/*
 * Timer_Config.h
 *
 *  Created on: Sep 13, 2022
 *      Author: nadakenzyali
 */

#ifndef MCAL_TIMER_TIMER_CONFIG_H_
#define MCAL_TIMER_TIMER_CONFIG_H_

/* SELECT TIMER_MODE : [NORMAL_MODE , CTC_MODE]  */
#define TIMER0_MODE     NORMAL_MODE

/* SELECT TIMER_PRESCALER_DV : [1024 , 256]  */
#define TIMER_PRESCALER_DV		1024

/* SELECT F_OSC IN MEGA HERTZ : [16] oscillator  */
#define F_OSC			16

/* SELECT PWM0_MODE : [FAST_PWM , PHASE_CORRECT_PWM]   */
#define PWM0_MODE       FAST_PWM

/* SELECT PWM_MODE2 : [INVERTED , NON_INVERTED]   */
#define PWM0_MODE2 		NON_INVERTED

/* SELECT TIMER1_PRESCALER_DV : [256]  */
#define TIMER1_PRESCALER_DV 		256



#endif /* MCAL_TIMER_TIMER_CONFIG_H_ */
