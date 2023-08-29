/*
 * main.c
 *
 *  Created on: Aug 4, 2023
 *      Author: DELL
 */
#include "stdio.h"
#include "string.h"
#include "math.h"
float square(int num)
{
	for(int i=1;i<num;i++)
		if(i*i==num)
		{
			return i;
		}
		else if (i*i > num)
		{
			for(float j=i-1;j<i;j+=0.0001)
			{
				if(fabs(j*j-num)<=0.001 )
				{
					return j;
				}
			}
		}
	return 0;
}
int main()
{
	int num;
	printf("enter a number:");
	fflush(stdout);
	scanf("%d",&num);
	float root = square(num);
	printf("the root = %f",root);

	return 0;
}
/*

 there is another soln:using sqrt() function
 the root of any number = sqrt(num)

*/

