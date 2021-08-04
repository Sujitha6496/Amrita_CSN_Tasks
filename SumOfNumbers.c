#include<stdio.h>

int main()
{
    int i,num,sum=0,x;
    
    printf("\nEnter number of terms:\t");
    scanf("%d",&num);
    
    printf("\nEnter the terms:\n");
    for(i=1;i<=num;i++)
    {
        scanf("%d",&x);
        sum=sum+x;
    }
    
    printf("\nSum of terms:\t%d",sum);
    return 0;
}