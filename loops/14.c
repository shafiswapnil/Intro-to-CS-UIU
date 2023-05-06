// Write a program (WAP) that will find nCr where n >= r; n and r are integers.
#include <stdio.h>

int main()
{
  int n, r;
  int i; // increment variable
  unsigned long long n_fact = 1, r_fact = 1, n_minus_r_fact = 1, ncr;

  printf("Enter the value of n and r: ");
  scanf("%d %d", &n, &r);

  if (n < r)
  {
    printf("n must be greater than or equal to r.\n");
    return 1;
  }

  // CALCULATION IN 3 PARTS
  // n!
  for (i = 1; i <= n; i++)
  {
    n_fact *= i;
  }

  // r!
  for (i = 1; i <= r; i++)
  {
    r_fact *= i;
  }

  // (n-r)!
  for (i = 1; i <= (n - r); i++)
  {
    n_minus_r_fact *= i;
  }

  // CALCULATE nCr
  ncr = n_fact / (r_fact * n_minus_r_fact);

  printf("%llu\n", ncr);

  return 0;
}
