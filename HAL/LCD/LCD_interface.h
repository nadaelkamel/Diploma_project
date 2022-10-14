/*
 * LCD_interface.h
 *
 *  Created on: Sep 2, 2022
 *      Author: nadakenzyali
 */

#ifndef HAL_LCD_LCD_INTERFACE_H_
#define HAL_LCD_LCD_INTERFACE_H_
/*================================ INCLUDES ===============================*/
#include "LCD_Config.h"
#include "DIO_interface.h"
#include "util/delay.h"
/*=============================== PROTOTYPES ===============================*/
void H_LCD_Void_LCDInit(void);
void H_LCD_Void_LCDWriteCharacter(u8);
void H_LCD_Void_LCDWriteCommand(u8);
void H_LCD_Void_LCDWriteString(u8*);
void H_LCD_Void_LCDWriteNumber(s32);
void H_LCD_Void_LCDClear(void);
void H_LCD_Void_LCDGoTo(u8,u8);

#endif /* HAL_LCD_LCD_INTERFACE_H_ */
