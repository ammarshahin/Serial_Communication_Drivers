/*
 * SerialCommunication_Recive.c
 *
 * Created: 11/12/2019 2:09:21 PM
 * Author : Ammar Shahin
 */ 

#include "SPI.h"
#include "SPI_Lcfg.h"
#include "Gpio.h"
#include "SSD.h"

int main(void)
{
	uint8 data;
	SPI_Init(&SPI_Cfg_s);
	SSD_Init_BCD(ssd1);
    while (TRUE) 
    {
		data = SPI_Receive();
		SSD_Display_BCD(data);
	}
}

