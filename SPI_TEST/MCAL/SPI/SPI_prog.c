/*
 * SPI_prog.c
 *
 *  Created on: ٢٠‏/٠٢‏/٢٠٢٣
 *      Author: houras
 */
#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include"DIO_int.h"
#include"SPI_priv.h"
#include"SPI_config.h"
#include"SPI_int.h"

void M_SPI_void_MasterInit(void)
{
	/* Set MOSI and SCK output, all others input */
	M_DIO_void_setPinDir(PORTB_ID, SPI_MOSI, OUT);
	M_DIO_void_setPinDir(PORTB_ID,SPI_CLK, OUT);
	M_DIO_void_setPinDir(PORTB_ID,SPI_SS, OUT);

	/* Enable SPI, Master, set clock rate fck/16 */


	SET_BIT(SPCR_REG,  MSTR_BIT);
	SET_BIT(SPCR_REG, SPR0_BIT);
	SET_BIT(SPCR_REG, SPE_BIT);

}
void M_SPI_void_MasterTransmit(u8 copy_u8Data)
{
	/* Start transmission */
	SPDR_REG = copy_u8Data;

	/* Wait for transmission complete */
	while(!(SPSR_REG & (1<<SPIF_BIT)));

}
void M_SPI_void_SlaveInit()
{
	/* Set MISO output, all others input */

	M_DIO_void_setPinDir(PORTB_ID,SPI_MISO,OUT);
	/* Enable SPI */

	SET_BIT(SPCR_REG,SPE_BIT);
}
u8 M_SPI_void_SlaveReceive()
{
	/* Wait for reception complete */
	while(!(SPSR_REG & (1<<SPIF_BIT)));
	/* Return data register */
	return SPDR_REG;

}
