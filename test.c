#include <stdio.h>

/**
 * main - main function
 *
 * Return: no error
 */
int main(int argc, char const *argv[])
{
  int a = 1, b = 2, i;
  char *r1 = "a is greater than b";
  char *r2 = "b is greater than a";
  char *r3 = "a and b are equal";

  for (int i = 0; i < 3; i++)
  {
    if (a > b)
    {
      printf("%s\n", r1);
    }
    else if (a == b)
    {
      printf("%s\n", r3);
    }
    else {
      printf("%s\n", r2);
    }
    a++;
  }
  
  return 0;
}
