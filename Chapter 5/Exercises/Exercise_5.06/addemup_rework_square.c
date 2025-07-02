/**
* addemup_rework_square.c -- remaster prew program
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int count      = 0;      ///< loop counter
  int sum_square = 0;      ///< Square summary

  printf("Enter a positive integer ( the value > 0 ):");
  scanf("%d", &count);

  while (count > 0) {
    sum_square = sum_square + count * count;
    count--;
  }
  printf("Square summary = %d\n", sum_square);

  return EXIT_SUCCESS;
}
