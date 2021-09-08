#include <stdio.h>
int main()
{
    int n, i, *ptr, sum = 0;

    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    ptr = (int *) malloc(n*sizeof(int));

    if(ptr == NULL)
    {
        printf("\nError! Memory not allocated");
        return 0;
    }

    printf("\nEnter elements of array:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", ptr+i);    
        sum = sum + *(ptr + i);
    }

    printf("\nThe elements of the array are: ");
    for(i = 0; i < n; i++)
    {
        printf("%d  ",ptr[i]); 
    }

    free(ptr);

    return 0;
}