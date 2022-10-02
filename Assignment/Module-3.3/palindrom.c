#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	char b[20];
	
	printf("Enter the string:");
	scanf("%s",&a);
	
	strcpy(b,a);
	strrev(b);
	
	if(strcmp(b,a) == 0)
	{
		printf("%s is palindrom:\n",a);
	}
	else
	{
		printf("%s is not palindrom:",a);
	}
}
