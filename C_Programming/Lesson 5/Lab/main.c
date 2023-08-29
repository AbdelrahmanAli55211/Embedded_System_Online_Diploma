/*
 * main.c
 *
 *  Created on: Jul 22, 2023
 *      Author: DELL
 */
#include "stdio.h"
#include "string.h"
void search(char names[][14],int n,char name[])
{
	int i;
	for ( i=0;i<n;i++)
	{
		if (stricmp(name,names[i])==0)
		{
			printf ("Welcome");
			break;
		}
	}
	if (i==n)
		printf ("not in the list");
}
int minvalue(int arr[],int n)
{
	int min=arr[0];
	for (int i=1;i<n;i++){
		if (arr[i]<min)
			min=arr[i];
	}
	return min;
}
int fact(int x)
{
	int mul=1;
	for (int i=1;i<=x;i++)
	{
		mul*=i;
	}
	return mul;
}
int main(){
int x;
printf ("Enter the problem number: ");
fflush (stdin);fflush (stdout);
scanf ("%d",&x);
switch (x)
{
//calculating the factorial using function
case 1:
{
	printf ("Factorial(10)=%d",fact(10));
}
break;
case 2:
{
	int arr[5]={4,5,2,8,3};
	printf ("the minimum value of the given array = %d",minvalue(arr,5));
}
break;
case 3:
{
	char names[5][14]={"hady","shady","mai","salma","omar"};
	char name[14];
	printf ("Enter your name: ");
	fflush(stdin);fflush(stdout);
	gets (name);
	search(names,5,name);
}
break;
}
}
