/*
 * timer1.c
 *
 *  Created on: Mar 30, 2018
 *      Author: Dody_PC
 */

#include "types.h"
#include "registers.h"
#define SetBit(Register,Pin)   Register|=(1<<Pin)
#define ClrBit(Register,Pin)   Register&=(~(1<<Pin))

void Timer2PWMInit(void)
{
	TCCR2=0b01101101;
	OCR2=25;
}
