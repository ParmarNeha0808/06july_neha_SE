#include<stdio.h>
int main()
{
	int principle,rate,time,si;
	
	
	printf("enter the value :");
	scanf("%d",&principle);
	
	printf("enter the value:");
	scanf("%d",&rate);
	
	printf("enter the value:");
	scanf("%d",&time);
	si=principle*rate*time/100;
	
	
	printf("si = %d",si);
}
