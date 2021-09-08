#include <stdio.h>
int main()
{
    int var;
    int *ptr;
    int **pptr;

    var = 10;

    ptr = &var;

    pptr = &ptr;

    printf("\nValue of var = %d", var);
    printf("\nValue available at *ptr = %d", *ptr);
    printf("\nValue available at **pptr = %d", **pptr);
    
	return 0;
}