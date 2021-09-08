#include<stdio.h>
int main()
{
    int n,i;
    float c,big;

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    
	printf("\n\nEnter %d numbers :\n", n);
    scanf("%f", &big);

    for(i = 2; i <= n; i++)
    {
        scanf("%f", &c);

        if(big < c)  
            big = c;
    }
	
    printf("\n\n\nThe largest of the %d numbers is  %f ", n, big);
    return 0;
}