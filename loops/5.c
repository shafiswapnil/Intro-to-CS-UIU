#include <stdio.h>

int main()
{
  int x, y;
  printf("Enter X Y\n");
  scanf("%d %d", &x, &y);

  if (x == y)
  {
    printf("Reached!\n");
  }
  else if (x < y)
  {
    for (int i = x; i <= y; i++)
    {
      if (i == y)
      {
        printf("Reached!\n");
      }
      else
      {
        printf("%d, ", i * i);
      }
    }
  }
  else if (x > y)
  {
    for (int i = x; i >= y; i--)
    {
      if (i == y)
      {
        printf("Reached!\n");
      }
      else
      {
        printf("%d ,", i * i);
      }
    }
  }

  return 0;
}