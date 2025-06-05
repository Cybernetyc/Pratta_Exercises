/**
  * float_for_print.c -- program that's displays float value in different spec
  */
#include <stdlib.h>

#include "stdio.h"

int main(void)
{
  printf("Please enter a float: ");
  float f = 0;
  scanf("%f", &f);

  printf("Fixed point representation       || %f\n", f);
  printf("Exponential representation       || %e\n", f);
  printf("Binom exponential representation || %a"  , f);
  return EXIT_SUCCESS;
}