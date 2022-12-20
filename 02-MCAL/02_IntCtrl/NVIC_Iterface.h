#ifndef         NVIC_Iterface_H
#define    	NVIC_Iterface_H

#include  "NVIC_Private.h"

void MNVIC_voidSetPriority(void);
void MNVIC_voidEnableInterrupt (NVIC_IntType Int_index);
void MNVIC_voidDisableInterrupt (NVIC_IntType Int_index);
void MNVIC_voidPendInterrupt (NVIC_IntType Int_index);

#endif
