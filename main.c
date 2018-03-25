/*
*   main.c badapple
*/
#include "DSP2833x_Device.h"     // DSP2833x Headerfile Include File
#include "DSP2833x_Examples.h"   // DSP2833x Examples Include File
#include "DSP28x_Project.h"
#include "stdbool.h"
#include "ad7606.h"
#include "led.h"

#define Flash_Fixed_EN 1       //需要烧写RAM时注释掉这行

void main(void)
{
    //记得将不用的外设时钟关掉，目前时钟全开
	InitSysCtrl();  
	DINT;
	InitPieCtrl();
	IER = 0x0000;
    IFR = 0x0000;
	InitPieVectTable();
	#ifdef Flash_Fixed_EN     //烧写FLASH时才用到这行，同时将CMD文件更换
    MemCopy(&RamfuncsLoadStart,&RamfuncsLoadEnd,&RamfuncsRunStart);
    InitFlash();
    #endif  

	My28335_Init();  

    ERTM;   // Enable Global realtime interrupt DBGM
	while(1)
	{
	    ToggleLED1();
	    Fifo_AddData(&ADC_Fifo[0],ADC_Convert[0]);
	    Fifo_AddData(&ADC_Fifo[1],ADC_Convert[1]);
	    Fifo_AddData(&ADC_Fifo[2],ADC_Convert[2]);
	    AD7606_Scan();
	    ToggleLED1();
	}
}
