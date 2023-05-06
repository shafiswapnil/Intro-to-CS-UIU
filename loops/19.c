#include <stdio.h>
#include <math.h>

int main()
{
  double x, term, sum = 0;
  int sign = 1, fact = 1;

  printf("Enter x : \n");
  scanf("%lf", &x);

  for (int i = 1; i <= 15; i += 2)
  {
    term = sign * pow(x, i) / fact;
    sum = sum + term;
    sign *= -1;
    fact = fact * (i + 1) * (i + 2);
  }

  // result
  printf("%lf\n", sum);

  return 0;
}
