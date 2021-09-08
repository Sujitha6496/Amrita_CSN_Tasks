#include <stdio.h>
int main()
{
   
    int a, b;
    int *c, *d;
    int temp;

    printf("\nEnter value for a: ");
    scanf("%d", &a);

    printf("\nEnter value for b: ");
    scanf("%d", &b);

    printf("\nThe values before swapping are: a = %d     b = %d", a, b);

    c =&a;    
    d = &b;  

    temp = *c;   
    *c = *d;  
    *d = temp;   

    printf("\nThe values after swapping are: a = %d    b = %d", a, b);

    return 0;

}