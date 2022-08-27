#include<stdio.h>
int main()
{
	int a,perimeter,apothem;
	
	printf("value of perimeter:\n");
	scanf("%d",&perimeter);
	
	printf("value of apothem:\n");
	scanf("%d",&apothem);
	
	a=perimeter/2*apothem;
	printf("value of a is %d",a);
}
