#include<stdio.h>
int a,b;

int main()
{
    printf("\nEnter two numbers:\t");
    scanf("%d%d",&a,&b);

    if(a==b)                                                                    //Checking if numbers are equal
        printf("\nBoth numbers are equal");
        
    else if(a<b)                                                                
    {
        printf("\nThe largest number is %d",b);
        printf("\nThe smallest number is %d",a);
    }
    else
    {
        printf("The largest number is %d",a);
        printf("The smallest number is %d",b);
    }
    return 0;
}