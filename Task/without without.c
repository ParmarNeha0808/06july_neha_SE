#include<stdio.h>
void add(void)
{
	int no1,no2,c;
	printf("enter the 2 number:");
	scanf("%d %d",&no1,&no2);
	c=no1+no2;
	printf("\nvalue of ans%d",c);
}
int main()
{
	add();
	return 0;
}

