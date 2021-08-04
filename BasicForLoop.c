#include <stdio.h>

int main()
{
    int n,i;
    
    printf("\nEnter number of terms:\t");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("\n%d",i);
    }
    return 0;
}