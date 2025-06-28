/**
 * addemup.c -- This program is designed to show five types of operators
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)  /* Finds the summ first 20 numbers */
{
  int count, sum;      ///< Announce operator
  count = 0;           ///< Assingment operator
  sum = 0;             ///< Assingment operator

  while (count++ < 20) ///< While operator
    sum = sum + count;

  printf("sum = %d\n", sum); ///< Operator of calling function

  return EXIT_SUCCESS;              ///< Return operator
}
