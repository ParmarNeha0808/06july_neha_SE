#include<stdio.h>
void main()
{
	int i;
	printf("1.monday,2.tuesday,3.wednsday,4.thusday,5.friday,6.saturday,7.sunday");
	printf("\nEnter the number:");
	scanf("%d",& i);
	printf("Enter the i is : %d",i);
	
	switch(i)
	
	{
		case 1:
			printf("monday");
			break;
		case 2:
		     printf("tuesday");
			 break;
		case 3:
		     printf("wednsday");
			 break;
		case 4:
			 printf("thusday");
			 break;
		case 5:
			 printf("friday");
			 break;
		case 6:
			 printf("satyrday");
			 break;
		case 7:
			 printf("sunday");
			 break; 
			 
		default:
		      printf("please Enter the valid number");	 	 	
	}
}
