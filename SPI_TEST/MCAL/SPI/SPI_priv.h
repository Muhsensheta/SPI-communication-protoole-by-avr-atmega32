/*
 * SPI_priv.h
 *
 *  Created on: ٢٠‏/٠٢‏/٢٠٢٣
 *      Author: houras
 */

#ifndef SPI_SPI_PRIV_H_
#define SPI_SPI_PRIV_H_

#define SPCR_REG      (*((volatile u8*)0x2D))// spi control register

#define SPSR_REG      (*((volatile u8*)0x2E))
#define SPDR_REG      (*((volatile u8*)0x2F))

//SPCR REG BITS
#define SPR0_BIT   0
#define SPR1_BIT   1
#define CPHA_BIT   2
#define SPOL_BIT   3
#define MSTR_BIT   4
#define DORD_BIT   5
#define SPE_BIT    6
#define SPIE_BIT   7


//SPSR REG BITS
#define SPI2X_BIT   0
#define WCOL_BIT   6
#define SPIF_BIT   7

//SPDR REG BITS
#define SPI_SS        PIN4
#define SPI_MOSI      PIN5
#define SPI_MISO      PIN6
#define SPI_CLK       PIN7
#endif /* SPI_SPI_PRIV_H_ */
