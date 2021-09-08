#include <stdio.h>

int func(int a, int b)
{
    printf("\n a = %d \n", a);
    printf("\n b = %d \n", b);
}

int main()
{
    int(*fptr)(int , int);

    fptr = func;

    func(6,4);
    fptr(11,1);

    return 0;
}