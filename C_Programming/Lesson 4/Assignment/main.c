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
	printf ("Enter the problem number: ");
	fflush (stdin);fflush (stdout);
	scanf ("%d",&x);
	switch (x)
	{
	case 1:
	{
		float mat1[2][2];
		float mat2[2][2];
		for (int i=0;i<2;i++)
		{
			for (int j=0;j<2;j++)
			{
				printf ("Enter a%d%d: ",i,j);
				fflush (stdin);fflush (stdout);
				scanf ("%f",&mat1[i][j]);
			}
		}
		for (int i=0;i<2;i++)
		{
			for (int j=0;j<2;j++)
			{
				printf ("Enter b%d%d: ",i,j);
				fflush (stdin);fflush (stdout);
				scanf ("%f",&mat2[i][j]);
			}
		}
		printf ("The sum of matrix:\r\n");
		for (int i=0;i<2;i++)
		{
			for (int j=0;j<2;j++)
			{
				printf ("%0.1f  ",mat1[i][j]+mat2[i][j]);
			}
			printf ("\r\n");
		}
	}
	break;
	case 2:
	{
		float arr[100];
		int n;
		float sum,avg;
		printf ("Enter the numbers of data: ");
		fflush (stdin);fflush (stdout);
		scanf ("%d",&n);
		for (int i=0;i<n;i++)
		{
			printf ("%d. Enter number: ",i+1);
			fflush (stdin);fflush (stdout);
			scanf ("%f",&arr[i]);
		}
		for (int i=0;i<n;i++)
		{
			sum+=arr[i];
		}
		avg=sum/n;
		printf ("The average= %0.2f",avg);
	}
	break;
	case 3:
	{
		int mat[100][100];
		int rows,col;
		printf ("Enter the rows and the columns: ");
		fflush (stdin);fflush (stdout);
		scanf ("%d\r\n%d",&rows,&col);
		printf ("Enter elements of matrix: \r\n");
		for (int i=0;i<rows;i++)
		{
			for (int j=0;j<col;j++)
			{
				printf ("Enter element a(%d,%d): ",i,j);
				fflush (stdin);fflush (stdout);
				scanf ("%d",&mat[i][j]);
			}
		}
		printf ("Entered matrix:\r\n");
		for (int i=0;i<rows;i++)
		{
			for (int j=0;j<col;j++)
			{
				printf ("%d\t",mat[i][j]);
			}
			printf ("\r\n");
		}
		printf ("The transpose of the matrix:\r\n");
		//rows will be columns and columns will be rows
		for (int i=0;i<col;i++)
		{
			for (int j=0;j<rows;j++)
			{
				printf ("%d\t",mat[j][i]);
			}
			printf ("\r\n");
		}
	}
	break;
	case 4:
	{
		int arr[100];
		int n,insert,location;
		printf ("Enter the number of elements: ");
		fflush (stdin);fflush (stdout);
		scanf ("%d",&n);
		for (int i=0;i<n;i++)
		{
			printf ("%d ",i+1);
		}
		printf ("\r\nEnter the element to be inserted: ");
		fflush (stdin);fflush (stdout);
		scanf ("%d",&insert);
		printf ("Enter the location: ");
		fflush (stdin);fflush (stdout);
		scanf ("%d",&location);
		int m=1;
		for (int i=0;i<n+1;i++)
		{
			if (i==location-1)
				arr[i]=insert;
			else
			{
				arr[i]=m;
				m++;
			}
		}
		for (int i=0;i<n+1;i++)
		{
			printf ("%d ",arr[i]);
		}
	}
	break;
	case 5:
	{
		int arr[100];
		int n,element;
		printf ("Enter the number of elements: ");
		fflush (stdin);fflush (stdout);
		scanf ("%d",&n);
		for (int i=0;i<n;i++)
		{
			arr[i]=(i+1)*11;
			printf ("%d ",arr[i]);
		}
		printf ("\r\nEnter the element to be searched: ");
		fflush (stdin);fflush (stdout);
		scanf ("%d",&element);
		for (int i=0;i<n;i++)
		{
			if (arr[i]==element)
			{
				printf ("Number found at location %d",i+1);
				break;
			}
		}
	}
	break;
	case 6:
	{
		char text[100];
		char entered;
		printf ("Enter a string: ");
		fflush (stdin);fflush (stdout);
		gets(text);
		printf ("Enter a character: ");
		fflush (stdin);fflush (stdout);
		scanf ("%c",&entered);
		int i=0;
		int num=0;
		while (text[i]!=0)
		{
			if (text[i]==entered)
			{
				num+=1;
			}
			i++;
		}
		printf ("Frequency of %c = %d",entered,num);


	}
	break;
	case 7:
	{
		char text[100];
		printf ("Enter a string: ");
		fflush (stdin);fflush (stdout);
		gets(text);
		int i=0;
		int num=0;
		while (text[i]!=0)
		{
			num++;
			i++;
		}
		printf ("The length of the string= %d",num);
	}
	break;
	case 8:
	{
		char text[100];
		printf ("Enter a string: ");
		fflush (stdin);fflush (stdout);
		gets(text);
		int n=strlen(text);
		printf ("The reverse: ");
		for (int i=n-1;i>=0;i--)
		{
			printf ("%c",text[i]);
		}
	}
	}
}

