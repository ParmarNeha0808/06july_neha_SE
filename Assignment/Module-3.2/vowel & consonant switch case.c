#include<stdio.h>
int main()
{
	char id;
	printf("enter the cheacter:");
	scanf("%c",&id);
	
	switch(id)
	{
	
	  case 'a':
	  case 'e':
	  case  'i':
	  case  'o':
	  case  'u':
	  case  'A':
	  case  'E':
	  case  'I':
	  case  'O':
	  case  'U':
	  printf("vowel");
	   break; 
	   
	   
	   default :
	   printf("consonant");
    }
}
