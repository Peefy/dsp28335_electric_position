/*
 * led.h
 *
 *  Created on: 2017Äê9ÔÂ8ÈÕ
 *      Author: Administrator
 */

#ifndef USER_LED_H_
#define USER_LED_H_

#include "stdint.h"

typedef enum
{
    LedStatus_On = 0,
    LedStatus_Off = 1,
}LedStatus_e;

void HardWare_TwoLED_Init(void);
void ToggleLED1(void);
void ToggleLED2(void);
void SetLed1Status(LedStatus_e status);
void SetLed2Status(LedStatus_e status);

#define LED1_ON   SetLed1Status(LedStatus_On);
#define LED1_OFF  SetLed1Status(LedStatus_Off);
#define LED2_ON   SetLed2Status(LedStatus_On);
#define LED2_OFF  SetLed2Status(LedStatus_Off);

#endif /* USER_LED_H_ */
