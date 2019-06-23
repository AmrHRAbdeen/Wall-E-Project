/*
 * DIO.c
 *
 *  Created on: Feb 23, 2018
 *      Author: Dody_PC
 */
#include "types.h"
#include "registers.h"
#define SetBit(Register,Pin)   Register|=(1<<Pin)
#define ClrBit(Register,Pin)   Register&=(~(1<<Pin))

void DIO_vid_SetPortDirection(u8 Port_Number,u8 Value)
{
	switch(Port_Number)
	{
	case 0:
		DDRA=Value;
		break;
	case 1:
		DDRB=Value;
		break;
	case 2:
		DDRC=Value;
		break;
	case 3:
		DDRD=Value;
		break;


	}
}

void DIO_vid_SetPortValue(u8 Port_Number,u8 Value)
{
	switch(Port_Number)
	{
	case 0:
		PORTA=Value;
		break;
	case 1:
		PORTB=Value;
		break;
	case 2:
		PORTC=Value;
		break;
	case 3:
		PORTD=Value;
		break;

	}
}



void DIO_vid_SetPinDirection(u8 Port_Number,u8 Pin_Number ,u8 Value)
{
	switch(Port_Number)
	{
	case 0:
		if(Value==1)
			SetBit(DDRA,Pin_Number);
		else
			ClrBit(DDRA,Pin_Number);
		break;
	case 1:
		if(Value==1)
			SetBit(DDRB,Pin_Number);
		else
			ClrBit(DDRB,Pin_Number);
		break;
	case 2:
		if(Value==1)
			SetBit(DDRC,Pin_Number);
		else
			ClrBit(DDRC,Pin_Number);
		break;
	case 3:
		if(Value==1)
			SetBit(DDRD,Pin_Number);
		else
			ClrBit(DDRD,Pin_Number);
		break;


	}
}


void DIO_vid_SetPinValue(u8 Port_Number,u8 Pin_Number ,u8 Value)
{
	switch(Port_Number)
	{
	case 0:
		if(Value==1)
			SetBit(PORTA,Pin_Number);
		else
			ClrBit(PORTA,Pin_Number);
		break;
	case 1:
		if(Value==1)
			SetBit(PORTB,Pin_Number);
		else
			ClrBit(PORTB,Pin_Number);
		break;
	case 2:
		if(Value==1)
			SetBit(PORTC,Pin_Number);
		else
			ClrBit(PORTC,Pin_Number);
		break;
	case 3:
		if(Value==1)
			SetBit(PORTD,Pin_Number);
		else
			ClrBit(PORTD,Pin_Number);
		break;


	}
}



u8 DIO_U8_ReadPortValue(u8 Port_Number)

{
u8 Value;
switch (Port_Number) {
    case 0:
		Value=PINA;
		break;
	case 1:
		Value=PINB;
		break;
	case 2:
		Value=PINC;
		break;
	case 3:
		Value=PIND;
		break;
}

return Value;

}
