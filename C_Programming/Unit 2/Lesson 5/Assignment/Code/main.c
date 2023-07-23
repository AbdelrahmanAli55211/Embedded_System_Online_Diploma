/*
 * main.c
 *
 *  Created on: Jul 23, 2023
 *      Author: DELL
 */
#include "stdio.h"
#include "string.h"

void reverse(char arr[],int n)
{
	static char arr1[100];
	static int i;

	arr1[i]=arr[n-i-1];
	i++;
	if(i<n)
		reverse(arr,n);
	else
		printf ("%s",arr1);
}
int power(int num,int po)
{
	static int mul=1;
	mul*=num;
	po--;
	if (po>0)
		power(num,po);
	else
		return mul;
}
int factorial(int num)
{
	static int mul=1;
	mul *=num;
	num--;
	if (num>0)
		factorial(num);
	else
		return mul;
}
void prime(int first,int last)
{
	printf ("Prime numbers between %d and %d are: ",first,last);

	int i;
	for ( i=first;i<=last;i++)
	{
		int sum=0;
		for (int j=1;j<=i;j++)
		{
			if (i%j==0)
				sum++;
		}
		if ((sum==2) || (i==1))
			printf ("%d  ",i);

	}
}
void main(void)
{
	int x;
	printf ("Enter the problem number: ");
	fflush(stdin);fflush(stdout);
	scanf ("%d",&x);
	switch (x)
	{
	case 1:
	{
		int first,last;
		printf ("Enter the interval (first and last): ");
		fflush(stdin);fflush(stdout);
		scanf ("%d %d",&first,&last);
		prime(first,last);
	}
	break;
	case 2:
	{
		int num;
		printf ("Enter a positive integer: ");
		fflush(stdin);fflush(stdout);
		scanf ("%d",&num);
		printf ("Factorial of %d is %d",num,factorial(num));
	}
	break;
	case 3:
	{
		char arr[100];
		printf ("Enter a sentence: ");
		fflush(stdin);fflush(stdout);
		gets (arr);
		int n=strlen(arr);
		reverse(arr,n);
	}
	break;
	case 4:
	{
		int num,po;
		printf ("Enter a base number: ");
		fflush(stdin);fflush(stdout);
		scanf ("%d",&num);
		printf ("Enter the power: ");
		fflush(stdin);fflush(stdout);
		scanf ("%d",&po);
		printf ("%d^%d=%d",num,po,power(num,po));
	}
	}
}

