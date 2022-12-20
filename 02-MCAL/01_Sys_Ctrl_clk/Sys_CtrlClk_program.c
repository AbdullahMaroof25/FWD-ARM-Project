
#include  "StdTypes.h"
#include  "Utlies.h"

#include  "Sys_CtrlClk_Interface.h"
#include  "Sys_CtrlClk_Private.h"
#include  "Sys_CtrlClk_Config.h"


void MSysCtrlClk_VoidInitSysClk(void)
{
	
	#if  ( Oscillator_Source  ==  Main_oscillator )
		
		CLEAR_BIT(RCC_Reg,OSCSRC_0);
		CLEAR_BIT(RCC_Reg,OSCSRC_1);
		CLEAR_BIT(RCC_Reg,MOSCDIS);
		
	#elif ( Oscillator_Source  ==  Precision_internal_oscillator )
		
	    SET_BIT(RCC_Reg,OSCSRC_0);
		CLEAR_BIT(RCC_Reg,OSCSRC_1);
		SET_BIT(RCC_Reg,MOSCDIS);
		
	#elif ( Oscillator_Source  ==  Precision_internal_oscillator_4 )
		
	    CLEAR_BIT(RCC_Reg,OSCSRC_0);
		SET_BIT(RCC_Reg,OSCSRC_1);
		SET_BIT_BIT(RCC_Reg,MOSCDIS);
		
	#elif ( Oscillator_Source  ==  Low_frequency_internal_oscillator )
		
		SET_BIT(RCC_Reg,OSCSRC_0);
		SET_BIT(RCC_Reg,OSCSRC_1);
		SET_BIT_BIT(RCC_Reg,MOSCDIS);
		
	#else
			#error("You chosed wrong source")
	#endif	
	#if  ( PLL_MODE  ==  	PLL_OFF )
		
	    SET_BIT(RCC_Reg,PWRDN);
		SET_BIT(RCC_Reg,BYPASS);
	//	while(READ_BIT(PLLStatus_Reg, LOCK) !=0 );
	#elif  ( PLL_MODE  ==  PLL_ON)
			 CLEAR_BIT(RCC_Reg,PWRDN);
		    CLEAR_BIT(RCC_Reg,BYPASS);
		while(READ_BIT(PLLStatus_Reg, LOCK) ==0 );
	
	#else
	#error You chosed wrong operation
	#endif
	
	
}	

void MSysCtrlClk_VoidSetGPIOBus(u8 CopyBus , u8 CopyPort)
{
	switch(CopyPort)
	{
		case PA:
		if(CopyBus == AHP)
		{
			SET_BIT(GPIO_Reg,PA);
			
		}
		else if (CopyBus == ABP)
		{
			CLEAR_BIT(GPIO_Reg,PA);
		}
		else
		{
			
		}	
		break;
		case PB:
		if(CopyBus == AHP)
		{
			SET_BIT(GPIO_Reg,PB);
			
		}
		else if (CopyBus == ABP)
		{
			CLEAR_BIT(GPIO_Reg,PB);
		}
		else
		{
			
		}	
		break;
		case PC:
		if(CopyBus == AHP)
		{
			SET_BIT(GPIO_Reg,PC);
			
		}
		else if (CopyBus == ABP)
		{
			CLEAR_BIT(GPIO_Reg,PC);
		}
		else
		{
			
		}	
		break;
		case PD:
		if(CopyBus == AHP)
		{
			SET_BIT(GPIO_Reg,PD);
			
		}
		else if (CopyBus == ABP)
		{
			CLEAR_BIT(GPIO_Reg,PD);
		}
		else
		{
			
		}	
		break;
		case PE:
		if(CopyBus == AHP)
		{
			SET_BIT(GPIO_Reg,PE);
			
		}
		else if (CopyBus == ABP)
		{
			CLEAR_BIT(GPIO_Reg,PE);
		}
		else
		{
			
		}	
		break;
		case PF:
		if(CopyBus == AHP)
		{
			SET_BIT(GPIO_Reg,PF);
			
		}
		else if (CopyBus == ABP)
		{
			CLEAR_BIT(GPIO_Reg,PF);
		}
		else
		{
			 
		}	
		break;
	}	
		
}

void  MSysCtrlClk_VoidEnableperipheralClk(Peripheral_Ofset Peripheral,u8 CopyPeriheralNum)
{
	#define ptr  (*(volatile u32 *)(SYSCTRL_BASE_ADDRESS +Peripheral))
	
	SET_BIT(ptr,CopyPeriheralNum);
}

void MSysCtrlClk_VoidDisableperipheralClk(Peripheral_Ofset Peripheral,u8 CopyPeriheralNum)
{
	
	#define ptr  (*(volatile u32 *)(SYSCTRL_BASE_ADDRESS +Peripheral))
	CLEAR_BIT(ptr,CopyPeriheralNum);
}

