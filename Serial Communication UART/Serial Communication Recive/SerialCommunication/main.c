/*
 *  UART_Recive.c
 *
 * Created: 11/12/2019 2:09:21 PM
 * Author : Ammar Shahin
 */ 

#include "UART.h"
#include "UART_Lcfg.h"
#include "Gpio.h"
#include "SSD.h"

int main(void)
{
	uint8 data;
	UART_Init(&UART_Cfg_s);
	SSD_Init_BCD(ssd1);
    while (TRUE) 
    {
		data = UART_Receive();
		SSD_Display_BCD(data);
	}
}

