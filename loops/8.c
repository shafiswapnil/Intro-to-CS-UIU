#include <stdio.h>

int main()
{
  int input;
  int reversed = 0;

  printf("Input a number: \n");
  scanf("%d", &input);

  while (input != 0)
  {
    // formulas
    int digit = input % 10;
    reversed = reversed * 10 + digit;
    input /= 10;
  }

  printf("Reversed: %d\n", reversed);

  return 0;
}