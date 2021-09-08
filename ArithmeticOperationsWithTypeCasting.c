#include<stdio.h>
int main()
{
    int a, b, add, subtract, multiply;
    float divide;

    printf("\nEnter two integers: ");
    scanf("%d%d", &a, &b);

    add = a+b;
    subtract = a-b;
    multiply = a*b;
    divide = a/(float)b;													//type casting

    printf("\nAddition of the numbers = %d", add);
    printf("\nSubtraction of 2nd number from 1st = %d", subtract);
    printf("\nMultiplication of the numbers = %d", multiply);
    printf("\nDividing 1st number from 2nd = %f", divide);
    
    return 0;
}