#include<stdio.h>
int main()
{
	int i,no;
	int fecto=1;
	printf("Enter the value:");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		fecto=fecto*i;
	}
	   printf("fectorial of %d is %d",no,fecto);
}
