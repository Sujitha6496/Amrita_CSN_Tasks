#include <stdio.h>
int main()
{
    int n, m, i, j, a[10][10], b[10][10], sum[10][10], diff[10][10];
    
	printf("\nEnter the number of rows and columns of the first matrix: \n");
    scanf("%d%d", &m, &n);

    printf("\nEnter %d elements of the first matrix: \n\n", m*n);
    for(i = 0; i < m; i++)   
        for(j = 0; j < n; j++)  
            scanf("%d", &a[i][j]);

    printf("\nEnter %d elements of the second matrix: \n", m*n);
    for(i = 0; i < m; i++)   
        for(j = 0; j < n; j++)  
            scanf("%d", &b[i][j]);

    printf("\nThe first matrix is: \n");
    for(i = 0; i < m; i++)   
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
    printf("\n");
    }

    printf("\nThe second matrix is: \n");
    for(i = 0; i < m; i++)   
    {
        for(j = 0; j < n; j++)   
        {
            printf("%d\t", b[i][j]);
        }
    printf("\n");
    }


    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("\nThe sum of the two entered matrices is: \n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            diff[i][j] = a[i][j] - b[i][j];

    printf("\nThe difference of the two entered matrices is: \n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}