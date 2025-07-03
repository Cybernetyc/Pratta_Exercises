/**
 * temperature.c -- This program is designed to convert degrees in Fahrenheit
 * to Celsius and Kelvins
 */
#include <stdio.h>
#include <stdlib.h>

void Temperatures(double F_degrees);

int main(void)
{
  printf("Please enter a temperature in Fahrenheit degrees:\n");
  double degrees_fahrenheit = 0.0;

  while (scanf("%lf", &degrees_fahrenheit) == 1)
  {
    Temperatures(degrees_fahrenheit);
    printf("Please enter a temperature in Fahrenheit degrees (q to EXIT):\n");
  }

  printf("Done!\n");
  return EXIT_SUCCESS;
}

void Temperatures(const double F_degrees)
{
  const double C_degrees = 5.0 / 9.0 * (F_degrees - 32.0);
  const double K_degrees = C_degrees + 273.16;
  printf("Fahrenheit degrees = %.2lf\n", F_degrees);
  printf("Celsius degrees = %.2lf\n", C_degrees);
  printf("Kelvin degrees = %.2lf\n", K_degrees);
}