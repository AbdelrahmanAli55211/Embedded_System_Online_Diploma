/*
 * main.c
 *
 *  Created on: Aug 4, 2023
 *      Author: DELL
 */

#include "stdio.h"
#include "string.h"
void rev(char arr[],int n)
{
	char first[100],sec[100];
	int space;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==' ')
		{
			space=i;
			break;
		}
	}
	int s;
	for( s=0;s<space;s++)
	{
		first[s]=arr[s];
	}
	first[s]=0;
	int m=0;
	int j;
	for(int j=space+1;j<n;j++)
	{

		sec[m]=arr[j];
		m++;
	}
	sec[m]=0;
	strcat(sec," ");
	strcat(sec,first);
	strcpy(arr,sec);
	printf("%s",arr);

}
int main()
{

	char arr[100];
	printf ("enter your name: ");
	fflush(stdout);
	gets(arr);
	int n=strlen(arr);
	rev(arr,n);

	return 0;
}
