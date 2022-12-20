
#include  "StdTypes.h"
#include  "Utlies.h"

#include "Port_Config.h"
#include "Port_interface.h"
#include "Port_Types.h"
#include "port_Private.h"


//{PF0,PullUp,PIN_INPUT,DIO_Mode},
			//{PF4,PullUp,PIN_INPUT,DIO_Mode}

volatile ChannelConfig_t PinConfig[NumberOfPins] = {
			{PF0,PullUp,PIN_INPUT,DIO_Mode},
			{PF3,PullUp,PIN_OUTPUT,DIO_Mode},
			
			{PF4,PullUp,PIN_INPUT,DIO_Mode}
	
};
