/*
 * main.c
 *
 *  Created on: Aug 4, 2023
 *      Author: DELL
 */

#include "stdio.h"
#include "string.h"
int fun(int num)
{
	return num*(num+1)/2;
}
int main()
{
	int num;
	printf("enter a number:");
	fflush(stdout);
	scanf("%d",&num);
	int sum=fun(num);
	printf("the sum= %d",sum);
	return 0;
}
//we can also do it using recursion but this is also considered as a loop
