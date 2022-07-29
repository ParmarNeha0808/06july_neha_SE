#include<stdio.h>
int main()
{ 
     int a=30;
     int b=20;
     printf("before swap a=%d b=%d",a,b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("\n after swap a=%d b=%d",a,b);
     
}
