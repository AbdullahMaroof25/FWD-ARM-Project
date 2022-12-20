#ifndef    Port_Private_H
#define   Port_Private_H

#define PERI_BASE                  0x40000000

#define PERI_ALIASE_BASE      0x42000000


#define	PORTA_BASE        0x40004000
#define	PORTB_BASE        0x40005000
#define	PORTC_BASE        0x40006000
#define	PORTD_BASE        0x40007000
#define	PORTE_BASE         0x40024000
#define	PORTF_BASE         0x40025000

	
#define   GPIODATA_OFFSET	   0x3FC
#define   GPIODIR_OFFSET	       0x400
#define   GPIOAFSEL_OFFSET    0x420
#define   GPIODEN_OFFSET       0x51C
#define   GPIOPUR_OFFSET      0x510
#define	GPIOPDR_OFFSET	  0x514
#define	GPIOODR_OFFSET	  0x50C
#define   GPIOPCTL_OFFSET	  0x52C
#define   GPIOLOCK_OFFSET   0x520
#define   GPIOCR_OFFSET  	  0x524

#define UNLOCK_GPIOLOCK      0x4C4F434B


#define DIO_Mode  0 


#define	DIO_Write_BitBand(_PORT,REG_OFFSET,_PIN,VALUE)   *((volatile u32 *)(PERI_ALIASE_BASE + ((_PORT+REG_OFFSET-PERI_BASE)*32 +(_PIN*4)))) = VALUE
#define	DIO_Read_BitBand(_PORT,REG_OFFSET,_PIN)               *((volatile u32 *)(PERI_ALIASE_BASE + ((_PORT+REG_OFFSET-PERI_BASE)*32 +(_PIN*4))))



#endif

