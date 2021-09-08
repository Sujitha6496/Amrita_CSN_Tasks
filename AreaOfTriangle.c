#include<stdio.h>
int main()
{
    int h, b;
    float area;
    
	printf("\nEnter the base & height of the triangle: ");
    scanf("%d%d", &b, &h);
   
    area = (h*b)/(float)2;
    printf("\nThe area of the triangle is: %f", area);

    return 0;
}