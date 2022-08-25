#include<stdio.h>
int main()
{
	int i,a,sum=0;
	printf("Enter the number:\n");
	scanf("%d",&a);
	for(i=2;i<=a;i+=2)
	{
		sum+=i;
	}
	printf("sum of even no of 1 to %d:%d",a,sum);
}
