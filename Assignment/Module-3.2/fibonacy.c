#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3=2,i;
	int no;
	
	printf("Enter the value:");
	scanf("%d",&no);
	printf("\n%d%d",n1,n2);
	
	for(i=2;i<no;i++)
	{
		n3=n1+n2;
		printf("%d",n3);
		n1=n2;
		n2=n3;
	}
}
