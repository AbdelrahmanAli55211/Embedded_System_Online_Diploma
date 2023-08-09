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
	int max=0;
	for(int c=31;c>=0;c--)
	{
		if(((num>>c)&1) == 0)
		{
			int sum=0;
			int m=c-1;
			while(((num>>m)&1) == 1)
			{
				sum++;
				m--;
			}
			if(sum>max)
				max=sum;
		}
	}
	return max;
}
int main()
{
	int num;
	printf("enter a number: ");
	fflush(stdout);
	scanf("%d",&num);
	printf("%d",fun(num));
	return 0;
}

