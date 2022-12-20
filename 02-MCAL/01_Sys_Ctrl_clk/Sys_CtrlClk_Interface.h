#ifndef			Sys_CtrlClk_Interface_H
#define		  Sys_CtrlClk_Interface_H

#define  PA   0
#define  PB   1
#define  PC   2
#define  PD   3
#define  PE   4
#define  PF   5

#define AHP   0
#define ABP   1

typedef enum
{
	_WatchDog  = 0x600 ,
	_TIMER     = 0x604 ,
	_GPIO      = 0x608 ,
	_DMA       = 0x60C ,
	_HIB       = 0x614 ,
	_UART      = 0x618 ,
	_SSI       = 0x61C ,  
	_I2C       = 0x620 ,
	_USB_Clock = 0x628 ,
	_CAN       = 0x634 ,
	_ADC       = 0x638 ,
	_AnalogCMP = 0x63C ,
	_PWM       = 0x640 ,
	_QEI       = 0x644 ,
	_EEPROM    = 0x658 ,
	_WideTIMER = 0x65C

}Peripheral_Ofset;

#define WD0_M 0
#define WD1_M 1

#define TIMER0_M 0
#define TIMER1_M 1
#define TIMER2_M 2
#define TIMER3_M 3
#define TIMER4_M 4
#define TIMER5_M 5

#define GPIOA_M 0
#define GPIOB_M 1
#define GPIOC_M 2
#define GPIOD_M 3
#define GPIOE_M 4
#define GPIOF_M 5

#define DMA_M 0

#define HIB_M 0

#define UART0_M 0
#define UART1_M 1
#define UART2_M 2
#define UART3_M 3
#define UART4_M 4
#define UART5_M 5
#define UART6_M 6
#define UART7_M 7


#define SSI0_M 0
#define SSI1_M 1
#define SSI2_M 2
#define SSI3_M 3

#define I2C0_M 0
#define I2C1_M 1
#define I2C2_M 2
#define I2C3_M 3

#define USB_M  0

#define CAN0_M 0
#define CAN1_M 1

#define ADC0_M 0
#define ADC1_M 1

#define ACMP_M 0

#define PWM0_M 0
#define PWM1_M 1

#define QEI0_M 0
#define QEI1_M 1

#define EEPROM_M 0

void MSysCtrlClk_VoidInitSysClk(void);
void MSysCtrlClk_VoidSetGPIOBus(u8 CopyBus , u8 CopyPort);
void  MSysCtrlClk_VoidEnableperipheralClk(Peripheral_Ofset Peripheral,u8 CopyPeriheralNum);
void MSysCtrlClk_VoidDisableperipheralClk(Peripheral_Ofset Peripheral,u8 CopyPeriheralNum);








#endif
