#include<stdio.h>
int main()
{
	int row,col,i,j;
	int a[20][20];
	int b[20][20];
	int sum[20][20];
	printf("Enter the number:");
	scanf("%d",&row);
	printf("Enter the number:");
	scanf("%d",&col);
	
	printf("Enter the first matrix:\n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("Enter the element:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter the second matrix:\n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("Enter the element:",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			sum[i][j] = a[i][j] * b[i][j];
		}
	}
	
	printf("Enter the 2 matrix:\n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("%d",sum[i][j]);
			if(j == col - 1);
			printf("\n\n");
		}
	}
	
	
}
