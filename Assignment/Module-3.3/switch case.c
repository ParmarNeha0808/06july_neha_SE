#include<stdio.h>
int main()
{
	int a,b;
	char choice;
	printf("Enter your choice:");
	printf("A.add\n. B.sub\n. C.div\n D.mul\n :");
	scanf("%c",&choice);
	printf("Enter number\n:");
	scanf("%d %d",&a,&b);
	
	switch(choice)
	{
		case 'A':
		printf("%d + %d = %d",a,b,(a+b));
		break;
		
		case 'B':
		printf("%d - %d = %d",a,b,(a-b));
		break;
		
		case 'C':
		printf("%d / %d = %d",a,b,(a/b));
		break;
		
		case 'D':
		printf("%d * %d = %d",a,b,(a*b));
		break;
		
		default:
		printf("you entered wrong choice\n:");
		break;
	}
}
