#ifndef			Sys_CtrlClk_Private_H
#define		Sys_CtrlClk_Private_H


#define SYSCTRL_BASE_ADDRESS     		0x400FE000


// RCC register
#define RCC_OFFSET								0x060
#define RCC_Reg	                     (*(volatile u32 *)(SYSCTRL_BASE_ADDRESS+RCC_OFFSET))   // pointer to RCC register

//  RCC Reg  Bits 

#define     ACG    							27

#define    SYSDIV_0						23
#define    SYSDIV_1						24
#define    SYSDIV_2						25
#define    SYSDIV_3						26

#define    USESYSDIV 						22
#define    USEPWMDIV					20

#define    PWMDIV_0						17
#define    PWMDIV_1						18
#define    PWMDIV_2						19

#define    PWRDN							13
#define    BYPASS							11

#define    XTAL_0							6
#define    XTAL_1							7
#define    XTAL_2							8
#define    XTAL_3							9
#define    XTAL_4							10

#define    OSCSRC_0						4
#define    OSCSRC_1						5

#define    MOSCDIS						0



#define        Main_oscillator										0
#define        Precision_internal_oscillator					1
#define		Precision_internal_oscillator_4				    2
#define		Low_frequency_internal_oscillator			3


//PLL Status  register

#define PLLStatus_OFFSET								0x168
#define PLLStatus_Reg	                     (*(volatile u32 *)(SYSCTRL_BASE_ADDRESS+RCC_OFFSET))   // pointer to PLLStatus register

// register Bits
#define       LOCK        0


// GPIO High-Performance Bus Control  register
#define  GPIO_OFFSET								0x06C
#define  GPIO_Reg	                     (*(volatile u32 *)(SYSCTRL_BASE_ADDRESS+GPIO_OFFSET))   // GPIO High-Performance Bus Control  register 



/*********************************                         **********************************************/






#endif

