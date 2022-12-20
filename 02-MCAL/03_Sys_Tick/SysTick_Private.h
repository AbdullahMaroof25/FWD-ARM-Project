#ifndef  SysTick_Private_H
#define  SysTick_Private_H


#define Max_time       4

#define  BaseAdress             0xE000E000
/**********STCTRL_Reg**************/
#define  STCTRL_Offset             0x010
#define STCTRL_Reg	                       (*(volatile u32 *)(BaseAdress +STCTRL_Offset))

// register Bits
#define CLK_SRC    2
#define INTEN        1
#define ENABLE      0
/**********STRELOAD_Reg**************/
#define  STRELOAD_Offset        0x014
#define  STRELOAD_Reg	                       (*(volatile u32 *)(BaseAdress +STRELOAD_Offset ))

/*************************/

#define  STCURRENY_Offset  0x018
#define  STCURRENT_Reg	                       (*(volatile u32 *)(BaseAdress +STCURRENY_Offset  ))

#endif
