#include<stdio.h>
int main()
{
    int n, sum = 0, i, a[50];

    printf("Enter the number of integers you want to add: ");
    scanf("%d", &n);

    printf("\nEnter %d integers: \n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("\nSum = %d", sum);
    return 0;
}