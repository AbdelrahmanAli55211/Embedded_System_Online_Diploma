/*
 * main.c
 *
 *  Created on: Aug 4, 2023
 *      Author: DELL
 */
#include "stdio.h"
#include "string.h"
void prime (int first,int last)
{
	for (int i=first ; i<=last ;i++)
	{
		int sum=0;
		for(int j=1;j<i;j++)
		{
			if (i%j==0)
				sum++;
		}
		if (sum==1 || i==1)
			printf("%d\t",i);
	}
}
int main()
{
	int first,last;
	printf("enter the intervals: ");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&first,&last);
	prime(first,last);
	return 0;
}

