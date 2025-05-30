/*
 * platinum.c
 * Your weght in platinum equivalent
 */
#include <stdio.h>
#include <stdlib.h>

enum { pt_price_per_kg = 27768600};

int main(void)
{
  float weight; ///< Weigth of user
  printf("Please enter your weight expressed in kilograms: ");
  ///< Get input data form the user
  scanf("%f", &weight);
  const float value = weight * (float)pt_price_per_kg;

  printf("Your wei ght in platinum equivalent are it's %.2f\n", value);

  return EXIT_SUCCESS;
}