#include<stdio.h>
#include<math.h>
int btod(int n); 

int main()
{
    int n;
    char c;
    printf("\nEnter the binary number: ");
    scanf("%d", &n);
	
    printf("\nThe decimal equivalent of %d is  %d",n, btod(n));
    return 0;
}

int btod(int n)
{
    int dec = 0, i = 0, rem;
    while(n != 0)
    {
        rem = n%10;
        n = n/10;
        dec = dec + rem*pow(2, i++);
    }
	
    return dec; 
}