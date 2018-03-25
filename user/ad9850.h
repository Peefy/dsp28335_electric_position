/*
 * ad9850.h
 *
 *  Created on: 2017Äê9ÔÂ10ÈÕ
 *      Author: Administrator
 */

#ifndef USER_AD9850_H_
#define USER_AD9850_H_

#include "stdint.h"

#define AD9850_NUM 3

#define L1_FREQ 13500
#define L2_FREQ 15000
#define L3_FREQ 17500

#define AD9850_FREQ 110;

typedef struct
{
    unsigned char Number;
    double Frequence;
}DDS_t;

extern DDS_t AD9850[3];

void AD9850_CommomHardWareInit(void);
void AD9850_ResetWithParrel(DDS_t* dds);
void AD9850_WriteWithParrel(DDS_t* dds,unsigned char w0);

void AD9850_AllInit(void);

#endif /* USER_AD9850_H_ */
