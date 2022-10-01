#include<stdio.h>
int main()
{
	int no[3][3],np[3][3];
	int a,i,sum=0;
	
	printf("------ matrix:1--------\n");
	
	
	for(a = 0; a < 2; a++)
	{
		for(i = 0; i < 2; i++)
		{
			printf("no - [%d][%d]",i,a);
			scanf("%d",&no[i][a]);
		}
	}
	
	for(a = 0; a < 2; a++)
	{
		printf("\n");
		for(i = 0; i < 2; i++)
		{
			printf("%d\t",no[a][i]);
		}
			printf("\n");
	}

	printf("------ matrix:2--------\n");
	
	
	for(a = 0; a < 2; a++)
	{
		for(i = 0; i < 2; i++)
		{
			printf("no - [%d][%d]",i,a);
			scanf("%d",&np[i][a]);
		}
	}
	
	for(a = 0; a < 2; a++)
	{
		printf("\n");
		for(i = 0; i < 2; i++)
		{
			printf("%d\t",np[a][i]);
		}
			printf("\n");
	}
	

	printf("-----Result:Multiplication Matrix------\n");
//	for(a=0;a<2;a++)
//	{
//		for(i=0;i<2;i++)
//		{
//			sum=a*i;
//			printf("no-[%d][%d] ",a,i);
//			scanf("%d",&no[a][i]);
//		
//		}
//	}
	for(a=0;a<2;a++)
	{
		for(i=0;i<2;i++)
		{
			printf("%d \t",no[a][i]*np[a][i]);
		}
		printf("\n");
	}
	
}

