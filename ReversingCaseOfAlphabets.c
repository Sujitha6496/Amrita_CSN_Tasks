#include<stdio.h>
#include<ctype.h>
int main()
{
    char alphabet;
    printf("Enter an alphabet:\t");
    alphabet=getchar();

    printf("\nReverse case of %c is:\t",alphabet);
    
    if(islower(alphabet))                                                       			//If entered alphabet is in lowercase
        putchar(toupper(alphabet));                                             	//Convert lowercase to uppercase

    else                                                                        					//If entered alphabet is in uppercase
        putchar(tolower(alphabet));                                             	//Convert uppercase to lowercase

    return 0;
}