#include<stdio.h>
#include<math.h>
int otod(int n); 

int main()
{
    int n;
    char c;
    printf("\nEnter the octal number: ");
    scanf("%d", &n);
	
    printf("\nThe decimal equivalent of %d is  %d",n, otod(n));
    return 0;
}

int otod(int n)
{
    int dec = 0, i = 0, rem;
    while(n != 0)
    {
        rem = n%10;
        n = n/10;
        dec = dec + rem*pow(8, i++);
    }
	
    return dec; 
}