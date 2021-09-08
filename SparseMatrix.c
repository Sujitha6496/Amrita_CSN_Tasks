#include<stdio.h>
int main()
{
    int n, m, i, j, a[10][10], counter = 0;
    
    printf("\nEnter the number of rows and columns of the matrix: \n");
    scanf("%d%d",&m,&n);

    printf("\nEnter %d elements of the matrix \n\n", m*n);
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j] == 0)
				counter++;
        }
    }

    printf("\nThe entered matrix is: \n\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
		printf("\n");
    }

    if(counter > (m*n)/2)
        printf("\nThe entered matrix is a sparse matrix.");
    else
        printf("\nThe entered matrix is not a sparse matrix.");

    return 0;
}