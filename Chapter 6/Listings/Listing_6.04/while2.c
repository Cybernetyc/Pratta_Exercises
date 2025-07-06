/**
 * while2.c -- Correctly place semicolons
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n = 0;
  while (n++ < 3);
    printf("n = %d\n", n);

  printf("This is all that this program are doing\n");

  return EXIT_SUCCESS;
}
