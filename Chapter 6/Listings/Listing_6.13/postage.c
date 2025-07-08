/**
 * postage.c -- Mail service tariffs of the first class
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  const int FIRST_OZ = 46;   ///< Tariffs 2013 y
  const int NEXT_OZ = 20;    ///< Tariffs 2013 y
  int ounces, cost;

  printf("   OZ TARIFFS\n");
  for (ounces = 0, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
    printf("%5d $%4.2f\n", ounces, cost/100.0);
  return EXIT_SUCCESS;
}
