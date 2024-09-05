/*
 * main.c
 *
 *  Created on: Sep 5, 2024
 *      Author: DELL
 */

#include "CA.h"
void setup(void)
{
	CA_State=STATE(CA_Waiting);
}

int main(void)
{
	volatile int d=0;
	setup();
	while(1)
	{
		CA_State();
		for (d=0;d<1000;d++);
	}
	return 0;
}
