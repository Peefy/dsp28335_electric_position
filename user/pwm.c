/*
 * pwm.c
 *
 *  Created on: 2017��9��10��
 *      Author: Administrator
 */
#include "DSP28x_Project.h"
#include "pwm.h"

void Init_Epwm1Gpio(void)
{

    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO0=1;//����GPIO0ΪEPWM����
    GpioCtrlRegs.GPADIR.bit.GPIO0=1; //����GPIO0��Ϊ�������
    GpioCtrlRegs.GPAMUX1.bit.GPIO1=1;//����GPIO1ΪEPWM����
    GpioCtrlRegs.GPADIR.bit.GPIO1=1; //����GPIO1��Ϊ�������
    EDIS;

}

void Init_EPwm1Config(void)
{
    EPwm1Regs.TBCTL.bit.CTRMODE = TB_COUNT_UP;  //��������
    EPwm1Regs.TBPRD = 15000;                    //�趨����
    EPwm1Regs.TBPHS.all = 0x00000000;           //��λͬ������Ϊ0
    EPwm1Regs.CMPA.half.CMPA=3000; //����CMPA
    EPwm1Regs.AQCTLA.bit.PRD =AQ_SET; //��������PRDʱ��ƽ�õ�
    EPwm1Regs.AQCTLA.bit.CAU =AQ_CLEAR ;  //������������CMPAʱ�ø� EPwm1Regs

    EPwm1Regs.CMPB=12000; //����CMPB
    EPwm1Regs.AQCTLB.bit.PRD =AQ_SET; //��������PRDʱ��ƽ�õ�
    EPwm1Regs.AQCTLB.bit.CBU =AQ_CLEAR;   //������������CMPAʱ�ø� EPwm1Regs
    EPwm1Regs.TBCTL.bit.HSPCLKDIV = 0; // Clock ratio to SYSCLKOUT
    EPwm1Regs.TBCTL.bit.CLKDIV = 0;    //�ķ�Ƶ
}

void Init_Epwm2Gpio(void)
{

    EALLOW;

    GpioCtrlRegs.GPAMUX1.bit.GPIO2=1;//����GPIO0ΪEPWM����
    GpioCtrlRegs.GPADIR.bit.GPIO2=1; //����GPIO0��Ϊ�������
    GpioCtrlRegs.GPAMUX1.bit.GPIO3=1;//����GPIO1ΪEPWM����
    GpioCtrlRegs.GPADIR.bit.GPIO3=1; //����GPIO1��Ϊ�������

    EDIS;

}

void Init_EPwm2Config(void)
{
    EPwm2Regs.TBCTL.bit.CTRMODE = TB_COUNT_UP;  //��������
    EPwm2Regs.TBPRD = 15000;                    //�趨����
    EPwm2Regs.TBPHS.all = 0x00000000;           //��λͬ������Ϊ0
    EPwm2Regs.CMPA.half.CMPA=3000; //����CMPA
    EPwm2Regs.AQCTLA.bit.PRD =AQ_SET; //��������PRDʱ��ƽ�õ�
    EPwm2Regs.AQCTLA.bit.CAU =AQ_CLEAR ;  //������������CMPAʱ�ø� EPwm1Regs

    EPwm2Regs.CMPB=12000; //����CMPB
    EPwm2Regs.AQCTLB.bit.PRD =AQ_SET; //��������PRDʱ��ƽ�õ�
    EPwm2Regs.AQCTLB.bit.CBU =AQ_CLEAR;   //������������CMPAʱ�ø� EPwm1Regs
    EPwm2Regs.TBCTL.bit.HSPCLKDIV = 0; // Clock ratio to SYSCLKOUT
    EPwm2Regs.TBCTL.bit.CLKDIV =0;    //�ķ�Ƶ
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
