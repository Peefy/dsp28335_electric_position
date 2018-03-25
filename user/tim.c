/*
 * tim.c
 *
 *  Created on: 2017年9月8日
 *      Author: Administrator
 */

#include "DSP28x_Project.h"
#include "tim.h"
#include "led.h"
#include "sci.h"
#include "ad7606.h"
#include "ad_data_deal.h"

#define CPU_FREQ_M 150

interrupt void cpu_timer0_isr(void);

void CpuTimer0Init(float us)
{

    EALLOW;
    PieVectTable.TINT0 = &cpu_timer0_isr;
    EDIS;

    InitCpuTimers();
    ConfigCpuTimer(&CpuTimer0, CPU_FREQ_M, us);
    CpuTimer0Regs.TCR.all = 0x4001;
    IER |= M_INT1;
    PieCtrlRegs.PIEIER1.bit.INTx7 = 1;

}

interrupt void cpu_timer0_isr(void)
{
   MagnetPosition();
   PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;   //中断返回
}

