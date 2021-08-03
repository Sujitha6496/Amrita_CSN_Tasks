#include<stdio.h>

int main()
{
    char name[50];                                                              //character array of size 50
    
    printf("\nEnter your full name:\t");
    gets(name);                                                                  //Taking string as input
    
    printf("\nFull Name:\t%s",name);
    printf("\nWelcome\t%s!!!",name);
    
    return 0;
}