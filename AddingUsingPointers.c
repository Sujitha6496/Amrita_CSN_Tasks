#include<stdio.h>
int main()
{
    int first, second, *a , *b, sum;
    
	printf("\nEnter two integers:");
    scanf("%d%d", &first, &second);
	
    a = &first;
    b = &second;
    sum = *a + *b;
	
    printf("\nThe sum of the entered numbers is: %d", sum);
    return 0;
}