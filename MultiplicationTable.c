#include<stdio.h>
int main()
{
    int n,i;

    printf("\nEnter a number: \n\n");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
    {
        printf("\n%d * %d   =   %d\n", n, i, n*i);
    }

    return 0;
}