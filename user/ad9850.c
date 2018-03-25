/*
 * ad9850.c
 *
 *  Created on: 2017Äê9ÔÂ10ÈÕ
 *      Author: Administrator
 */

#include "DSP2833x_Device.h"     // DSP2833x Headerfile Include File
#include "DSP2833x_Examples.h"   // DSP2833x Examples Include File
#include "DSP28x_Project.h"
#include "SystemCore.h"
#include "ad9850.h"

#include <stdio.h>

#define NOP_DELAY DELAY_US(5)

#define FQ_UD_A(data)  {EALLOW; GpioDataRegs.GPADAT.bit.GPIO8 = (data);EDIS;NOP_DELAY;NOP_DELAY;}
#define W_CLK_A(data)  {EALLOW; GpioDataRegs.GPADAT.bit.GPIO9 = (data);EDIS;NOP_DELAY;NOP_DELAY;}
#define RESET_A(data)  {EALLOW; GpioDataRegs.GPADAT.bit.GPIO10 = (data);EDIS;NOP_DELAY;NOP_DELAY;}

#define FQ_UD_B(data)  {EALLOW; GpioDataRegs.GPADAT.bit.GPIO11 = (data);EDIS;NOP_DELAY;NOP_DELAY;}
#define W_CLK_B(data)  {EALLOW; GpioDataRegs.GPADAT.bit.GPIO12 = (data);EDIS;NOP_DELAY;NOP_DELAY;}
#define RESET_B(data)  {EALLOW; GpioDataRegs.GPADAT.bit.GPIO13 = (data);EDIS;NOP_DELAY;NOP_DELAY;}

#define FQ_UD_C(data)  {EALLOW; GpioDataRegs.GPADAT.bit.GPIO18 = (data);EDIS;NOP_DELAY;NOP_DELAY;}
#define W_CLK_C(data)  {EALLOW; GpioDataRegs.GPADAT.bit.GPIO19 = (data);EDIS;NOP_DELAY;NOP_DELAY;}
#define RESET_C(data)  {EALLOW; GpioDataRegs.GPADAT.bit.GPIO20 = (data);EDIS;NOP_DELAY;NOP_DELAY;}

/*
#define PARREL_DATA(data) {uint32_t d;\
                            EALLOW; d = GpioDataRegs.GPADAT.all; d &= 0xFFFFFF00;EDIS;\
                            NOP_DELAY; \
                            EALLOW; d |= (data);  GpioDataRegs.GPADAT.all = d;    ;EDIS;\
                            NOP_DELAY;NOP_DELAY;}*/

#define PARREL_DATA(data) {EALLOW;\
                            GpioDataRegs.GPADAT.bit.GPIO0 = BIT_GET(data,0); \
                            GpioDataRegs.GPADAT.bit.GPIO1 = BIT_GET(data,1); \
                            GpioDataRegs.GPADAT.bit.GPIO2 = BIT_GET(data,2); \
                            GpioDataRegs.GPADAT.bit.GPIO3 = BIT_GET(data,3); \
                            GpioDataRegs.GPADAT.bit.GPIO4 = BIT_GET(data,4); \
                            GpioDataRegs.GPADAT.bit.GPIO5 = BIT_GET(data,5); \
                            GpioDataRegs.GPADAT.bit.GPIO6 = BIT_GET(data,6); \
                            GpioDataRegs.GPADAT.bit.GPIO7 = BIT_GET(data,7); \
                            EDIS;}

DDS_t AD9850[AD9850_NUM] =
{
   {0,L1_FREQ},
   {1,L2_FREQ},
   {2,L3_FREQ},
};

void AD9850_CommomHardWareInit(void)
{
    //Data0...Data7
    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO0 = 1;
    EDIS;

    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO1 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO1 = 1;
    EDIS;

    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO2 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO2 = 1;
    EDIS;

    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO3 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO3 = 1;
    EDIS;

    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO4 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO4 = 1;
    EDIS;

    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO5 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO5 = 1;
    EDIS;

    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO6 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO6 = 1;
    EDIS;

    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO7 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO7 = 1;
    EDIS;
    //end Data0...Data7

    //FQ-UD_A
    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO8 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO8 = 1;
    EDIS;
    //W_CLK_A
    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO9 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO9 = 1;
    EDIS;
    //RESET_A
    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO10 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO10 = 1;
    EDIS;
    //FQ-UD_B
    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO11 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO11 = 1;
    EDIS;
    //W_CLK_B
    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO12 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO12 = 1;
    EDIS;
    //RESET_B
    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO13 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO13 = 1;
    EDIS;
    //FQ-UD_C
    EALLOW;
    GpioCtrlRegs.GPAMUX2.bit.GPIO18 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO18 = 1;
    EDIS;
    //W_CLK_C
    EALLOW;
    GpioCtrlRegs.GPAMUX2.bit.GPIO19 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO19 = 1;
    EDIS;
    //RESET_C
    EALLOW;
    GpioCtrlRegs.GPAMUX2.bit.GPIO20 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO20 = 1;
    EDIS;

}

void AD9850_ResetWithParrel(DDS_t* dds)
{
    switch(dds->Number)
    {
        case 0:
            W_CLK_A(0);
             FQ_UD_A(0);
             RESET_A(0);
             RESET_A(1);
             RESET_A(0);
             NOP_DELAY;
            break;
        case 1:
            W_CLK_B(0);
             FQ_UD_B(0);
             RESET_B(0);
             RESET_B(1);
             RESET_B(0);
            break;
        case 2:
            W_CLK_C(0);
             FQ_UD_C(0);
             RESET_C(0);
             RESET_C(1);
             RESET_C(0);
            break;
        default:
            break;
    }
}

void AD9850_WriteWithParrel(DDS_t* dds,unsigned char w0)
{
    unsigned char w;
    uint32_t y;
    double x;
    double frequence = dds->Frequence;

    x = 4294967295 / AD9850_FREQ;//judge to 110M

    frequence = frequence / 1000000;
    frequence = frequence * x;
    y = frequence;

    switch(dds->Number)
    {
        case 0:
            w = w0;
            PARREL_DATA(w);
            W_CLK_A(1);
            W_CLK_A(0);
            w=(y>>24);
            PARREL_DATA(0x00);
            W_CLK_A(1);
            W_CLK_A(0);
            w=(y>>16);
            PARREL_DATA(0x08);      //w2
            W_CLK_A(1);
            W_CLK_A(0);
            w=(y>>8);
            PARREL_DATA(0x00);      //w3
            W_CLK_A(1);
            W_CLK_A(0);
            w=(y>>=0);
            PARREL_DATA(0x00);      //w4
            W_CLK_A(1);
            W_CLK_A(0);
            FQ_UD_A(1);
            FQ_UD_A(0);
            break;
        case 1:
            w = w0;
            PARREL_DATA(w);
            W_CLK_B(1);
            W_CLK_B(0);
            w=(y>>24);
            PARREL_DATA(w);
            W_CLK_B(1);
            W_CLK_B(0);
            w=(y>>16);
            PARREL_DATA(w);      //w2
            W_CLK_B(1);
            W_CLK_B(0);
            w=(y>>8);
            PARREL_DATA(w);      //w3
            W_CLK_B(1);
            W_CLK_B(0);
            w=(y>>=0);
            PARREL_DATA(w);      //w4
            W_CLK_B(1);
            W_CLK_B(0);
            FQ_UD_B(1);
            FQ_UD_B(0);
            break;
        case 2:
            w = w0;
            PARREL_DATA(w);
            W_CLK_C(1);
            W_CLK_C(0);
            w=(y>>24);
            PARREL_DATA(w);
            W_CLK_C(1);
            W_CLK_C(0);
            w=(y>>16);
            PARREL_DATA(w);      //w2
            W_CLK_C(1);
            W_CLK_C(0);
            w=(y>>8);
            PARREL_DATA(w);      //w3
            W_CLK_C(1);
            W_CLK_C(0);
            w=(y>>=0);
            PARREL_DATA(w);      //w4
            W_CLK_C(1);
            W_CLK_C(0);
            FQ_UD_C(1);
            FQ_UD_C(0);
            break;
        default:
            break;
    }

}

void AD9850_AllInit(void)
{
    AD9850_CommomHardWareInit();
    {
        int i = 0;
        for(i = 0;i < AD9850_NUM ;++i)
        {
            AD9850_ResetWithParrel(&AD9850[i]);
            AD9850_WriteWithParrel(&AD9850[i],0x00);
        }
    }
}







