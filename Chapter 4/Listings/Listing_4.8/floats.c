/**
 * floats.c -- some combinations for floats types
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  const double RENT = 3852.99; ///< Const announced be means of const

  printf("*%f*\n", RENT);
  printf("*%e*\n", RENT);
  printf("*%4.2f*\n", RENT);
  printf("*%3.1f*\n", RENT);
  printf("*%10.3f*\n", RENT);
  printf("*%10.3E*\n", RENT);
  printf("*%+4.2f*\n", RENT);
  printf("*%+010.2f*\n", RENT);
  return EXIT_SUCCESS;
}
