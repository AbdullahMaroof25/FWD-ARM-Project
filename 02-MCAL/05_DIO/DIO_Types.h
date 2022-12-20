#ifndef    DIO_Types_H
#define   DIO_Types_H

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
	
}Dio_ChannelType;


typedef enum
{
	DIO_LOW    =0,
	DIO_HIGH   =1,
	DIO_PORT_OUTPUT = 0xFF
	
}Dio_LevelType;


typedef enum
{
	PORTA_ID ,
	PORTB_ID ,
	PORTC_ID ,
	PORTD_ID ,
	PORTE_ID ,
	PORTF_ID 
	
}Dio_PortType;

#endif
