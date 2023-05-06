// Fibonacci series
#include <stdio.h>
int main()
{
  int times;
  int first = 1, second = 1, forward;

  printf("Enter times: \n");
  scanf("%d", &times);

  if (times == 1)
  {
    printf("1");
  }
  else
  {
    printf("%d, %d", first, second);

    for (int i = 3; i <= times; i++)
    {
      forward = first + second;
      printf(", %d", forward);

      // logic
      first = second;
      second = forward;
    }
  }

  return 0;
}
