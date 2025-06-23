/**
 * divide.c -- Division as we know it
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("Integral division : 5/4 = %d\n", 5/4);
  printf("Integral division : 6/3 = %d\n", 6/3);
  printf("Integral division : 7/4 = %d\n", 7/4);
  printf("Division of numbers with floating point : 7./4. = %1.2f\n", 7./4.);
  printf("Mixed division: 7./4 = %1.2f\n", 7./4);

  return EXIT_SUCCESS;
}
