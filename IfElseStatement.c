#include<stdio.h>

int main()
{
    int num;
    
    printf("\nEnter a number:\t");
    scanf("%d",&num);                                                           		//Taking integer number as input
    
    if(num==100)                                                                			//Checks if number is equal to 100
        printf("\nEntered number is 100");                                      
    
    else if (num<100)                                                           			//Checks if number is less than 100
        printf("\n%d is less than 100",num);
        
    else                                                                        					//Checks if number is greater than 100
        printf("\n%d is greater than 100",num);
}