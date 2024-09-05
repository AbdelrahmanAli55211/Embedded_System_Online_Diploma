/*
 * C.c
 *
 *  Created on: Sep 5, 2024
 *      Author: DELL
 */

#include "DC.h"
int DC_Speed=0;
void (* DC_State)();

STATE_DEFINE(DC_Idle)
{
	DC_StateID=dc_idle;
	DC_State=STATE(DC_Idle);
	printf("DC_Idle: Speed=%d \n",DC_Speed);
}
STATE_DEFINE(DC_Busy)
{
	DC_StateID=dc_busy;
	DC_State=STATE(DC_Idle);
	printf("DC_Busy: Speed=%d \n",DC_Speed);
}
void DC_Init()
{
	printf("DC_Motor_Init\n");
}
void SIG_SPD_Trans(int Transfered_Speed)
{
	DC_Speed=Transfered_Speed;
	DC_State=STATE(DC_Busy);
	printf("CA->DC_Motor: Speed=%d\n",DC_Speed);
}
