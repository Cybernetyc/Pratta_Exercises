/**
 * when.c -- When does the cycle end?
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n = 5;
  while (n++ < 7)
  {
    printf("n = %d\n", n);
    n++;
    printf("Now n = %d\n", n);
  }
  printf("Cycle is end!\n");
  return EXIT_SUCCESS;
}
