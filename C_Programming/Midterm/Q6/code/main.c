/*
 * main.c
 *
 *  Created on: Aug 4, 2023
 *      Author: DELL
 */
#include "stdio.h"
#include "string.h"
void unique(int arr[],int size)
{
	for(int i=0;i<size;i++)
		{
			int m=0;
			for(int j=0;j<size;j++)
			{
				if(arr[i]==arr[j])
					m++;
			}
			if(m==1)
			{
				printf("the unique number is:%d ",arr[i]);
				break;
			}
		}
}
int main()
{
	int arr[100],size;
	printf("enter the size of the array: ");
	fflush(stdout);
	scanf("%d",&size);
	printf("enter the elements of the array:\n");
	fflush(stdout);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);

	}
	unique(arr,size);
	return 0;
}

