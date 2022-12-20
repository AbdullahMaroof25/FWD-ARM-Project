#include "LED_Interface.h"
#include "Port_interface.h"
#include "DIO_Interface.h"
#include "Port_Config.h"


void  HLED_voidTurnOn(void)
{
		Dio_WritePin( Led_Pin ,DIO_HIGH);
}
void  HLED_voidTurnOff(void)
{
	Dio_WritePin(Led_Pin,DIO_LOW);
}
