/*
 * main.c
 *
 *  Created on: Jul 16, 2023
 *      Author: Abdelrahman
 */
#include "stdio.h"
#include "string.h"
void main()
{
	int x;
	printf ("Enter the lab number: ");
	fflush (stdin);fflush(stdout);
	scanf ("%d",&x);

	switch(x)
	{
	case 1:
	{
		int deg[10];
		for (int i=0;i<10;i++)
		{
			printf ("Enter the degree of student %d: "
					"",i+1);
			fflush(stdout);fflush(stdin);
			scanf ("%d",&deg[i]);
		}
		for (int i=0;i<10;i++)
		{
			printf ("the degree of student %d is %d \r\n",i+1,deg[i]);
		}
	}
	break;
	case 2:
	{
		float x[5]={1,2,3,4,5};
		float y;
		for (int i=0;i<5;i++)
		{
			y=5*x[i]*x[i]+3*x[i]+2;
			printf ("y(%f)=%f\r\n",x[i],y);
		}
	}
	break;
	case 3:
	{
		float mat[3][3];
		for (int i=0;i<3;i++)
		{
			for (int j=0;j<3;j++)
			{
				printf ("Enter the item (%d,%d):",i,j);
				fflush(stdout);fflush(stdin);
				scanf ("%f",&mat[i][j]);
			}
		}
		printf ("the matrix:\r\n");
		for (int i=0;i<3;i++)
		{
			for (int j=0;j<3;j++)
			{
				printf ("%f\t",mat[i][j]);
			}
			printf ("\r\n");
		}
		printf ("the transpose of the matrix:\r\n");
		for (int i=0;i<3;i++)
		{
			for (int j=0;j<3;j++)
			{
				printf ("%f\t",mat[j][i]);
			}
			printf ("\r\n");
		}
	}
	break;
	case 4:
	{
		char names[5][14]={"Ahmed mohamed","Omar","Mahmoud","Salma","Malak"};
		char name[14];
		printf ("Enter your name: ");
		fflush(stdout);fflush(stdin);
		gets(name);
		int i;
		for (i=0;i<5;i++)
		{
			if (stricmp(name,names[i])==0)
			{
				printf ("Congrats, your name is in the list");
				break;
			}
		}
		if (i==5)
			printf ("Your name isnt in the list");
	}
	break;
	case 5:
	{
		int arr[10];
		int m;
		for (int i=0;i<10;i++)
		{
			again:
			m=rand();
			if (m>=1 && m<=1000)
				arr[i]=m;
			else
				goto again;
		}
		for (int i=1;i<10;i++)
		{
			if (arr[i-1]<arr[i] && arr[i+1]<arr[i])
				printf ("%d  ",arr[i]);
		}

	}
	}
}

