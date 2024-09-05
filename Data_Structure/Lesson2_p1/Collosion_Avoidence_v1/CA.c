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
int GetDistance(int l,int r,int count);

STATE_DEFINE(CA_Waiting)
{
	CA_StateId=Waiting;
	CA_Speed=0;
	printf("CA_Waiting : Speed=%d  Distance=%d \n",CA_Speed,CA_Distance);
	CA_Distance=GetDistance(45,55,1);
	(CA_Distance<=CA_Threshold)?(CA_State=STATE(CA_Waiting)):(CA_State=STATE(CA_Driving));

}

STATE_DEFINE(CA_Driving)
{
	CA_StateId=Driving;
	CA_Speed=30;
	printf("CA_Driving : Speed=%d  Distance=%d \n",CA_Speed,CA_Distance);
	CA_Distance=GetDistance(45,55,1);
	(CA_Distance<=CA_Threshold)?(CA_State=STATE(CA_Waiting)):(CA_State=STATE(CA_Driving));

}

int GetDistance(int l,int r,int count)
{
	int rand_num;
	for(int i=0;i<count;i++)
	{
		rand_num=(rand()%(r-l+1))+l;
		return rand_num;
	}

}

