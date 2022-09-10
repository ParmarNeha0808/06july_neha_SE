int main()
{
    int i,j;
    int space;
    printf("Enter the number:");
    scanf("%d",&space);
    
    for(i=0;i<space;i++)
    {
	   
	    for(j=0;j< space;j++)
	    {
		    printf(" ");
	    }
	    for(j=0;j<=i;j++)
	    {
		    printf("* ");
	    }
		
	    printf("\n");
	    space--;
    }
    return 0;
}
