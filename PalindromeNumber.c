#include<stdio.h>

int main()
{
    int n,temp1,temp2,p=0;
    printf("\nEnter a number:\t");
    scanf("%d",&n);
    temp2=n;

   while(n>0)
   {
      temp1 = n%10;
      p = (p*10)+temp1;
      n = n/10;
   }

   if(p==temp2)
   {
      printf("\nThe number %d is a palindrome",temp2);
   }
   else
   {
      printf("\nThe number %d is not a palindrome",temp2);
   }
  
    return 0;
}