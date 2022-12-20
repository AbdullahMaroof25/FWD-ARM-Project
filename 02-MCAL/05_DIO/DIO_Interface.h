#ifndef   DIO_Interface_H
#define   DIO_Interface_H

#include "DIO_Types.h"
#include "StdTypes.h"

void Dio_WritePin(Dio_ChannelType Pin, Dio_LevelType Level);

Dio_LevelType Dio_ReadPin(Dio_ChannelType Channel);

void Dio_WritePort(Dio_PortType PortId, u8 Level);

u8 Dio_ReadPort(Dio_PortType PortId);







#endif
