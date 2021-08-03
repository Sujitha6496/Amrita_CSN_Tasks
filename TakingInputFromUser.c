#include<stdio.h>

int main()
{
    int num;  
    float fraction;     
    char character;

    printf("\nEnter an integer number:");
    scanf("%d", &num);                                      					//Taking integer number as input
    printf("The number you entered is %d",num);             	//Displaying integer number

    printf("\nEnter a fraction number:");
    scanf("%f", &fraction);                                 					//Taking decimal number as input
    printf("The number you entered is %f",fraction);        	//Displaying decimal number
    
    printf("\nEnter a character:");
    scanf("%c", &character);                                					//Taking character as input
    printf("The number you entered is %c",character);       	//Displaying character
    
    return 0;
}