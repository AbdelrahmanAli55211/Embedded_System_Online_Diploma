/*
 * main.c
 *
 *  Created on: Aug 4, 2023
 *      Author: DELL
 */
#include "stdio.h"
#include "string.h"
int count(int num)
{
	int sum=0;
	for(int c=31;c>=0;c--)
	{
		if((num>>c & 1)==1)
			sum++;
	}
	return sum;
}
int main()
{
	int num;
	printf("enter a number: ");
	fflush(stdout);
	scanf("%d",&num);
	printf("the number of ones = %d",count(num));
	return 0;
}

