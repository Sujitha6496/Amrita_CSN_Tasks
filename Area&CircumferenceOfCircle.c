#include<stdio.h>
int main()
{
    int rad;
    float pi = 3.14, area, circum;
	
    printf("\nEnter the radius of the circle: ");
    scanf("%d", &rad);
    
	area = pi*rad*rad;
    printf("\nArea of the circle is: %f ", area);
    
	circum = 2*pi*rad;
    printf("\nCircumference of the circle is: %f", circum);
    
    return 0;
}