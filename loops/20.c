#include <stdio.h>

int main()
{
  int input;
  printf("Enter nth value: \n");
  scanf("%d", &input);

  int sum = 0, power = 0;

  for (int i = 1; i <= input; i++)
  {
    power = power * 10 + i;
    sum = sum + power;
  }

  printf("%d", sum);

  return 0;
}
