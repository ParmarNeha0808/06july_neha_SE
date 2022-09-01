#include<stdio.h>
int main()
{
	int no[3][3];
	int a,i;
	
	for(a = 0; a < 3; a++)
	{
		for(i = 0; i < 3; i++)
		{
			printf("no - [%d][%d]",a,i);
			scanf("%d",&no[a][i]);
		}
	}
	
	for(a = 0; a < 3; a++)
	{
		printf("\n");
		for(i = 0; i < 3; i++)
		{
			printf("%d\t",no[a][i]);
		}
			printf("\n");
	}
}
