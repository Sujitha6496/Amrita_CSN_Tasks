#include<stdio.h>
int main()
{
    int choice, num, i,fact;
    
    while(1)
    {
        printf("1. Factorial \n");
        printf("2. Prime\n");
        printf("3. Odd\\Even\n");
        printf("4. Exit\n\n\n");
        printf("Enter your choice:  ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
                printf("Enter number:\n");
                scanf("%d", &num);
                fact = 1;
                for(i = 1; i <= num; i++)
                {
                    fact = fact*i;
                }
                printf("\nFactorial value of %d is = %d\n",num,fact);
                break;
        
            case 2:
                printf("Enter number:\n");
                scanf("%d", &num);
                if(num == 1)
                printf("\n1 is neither prime nor composite\n");
                for(i = 2; i < num; i++)
                {
                    if(num%i == 0)
                    {
                        printf("\n%d is not a prime number\n", num);
                        break;
                    }
                
                }
                
                if(i == num) 
                {
                    printf("\n%d is a Prime number\n", num);
                    break;
                }
        
            case 3:
                printf("Enter number:\n");
                scanf("%d", &num);
        
                if(num%2 == 0) 
                    printf("\n%d is an Even number\n",num);
                else
                    printf("\n%d is an Odd number\n",num);
                break;
        
            case 4:
                printf("\n***End***");
                exit(0);
        }
    }
   
    return 0;
}