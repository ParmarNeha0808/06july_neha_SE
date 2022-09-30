#include<stdio.h>
int main()
{
	int len;
	char str[20];
	
	printf("Enetr the string:");
	scanf("%d",&str);
	
	while(str[len] != 0)
	{
		len++;
	}
	
	printf("string lenght is: %d",len);
}
