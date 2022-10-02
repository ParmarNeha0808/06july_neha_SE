#include <stdio.h>
struct employee
{
    char name[30];
    int  Id;
    int age;
    
}emp;
 
int main()
{
    int a;
    struct employee emp;
     
    for(a=0;a<=5;a++)
    {	
   	printf("\nEnter details :\n",a+1);
    printf("Name:",a+1);         
	scanf("%s",&emp.name);

    printf("ID:");            
	scanf("%d",&emp.Id);
    printf("age:");       
    scanf("%d",&emp.age); 	
	}
	for(a=0;a<=5;a++)
	{	
    	printf("\nEntered detail is:",a+1);
    	printf("Name: %s\n",emp.name);
    	printf("Id: %d\n",emp.Id);
    	printf("Salary: %d\n",emp.age);
   		return 0;	
		
	}
    
   
}

