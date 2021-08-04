#include<stdio.h>
#include<conio.h>

void fib(int n);													//Declaring function
void main()
{
    int n=0;
    printf("\nEnter number of terms:\t");
    scanf("%d",&n);
    fib(n);															//Calling function
    getch();
}

void fib(int n)													//Function definition
{
   int a=0,b=1,c,i=3;
   
   if(n==1)
        printf("%d",a);

   if(n>=2)
        printf("%d\t%d",a,b);

   while(i<=n)
   {
      c = a+b;
      printf("\t%d",c);
      a = b;
      b = c;
      i++;
   }
}