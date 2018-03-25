
#include "SystemCore.h"

uint16 MyLocationPID(PID_Type *This ,uint16 now , uint16 set)
{ 
    This->Real_P = This->HMI_P * This->ReductionFactor_P;
    This->Real_I = This->HMI_I * This->ReductionFactor_I;
    This->Real_D = This->HMI_D * This->ReductionFactor_D;
    This->Now = now;				  
		This->Set = set;
    This->Error = This->Set - This->Now;
		This->ErrorSum += This->Error;
		if(This->ErrorSum >= This->ErrorIMax) This->ErrorSum = This->ErrorIMax;
		if(This->ErrorSum <= This->ErrorIMin) This->ErrorSum = This->ErrorIMin;
    This->Out = This->Real_P * This->Error 
              + This->Real_I * This->ErrorSum
              + This->Real_D * (This->Error - This->LastError);
    This->PrevError = This->LastError;
    This->LastError = This->Error;
    This->Delta = This->Out;
		if(This->Delta >= This->OutMax) This->Delta = This->OutMax;
		if(This->Delta <= This->OutMin) This->Delta = This->OutMin;
		return This->Delta;
}

uint16 MyLocationPID_Real(PID_Type *This ,uint16 now , uint16 set)
{ 
    This->Now = now;				  
		This->Set = set;
    This->Error = This->Set - This->Now;
		This->ErrorSum += This->Error;
		if(This->ErrorSum >= This->ErrorIMax) This->ErrorSum = This->ErrorIMax;
		if(This->ErrorSum <= This->ErrorIMin) This->ErrorSum = This->ErrorIMin;
    This->Out = This->Real_P * This->Error 
              + This->Real_I * This->ErrorSum
              + This->Real_D * (This->Error - This->LastError);
    This->PrevError = This->LastError;
    This->LastError = This->Error;
    This->Delta = This->Out;
		if(This->Delta >= This->OutMax) This->Delta = This->OutMax;
		if(This->Delta <= This->OutMin) This->Delta = This->OutMin;
		return This->Delta;
}

uint16 MyDeltaPID(PID_Type *This ,uint16 now , uint16 set)
{ 
    This->Real_P = This->HMI_P * This->ReductionFactor_P;
    This->Real_I = This->HMI_I * This->ReductionFactor_I;
    This->Real_D = This->HMI_D * This->ReductionFactor_D;
    This->Now = now;				  
		This->Set = set;
    This->Error = This->Set - This->Now;
    This->Out = This->Real_P * (This->Error - This->LastError)
              + This->Real_I * This->Error
              + This->Real_D * (This->Error - 2 * This->LastError + This->PrevError);
    This->PrevError = This->LastError;
    This->LastError = This->Error;
    This->Delta += This->Out;
		if(This->Delta >= This->OutMax) This->Delta = This->OutMax;
		if(This->Delta <= This->OutMin) This->Delta = This->OutMin;
		return This->Delta;
}

uint16 MyDeltaPID_Real(PID_Type *This ,uint16 now , uint16 set)
{ 
    This->Now = now;				  
		This->Set = set;
    This->Error = This->Set - This->Now;
    This->Out = This->Real_P * (This->Error - This->LastError)
              + This->Real_I * This->Error
              + This->Real_D * (This->Error - 2 * This->LastError + This->PrevError);
    This->PrevError = This->LastError;
    This->LastError = This->Error;
    This->Delta += This->Out;
		if(This->Delta >= This->OutMax) This->Delta = This->OutMax;
		if(This->Delta <= This->OutMin) This->Delta = This->OutMin;
		return This->Delta;
}

void MyPidParaInit(PID_Type *This)
{
	This->Delta = 0;
	This->Out = 0;
	This->ErrorSum = 0;
	This->PrevError = 0;
  This->LastError = 0; 
  This->Error = 0;
}

uint16_t MyMAFilter(MovingAverageFilter_t* This,uint16_t InputData)
{
		This->Now = InputData;
		This->DataHistory[This->Rear] = This->Now;
		if(++This->Rear >= This->FilterLevel) This->Rear = 0;  
	  This->DataTotal += InputData;
	  This->DataTotal -= This->DataHistory[This->Rear];
		return This->DataTotal / This->FilterLevel;

}

