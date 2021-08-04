#include<stdio.h>

int main()
{
	int n,sum=0,rem,temp;
    printf("\nEnter a number:\t");
    scanf("%d",&n);
    temp=n;

	while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("\nSum of digits of number %d is %d",temp,sum);
    return 0;
}