/**
 * double_to_cube.c -- This program is designed to calculate cube of input value
 */

#include <stdio.h>
#include <stdlib.h>

void cube_calc(double input);

int main(void)
{
  printf("Input the number:\n");
  double input = 0.0;
  scanf("%lf", &input);

  cube_calc(input);

  return EXIT_SUCCESS;
}

void cube_calc(const double input)
{
  const double cube = input * input * input;
  printf("Cube of input val %.2f is %.2f\n", input, cube);
}
