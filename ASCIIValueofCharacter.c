#include<stdio.h>

int main()
{
    char character;
    
    printf("\nEnter a character:");
    scanf("%c",&character);                                                    			 				//Taking character as input
    
    printf("\nASCII value of character %c is %d",character,character);          	//char value & equivalent integer value
    
    return 0;
}