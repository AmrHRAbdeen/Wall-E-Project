/*
 * main.c
 *
 *  Created on: Mar 16, 2018
 *      Author: Dody_PC
 */


#include "types.h"
#include "registers.h"
#include "timer1.h"
#define F_CPU 12000000UL
#include <util/delay.h>

int main(){


	timer1_init();

	while(1)
	{
		OCR1AL=25;  //duty cycle at 0
		_delay_ms(1000);
		OCR1AL=94;     //duty cycle at 180
		_delay_ms(1000);


	}

			return 0;
}
