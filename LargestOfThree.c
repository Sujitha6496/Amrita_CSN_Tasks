#include<stdio.h>
int main()
{
    float a, b, c;
    printf("\nEnter 3 numbers: ");
    scanf("%f%f%f", &a, &b, &c);

    if(a >= b && a >= c)									//a is larger than b and c
    {
        printf("\nLargest number = %.3f ", a);
    }
	
    else if(b >= a && b >= c)								//b is greater than a and c
    {
        printf("\n\nLargest number is = %.3f", b);
    }
	
    else													//remaining condition
    {
        printf("\n\nLargest number is = %.3f", c);
    }
	
    return 0;
}