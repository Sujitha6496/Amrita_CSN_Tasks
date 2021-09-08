#include<stdio.h>

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int main()
{
    int a, b;
    printf("\nEnter 2 numbers: ");
    scanf("%d%d", &a, &b);
	
    printf("\nGCD is: %d", gcd(a, b));
    return 0;
}