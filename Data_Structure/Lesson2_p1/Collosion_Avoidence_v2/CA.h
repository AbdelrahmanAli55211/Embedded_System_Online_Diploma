/*
 * CA.h
 *
 *  Created on: Sep 5, 2024
 *      Author: DELL
 */

#ifndef CA_H_
#define CA_H_

#include "stdio.h"
#include "stdlib.h"
#include "state.h"

enum
{
	Waiting,
	Driving
}CA_StateId;


extern void (* CA_State)();

STATE_DEFINE(CA_Waiting);
STATE_DEFINE(CA_Driving);


#endif /* CA_H_ */
