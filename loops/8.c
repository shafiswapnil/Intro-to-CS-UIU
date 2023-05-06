#include <stdio.h>

int main()
{
  int input, reversed = 0;

  printf("Input a number: \n");
  scanf("%d", &input);

  while (input != 0)
  {
    int digit = input % 10;
    reversed = reversed * 10 + digit;
    input /= 10;
  }

  printf("%d\n", reversed);

  return 0;
}