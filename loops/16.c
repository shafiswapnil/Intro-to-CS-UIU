#include <stdio.h>

// GCD function
int gcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  else
  {
    return gcd(b, a % b);
  }
}

int main()
{
  int num1, num2;
  int gcd_res, lcm_res;

  // input
  printf("Enter two positive integers: \n");
  scanf("%d %d", &num1, &num2);

  // calling declared function for gcd and lcm
  gcd_res = gcd(num1, num2);
  lcm_res = (num1 * num2) / gcd_res;

  printf("GCD: %d\n", gcd_res);
  printf("LCM: %d\n", lcm_res);

  return 0;
}
