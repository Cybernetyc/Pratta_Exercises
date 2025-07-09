/**
 * power.c -- Elevation of the number to an integer power
 */

#include <stdio.h>
#include <stdlib.h>

double power(double n, int p);   ///< ANSI Prototype

int main(void)
{
  double x, xpow;
  int exp;
  printf("Enter the number and positive integer power, ");
  printf("in which number will be raised.\n");
  printf("To exit enter 'q' symbol: ");

  while (scanf("%lf %d", &x, &exp) == 2)
  {
    xpow = power (x, exp);   ///< Function calling
    printf("%.3g in power %d = %.5g\n", x, exp, xpow);
    printf("Enter the next pair of numbers or 'q' to exit: ");
  }

  printf("Done!");

  return EXIT_SUCCESS;
}

double power(double n, int p)   ///< Function definition
{
  double pow = 1;
  int i;

  for (i = 1; i <= p; ++i)
    pow *= n;

  return pow;
}