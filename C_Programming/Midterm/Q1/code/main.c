/*
 * main.c
 *
 *  Created on: Aug 4, 2023
 *      Author: DELL
 */
#include "stdio.h"
#include "string.h"
int dig(int num)
{
	int sum=0;
	while (num !=0)
	{
		sum+=num%10;
		num/=10;
	}
	return sum;
}
int main()
{
	int num;
	printf("enter a number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);
	printf("The Sum of the digits = %d",dig(num));
	return 0;
}

