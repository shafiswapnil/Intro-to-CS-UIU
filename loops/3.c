#include <stdio.h>

int main()
{
  int input;

  printf("Enter nth term\n");
  scanf("%d", &input);

  for (int i = 1; i <= input; i++)
  {
    int series;

    for (int helper = 1; helper <= i; helper++)
    {
      series = helper % 2;
    }

    printf("%d, ", series);
  }

  return 0;
}