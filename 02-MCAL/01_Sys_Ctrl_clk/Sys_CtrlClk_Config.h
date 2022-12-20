#ifndef			Sys_CtrlClk_Config_H

#define		Sys_CtrlClk_Config_H

/* Options  for the  Oscillator Source

		Main_oscillator
		Precision_internal_oscillator
		Precision_internal_oscillator_4
		Low_frequency_internal_oscillator
		
*/
#define   Oscillator_Source    Precision_internal_oscillator 

/*  
 *	PLL_OFF 
 *	PLL_ON  
 */
 
#define PLL_MODE   PLL_OFF 


/*      Options for The Clock Divissor 
  
 	SYSDIV_1  
    SYSDIV_2
    SYSDIV_3  
    SYSDIV_4   
 	SYSDIV_5
	SYSDIV_6
	SYSDIV_7
	SYSDIV_9   
 	SYSDIV_10
	SYSDIV_11
	SYSDIV_12
	SYSDIV_13  
 	SYSDIV_14
	SYSDIV_15
	SYSDIV_16 
  
 */ 


#define CLOCK_DIVISOR   SYSDIV_16 












#endif

