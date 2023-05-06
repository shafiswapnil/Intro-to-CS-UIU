#include <stdio.h>
int main()
{
  int input;
  unsigned long long factorial = 1;

  printf("Enter a positive integer: \n");
  scanf("%d", &input);

  if (input < 0)
  {
    printf("Factorial of a negative number doesn't exist");
  }
  else
  {
    // BROADER SOLUTION ACCORDING TO SAMPLE OUTPUT
    for (int i = 1; i <= input; ++i)
    {
      factorial *= i;
    }
    printf("%d! = %d ", input, input);

    for (int i = input - 1; i >= 0; i--)
    {
      if (i == 0)
      {
        break;
      }
      printf("x %d ", i);
    }

    printf("= %llu", factorial);
  }

  // SINGLE SOLUTION
  /*
  for (int i = 1; i <= input; i++)
  {
    factorial *= i;
  }
  printf("%d! = %llu\n", input, factorial);
  */

  return 0;
}