#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, a[10][10], b[10][10], n, temp;
    
	printf("\nEnter dimension of matrix: ");
    scanf("%d", &n);

    printf("\nEnter %d elements of the matrix: \n\n",n*n);
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            b[j][i] = a[i][j];


    printf("\nThe original matrix is: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
    printf("\n");
    }

    printf("\nThe Transpose matrix is: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != b[i][j]) 
            {
                printf("\nMatrix is not Symmetric\n");
				exit(0);
            }
        }
    }

    printf("\n\nMatrix is Symmetric\n\n");
    return 0;
}