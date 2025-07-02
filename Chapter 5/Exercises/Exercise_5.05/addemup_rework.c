/**
 * addemup_rework.c -- This program is designed to show five types of operators
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int count = 0;      ///< Announce operators
  int sum   = 0;

  printf("Enter a positive integer ( the value > 0 ):");
  scanf("%d", &count);

  while (count > 0)
    sum = sum + count--;

  printf("Summary = %d\n", sum);

  return EXIT_SUCCESS;
}
