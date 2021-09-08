#include<stdio.h>
int main()
{
    int a[100], pos, i, n, val;
    printf("\nEnter number of elements in array:	");
    scanf("%d", &n);

    printf("\nEnter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nEnter the position where you want to insert the new element:  ");
    scanf("%d", &pos);

    printf("\nEnter the value to be inserted: ");
    scanf("%d", &val);

    for(i = n-1; i >= pos-1; i--)
        a[i+1] = a[i];

    a[pos - 1] = val;

    printf("\nResultant array is: \n");
	
    for(i = 0; i <= n; i++) 
        printf("%d\t", a[i]);

    return 0;
}