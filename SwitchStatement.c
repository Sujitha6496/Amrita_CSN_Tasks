#include<stdio.h>

int main()
{
    char grade;
    printf("\nEnter your grade:\t");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'A':
            printf("\nExcellent!");
            break;
        case 'B':
            printf("\nKeep it up!");
            break;
        case 'C':
            printf("\nWell done!");
            break;
        case 'D':
            printf("\nYou passed!");
            break;
        case 'E':
            printf("\nNeed to do better!");
            break;
        case 'F':
            printf("\nBetter luck next time!");
            break;
        default:
            printf("\nInvalid grade!");
    }
    printf("\nYour grade is %c\t",grade);
    return 0;
}