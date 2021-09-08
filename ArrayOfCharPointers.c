#include <stdio.h>
const int MAX = 4;

int main()
{
    char *names[] = {"A", "B", "C", "D"};
    int i = 0;

    for(i = 0; i < MAX; i++)
    {
        printf("Value of names[%d] = %s\n\n", i, names[i]);
    }

    return 0;
}