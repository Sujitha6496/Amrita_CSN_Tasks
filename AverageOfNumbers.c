#include <stdio.h>

int main()
{
    int n,i,x;
    float sum=0.0,avg=0.0;
    
    printf("\nEnter the number of terms:\t");
    scanf("%d",&n);
    
    printf("\nEnter the terms:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        sum=sum+x;
    }
    
    avg=sum/n;
    printf("\nThe average of entered numbers is %f",avg);
    return 0;
}