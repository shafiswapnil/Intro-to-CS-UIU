#include <stdio.h>

int main()
{
  int input;
  printf("Enter nth term\n");
  scanf("%d", &input);

  for (int i = 1; i <= input; i++)
  {
    // printf("%d\n", i);

    if (i == input)
    {
      printf("%d \n", i);
    }
    else
    {
      printf("%d, ", i);
    }
  }

  return 0;
}