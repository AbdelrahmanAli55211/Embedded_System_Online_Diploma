/*
 * main.c
 *
 *  Created on: Jul 7, 2023
 *      Author: DELL
 */
#include "stdio.h"
void main()
{
	int x;
	printf ("Enter the problem number ");
	fflush (stdout);fflush (stdin);
	scanf ("%d",&x);
	switch (x)
	{
	case 1:
	{
		int num;
		printf ("Enter the integer you want to check: ");
		fflush (stdout);fflush (stdin);
		scanf ("%d",&num);
		if (num%2==0)
			printf ("%d is even",num);
		else
			printf ("%d is odd",num);
	}
	break;
	case 2:
	{
		char c;
		printf ("Enter an alphabet: ");
		fflush (stdout);fflush (stdin);
		scanf ("%c",&c);
		switch (c)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		{
			printf ("%c is a vowel.",c);
		}
		break;
		default:
		{
			printf ("%c is consonant.",c);
		}
		}
	}
	break;
	case 3:
	{
		float a,b,c;
		printf ("Enter Three Numbers: ");
		fflush (stdout);fflush (stdin);
		scanf ("%f\r\n%f\r\n%f",&a,&b,&c);
		if (a>b)
		{
			if(a>c)
				printf ("Largest Number= %f",a);
			else
				printf ("Largest Number= %f",c);
		}
		else
		{
			if (b>c)
				printf ("Largest Number= %f",b);
			else
				printf ("Largest Number= %f",c);

		}
	}
	break;
	case 4:
	{
		float num;
		printf ("Enter a Number: ");
		fflush (stdout);fflush (stdin);
		scanf ("%f",&num);
		if (num>0)
			printf ("%f is positive",num);
		else if (num==0)
			printf ("You Entered Zero");
		else
			printf ("%f is negative",num);
	}
	break;
	case 5:
	{
		char c;
		printf ("Enter a character: ");
		fflush (stdout);fflush (stdin);
		scanf ("%c",&c);
		if ((c>='a' && c<='z') || (c>='A'&&c<='Z'))
			printf ("%c is an alphabet",c);
		else
			printf ("%c is not an alphabet",c);
	}
	break;
	case 6:
	{
		int num,sum=0;
		printf ("Enter an integer: ");
		fflush (stdout);fflush (stdin);
		scanf ("%d",&num);
		for (int i=1;i<=num;i++)
		{
			sum+=i;
		}
		printf ("Sum= %d",sum);
	}
	break;
	case 7:
	{
		int num,fact=1;
		printf ("Enter an integer: ");
		fflush (stdout);fflush (stdin);
		scanf ("%d",&num);
		if (num<0)
			printf ("Error!! Factorial of a negaive number doesn't exist");
		else
		{
			for (int i=num;i>0;i--)
			{
				fact*=i;
			}
			printf ("Factorial= %d",fact);
		}
	}
	break;
	case 8:
	{
		char op;
		float num1,num2;
		printf ("Enter operator Either + or - or * or /: ");
		fflush (stdout);fflush (stdin);
		scanf ("%c",&op);
		printf ("Enter two operands: ");
		fflush (stdout);fflush (stdin);
		scanf ("%f\r\n%f",&num1,&num2);
		switch (op)
		{
		case '+':
		{
			printf ("%f + %f = %f",num1,num2,num1+num2);
		}
		break;
		case '-':
		{
			printf ("%f - %f = %f",num1,num2,num1-num2);
		}
		break;
		case '*':
		{
			printf ("%f * %f = %f",num1,num2,num1*num2);
		}
		break;
		case '/':
		{
			if (num2==0)
			{
				printf ("Error!!");
			}
			else
			{
				printf ("%f / %f = %f",num1,num2,num1/num2);
			}
		}
		break;
		default:
		{
			printf ("Wrong operation!");
		}
		}
	}
	}
}

