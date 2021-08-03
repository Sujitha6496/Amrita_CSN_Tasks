#include<stdio.h>
#include<ctype.h>
int main()
{
    int a,b;
    
    printf("\nEnter two numbers to be swapped:\n");
    scanf("%d%d",&a,&b);
    
    a = a*b;
    b = a/b;
    a = a/b;	
    
    printf("\nThe swapped numbers are:\t%d\t%d",a,b);
    
    return 0;
}