#ifndef  SysTick_Interface_H
#define  SysTick_Interface_H

#define Max_time       4


void MSysTick_voidInit(void);
void MSysTick_voidStartCountSecTo(u8 count , void (*SysTick_CB)(void));

void MSysTick_voidSetdelay(u8 count);
void MSysTick_Handler(void);



#endif
