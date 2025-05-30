/**
 * Outputs the number 100 in decimal, octagonal, hexadecimal form
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  const int x = 100;
  printf("Decimal = %d; Octagonal = %o; Hexadecimal = %x\n", x, x, x);
  printf("Decimal = %d; Octagonal = %#o, Hexadecimal = %#x\n", x, x, x);
  return EXIT_SUCCESS;
}
