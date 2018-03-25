
#include "DSP28x_Project.h"

#include "ad7606.h"

void My28335_Init(void)
{

   HardWare_TwoLED_Init();
   AD7606_ConfigAll();
   AD9850_AllInit();
   Dsp28335_SciBInit();
   //CpuTimer0Init(10000);

   EINT;   // Enable Global interrupt INTM
}



