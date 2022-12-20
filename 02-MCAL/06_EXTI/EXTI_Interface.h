

#ifndef     EXTI_Interface_H
#define	EXTI_Interface_H

#include "EXTI_Private.h"

void MEXTI_voidEnableEXTI(u8 port , u8 pin , u8 level);
void MEXTI_voidSetCallbackPF0(void (*ptr)(void));
void MEXTI_voidSetCallbackPF4(void (*ptr)(void));







#endif