#include  "StdTypes.h"
#include  "Utlies.h"
#include  "NVIC_Private.h"
#include  "NVIC_Iterface.h"

#include  "NVIC_Config.h"


void MNVIC_voidSetPriority(void)
{
	#if (NVIC_GROUPING_SYSTEM  ==  NVIC_GROUPING_SYSTEM_XXX )
		APINT_R =VECTKEY| (XXX_VALUE<<PRIGROUP_START);
	#elif(NVIC_GROUPING_SYSTEM  == NVIC_GROUPING_SYSTEM_XXY )	
		APINT_R = VECTKEY | (XXY_VALUE<<PRIGROUP_START);
	#elif(NVIC_GROUPING_SYSTEM  == NVIC_GROUPING_SYSTEM_XYY )
		APINT_R = VECTKEY | (XYY_VALUE<<PRIGROUP_START);
	#elif(NVIC_GROUPING_SYSTEM  == NVIC_GROUPING_SYSTEM_YYY )
		APINT_R = VECTKEY | (YYY_VALUE<<PRIGROUP_START);
   #else
		#error  Wrong priority
	#endif
}

void MNVIC_voidEnableInterrupt (NVIC_IntType Int_index)
{
	
	if( Int_index  <= 31)
	{
		EN0_Reg  |=  ( 1 << Int_index );
		
	}		
	else if( Int_index  <= 63)
	{
		Int_index -= 32;
		EN1_Reg  |=  ( 1 << Int_index );
	}		
	else if( Int_index  <= 95)
	{
		Int_index -= (32*2);
		EN2_Reg  |=  ( 1 << Int_index );
		
	}		
	else if( Int_index  <= 127)
	{
		Int_index -= (32*3);
		EN3_Reg  |=  ( 1 << Int_index );
		
	}		
	else if( Int_index  <= 138)
	{
		Int_index -= (32*4);
		EN4_Reg  |=  ( 1 << Int_index );
		
	}		
	else
	{
		// return error
	}	
	
}


void MNVIC_voidDisableInterrupt (NVIC_IntType Int_index)
{
		
	if( Int_index  <= 31)
	{
		Dis0_Reg  |=  ( 1 << Int_index );
		
	}		
	else if( Int_index  <= 63)
	{
		Int_index -= 32;
		Dis1_Reg  |=  ( 1 << Int_index );
	}		
	else if( Int_index  <= 95)
	{
		Int_index -= (32*2);
		Dis2_Reg  |=  ( 1 << Int_index );
		
	}		
	else if( Int_index  <= 127)
	{
		Int_index -= (32*3);
		Dis3_Reg  |=  ( 1 << Int_index );
		
	}		
	else if( Int_index  <= 138)
	{
		Int_index -= (32*4);
		Dis4_Reg  |=  ( 1 << Int_index );
		
	}		
	else
	{
		// return error
	}	
	
}


void MNVIC_voidPendInterrupt (NVIC_IntType Int_index)
{
		
	if( Int_index  <= 31)
	{
		Pend0Reg  |=  ( 1 << Int_index );
		
	}		
}