#include  "StdTypes.h"
#include  "Utlies.h"

#include "Port_Private.h"
#include "Port_Types.h"

#include "Port_interface.h"
#include "Port_Config.h"

extern volatile ChannelConfig_t PinConfig[NumberOfPins];


void MPORT_voidInit(void)
{
	u8 i=0;
	for( i = 0 ; i < NumberOfPins ; i++ )
	{
		u8 PORT_Num = PinConfig[i].PortPinType /10;
		u8 PIN_Num    = PinConfig[i].PortPinType %10;
		
			switch(PORT_Num)
		{
			case PORTA_ID:
				
				DIO_Write_BitBand(PORTA_BASE,GPIODIR_OFFSET,PIN_Num,PinConfig[i].PortPinDirectionType);
				/*Configure Mode -> (DIO , NOT_DIO)*/
				if(PinConfig[i].PortPinMode == DIO_Mode)
				{
					DIO_Write_BitBand(PORTA_BASE,GPIOAFSEL_OFFSET,PIN_Num,PIN_LOW);
					DIO_Write_BitBand(PORTA_BASE,GPIODEN_OFFSET,PIN_Num,PIN_HIGH);
				}else
				{
					DIO_Write_BitBand(PORTA_BASE,GPIOAFSEL_OFFSET,PIN_Num,PIN_HIGH);
					DIO_Write_BitBand(PORTA_BASE,GPIODEN_OFFSET,PIN_Num,PIN_LOW);
				}
				
				/*Configure internal attachment*/
				if(PinConfig[i].PortPinInternalAttachType == PullUp)
				{
					DIO_Write_BitBand(PORTA_BASE,GPIOPUR_OFFSET,PIN_Num,PIN_HIGH);
				}else if(PinConfig[i].PortPinInternalAttachType == PullDown)
				{
					DIO_Write_BitBand(PORTA_BASE,GPIOPDR_OFFSET,PIN_Num,PIN_HIGH);
				}else //open drain
				{
					DIO_Write_BitBand(PORTA_BASE,GPIOPUR_OFFSET,PIN_Num,PIN_LOW);
					DIO_Write_BitBand(PORTA_BASE,GPIOPDR_OFFSET,PIN_Num,PIN_LOW);
					DIO_Write_BitBand(PORTA_BASE,GPIOODR_OFFSET,PIN_Num,PIN_HIGH);
				}
				break;
				case PORTB_ID:
				
				DIO_Write_BitBand(PORTB_BASE,GPIODIR_OFFSET,PIN_Num,PinConfig[i].PortPinDirectionType);
				/*Configure Mode -> (DIO , NOT_DIO)*/
				if(PinConfig[i].PortPinMode == DIO_Mode)
					{
						DIO_Write_BitBand(PORTB_BASE,GPIOAFSEL_OFFSET,PIN_Num,PIN_LOW);
						DIO_Write_BitBand(PORTB_BASE,GPIODEN_OFFSET,PIN_Num,PIN_HIGH);
				}else
				{
					DIO_Write_BitBand(PORTB_BASE,GPIOAFSEL_OFFSET,PIN_Num,PIN_HIGH);
					DIO_Write_BitBand(PORTB_BASE,GPIODEN_OFFSET,PIN_Num,PIN_LOW);
				}
				
				/*Configure internal attachment*/
				if(PinConfig[i].PortPinInternalAttachType == PullUp)
				{
					DIO_Write_BitBand(PORTB_BASE,GPIOPUR_OFFSET,PIN_Num,PIN_HIGH);
				}else if(PinConfig[i].PortPinInternalAttachType == PullDown)
				{
					DIO_Write_BitBand(PORTB_BASE,GPIOPDR_OFFSET,PIN_Num,PIN_HIGH);
				}else //open drain
				{
					DIO_Write_BitBand(PORTB_BASE,GPIOPUR_OFFSET,PIN_Num,PIN_LOW);
					DIO_Write_BitBand(PORTB_BASE,GPIOPDR_OFFSET,PIN_Num,PIN_LOW);
					DIO_Write_BitBand(PORTB_BASE,GPIOODR_OFFSET,PIN_Num,PIN_HIGH);
				}								
				break;
				
			case PORTC_ID:
				
				DIO_Write_BitBand(PORTC_BASE,GPIODIR_OFFSET,PIN_Num,PinConfig[i].PortPinDirectionType);
				/*Configure Mode -> (DIO , NOT_DIO)*/
				if(PinConfig[i].PortPinMode == DIO_Mode)
				{
						DIO_Write_BitBand(PORTC_BASE,GPIOAFSEL_OFFSET,PIN_Num,PIN_LOW);
						DIO_Write_BitBand(PORTC_BASE,GPIODEN_OFFSET,PIN_Num,PIN_HIGH);
				}else
				{
					DIO_Write_BitBand(PORTC_BASE,GPIOAFSEL_OFFSET,PIN_Num,PIN_HIGH);
					DIO_Write_BitBand(PORTC_BASE,GPIODEN_OFFSET,PIN_Num,PIN_LOW);
				}
				
				/*Configure internal attachment*/
				if(PinConfig[i].PortPinInternalAttachType == PullUp)
				{
					DIO_Write_BitBand(PORTC_BASE,GPIOPUR_OFFSET,PIN_Num,PIN_HIGH);
				}else if(PinConfig[i].PortPinInternalAttachType == PullDown)
				{
					DIO_Write_BitBand(PORTC_BASE,GPIOPDR_OFFSET,PIN_Num,PIN_HIGH);
				}else //open drain
				{
					DIO_Write_BitBand(PORTC_BASE,GPIOPUR_OFFSET,PIN_Num,PIN_LOW);
					DIO_Write_BitBand(PORTC_BASE,GPIOPDR_OFFSET,PIN_Num,PIN_LOW);
					DIO_Write_BitBand(PORTC_BASE,GPIOODR_OFFSET,PIN_Num,PIN_HIGH);
				}																
				break;
				
			case PORTD_ID:
				
				if(PIN_Num == 7)
				{
					*((volatile u32*)(PORTD_BASE+GPIOLOCK_OFFSET))=  UNLOCK_GPIOLOCK;  //unlocking PD7
					DIO_Write_BitBand(PORTD_BASE,GPIOCR_OFFSET,PIN_Num,PIN_HIGH);      //uncommiting PD7
				}			
				DIO_Write_BitBand(PORTD_BASE,GPIODIR_OFFSET,PIN_Num,PinConfig[i].PortPinDirectionType);
				/*Configure Mode -> (DIO , NOT_DIO)*/
				if(PinConfig[i].PortPinMode == DIO_Mode)
				{
						DIO_Write_BitBand(PORTD_BASE,GPIOAFSEL_OFFSET,PIN_Num,PIN_LOW);
						DIO_Write_BitBand(PORTD_BASE,GPIODEN_OFFSET,PIN_Num,PIN_HIGH);
				}else
				{
					DIO_Write_BitBand(PORTD_BASE,GPIOAFSEL_OFFSET,PIN_Num,PIN_HIGH);
					DIO_Write_BitBand(PORTD_BASE,GPIODEN_OFFSET,PIN_Num,PIN_LOW);
				}
				
				/*Configure internal attachment*/
				if(PinConfig[i].PortPinInternalAttachType == PullUp)
				{
					DIO_Write_BitBand(PORTD_BASE,GPIOPUR_OFFSET,PIN_Num,PIN_HIGH);
				}else if(PinConfig[i].PortPinInternalAttachType == PullDown)
				{
					DIO_Write_BitBand(PORTD_BASE,GPIOPDR_OFFSET,PIN_Num,PIN_HIGH);
				}else //open drain
				{
					DIO_Write_BitBand(PORTD_BASE,GPIOPUR_OFFSET,PIN_Num,PIN_LOW);
					DIO_Write_BitBand(PORTD_BASE,GPIOPDR_OFFSET,PIN_Num,PIN_LOW);
					DIO_Write_BitBand(PORTD_BASE,GPIOODR_OFFSET,PIN_Num,PIN_HIGH);
				}							
				break;
				
			case PORTE_ID:
				
				DIO_Write_BitBand(PORTE_BASE,GPIODIR_OFFSET,PIN_Num,PinConfig[i].PortPinDirectionType);
				/*Configure Mode -> (DIO , NOT_DIO)*/
				if(PinConfig[i].PortPinMode == DIO_Mode)
				{
						DIO_Write_BitBand(PORTE_BASE,GPIOAFSEL_OFFSET,PIN_Num,PIN_LOW);
						DIO_Write_BitBand(PORTE_BASE,GPIODEN_OFFSET,PIN_Num,PIN_HIGH);
				}else
				{
					DIO_Write_BitBand(PORTE_BASE,GPIOAFSEL_OFFSET,PIN_Num,PIN_HIGH);
					DIO_Write_BitBand(PORTE_BASE,GPIODEN_OFFSET,PIN_Num,PIN_LOW);
				}
				/*Configure internal attachment*/
				if(PinConfig[i].PortPinInternalAttachType == PullUp)
				{
					DIO_Write_BitBand(PORTE_BASE,GPIOPUR_OFFSET,PIN_Num,PIN_HIGH);
				}else if(PinConfig[i].PortPinInternalAttachType == PullDown)
				{
					DIO_Write_BitBand(PORTE_BASE,GPIOPDR_OFFSET,PIN_Num,PIN_HIGH);
				}else //open drain
				{
					DIO_Write_BitBand(PORTE_BASE,GPIOPUR_OFFSET,PIN_Num,PIN_LOW);
					DIO_Write_BitBand(PORTE_BASE,GPIOPDR_OFFSET,PIN_Num,PIN_LOW);
					DIO_Write_BitBand(PORTE_BASE,GPIOODR_OFFSET,PIN_Num,PIN_HIGH);
				}								
				break;
				
			case PORTF_ID:
				
				if(PIN_Num == 0)
				{
					*((volatile u32*)(PORTF_BASE+GPIOLOCK_OFFSET))=  UNLOCK_GPIOLOCK;  //unlocking PF0
					DIO_Write_BitBand(PORTF_BASE,GPIOCR_OFFSET,PIN_Num,PIN_HIGH);      //uncommiting PF0
				}
				DIO_Write_BitBand(PORTF_BASE,GPIODIR_OFFSET,PIN_Num,PinConfig[i].PortPinDirectionType);
				/*Configure Mode -> (DIO , NOT_DIO)*/
				if(PinConfig[i].PortPinMode == DIO_Mode)
				{
						DIO_Write_BitBand(PORTF_BASE,GPIOAFSEL_OFFSET,PIN_Num,PIN_LOW);
						DIO_Write_BitBand(PORTF_BASE,GPIODEN_OFFSET,PIN_Num,PIN_HIGH);
				}else
				{
					DIO_Write_BitBand(PORTF_BASE,GPIOAFSEL_OFFSET,PIN_Num,PIN_HIGH);
					DIO_Write_BitBand(PORTF_BASE,GPIODEN_OFFSET,PIN_Num,PIN_LOW);
				}
				/*Configure internal attachment*/
				if(PinConfig[i].PortPinInternalAttachType == PullUp)
				{
					DIO_Write_BitBand(PORTF_BASE,GPIOPUR_OFFSET,PIN_Num,PIN_HIGH);
				}else if(PinConfig[i].PortPinInternalAttachType == PullDown)
				{
					DIO_Write_BitBand(PORTF_BASE,GPIOPDR_OFFSET,PIN_Num,PIN_HIGH);
				}else //open drain
				{
					DIO_Write_BitBand(PORTF_BASE,GPIOPUR_OFFSET,PIN_Num,PIN_LOW);
					DIO_Write_BitBand(PORTF_BASE,GPIOPDR_OFFSET,PIN_Num,PIN_LOW);
					DIO_Write_BitBand(PORTF_BASE,GPIOODR_OFFSET,PIN_Num,PIN_HIGH);
				}				
				break;					
		}
	}
}
