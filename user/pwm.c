/*
 * pwm.c
 *
 *  Created on: 2017年9月10日
 *      Author: Administrator
 */
#include "DSP28x_Project.h"
#include "pwm.h"

void Init_Epwm1Gpio(void)
{

    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO0=1;//配置GPIO0为EPWM功能
    GpioCtrlRegs.GPADIR.bit.GPIO0=1; //配置GPIO0口为输出方向
    GpioCtrlRegs.GPAMUX1.bit.GPIO1=1;//配置GPIO1为EPWM功能
    GpioCtrlRegs.GPADIR.bit.GPIO1=1; //配置GPIO1口为输出方向
    EDIS;

}

void Init_EPwm1Config(void)
{
    EPwm1Regs.TBCTL.bit.CTRMODE = TB_COUNT_UP;  //上升计数
    EPwm1Regs.TBPRD = 15000;                    //设定周期
    EPwm1Regs.TBPHS.all = 0x00000000;           //相位同步设置为0
    EPwm1Regs.CMPA.half.CMPA=3000; //设置CMPA
    EPwm1Regs.AQCTLA.bit.PRD =AQ_SET; //计数到达PRD时电平置低
    EPwm1Regs.AQCTLA.bit.CAU =AQ_CLEAR ;  //计数上升到达CMPA时置高 EPwm1Regs

    EPwm1Regs.CMPB=12000; //设置CMPB
    EPwm1Regs.AQCTLB.bit.PRD =AQ_SET; //计数到达PRD时电平置低
    EPwm1Regs.AQCTLB.bit.CBU =AQ_CLEAR;   //计数上升到达CMPA时置高 EPwm1Regs
    EPwm1Regs.TBCTL.bit.HSPCLKDIV = 0; // Clock ratio to SYSCLKOUT
    EPwm1Regs.TBCTL.bit.CLKDIV = 0;    //四分频
}

void Init_Epwm2Gpio(void)
{

    EALLOW;

    GpioCtrlRegs.GPAMUX1.bit.GPIO2=1;//配置GPIO0为EPWM功能
    GpioCtrlRegs.GPADIR.bit.GPIO2=1; //配置GPIO0口为输出方向
    GpioCtrlRegs.GPAMUX1.bit.GPIO3=1;//配置GPIO1为EPWM功能
    GpioCtrlRegs.GPADIR.bit.GPIO3=1; //配置GPIO1口为输出方向

    EDIS;

}

void Init_EPwm2Config(void)
{
    EPwm2Regs.TBCTL.bit.CTRMODE = TB_COUNT_UP;  //上升计数
    EPwm2Regs.TBPRD = 15000;                    //设定周期
    EPwm2Regs.TBPHS.all = 0x00000000;           //相位同步设置为0
    EPwm2Regs.CMPA.half.CMPA=3000; //设置CMPA
    EPwm2Regs.AQCTLA.bit.PRD =AQ_SET; //计数到达PRD时电平置低
    EPwm2Regs.AQCTLA.bit.CAU =AQ_CLEAR ;  //计数上升到达CMPA时置高 EPwm1Regs

    EPwm2Regs.CMPB=12000; //设置CMPB
    EPwm2Regs.AQCTLB.bit.PRD =AQ_SET; //计数到达PRD时电平置低
    EPwm2Regs.AQCTLB.bit.CBU =AQ_CLEAR;   //计数上升到达CMPA时置高 EPwm1Regs
    EPwm2Regs.TBCTL.bit.HSPCLKDIV = 0; // Clock ratio to SYSCLKOUT
    EPwm2Regs.TBCTL.bit.CLKDIV =0;    //四分频
}

void InitPWM(void)
{
    Init_Epwm1Gpio();
    Init_Epwm2Gpio();
    EALLOW;
    SysCtrlRegs.PCLKCR0.bit.TBCLKSYNC = 0;
    EDIS;

    Init_EPwm1Config();
    Init_EPwm2Config();

    EALLOW;
    SysCtrlRegs.PCLKCR0.bit.TBCLKSYNC = 1;
    EDIS;
}
