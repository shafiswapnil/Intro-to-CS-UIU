// WAP that will determine whether a number is prime or not.
#include <stdio.h>

int main()
{
  int input, status = 0;
  int i; // increment variable

  printf("Enter a positive integer: ");
  scanf("%d", &input);

  // 1 is not a prime number; return 0
  if (input == 1)
  {
    printf("Not prime\n");
    return 0;
  }

  // logic
  for (i = 2; i <= input / 2; ++i)
  {
    if (input % i == 0)
    {
      status = 1;
      break;
    }
  }

  if (status == 0)
  {
    printf("Prime\n");
  }
  else
  {
    printf("Not prime\n");
  }

  return 0;
}
