/*
 * print2.c -- Additional properties of printf() function.
 */
#include <stdio.h>
#include <stdlib.h>
#include <windows.graphics.directx.h>

int main(void)
{
  const unsigned int un = 3000000000; ///< system with 32-bit int type
  const short end = 200;              ///< and 16-bit short type
  const long big = 65537;
  const long long verybig = 12345678908642;

  printf("un = %u, but no %d\n", un, un);
  printf("end = %hd and %d\n", end, end);
  printf("big = %ld, but not %hd\n",big, big);
  printf("verybig = %lld, but not %ld\n", verybig, verybig);

  return EXIT_SUCCESS;
}
