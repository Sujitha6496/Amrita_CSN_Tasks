#include<stdio.h>
int main()
{    
    int i, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 0; i <= num; i++)
    {
        if(num == i*i)
        {
            printf("\n%d is a perfect square", num);           
            return 0;
        }
    }
    printf("\n\%d is not a perfect square", num);
    return 0;
}