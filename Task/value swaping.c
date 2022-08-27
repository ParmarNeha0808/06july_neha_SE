#include<stdio.h>
int main()
{
	int a=40;
	int b=20;
	printf("before value swap a=%d b=%d",a,b);
	a=a*b;//a=80(40*20)//
	b=a/b;//b=2(40/80)//
	a=a/b;//a=40(80/2)//
	printf("\nafter value swap a=%d b=%d",a,b);
}
