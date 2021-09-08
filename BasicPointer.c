#include <stdio.h>
int main()
{
    int var = 50;
    int *p;

    p = &var;
	
    printf("\nAddress of var variable is: %d", &var);
    printf("\nAddress stored in pointer variable p is: %d", p);
    printf("\nValue of var variable or the value stored at address p is  %d", *p);

    return 0;
}