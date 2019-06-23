/*
 * DIO.h
 *
 *  Created on: Feb 23, 2018
 *      Author: Dody_PC
 */
#include "types.h"
#ifndef DIO_H_
#define DIO_H_

void DIO_vid_SetPortDirection(u8 Port_Number,u8 Value);
void DIO_vid_SetPortValue(u8 Port_Number,u8 Value);
void DIO_vid_SetPinDirection(u8 Port_Number,u8 Pin_Number ,u8 Value);
void DIO_vid_SetPinValue(u8 Port_Number,u8 Pin_Number ,u8 Value);

u8 DIO_U8_ReadPortValue(u8 Port_Number);

#endif /* DIO_H_ */
