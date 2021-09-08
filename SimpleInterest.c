#include<stdio.h>
void main()
{
    float p, r, si;
    int n;
    
	printf("Enter the value of principal amount, rate and time: ");
    scanf("%f%f%d", &p, &r, &n);

    si = (p*r*n)/100.0;

    // usually used to align text in form of columns in table
    printf("\nPrinciple Amount = Rs.%7.3f\n ", p);
    printf("\nRate = Rs.%7.3f\n ", r);
    printf("\nTime= %d years \n", n);
    printf("\nSimple Interest = Rs.%7.3f\n ", si);
}