

#ifndef UTLIES_H_
#define UTLIES_H_

#define SET_BIT(reg,bit)      		  reg=(reg|(1<<bit))
#define CLEAR_BIT(reg,bit)      	  reg=(reg&(~(1<<bit)))
#define TOGGLE_BIT(reg,bit)        reg=(reg^(1<<bit))
#define READ_BIT(reg,bit)            ((reg>>bit)&1)
#define Write_Bit(reg,bit,valu)      reg=(reg&(~(1<<bit))|(valu<<bit))




#endif /* UTLIES_H_ */
