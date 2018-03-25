/*
 * sci.c
 *
 *  Created on: 2017年10月11日
 *      Author: Administrator
 */

#include "sci.h"
#include "DSP28x_Project.h"

#define CBR_110             11E1
#define CBR_300             3E2
#define CBR_600             6E2
#define CBR_1200            12E2
#define CBR_2400            24E2
#define CBR_4800            48E2
#define CBR_9600            96E2
#define CBR_14400           144E2
#define CBR_19200           192E2
#define CBR_38400           384E2
#define CBR_56000           56E3
#define CBR_57600           576E2
#define CBR_115200          1152E2
#define CBR_128000          128E3
#define CBR_256000          256E3

#define CPU_FREQ            150E6
#define LSPCLK_FREQ         (CPU_FREQ/4)

#define SCI_BAUD(baud) (LSPCLK_FREQ/(baud*8))-1

interrupt void SciRxIntB_ISR(void);

void Dsp28335_SciAInit(void)
{

}

void Dsp28335_SciBInit(void)
{
    InitScibGpio();

    ScibRegs.SCICTL1.bit.SWRESET = 0;
    ScibRegs.SCICTL1.bit.SWRESET = 1;

    ScibRegs.SCICCR.bit.STOPBITS = 0;
    ScibRegs.SCICCR.bit.PARITY = 0;
    ScibRegs.SCICCR.bit.PARITYENA = 0;
    ScibRegs.SCICCR.bit.SCICHAR = 7;
    ScibRegs.SCIHBAUD = 0;
    ScibRegs.SCILBAUD = SCI_BAUD(CBR_115200);

    ScibRegs.SCICTL1.bit.RXENA = 1;
    ScibRegs.SCICTL1.bit.TXENA = 1;

    ScibRegs.SCICTL2.bit.RXBKINTENA = 1;
    ScibRegs.SCICTL2.bit.TXINTENA = 1;

    PieVectTable.SCIRXINTB = &SciRxIntB_ISR;
    PieCtrlRegs.PIECTRL.bit.ENPIE = 1;
    PieCtrlRegs.PIEIER9.bit.INTx1 = 1;

    IER |= M_INT9;
    ERTM;

}


// Transmit a character from the SCI
void SCI_SendByte(unsigned char TxByte)
{
    while(ScibRegs.SCICTL2.bit.TXRDY != 1)   // 7      Transmitter ready flag
        ;
    ScibRegs.SCITXBUF = TxByte;
}

void SCI_SendWord(uint16_t TxWord)
{
    SCI_SendByte((unsigned char)(TxWord));
    SCI_SendByte((unsigned char)(TxWord >> 8));
}

uint16_t SCItest = 0;
interrupt void SciRxIntB_ISR(void)     // SCI-A
{
    char ReceivedChar;
    //while(SciaRegs.SCIFFRX.bit.RXFFST !=1) { } // wait for XRDY =1 for empty state
    ReceivedChar = ScibRegs.SCIRXBUF.all;
    ++SCItest;
    if(SCItest > 60000)
        SCItest = 0;
    ScibRegs.SCIFFRX.bit.RXFFOVRCLR=1;   // Clear Overflow flag
    ScibRegs.SCIFFRX.bit.RXFFINTCLR=1;   // Clear Interrupt flag

    PieCtrlRegs.PIEACK.all = PIEACK_GROUP9;       // Issue PIE ack
}

