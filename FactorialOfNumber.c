#include <stdio.h>

int main()
{
    int i,n,fact;
    fact=1;
    
    printf("\nEnter a number:\t");
    scanf("%d",&n);
    
    if(n==0||n==1)																//Factorial of 0 and 1 is 1
        printf("\nFactorial of %d is 1",n);
    else																					//For rest of the numbers
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("\nFactorial of %d is %d",n,fact);
    }
    return 0;
}