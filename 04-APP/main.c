
#include  "StdTypes.h"
#include  "Utlies.h"


#include "Sys_CtrlClk_interface.h"
#include  "NVIC_Iterface.h"
#include "EXTI_Interface.h"
#include "SysTick_Interface.h"
#include "Port_interface.h"
#include "DIO_Interface.h"
#include "LED_Interface.h"

// MAP 0x40000000 , 0x400FFFFF READ WRITE



volatile int delay = 40;
void func1(void);
void func2(void);

int main(void)
{
	MNVIC_voidSetPriority();
	
	MSysCtrlClk_VoidInitSysClk();

	MSysCtrlClk_VoidSetGPIOBus(ABP,PF);
	MSysCtrlClk_VoidEnableperipheralClk(_GPIO,GPIOF_M);
	
	
	MPORT_voidInit();
	
	MSysTick_voidInit();
	
	MEXTI_voidEnableEXTI(PF,PIN0,rising_edge);
	MEXTI_voidEnableEXTI(PF,PIN4,rising_edge);

	MEXTI_voidSetCallbackPF0(func1);
  MEXTI_voidSetCallbackPF4(func2);
	
	
	MNVIC_voidEnableInterrupt(NVIC_DIO_PORT_F);
	
	
	while(1)
	{
		
		HLED_voidTurnOn();
		MSysTick_voidSetdelay(delay);
		HLED_voidTurnOff();
		MSysTick_voidSetdelay(100  - delay);
	}
	return 0;
	

}

void func1(void)
{
	
	delay+=10;
	if( !(delay>=0&& delay <= 100))
			delay = 100;
	
}
void func2(void)
{
	delay-=10;
	if( !(delay>=0&& delay <= 100))
			delay = 0;
	
}
