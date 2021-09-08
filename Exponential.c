#include<stdio.h>
int main()
{

    int n, exp, temp, value = 1;

    printf("\nEnter the number and its exponential: ");
    scanf("%d%d",&n, &exp);

    temp = exp;

    while(exp-- > 0)
    {
        value = value * n;
    }

    printf("\n%d^%d = %d\n", n, temp, value);
    return 0;
}