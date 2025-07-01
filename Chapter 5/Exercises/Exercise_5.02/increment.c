/**
 * increment.c -- This program is designed to demonstrate increment in while cycle
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  const int LIMITS = 10;

  int input_value = 0;
  printf("Please enter the number: ");
  scanf("%d", &input_value);

  const int end = input_value + LIMITS;
  while (input_value <= end)
    printf("%d ", input_value++);

  printf("\nDone!\n");
  return EXIT_SUCCESS;
}
