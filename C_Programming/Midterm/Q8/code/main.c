/*
 * main.c
 *
 *  Created on: Aug 4, 2023
 *      Author: DELL
 */
#include "stdio.h"
#include "string.h"
void reverse(int arr[],int n)
{
	int arr2[100];
	int i,j;
	for(i=n-1,j=0;i>=0;i--,j++)
	{
		arr2[j]=arr[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr2[i]);
	}
}
int main()
{
	int arr[100],size;
	printf("enter the size of array: ");
	fflush(stdout);
	scanf("%d",&size);
	printf("enter the element of array: ");
	fflush(stdout);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	reverse(arr,size);

	return 0;
}

