#include<stdio.h>
int main()
{
	int i,j,no=5;
	for(i=1;i<=no;i++)
	{
		for(j=0;j>=1;j--)
		printf("%d",'A'+j-1);
	}
	printf("\n");
}
