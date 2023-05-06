#include <stdio.h>
int main()
{
  int times;
  int addition = 0;

  printf("Enter times: \n");
  scanf("%d", &times);

  for (int i = 1; i <= times; i++)
  {
    int power = (i * i);
    addition += (i + 1) * power;
  }

  printf("Result: %d\n", addition);

  return 0;
}