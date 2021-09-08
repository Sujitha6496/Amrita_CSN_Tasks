#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char number[10];
    int flag = 0, length, i = 0;

    printf("\nEnter a number: ");
    scanf("%s", number);

    length = strlen(number);
	
    while(number[i++] != '\0')
    {
        if(number[i] == '.')
        {
            flag = 1;
            break;
        }
    }

    if(flag)
        printf("\nEntered number is a floating point number");
    else
        printf("\nEntered number is a integer number");

    return 0;
}