#include <stdio.h>

int remove_duplicate(int a[], int n)
{
  if (n == 0 || n == 1)
    return n;

  int temp[n];
  int j = 0;
  int i;
  for (i = 0; i < n - 1; i++)
    if (a[i] != a[i + 1])
      temp[j++] = a[i];
  temp[j++] = a[n - 1];

  for (i = 0; i < j; i++)
    a[i] = temp[i];

  return j;
}

int main()
{
  int n;
  printf("\nEnter number of elements: ");
  scanf("%d", &n);
  
  int a[n];
  int i;
  
  printf("\nEnter %d sorted elements: \n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  
  printf("\nArray Before Removing Duplicates: ");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);

  n = remove_duplicate(a, n);

  printf("\nArray After Removing Duplicates: ");
  for (i = 0; i < n; i++)
    printf("%d ", a[i]);

  return 0;
}