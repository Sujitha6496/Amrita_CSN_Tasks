#include<stdio.h>
int main()
{
    int n,i,k;
    printf("\nEnter an integer in decimal number system: ");
    scanf("%d", &n);
    
    printf("\nThe binary equivalent of decimal value %d is:", n);
    
    for(i = 31; i >= 0; i--)
    {
        k = n>>i;
        if(k&1)
            printf("1");
        else
            printf("0");
    }
    printf("\t");
    return 0;
}