// Write a program (WAP) that will find xy (x to the power y) where x, y are positive integers.

#include <stdio.h>

int main()
{
  int x, y;
  long long power = 1;
  int i;

  printf("Enter the value of x \n");
  scanf("%d", &x);

  printf("Enter the value of y \n");
  scanf("%d", &y);

  // calculate power
  for (i = 1; i <= y; i++)
  {
    // power *= x;
    power = power * x;
  }

  printf("%lld\n", power);

  return 0;
}
