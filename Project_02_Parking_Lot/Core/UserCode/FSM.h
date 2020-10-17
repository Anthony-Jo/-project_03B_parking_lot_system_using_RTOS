/*
 * FSM.h
 *
 *  Created on: Nov 19, 2019
 *      Author: kccistc
 */

#ifndef FSM_H_
#define FSM_H_

#include "main.h"
#include "stm32f103xb.h"

#define LIFT_UP_TIME	6500
#define LIFT_DOWN_TIME	7000

void Message_OutPut(uint8_t count, char *string);
void Lift_Control(void);
void Lift_Control_BT(uint8_t BT_Data);
void Gate_Control_BT(uint8_t BT_Data);
void Lift_Action(void);

#endif /* FSM_H_ */
