#include<stdio.h>
#include<ctype.h>
int main()
{
    int temp,a,b;
    
    printf("\nEnter two numbers to be swapped:\n");
    scanf("%d%d",&a,&b);
    
    temp=a;																											//Storing value of a in temp variable
    a=b;																													//Storing value of b in a
    b=temp;																											//Storing value of temp in b
    
    printf("\nThe swapped numbers are:\t%d\t%d",a,b);
    
    return 0;
}