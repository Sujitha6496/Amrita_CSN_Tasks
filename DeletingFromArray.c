#include<stdio.h>
int main()
{
    int a[100], pos, i, n;
    printf("\nEnter number of elements in the array: ");
    scanf("%d", &n);

    printf("\nEnter %d elements\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nEnter the position where you want to delete the element from: ");
    scanf("%d", &pos);

    if(pos >= n+1)
        printf("\nDeletion not possible.");
    else 
        for(i = pos-1; i < n-1; i++)
        a[i] = a[i+1];

    printf("\nResultant array is: \n");
    for(i = 0; i < n-1; i++) 
        printf("%d\t", a[i]);

    return 0;
}