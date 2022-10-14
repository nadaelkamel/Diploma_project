/*
 * Projects.h
 *
 *  Created on: Sep 2, 2022
 *      Author: nadakenzyali
 */

#ifndef APP_PROJECTS_PROJECTS_H_
#define APP_PROJECTS_PROJECTS_H_
/* MCAL */
#include "DIO_interface.h"
#include "EXT_INT_interface.h"
#include "Timer_interface.h"
#include "GIE_interface.h"
#include "WDT_interface.h"
#include "ADC_interface.h"
#include "SPI_interface.h"
#include "UART_interface.h"
#include "I2C_interface.h"

/* HAL */
#include "LED_interface.h"
#include "Buzzer_interface.h"
#include "PB_Interface.h"
#include "SSD_Interface.h"
#include "LCD_interface.h"
#include "KeyPad_interface.h"
#include "LM35_interface.h"
#include "Servo_interface.h"
#include "DCMotor_interface.h"
#include "AT24C16A_interface.h"

#include <util/delay.h>


void A_UARTProject(void);
void A_SSDProject(void);
void A_LCDProject(void);
void A_LEDProject(void);
void A_BuzzerProject(void);

#endif /* APP_PROJECTS_PROJECTS_H_ */
