#include <stdio.h>

int main()
{
  int guess, count, tries;

  printf("Enter random number\n");
  scanf("%d", &count);

  printf("Enter trying limit\n");
  scanf("%d", &tries);

  for (int i = 0; i < count; i++)
  {
    printf("Enter guess: \n");
    scanf("%d", &guess);

    if (guess == count)
    {
      printf("Right, Player-2 wins!\n");
      break;
    }
    else
    {
      printf("Wrong, %d Choice(s) Left!\n", tries - i - 1);
    }
  }

  if (guess != count)
  {
    printf("Player-1 wins!\n");
  }

  return 0;
}