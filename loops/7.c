#include <stdio.h>

int main()
{
  char input;
  int count = 1;

  while (1)
  {
    printf("Input something: \n");
    scanf("%c", &input);

    if (input == 'A')
    {
      break;
    }

    printf("Input %d: %c\n", count, input);
    count++;
  }

  return 0;
}
