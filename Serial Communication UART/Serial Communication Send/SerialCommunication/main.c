/*
 * UART_Transmition.c
 *
 * Created: 11/12/2019 11:29:21 AM
 * Author : Ammar Shahin
 */ 
/************************************************************************/
/*                            Files Includes                            */
/************************************************************************/
#include "UART.h"
#include "SwDelay.h"
#include "pushButton.h"


/************************************************************************/
/*                     Functions Implementations                        */
/************************************************************************/
int main(void)
{
	char i = 0;
	UART_Init(&UART_Cfg_s);
	pushButton_Init(pushButton0);
	while (TRUE)
	{
		if(pushButton_Get_Status(pushButton0))
		{
			if (i > 9)
			{
				i = 0;
			}
			UART_Send(i);
			i++;
			SwDelay_ms(100);
		}
	}
}