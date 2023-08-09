/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: DELL
 */
#include "stdio.h"
#include "string.h"
// lab1
struct complex
{
	double real;
	double img;
};
struct complex read(char name[])
{
	struct complex result;
	printf("enter the real value of %s: ",name);
	fflush(stdout);
	scanf("%lf",&result.real);
	printf("enter the real value of %s: ",name);
	fflush(stdout);
	scanf("%lf",&result.img);
	return result;
}
struct complex add(struct complex num1,struct complex num2)
{
	struct complex result;
	result.real=num1.real+num2.real;
	result.img=num1.img+num2.img;
	return result;
}
void printing(struct complex x)
{
	printf("the result is %lf+j%lf",x.real,x.img);
}
//--------------------------------------------------
//lab2
struct date
{
	int day;
	int month;
	int year;
};
struct employee
{
	char name[50];
	struct date birth;
	struct date graduation;
	int salary;
};
struct date read1(char name[])
{
	struct date result;
	printf("Enter the (day/month/year) of %s: ",name);
	fflush(stdout);
	scanf("%d %d %d",&result.day,&result.month,&result.year);
	return result;
}
struct employee read2(void)
{
	struct employee result;
	printf("Enter your name: ");
	fflush(stdout);
	gets(&result.name);
	result.birth=read1("birthday");
	result.graduation=read1("graduation");
	printf("Enter your salary: ");
	fflush(stdout);
	scanf("%d",&result.salary);
	return result;
}
void out(struct employee x)
{
	printf("name: %s\nbirthday(d/m/y):(%d/%d/%d)\ngraduation(d/m/y):(%d/%d/%d)\nsalary: %d\n",x.name,x.birth.day,x.birth.month,x.birth.year,x.graduation.day,x.graduation.month,x.graduation.year,x.salary);
}
int main()
{
	int x;
	printf("enter the lab number: ");
	fflush(stdout);
	scanf("%d",&x);
	switch(x)
	{
	// adding 2 complex numbers
	case 1:
	{
		struct complex num1,num2,result;
		num1=read("num1");
		num2=read("num2");
		result=add(num1,num2);
		printing(result);
	}
	break;
	// Nested structure example
	case 2:
	{
		struct employee emp[100],temp;
		int m=0;
		do{
			printf("enter data of employee %d\n",m+1);
			emp[m]=read2();
			m++;
			printf("do you want to add? (y\n)");
		}while(getch()=='y' && m<100);
		for(int i=0;i<m;i++)
		{
			for(int j=1;j<m+1;j++)
			{
				if((emp[i].birth.year>emp[j].birth.year))
								{
										temp=emp[i];
										emp[i]=emp[j];
										emp[j]=temp;
								}

			}
		}
		for(int i=0;i<m+1;i++)
		{
			printf("sorted:\n");
			out(emp[i]);
		}
	}
	break;
	}
	return 0;
}

