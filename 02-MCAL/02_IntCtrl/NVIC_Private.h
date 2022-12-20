#ifndef   NVIC_Private_H   
#define  NVIC_Private_H




typedef enum            /*Represent All Interrupt Numbers */
{
	NVIC_GPIO_PORT_A = 0 			,
	NVIC_GPIO_PORT_B     			,
	NVIC_GPIO_PORT_C     			,
	NVIC_GPIO_PORT_D     			,
	NVIC_GPIO_PORT_E     			,
				
	NVIC_UART_0         			,
	NVIC_UART_1         			,
				
	NVIC_SSI_0          			,
				
	NVIC_I2C_0          			,
				
	NVIC_PWM_0_FAULT    			,
	NVIC_PWM_0_GEN_0    			,
	NVIC_PWM_0_GEN_1    			,
	NVIC_PWM_0_GEN_2    			,
				
	NVIC_QEI_0          			,
				
	NVIC_ADC_0_SEQ_0    			,
	NVIC_ADC_0_SEQ_1    			,
	NVIC_ADC_0_SEQ_2    			,
	NVIC_ADC_0_SEQ_3    			,
	
	NVIC_TIMER_WATCHDOG_0_1    		,
	NVIC_16_32_TIMER_0_A      		,
	NVIC_16_32_TIMER_0_B      		,
	NVIC_16_32_TIMER_1_A      		,
	NVIC_16_32_TIMER_1_B      		,
	NVIC_16_32_TIMER_2_A      		,
	NVIC_16_32_TIMER_2_B      		,
	
	NVIC_ANALOG_COMPARATOR_0   		,
	NVIC_ANALOG_COMPARATOR_1   		,
	
	/*_______27 Reserved______________*/
	
	NVIC_SYSTEM_CONTROL = 28   		,
	
	NVIC_FLASH_EEPROM_MEMORY_CONTROL,
	
	NVIC_DIO_PORT_F    			 	,
	
	/*_______31 & 32 Reserved________*/
	
	NVIC_UART_2 = 33   				,
	
	NVIC_SSI_1         				,
	
	NVIC_16_32_TIMER_3_A     		,
	NVIC_16_32_TIMER_3_B     		,
	
	NVIC_I2C_1         				,
	
	NVIC_QEI_1         				,
	
	NVIC_CAN_0         				,
	NVIC_CAN_1         				,
	
	/*_______41 & 42 Reserved________*/
	
	NVIC_HIBERNATION = 43 			,
	
	NVIC_USB           				,
					
	NVIC_PWM_GEN_3     				,
					
	NVIC_UDMA_SOFTWARE 				,
	NVIC_UDMA_ERROR    				,
					
	NVIC_ADC_1_SEQ_0   				,
	NVIC_ADC_1_SEQ_1   				,
	NVIC_ADC_1_SEQ_2   				,
	NVIC_ADC_1_SEQ_3   				,
	
	/*_______52 - 56 Reserved________*/
	
	NVIC_SSI_2 = 57    				,
	NVIC_SSI_3         				,
					
	NVIC_UART_3        				,
	NVIC_UART_4        				,
	NVIC_UART_5        				,
	NVIC_UART_6        				,
	NVIC_UART_7        				,
	
	/*_______64 - 67 Reserved________*/
	
	NVIC_I2C_2 = 68    				,
	NVIC_I2C_3         				,
	
	NVIC_16_32_TIMER_4_A     		,
	NVIC_16_32_TIMER_4_B     		,
	
	/*_______72 - 91 Reserved________*/
	
	NVIC_16_32_TIMER_5_A = 92		,
	NVIC_16_32_TIMER_5_B     		,
	NVIC_32_64_TIMER_0_A     		,
	NVIC_32_64_TIMER_0_B     		,
	NVIC_32_64_TIMER_1_A     		,
	NVIC_32_64_TIMER_1_B     		,
	NVIC_32_64_TIMER_2_A     		,
	NVIC_32_64_TIMER_2_B     		,
	NVIC_32_64_TIMER_3_A     		,
	NVIC_32_64_TIMER_3_B     		,
	NVIC_32_64_TIMER_4_A     		,
	NVIC_32_64_TIMER_4_B     		,
	NVIC_32_64_TIMER_5_A     		,
	NVIC_32_64_TIMER_5_B     		,
	
	NVIC_SYSTEM_EXCEPTION    		,
	
	/*_______107 - 133 Reserved________*/
	
	NVIC_PWM_1_GEN_0 = 134   		,
	NVIC_PWM_1_GEN_1         		,
	NVIC_PWM_1_GEN_2         		,
	NVIC_PWM_1_GEN_3         		,
	NVIC_PWM_1_FAULT
	
}NVIC_IntType;


#define  BaseAdress              0xE000E000

/****************************  Enable Reg *************************************/

#define EN0Reg_OFFSET					0x100
#define EN0_Reg	                       (*(volatile u32 *)(BaseAdress +EN0Reg_OFFSET))

#define EN1Reg_OFFSET					0x104
#define EN1_Reg	                       (*(volatile u32 *)(BaseAdress +EN1Reg_OFFSET))

#define EN2Reg_OFFSET					0x108
#define EN2_Reg	                       (*(volatile u32 *)(BaseAdress +EN2Reg_OFFSET))

#define EN3Reg_OFFSET					0x10C
#define EN3_Reg	                       (*(volatile u32 *)(BaseAdress +EN3Reg_OFFSET))

#define EN4Reg_OFFSET					0x110
#define EN4_Reg	                       (*(volatile u32 *)(BaseAdress +EN4Reg_OFFSET))

/****************************  Disable Reg *************************************/

#define Dis0Reg_OFFSET					0x180
#define Dis0_Reg	                       (*(volatile u32 *)(BaseAdress +Dis0Reg_OFFSET))

#define Dis1Reg_OFFSET					0x184
#define Dis1_Reg	                       (*(volatile u32 *)(BaseAdress +Dis1Reg_OFFSET))

#define Dis2Reg_OFFSET					0x188
#define Dis2_Reg	                       (*(volatile u32 *)(BaseAdress +Dis2Reg_OFFSET))

#define Dis3Reg_OFFSET					0x18C
#define Dis3_Reg	                       (*(volatile u32 *)(BaseAdress +Dis3Reg_OFFSET))

#define Dis4Reg_OFFSET					0x190
#define Dis4_Reg	                       (*(volatile u32 *)(BaseAdress +Dis4Reg_OFFSET))
/*****************************************/

#define Pend0Reg_OFFSET					0x200
#define Pend0Reg	                       (*(volatile u32 *)(BaseAdress +Pend0Reg_OFFSET))

#define APINT_R    *((volatile u32*)(BaseAdress+0xD0C))

#define        PRIGROUP_START 8
#define        VECTKEY     0xFA05

#define    XXX_VALUE       0x4
#define    XXY_VALUE       0x5
#define    XYY_VALUE       0x6
#define    YYY_VALUE       0x7




#endif
