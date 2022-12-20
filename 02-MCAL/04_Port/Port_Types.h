#ifndef    Port_Types_H
#define   Port_Types_H

typedef enum
{
	PA0=0 ,
	PA1   ,
	PA2   ,
	PA3   ,
	PA4   ,
	PA5   ,
	PA6   ,
	PA7   ,
	      
	PB0=10,
	PB1   ,
	PB2   ,
	PB3   ,
	PB4   ,
	PB5   ,
	PB6   ,
	PB7   ,
	      
	PC0=20,
	PC1   ,
	PC2   ,
	PC3   ,
	PC4   ,
	PC5   ,
	PC6   ,
	PC7   ,
	      
	PD0=30,
	PD1   ,
	PD2   ,
	PD3   ,
	PD4   ,
	PD5   ,
	PD6   ,
	PD7   ,	
	      
	PE0=40,
	PE1   ,
	PE2   ,
	PE3   ,
	PE4   ,
	PE5   ,
	      
	PF0=50,
	PF1   ,
	PF2   ,
	PF3   ,
	PF4		
	
}PORT_PinID;


typedef enum
{
	PIN_INPUT  =0,
	PIN_OUTPUT =1,
	
}Port_PinDirectionType;
typedef enum
{
	PIN_LOW  =0,
	PIN_HIGH =1,
	
}Port_PinLevelType;

typedef enum
{
	PullDown =0,
	PullUp   =1,
	OpenDrain=2
}Port_PinInternalAttachType;

typedef enum
{
	PORTA_ID ,
	PORTB_ID ,
	PORTC_ID ,
	PORTD_ID ,
	PORTE_ID ,
	PORTF_ID 
	
}PORT_PortID;

typedef struct
{
	u32 PMC0 :4;
	u32 PMC1 :4;
	u32 PMC2 :4;
	u32 PMC3 :4;
	u32 PMC4 :4;
	u32 PMC5 :4;
	u32 PMC6 :4;
	u32 PMC7 :4;
	
}GPIOCTRL_t;

typedef struct 
{
	PORT_PinID PortPinType;

	Port_PinInternalAttachType PortPinInternalAttachType;
	Port_PinDirectionType PortPinDirectionType;
	u8 PortPinMode;
}ChannelConfig_t;


#endif
