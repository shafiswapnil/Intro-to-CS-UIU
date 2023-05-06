#include <stdio.h>
int main()
{
  int times;
  int addition = 0;

  printf("Enter times: \n");
  scanf("%d", &times);

  for (int i = 1; i <= times; i++)
  {
    if (i % 2 == 0)
    {
      addition -= i;
    }
    else
    {
      addition += i;
    }
  }
  printf("Result: %d\n", addition);

  return 0;
}