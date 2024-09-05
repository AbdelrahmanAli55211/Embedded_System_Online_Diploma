/*
 * US.h
 *
 *  Created on: Sep 5, 2024
 *      Author: DELL
 */

#ifndef US_H_
#define US_H_

#include "stdio.h"
#include "stdlib.h"
#include "state.h"

enum
{
	us_busy
}US_StateID;

extern void(* US_State)();

void US_Init();
STATE_DEFINE(US_busy);

#endif /* US_H_ */
