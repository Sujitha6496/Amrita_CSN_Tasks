#include<stdio.h>
int main()
{
    char vowel;
    printf("\nEnter a character:\t");
    scanf("%c", &vowel);

    switch(vowel)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("\n%c is a vowel",vowel);
            break;
        default:
            printf("\n%c is not a vowel",vowel);
    }
    return 0;
}