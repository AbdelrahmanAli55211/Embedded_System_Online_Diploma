/*
 * main.c
 *
 *  Created on: Aug 4, 2023
 *      Author: DELL
 */
#include "stdio.h"
#include "string.h"
#include "math.h"
void reverse(char arr[],int len)
{
	for(int i=len-1;i>=0;i--)
	{
		printf("%c",arr[i]);
	}
}

int main()
{

	char arr[100];
	printf("enter a number: ");
	fflush(stdout);
	scanf("%s",arr);
	int n=strlen(arr);
	reverse(arr,n);


	return 0;
}

