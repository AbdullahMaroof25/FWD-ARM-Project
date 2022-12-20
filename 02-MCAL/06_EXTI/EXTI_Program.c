

#include  "StdTypes.h"
#include  "Utlies.h"

#include "EXTI_Interface.h"


static void (*ptrToEXTIPF0_ISR)(void);
static void (*ptrToEXTIPF4_ISR)(void);

void MEXTI_voidEnableEXTI(u8 port , u8 pin , u8 level)
{
	switch (port)
	{
		case PF:
						CLEAR_BIT( GPIOIS_Reg,pin);
						CLEAR_BIT( GPIOIBE_Reg,pin);
						if ( level ==  falling_edge )
						{
							CLEAR_BIT(GPIOIEV_Reg,pin);
						}
						else
						{
							SET_BIT(GPIOIEV_Reg,pin);
						}
						SET_BIT(GPIOICR_Reg,pin);
						SET_BIT( GPIOIM_Reg,pin);
						
						
		break;
	}
	
}


void MEXTI_voidSetCallbackPF0(void (*ptr)(void))
{
	ptrToEXTIPF0_ISR  = ptr;
}

void MEXTI_voidSetCallbackPF4(void (*ptr)(void))
{
	ptrToEXTIPF4_ISR  = ptr;
}





void  GPIOF_Handler(void)
{
	if(  READ_BIT(GPIOMIS_Reg,0)  == 1 )
	{
		 (*ptrToEXTIPF0_ISR)();
			SET_BIT(GPIOICR_Reg,0);
	}
	else if (   READ_BIT(GPIOMIS_Reg,4)  == 1 )
	{
		(*ptrToEXTIPF4_ISR)();
		 SET_BIT(GPIOICR_Reg,4);
		
	}
}