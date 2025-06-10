/**
 * pizza.c -- This program is used some constants, certain in relationship to pizza
 */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#define  PI (3.14159f)

int main(void)
{
  float radius = 0;

  printf("Enter the radius of the pizza: ");
  scanf("%f", &radius);

  const float area = PI * radius * radius;
  const float circum = 2.0f * PI * radius;

  printf("The main parameters of your pizza is:\n");
  printf("Area ---------------------------->|| %.2f\n", area);
  printf("Length of the circle ------------>|| %.2f\n", circum);
  return EXIT_SUCCESS;
}