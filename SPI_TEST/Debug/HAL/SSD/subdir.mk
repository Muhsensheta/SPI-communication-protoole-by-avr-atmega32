################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/SSD/SSD_prog.c 

OBJS += \
./HAL/SSD/SSD_prog.o 

C_DEPS += \
./HAL/SSD/SSD_prog.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/SSD/%.o: ../HAL/SSD/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\SPI_TEST\APP" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\SPI_TEST\MCAL\SPI" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\SPI_TEST\HAL\LCD" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\SPI_TEST\HAL\LED" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\SPI_TEST\HAL\PB" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\SPI_TEST\HAL\SSD" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\SPI_TEST\LIB" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\SPI_TEST\MCAL\DIO" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\SPI_TEST\MCAL\EXT1" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\SPI_TEST\MCAL\GIE" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\SPI_TEST\MCAL\TIMER" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\SPI_TEST\MCAL\TIMER1" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\SPI_TEST\MCAL\WDT" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


