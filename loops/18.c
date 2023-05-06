// WAP that will determine whether an integer is palindrome number or not.

#include <stdio.h>

int main()
{
  int input;
  int reversed = 0, original, rem;

  printf("Enter a number: \n");
  scanf("%d", &input);

  // store the input value to original
  original = input;

  // reverse logic ; input can't be 0
  while (input != 0)
  {
    rem = input % 10;
    reversed = reversed * 10 + rem;
    input = input / 10;
  }

  // result
  if (original == reversed)
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }

  return 0;
}
