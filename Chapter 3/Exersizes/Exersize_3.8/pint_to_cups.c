/**
  * pint_to_cups.c -- This program is convert volume in pint to volume in cups
  */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float cups = 0;
  printf("Please enter the number of cups: ");
  scanf("%f", &cups);

  if (cups <= 0)
    return EXIT_FAILURE;

  const float pint = cups / 2.0f;
  const float ounces = cups * 8.0f;
  const float tapbespoon = ounces * 2.0f;
  const float teaspoon = tapbespoon * 3.0f;



  printf("Equivalent value in:\n");
  printf("Pint ===========> || %.1f\n", pint);
  printf("Ounces =========> || %.1f\n", ounces);
  printf("Tablespoon =====> || %.f\n", tapbespoon);
  printf("Teaspoon =======> || %.1f\n", teaspoon);

  return EXIT_SUCCESS;
}
