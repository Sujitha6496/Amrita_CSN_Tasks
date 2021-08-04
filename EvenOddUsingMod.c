#include <stdio.h>

int main()
{
    int num;
    
    printf("\nEnter a number:\t");
    scanf("%d",&num);
    
    if((num%2)==0)                                                      					//If remainder is 0
        printf("\n%d is an even number",num);
    
    else
        printf("\n%d is an odd number",num);                            	//If remainder is not 0
    
    return 0;
}