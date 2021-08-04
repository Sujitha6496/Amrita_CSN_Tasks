#include<stdio.h>

int main()
{
    int num;
    
    printf("\nEnter a number:\t");
    scanf("%d",&num);
    
    if(num&1)
        printf("\n%d is an odd number",num);
    else if(!(num&1))
        printf("\n%d is an even number",num);
    
    return 0;
}