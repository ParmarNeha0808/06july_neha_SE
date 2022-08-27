#include<stdio.h>
int main()
{
	int principal,rate,time,si;
	
	printf("value of principal:\n");
	scanf("%d",&principal);
	
	printf("value of rate:\n");
	scanf("%d",&rate);
	
	printf("value of time:\n");
	scanf("%d",&time);
	
	si= principal*rate*time/100;
	printf("value of si is %d:",si);
}
