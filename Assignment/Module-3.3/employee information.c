#include <stdio.h>
struct employee
{
    char name[30];
    int  Id;
    float salary;
};
 
int main()
{
   
    struct employee emp;
     
    
    printf("\nEnter details :\n");
    printf("Name :");         
	 scanf("%d",&emp.name);
    printf("ID :");            
	scanf("%d",&emp.Id);
    printf("Salary :");       
     scanf("%f",&emp.salary);
     
   
    printf("\nEntered detail is:");
    printf("Name: %s\n",emp.name);
    printf("Id: %d\n",emp.Id);
    printf("Salary: %f\n",emp.salary);
    return 0;
}

