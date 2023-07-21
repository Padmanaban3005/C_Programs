#include <stdio.h>
int main()
{
  int n, i, j, position, temp;

  printf("Enter number of elements\n");
  scanf("%d", &n);
  int array[n];
  printf("Enter %d integers\n", n);

  for (i=0;i<n;i++)
    scanf("%d", &array[i]);

  for (i=0;i<(n-1);i++)
  {
    position=i;

    for (j=i+1;j<n;j++)
    {
      if (array[position] > array[j])
        position=j;
    }
    if (position!=i)
    {
      temp = array[i];
      array[i] = array[position];
      array[position] = temp;
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i=0;i<n;i++)
    printf("%d\n", array[i]);

  return 0;
}
