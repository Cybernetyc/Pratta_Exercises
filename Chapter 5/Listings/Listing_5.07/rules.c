/**
 * rules.c -- Priority check
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int top, score;
  top = score = -(2+5) * 6 + ( 4+3 * (2+3));
  printf("top = %d, score = %d\n", top, score);

  return EXIT_SUCCESS;
}
