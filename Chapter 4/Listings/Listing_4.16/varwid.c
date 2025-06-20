/**
 * varwid.c -- using the variable width output field
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  unsigned width;
  unsigned precision;

  auto number = 256;
  double weight = 242.5;

  printf("Please enter the width of field:\n");
  scanf("%d", &width);
  printf("The meaning is: %*d:\n", width, number);

  printf("At now please enter width and precision:\n ");
  scanf("%d %d", &width, &precision);
  printf("Weight = %*.*f\n", width, precision, weight);
  puts("Done!");

  return EXIT_SUCCESS;
}
