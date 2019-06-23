/*
 * timer1.c
 *
 *  Created on: Apr 1, 2018
 *      Author: Dody_PC
 */


#include "registers.h"
#include "types.h"
void timer1_init(void)
{
	TCCR1A=0b10000010;
	TCCR1B=0b00011100;
	ICR1L=937;
}
