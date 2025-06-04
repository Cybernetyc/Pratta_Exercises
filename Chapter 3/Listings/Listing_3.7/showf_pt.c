/*
 * show_pf.c -- displays the values of the float type in two ways
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  const float aboat = 32000.0f;
  const double abet = 2.14e9;
  const long double dip = 5.32e-5;

  printf("%f can be write as %e\n", aboat, aboat);
  printf("And it's %a in hexadecimal, representing the degree of 2, the form of recording\n", aboat);
  printf("%f can be write as %e\n", abet, abet);
  printf("%Lf can be write as %Le\n", dip, dip);
  return EXIT_SUCCESS;
}
