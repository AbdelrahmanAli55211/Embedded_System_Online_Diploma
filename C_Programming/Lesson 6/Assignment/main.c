/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: DELL
 */
#include "stdio.h"
#include "string.h"
//Ex1
struct student_info
{
	char name[50];
	int roll_num;
	int mark;
};
//EX2
struct distance
{
	int feet;
	float inch;
};
struct distance read(char name[])
{
	struct distance result;
	printf("Enter information for %s distance\n",name);
	printf("Enter Feet: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&result.feet);
	printf("Enter Inch: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&result.inch);
	return result;
}
struct distance add(struct distance x,struct distance y)
{
	struct distance result;
	result.feet=x.feet+y.feet;
	result.inch=x.inch+y.inch;
	while(result.inch>=12)
	{
		result.inch-=12;
		result.feet++;
	}
	return result;
}
void printing(struct distance x)
{
	printf("Sum of distances= %d\'-%0.1f\"",x.feet,x.inch);
}
//EX3
struct complex
{
	double real;
	double img;
};
struct complex read1(char name[])
{
	printf("For %s complex number\n",name);
	struct complex result;
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%lf %lf",&result.real,&result.img);
	return result;
}
struct complex add1(struct complex num1,struct complex num2)
{
	struct complex result;
	result.real=num1.real+num2.real;
	result.img=num1.img+num2.img;
	return result;
}
void printing1(struct complex x)
{
	printf("the result is %0.1lf+j%0.1lf",x.real,x.img);
}
//EX4
struct student
{
	int roll;
	char name[50];
	int mark;
};
struct student input(void)
{
	static int roll=1;
	struct student x;
	x.roll=roll;
	printf("For roll num %d\n",roll);
	roll++;
	printf("Enter name: ");
	fflush(stdin);fflush(stdout);
	gets(x.name);
	printf("Enter mark: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x.mark);
	return x;
}
void display(struct student x)
{
	printf("Information for roll number %d:\n",x.roll);
	printf("Name: %s\n",x.name);
	printf("Mark: %d\n",x.mark);
}
//EX6
union unionjob
{
	char name[32];
	int workerno;
	float salary;
}u;
struct job
{
	char name[32];
	int workerno;
	float salary;
}s;

int main()
{
	int prob_num;
	printf("Enter the problem number: ");
	fflush(stdout);
	scanf("%d",&prob_num);
	switch(prob_num)
	{
	case 1:
	{
		struct student_info student;
		printf("Enter your name: ");
		fflush(stdout);fflush(stdin);
		gets(student.name);
		printf("Enter roll number: ");
		fflush(stdout);
		scanf("%d",&student.roll_num);
		printf("Enter mark: ");
		fflush(stdout);
		scanf("%d",&student.mark);
		printf("Displaying Information\n");
		printf("Name: %s\n",student.name);
		printf("Roll: %d\n",student.roll_num);
		printf("Mark: %d\n",student.mark);
	}
	break;
	case 2:
	{
		struct distance x,y,result;
		x=read("1st");
		y=read("2nd");
		result=add(x,y);
		printing(result);

	}
	break;
	case 3:
	{
		struct complex num1,num2,result;
		num1=read1("1st");
		num2=read1("2nd");
		result=add1(num1,num2);
		printing1(result);
	}
	break;
	case 4:
	{
		struct student arr[2];
		printf("Enter info of students:\n");
		for(int i=0;i<2;i++)
		{
			arr[i]=input();
		}
		printf("Displaying info of students:\n");
		for(int i=0;i<2;i++)
		{
			display(arr[i]);
		}
	}
	break;
	case 6:
	{
		printf("%d\n%d",sizeof(u),sizeof(s));
	}
	}



	return 0;
}
