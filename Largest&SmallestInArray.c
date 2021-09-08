#include<stdio.h>
int main()
{
    int a[50], n, i, big, small;

    printf("\nEnter number of elements in the array: ");
    scanf("%d", &n);

    printf("\nEnter the %d elements of the array:\n", n);
    for(i = 0; i < n; i++)
		scanf("%d", &a[i]);

    big = a[0];

    for(i = 1; i < n; i++)
    {
        if(big < a[i])
        {
            big = a[i];
        }
    }
    printf("\nThe largest element is: %d", big);

    small = a[0];
    
    for(i = 1; i < n; i++)
    {
        if(small>a[i])
        {
            small = a[i];
        }
    }
    printf("\n\nThe smallest element is: %d", small);
	
    return 0;
}