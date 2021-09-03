#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *fptr;
    char name[20];
    int age;
    float salary;

    fptr = fopen("Employee.txt","w");							

    if (fptr==NULL)
    {
        printf("\nFile does not exist");
        return;
    }
	
    printf("\nEnter the name: ");
    scanf("%s", name);
    fprintf(fptr, "Name  = %s\n", name);

    printf("\nEnter the age: ");
    scanf("%d", &age);
    fprintf(fptr, "Age  = %d\n", age);

    printf("\nEnter the salary: ");
    scanf("%f", &salary);
    fprintf(fptr, "Salary  = %.2f\n", salary);

    fclose(fptr);
}