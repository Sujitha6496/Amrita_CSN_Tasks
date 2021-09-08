#include <stdio.h>
const int MAX = 5;  

int main()
{
    int var[]={1, 2, 3, 4, 5};
    int i = 0;

    int *ptr[MAX];

    for(i = 0; i < MAX; i++)
    {
        ptr[i] = &var[i];
    }

    for(i = 0; i < MAX; i++)
    {
        printf("Value of var[%d] = %i\n\n", i, *ptr[i]);
    }

    return 0;
}