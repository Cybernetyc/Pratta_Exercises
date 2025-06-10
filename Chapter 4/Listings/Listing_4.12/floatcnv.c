/**
 * floatcnv.c -- inconsistent conversions with float point
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float n1 = 3.0f;
   double n2 = 3.0;
   long n3 = 2000000000;
   long n4 = 1234567890;

  printf("%.le %.le %.le %.le\n", n1, n2, n3, n4);
  printf("%ld %ld\n", n3, n4);
  printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
  return EXIT_SUCCESS;
}
