/**
 * for_cube.c -- Using for cycle to build a table of cube of numbers
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int num;
  printf("  n    n^3  \n");
  for (num = 1; num <= 6; num++)
    printf("%3d %6d\n", num, num*num*num);
  return EXIT_SUCCESS;
}
