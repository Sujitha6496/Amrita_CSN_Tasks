#include<stdio.h>
int getSum(int);

int main()
{
    int n, sum;
    printf("\nEnter the range of n: ");
    scanf("%d", &n);
    
	sum = getSum(n);
    printf("\n\nThe sum of first %d numbers is %d\n", n, sum);
    return 0;
}

int getSum(int aj)
{
    static int sum = 0;
    if(aj > 0)
    {
        sum = sum + aj;
        getSum(aj-1);
    }
    return sum ;
}