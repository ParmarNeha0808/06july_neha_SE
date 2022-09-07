#include<stdio.h>
int main()
{
	int no,add,sum;
	printf("Enter any number:");
	scanf("%d",&no);
	while(no>1)
	{
		add=no%10;
		sum=sum+add;
		no=no/10;
	}
	printf("sum of all number is %d",sum);
}
