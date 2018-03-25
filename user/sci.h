/*
 * sci.h
 *
 *  Created on: 2017Äê10ÔÂ11ÈÕ
 *      Author: Administrator
 */

#ifndef USER_SCI_H_
#define USER_SCI_H_

#include "stdint.h"

void Dsp28335_SciBInit(void);
void SCI_SendByte(unsigned char TxByte);
void SCI_SendWord(uint16_t TxWord);

#endif /* USER_SCI_H_ */
