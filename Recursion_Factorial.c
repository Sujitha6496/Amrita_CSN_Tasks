#include<stdio.h>
int fact(int);

int main()
{
    int num, f;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    
	f= fact(num);
    printf("\nFactorial of  %d is  %d", num, f);
    return 0;
}

int fact(int aj)
{
    if(aj==1 || aj==0)
        return 1;
    else
        return (aj*fact(aj-1));
}