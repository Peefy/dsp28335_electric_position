/*
 * ad7606.h
 *
 *  Created on: 2017Äê9ÔÂ10ÈÕ
 *      Author: Administrator
 */

#ifndef USER_AD7606_H_
#define USER_AD7606_H_

#include "stdint.h"
#include "stdbool.h"
#include "SystemCore.h"

#define IS_USE_AD7606 1

#define AD_NUM 3
#define CHANNAL_NUM     8
#define FIFO_SIZE       64

#define MAX_AD_REAL     5.0

typedef enum
{
    AD7606InputRange_5V = 0,
    AD7606InputRange_10V = 1,
}AD7606InputRange_e;

typedef enum
{
    AD7606OS_No = 0,
    AD7606OS_2 = 1,
    AD7606OS_4 = 2,
    AD7606OS_8 = 3,
    AD7606OS_16 = 4,
    AD7606OS_32 = 5,
    AD7606OS_64 = 6,
}AD7606OS_e;

typedef struct
{
    bool IsFull;
    uint16_t Rear;
    int16_t Buffer[FIFO_SIZE];
}Fifo_t;

extern int ADC_Convert[CHANNAL_NUM];
extern Fifo_t ADC_Fifo[AD_NUM];

void Fifo_AddData(Fifo_t *This , int16_t data);

void AD7606_ConfigAll(void);
int16_t AD7606_ReadParrelData(void);
void AD7606_SetOS(AD7606OS_e os);
void AD7606_Reset(void);
bool AD7606_IsBusy();
void AD7606_Scan(void);
void AD7606_StartConversion(void);
void AD7606_SetInputRange(AD7606InputRange_e inputRange);
int16_t AD7606_ReadAdc(unsigned char channel);
double AD7606_ReadAdcReal(unsigned char channel);

#endif /* USER_AD7606_H_ */
