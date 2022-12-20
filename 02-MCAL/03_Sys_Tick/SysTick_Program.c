#include  "StdTypes.h"
#include  "Utlies.h"

#include "SysTick_Interface.h"
 #include "SysTick_Private.h"


static void (*ptrToSysTick_ISR)(void);

void MSysTick_voidInit(void)
{
	
	 
	CLEAR_BIT(STCTRL_Reg,CLK_SRC);
	SET_BIT(STCTRL_Reg,ENABLE);
}

void MSysTick_voidStartCountSecTo(u8 count ,  void (*SysTick_CB)(void))
{
	//   system clk source  =16 MHZ
	//   Clock Source  for the systick   == system clk source /4
	//    time for one tick in the systick    =  (1 / 4MHZ ) =  0.25 micro sec
	
	if ( count <= Max_time)
	{
		ptrToSysTick_ISR = SysTick_CB;
		STRELOAD_Reg  = ( ( 4 * 1000000)  *  count  )  ;
		STCURRENT_Reg = 1;
	
		
	
	    SET_BIT(STCTRL_Reg,ENABLE);
		
		
	}
	else
	{
		// return error
	}
	
}

void MSysTick_voidSetdelay(u8 count)
{
	if ( count != 0)
	{	
	STRELOAD_Reg  = ( ( 4 * 10000)  *  count  )  ;
	STCURRENT_Reg = 0;
	while(READ_BIT(STCTRL_Reg,16) == 0 );
	}
}



void SysTick_Handler(void)
{
	
	(*ptrToSysTick_ISR)();
	
}
