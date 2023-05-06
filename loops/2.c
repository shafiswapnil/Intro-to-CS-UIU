#include <stdio.h>

int main()
{
  int input;
  int value = 1;

  printf("Enter nth term\n");
  scanf("%d", &input);

  for (int i = 1; i <= input; i++)
  {
    if (i == input)
    {
      printf("%d\n", value);
    }
    else
    {
      printf("%d, ", value);
    }

    value += 2;
  }

  return 0;
}