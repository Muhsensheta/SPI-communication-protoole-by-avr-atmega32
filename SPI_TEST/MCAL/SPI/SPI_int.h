/*
 * SPI_int.h
 *
 *  Created on: ٢٠‏/٠٢‏/٢٠٢٣
 *      Author: houras
 */

#ifndef SPI_SPI_INT_H_
#define SPI_SPI_INT_H_

void M_SPI_void_MasterInit();
void M_SPI_void_MasterTransmit(u8 copy_u8Data);
void M_SPI_void_SlaveInit();
 u8 M_SPI_void_SlaveReceive();



#endif /* SPI_SPI_INT_H_ */
