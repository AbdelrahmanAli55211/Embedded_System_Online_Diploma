/*
 * main.c
 *
 *  Created on: Jul 5, 2023
 *      Author: Abdelrahman
 */
#include "stdio.h"
void main()
{
	int x;
	printf ("enter the quiz number ");
	fflush (stdout);
	scanf ("%d",&x);
	switch (x)
	{
	case 1:
	{
		int x=5;
		float y=2.0;
		if (x/y == 2)
			printf ("print 1");
		else if (x/y == 2.5)
			printf ("print 2");
	}
	case 2:
	{
		int x=10;
		char y= 'a';
		x+=y;
		float z= x+1.0;
		printf ("x=%d ,",x);
		printf ("z=%f",z);

	}
	case 3:
	{
		double x=1.2;
		int sum=(int)x+1;
		printf("%d",sum);
	}
	// Lab 1 "if statement "Calculating area and circuference"
	case 4:
	{
		float radius;
		char choice;
		printf ("Enter Circle radius ");
		fflush (stdout); fflush (stdin);
		scanf ("%f",&radius);
		printf ("Enter your choice ( a to print area , c to print circumference");
		fflush (stdout); fflush (stdin);
		scanf ("%c",&choice);
		if (choice=='a')
		{
			printf ("the area = %f",3.14*radius*radius);
		}
		else if (choice=='c')
		{
			printf ("the circumference = %f",2*3.14*radius);
		}
		else
			printf ("Wrong input");
	}
	//lab2 if statement ( comparing 3 numbers )
	case 5:
	{
		float a,b,c;
		printf ("enter the 3 numbers ");
		fflush (stdout); fflush (stdin);
		scanf ("%f %f %f",&a,&b,&c);
		if (a>b)
		{
			if (a>c)
				printf ("the max number is %f",a);
			else
				printf ("the max is %f",c);
		}
		else
		{
			if (b>c)
				printf ("the max is %f",b);
			else
				printf ("the max is %f",c);
		}

	}
	// line condition : calculating the minimum of two numbers
	case 6 :
	{
		int a,b;
		printf ("enter the two numbers ");
		fflush (stdout); fflush (stdin);
		scanf ("%d %d",&a,&b);
		printf ("the minimum = %d",(a<b)?a:b);
	}
	// for statement:calculating the sum of values between 1 and 99
	case 7 :
	{
		int i=1;
		int sum;
		for(i;i<=99;i++)
		{
			sum+=i;
		}
		printf ("the sum = %d",sum);
	}
	// calculating average of student degrees
	case 8:
	{
		int num_student;
		float sum,avg,degree;
		printf ("Enter the number of students ");
		fflush (stdout); fflush (stdin);
		scanf ("%d",&num_student);
		for(int i=0;i<num_student;i++)
		{
			printf ("enter the degree of student %d ",i+1);
			fflush (stdout); fflush (stdin);
			scanf ("%f",&degree);
			sum+=degree;
		}
		avg=sum/num_student;
		printf ("the average = %f",avg);
	}
	//nested loop
	case 9:
	{

		for (int i=0;i<10;i++)
		{
			for (int j=i;j<=9;j++)
			{
				printf ("%d ",j);
			}
			printf ("\r\n");

		}
	}
	}
}

