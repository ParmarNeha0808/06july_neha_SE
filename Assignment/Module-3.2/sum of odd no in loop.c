#include <stdio.h>
int main(){
    int i,num, sum = 0;
    
    printf("Enter the maximum value: ");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++ )
	{
        if (i % 2 != 0)
		{
            printf("%d\n", i);
            sum = sum + i;
        }
    }
    printf("The Sum of Odd Numbers From 0 To %d is %d.", num, sum);
    return 0;
}
