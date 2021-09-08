#include<stdio.h>

int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if(year%400 == 0)										// divisible by 4, 100 and 400
        printf("\n%d is a leap year", year);

    else if(year%100 == 0)									// divisible by 100 and 4 and not divisible by 400
        printf("\n%d is not a leap year", year);

    else if(year%4 == 0)									// divisible only by 4 and not by 100
    {   
        printf("\n%07d is a leap year", year); 
    }
    
    else													// not divisible by 4
        printf("\n%d is not a leap year", year);

    return 0;
}