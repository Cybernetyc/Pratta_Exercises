/**
 * @brief centimeters_to_inches.c -- This program is convert input val in centimeters to inches
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float centimeters = .0f;
  printf("Please enter your height in centimeters: ");
  scanf("%f", &centimeters);

  const float inches = centimeters * .3937f;
  printf("Your height is imperial system is %.2f inches", inches);
  return EXIT_SUCCESS;
}
