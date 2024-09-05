/*
 * US.c
 *
 *  Created on: Sep 5, 2024
 *      Author: DELL
 */
#include "US.h"

int US_Distance=0;
void(* US_State)();
int GetDistance(int l,int r,int count);
void US_Init()
{
	printf("US_Init \n");
}

STATE_DEFINE(US_busy)
{
	US_StateID=us_busy;
	US_Distance=GetDistance(45,55,1);
	SIG_DIs_Trans(US_Distance);
	US_State=STATE(US_busy);
	printf("US_Busy: Distance=%d \n",US_Distance);
}

int GetDistance(int l,int r,int count)
{
	int rand_num;
	for(int i=0;i<count;i++)
	{
		rand_num=(rand()%(r-l+1))+l;
		return rand_num;
	}
	return rand_num;

}
