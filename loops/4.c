#include <stdio.h>

int main()
{
  int count;
  float total, single;

  printf("Enter count\n");
  scanf("%d", &count);

  printf("Enter upto %d numbers\n", count);
  for (int i = 1; i <= count; i++)
  {
    scanf("%f", &single);
    total += single;
  }

  float average = total / count;

  printf("AVG of %d inputs: %f\n", count, average);

  return 0;
}