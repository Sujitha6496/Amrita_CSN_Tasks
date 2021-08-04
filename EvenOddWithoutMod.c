#include <stdio.h>

int main()
{
    int num;
    
    printf("\nEnter a number:\t");
    scanf("%d",&num);
    
    if(((num/2)*2)==num)                                                
        printf("\n%d is an even number",num);
    
    else
        printf("\n%d is an odd number",num);
    
    return 0;
}