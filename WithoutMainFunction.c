#include<stdio.h>

#define decode(m,a,i,n) m##a##i##n
#define go decode(m,a,i,n)

int go()
{
    printf("\nThis is a test program without main() function");
    printf("\nMy name is Sujitha Sudevan");
    
    return 0;
}