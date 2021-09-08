#include <stdio.h>
int main()
{
  int n, count = 0;
  
  printf("\nEnter number of elements: ");
  scanf("%d", &n);
  
  int a[n], temp[n];
  
  printf("\nEnter %d elements: \n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  printf("\nArray Before Removing Duplicates: ");
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);

  for (int i = 0; i < n; i++)
  {
    int j;
    for (j = 0; j < count; j++)
    {
      if (a[i] == temp[j])
        break;
    }
    if (j == count)
    {
      temp[count] = a[i];
      count++;
    }
  }

  printf("\nArray After  Removing Duplicates: ");
  for (int i = 0; i < count; i++)
    printf("%d ", temp[i]);

  return 0;
}