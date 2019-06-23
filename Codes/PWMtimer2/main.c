/*
 * main.c
 *
 *  Created on: Mar 16, 2018
 *      Author: Dody_PC
 */


#include "types.h"
#include "registers.h"
#include "timer0.h"
#include "DIO.h"
#define F_CPU 12000000UL
#include <util/delay.h>

int main(){


	Timer0PWMInit();
	 DIO_vid_SetPinDirection(1,3 ,1);
	while(1)
	{
	}

			return 0;
}
