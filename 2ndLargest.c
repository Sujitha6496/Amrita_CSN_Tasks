#include<stdio.h>

int main()
{
    double a, b, c;
    printf("Enter 3 numbers:\n");
    scanf("%lf%lf%lf", &a, &b, &c);

    if(a >= b && a >= c)													//a is larger than b and c
    {
        if(b >= c)															//and b is larger than c
        {
            printf("\n\n%.2lf is the 2nd largest number\n", b);
        }
        else
        {
            printf("\n\n%.2lf is the 2nd largest number\n", c);				//or c is larger than b
        }
    }
	
    else if(b >= a && b >= c)												//b is larger than a and c
    {
        if(a >= c)															//and a is larger than c
        {
            printf("\n\n%.2lf is the 2nd largest number\n",a);
        }
        else																//or c is larger than b
        {
            printf("\n\n%.2lf is the 2nd largest number\n",c);
        }
    }

    else if(a >= b)
    {
        printf("\n\n%.2lf is the 2nd largest number\n", a);
    }
    
    else
    {
        printf("\n\n%.2lf is the 2nd largest number\n", b);
    }

    return 0;
}