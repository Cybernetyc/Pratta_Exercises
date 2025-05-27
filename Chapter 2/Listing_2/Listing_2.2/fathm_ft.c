/**
 * Convert program
  */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int feet , fathoms;
  fathoms = 2;
  feet = fathoms * 6;

  printf("In %d fathoms, contains %d ft.\n", feet , feet);
  return EXIT_SUCCESS;
}