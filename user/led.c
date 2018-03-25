/*
 * led.c
 *
 *  Created on: 2017Äê9ÔÂ8ÈÕ
 *      Author: Administrator
 */

#include "led.h"
#include "DSP28x_Project.h"


///LED1 GPIO29
///LED2 GPIO31
void HardWare_TwoLED_Init(void)
{
    //LED1
    EALLOW;
    GpioCtrlRegs.GPAMUX2.bit.GPIO29 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO29 = 1;
    EDIS;

    //LED2
    EALLOW;
    GpioCtrlRegs.GPAMUX2.bit.GPIO31 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO31 = 1;
    EDIS;

    LED1_ON;
    LED2_OFF;

}

void ToggleLED1(void)
{
    EALLOW;
    GpioDataRegs.GPATOGGLE.bit.GPIO29 = 1;
    EDIS;
}

void ToggleLED2(void)
{
    EALLOW;
    GpioDataRegs.GPATOGGLE.bit.GPIO31 = 1;
    EDIS;
}

void SetLed1Status(LedStatus_e status)
{
    uint16_t status_u16 = (uint16_t)status;
    EALLOW;
    GpioDataRegs.GPADAT.bit.GPIO29 = status_u16;
    EDIS;
}

void SetLed2Status(LedStatus_e status)
{
    uint16_t status_u16 = (uint16_t)status;
    EALLOW;
    GpioDataRegs.GPADAT.bit.GPIO31 = status_u16;
    EDIS;
}
