#include<stdio.h>
int find_gcd(int , int );

int main()
{
    int a, b, gcd;
    printf("\nEnter two numbers to find GCD of: ");
    scanf("%d%d", &a, &b);
    
	gcd = find_gcd(a, b);
    
	printf("\nGCD of %d and %d is: %d", a, b, gcd);
    return 0;
}

int find_gcd(int x, int y)
{
    if(x > y)
        find_gcd(x-y, y);

    else if(y > x)
        find_gcd(x, y-x);
    else
		return x;
}