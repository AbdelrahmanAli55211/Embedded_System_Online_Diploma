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
	initial:
	printf ("Enter the problem number ");
	fflush (stdout);fflush (stdin);
	scanf ("%d",&x);
	switch(x)
	{
	case 1:
	{
		printf ("C programming");
	}
	break;
	case 2:
	{
		int x;
		printf ("Enter an Integer: ");
		fflush (stdout);fflush (stdin);
		scanf ("%d",&x);
		printf ("You Entered: %d",x);
	}
	break;
	case 3:
	{
		int x,y,sum;
		printf ("Enter Two Integers ");
		fflush (stdout);fflush (stdin);
		scanf ("%d\r\n%d",&x,&y);
		sum=x+y;
		printf ("Sum: %d",sum);
	}
	break;
	case 4:
	{
		float x,y;
		printf ("Enter Two Numbers: ");
		fflush (stdout);fflush (stdin);
		scanf ("%f\r\n%f",&x,&y);
		printf ("Product: %f",x*y);
	}
	break;
	case 5:
	{
		char c;
		printf ("Enter a character: ");
		fflush (stdout);fflush (stdin);
		scanf ("%c",&c);
		printf ("The ASCII value of %c is: %d",c,c);
	}
	break;
	case 6:
	{
		float a,b,temp;
		printf ("Enter the value of a: ");
		fflush (stdout);fflush (stdin);
		scanf ("%f",&a);
		printf ("Enter the value of b: ");
		fflush (stdout);fflush (stdin);
		scanf ("%f",&b);
		temp=a;
		a=b;
		b=temp;
		printf ("After swapping the value of a is %f\r\n",a);
		printf ("After swapping the value of b is %f",b);
	}
	break;
	case 7:
	{
		float a,b;
		printf ("Enter the value of a: ");
		fflush (stdout);fflush (stdin);
		scanf ("%f",&a);
		printf ("Enter the value of b: ");
		fflush (stdout);fflush (stdin);
		scanf ("%f",&b);
		b=b+a;
		a=b-a;
		b=b-a;
		printf ("After swapping the value of a is %f\r\n",a);
		printf ("After swapping the value of b is %f",b);
	}
	break;
	default:
	{
		printf ("Wrong problem entered , do you want to try again? (y\n): ");
		char c;
		fflush (stdout);fflush (stdin);
		scanf ("%c",&c);
		if (c=='y')
			goto initial;
		else if (c=='n')
			printf ("Thank you");
		else
			printf ("Wrong choice");
	}
	}
}

