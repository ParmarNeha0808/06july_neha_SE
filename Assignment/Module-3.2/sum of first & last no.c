#include<stdio.h>
int main()
{
	int no,sum;
	printf("Enter any number:");
	scanf("%d",&no);
	sum=no%10;
	while(no>09)
	{
		no=no/10;
	}
	sum=sum+no;
	printf("sum of first and last no of %d",sum);
}
