/*
 * main.c
 *
 *  Created on: Sep 5, 2024
 *      Author: DELL
 */
#include "US.h"
#include "CA.h"
#include "DC.h"

void setup()
{
	US_Init();
	DC_Init();

	CA_State=STATE(CA_Waiting);
	US_State=STATE(US_busy);
	DC_State=STATE(DC_Idle);
}

int main(void)
{
	setup();
	while(1)
	{
		US_State();
		CA_State();
		DC_State();
	}
	return 0;
}
