#include "stdio.h"
#define fun(name,a) int fun_##name(int x){return a*x;}
fun(quad,4)
fun(double,2)
int main()
{
	int num;
	char op;
	printf("Enter the value: ");
	scanf("%d",&num);
	printf("Enter the operation(q,d): ");
	scanf("%c",&op);
	if(op=='q')
		printf("the quadrable of %d = %d",num,fun_quad(num));
	else if (op=='d')
		printf("the double of %d = %d",num,fun_double(num));
return 0;
}