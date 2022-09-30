#include <stdio.h>
int main()
{
  int array[100], size, c, i = 0;

  printf("Enter the value:");
  scanf("%d", &size);

  printf("Enter %d numbers\n", size);

  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);

  for (c = 1; c < size; c++)
    if (array[c] > array[i])
     i = c;

  printf("Maximum number is %d and  %d.\n", i+1, array[i]);
  return 0;
}
