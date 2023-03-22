/*
 * main.c
 *
 *  Created on: ٢٠‏/٠٢‏/٢٠٢٣
 *      Author: houras
 */

#include <util/delay.h>
#include"STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_int.h"
#include"LCD_int.h"
#include"SPI_int.h"

void main (void)
{

	M_SPI_void_MasterInit();
	while(1)
	{
		M_SPI_void_MasterTransmit('A');
		_delay_ms(1000);
	}
}
