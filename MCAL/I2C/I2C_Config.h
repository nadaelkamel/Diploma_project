/*
 * I2C_Config.h
 *
 *  Created on: Sep 23, 2022
 *      Author: nadakenzyali
 */

#ifndef MCAL_I2C_I2C_CONFIG_H_
#define MCAL_I2C_I2C_CONFIG_H_


/* SELECT I2C_MODE : [I2C_MASTER_MODE , I2C_SLAVE_MODE]  */
#define I2C_MODE 		I2C_MASTER_MODE

/* SELECT SLAVE_ADDRESS : [1 -> 119]  */
#define SLAVE_ADDRESS 		1

/* SELECT GENERAL_CALL_RESPONSE : [0 , 1]  */
#define GENERAL_CALL_RESPONSE 		0



#endif /* MCAL_I2C_I2C_CONFIG_H_ */
