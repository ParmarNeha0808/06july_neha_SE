#include<stdio.h>
int main()
{
	int days,weeks,year;
	
	printf("Enter the value of days:\n");
	scanf("%d",&days);
	
	year = (days/365);
	weeks = (days%365)/7;
	days = (days%365)%7;
	
	printf("year:%d\n",year);
	printf("weeks:%d\n",weeks);
	printf("days:%d",days);
}
