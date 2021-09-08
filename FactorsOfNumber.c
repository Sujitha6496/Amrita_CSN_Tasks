#include<stdio.h>
int main()
{
    int  num, i;
    printf("Enter the number:  ");
    scanf("%d",&num);
	
    printf("\n\n\nFactors of %d are: ", num);

    for(i = 1; i <= num; i++)
    {
        if(num%i == 0)
            printf("\t%d\t", i);
    }
	
    return 0;
}