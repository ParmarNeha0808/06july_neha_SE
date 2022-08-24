#include<stdio.h>
int no1,no2;
void getdata()
{
	printf("Enter 2 no:");
	scanf("%d%d",&no1,&no2);
}

int add()
{
	return no1+no2;
}
int sub()
{
	return no1-no2;
}
int mul()
{
	return no1*no2;
}
float div()
{
	return no1/no2;
}
int modulo()
{
	return no1%no2;
}

int main()
{
	getdata();
	printf("\n%d",add());
	printf("\n%d",sub());
	printf("\n%d",mul());
	printf("\n%f",div());
	printf("\n%d",modulo());
	
}
