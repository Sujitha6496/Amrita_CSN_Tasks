#include<stdio.h>
int main()
{
    float cel, fah;
    printf("\nEnter temperature in Celsius: ");
    scanf("%f", &cel);
    
    fah = (1.8*cel) + 32;
    
    printf("\nTemperature in Fahrenheit is: %f ", fah);
    return 0;
}