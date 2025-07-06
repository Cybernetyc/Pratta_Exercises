/**
 * while1.c -- Check the curly bracers
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n = 0;

  while (n < 3)
    printf("n = %d\n", n);

  n++;

  printf("This is all than are do in this program\n");
  return EXIT_SUCCESS;
}
