/**
 * sweetie1.c -- Cycle with counter
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  const int NUMBER = 22;

  int count = 1;         ///< Counter initialization

  while (count <= NUMBER) {
    printf("Be my friend! \n");  ///< Action
    count++;
  }

  return EXIT_SUCCESS;
}
