/**
 * squares.c -- This program is designed to generate table of squares of 20 values.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int num = 1;
  while (num < 21)
  {
    printf("%4d %6d\n", num, num*num);
    num = num + 1;
  }

  return EXIT_SUCCESS;
}
