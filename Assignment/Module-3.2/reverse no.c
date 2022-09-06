#include<stdio.h>
int main()
{
	int n,no=0;
	printf("Enter the value:");
	scanf("%d",&n);
	
	while(n!=0)
	{
	no=no*10;
	no=no+n%10;
	n=n/10;
    }
	printf("no=%d\n",no);
	
	
}
