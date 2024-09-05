/*
 * CA.c
 *
 *  Created on: Sep 5, 2024
 *      Author: DELL
 */
#include "CA.h"

int CA_Distance=0;
int CA_Speed=0;
int CA_Threshold=50;

void (* CA_State)();

STATE_DEFINE(CA_Waiting)
{
	CA_StateId=Waiting;
	CA_Speed=0;
	SIG_SPD_Trans(CA_Speed);
	printf("CA_Waiting: Distance=%d  Speed=%d \n",CA_Distance,CA_Speed);
}
STATE_DEFINE(CA_Driving)
{
	CA_StateId=Driving;
	CA_Speed=30;
	SIG_SPD_Trans(CA_Speed);
	printf("CA_Driving: Distance=%d  Speed=%d \n",CA_Distance,CA_Speed);
}

void SIG_DIs_Trans(int Transfered_Distance)
{
	CA_Distance=Transfered_Distance;
	(CA_Distance<=CA_Threshold)?(CA_State=STATE(CA_Waiting)):(CA_State=STATE(CA_Driving));
	printf("US->CA: Distance=%d \n",CA_Distance);
}

