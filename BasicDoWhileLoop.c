#include <stdio.h>

int main()
{
    int n,i;
    
    printf("\nEnter number of terms:\t");
    scanf("%d",&n);
    
    i=1;
    do
    {
        printf("\n%d",i);
        i++;
    }
    while(i<=n);
    return 0;
}