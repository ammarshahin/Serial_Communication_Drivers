/*
 * SerialCommunication_Transmition.c
 *
 * Created: 11/12/2019 11:29:21 AM
 * Author : Ammar Shahin
 */ 
/************************************************************************/
/*                            Files Includes                            */
/************************************************************************/
#include "SPI.h"
#include "SwDelay.h"
#include "Gpio.h"
#include "pushButton.h"


/************************************************************************/
/*                     Functions Implementations                        */
/************************************************************************/
int main(void)
{
	char i = 0;
	SPI_Init(&SPI_Cfg_s);
	pushButton_Init(pushButton0);
    while (TRUE) 
    {
		if(pushButton_Get_Status(pushButton0))
		{
			if (i > 9)
			{
				i = 0;
			}
			SPI_Send(i);
			i++;
			SwDelay_ms(100);
		}
    }
}

