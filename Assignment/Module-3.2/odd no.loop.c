#include<stdio.h>
int main()
{
	int i;
	printf("odd number of 1 to 50:\n");
	for(i=1;i<=50;i++)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
	}
}
