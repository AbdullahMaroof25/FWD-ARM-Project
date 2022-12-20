
#ifndef     EXTI_Private_H
#define	EXTI_Private_H



#define  PA        0
#define  PB        1
#define  PC        2
#define  PD        3
#define  PE         4
#define  PF         5

#define PIN0       0
#define PIN1       1
#define PIN2       2
#define PIN3	    3
#define PIN4		4
#define PIN5		5
#define PIN6		6
#define PIN7		7

#define falling_edge     0
#define rising_edge	  1



#define   PAR_base       0x40025000

#define  GPIOIS_offset          0x404
#define  GPIOIS_Reg	                           (*(volatile u32 *)(PAR_base +GPIOIS_offset))

#define  GPIOIBE_offset        0x408
#define   GPIOIBE_Reg	                       (*(volatile u32 *)(PAR_base + GPIOIBE_offset))

#define  GPIOIEV_offset       0x40C
#define GPIOIEV_Reg	                          (*(volatile u32 *)(PAR_base +GPIOIEV_offset))

#define GPIOIM_offset        0x410
#define  GPIOIM_Reg	                         (*(volatile u32 *)(PAR_base +GPIOIM_offset))

#define  GPIOMIS_offset     0x418
#define GPIOMIS_Reg	                    (*(volatile u32 *)(PAR_base +GPIOMIS_offset))

#define  GPIOICR_offset     0x41C
#define GPIOICR_Reg	                       (*(volatile u32 *)(PAR_base +GPIOICR_offset))


#endif