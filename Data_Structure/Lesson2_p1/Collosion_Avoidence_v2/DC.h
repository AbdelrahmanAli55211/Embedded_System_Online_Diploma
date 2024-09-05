/*
 * DC.h
 *
 *  Created on: Sep 5, 2024
 *      Author: DELL
 */

#ifndef DC_H_
#define DC_H_

#include "stdio.h"
#include "stdlib.h"
#include "state.h"

enum
{
	dc_idle,
	dc_busy
}DC_StateID;

extern void (* DC_State)();

STATE_DEFINE(DC_Idle);
STATE_DEFINE(DC_Busy);
void DC_Init();

#endif /* DC_H_ */
