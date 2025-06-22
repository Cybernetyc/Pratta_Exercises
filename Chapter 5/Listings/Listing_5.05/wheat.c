/**
 * wheat.c -- This program is designed for display exponential growth.
 */
#include <stdio.h>
#include <stdlib.h>

#define SQUARES (64)

int main(void)
{
  const double CROP = 2E16;   ///< Global wheat crop in grains

  double current, total;
  int counter = 1;

  printf("     square     |      added      |      total      |"
                "     %% of      |\n");
  printf("                |      grains     |      grains     |"
                "  global wheat | \n");

  total = current = 1.;  ///< Start from one grain

  printf ("%8d %21.2e %17.2e %16.2e\n", counter, current, total, total/CROP);

  while (counter < SQUARES)
  {
    counter = counter + 1;
    current = current * 2;     ///< Doubling value of grains in next cell
    total = total + current;   ///< Renew total summ of grains

    printf ("%8d %21.2e %17.2e %16.2e\n", counter, current, total, total/CROP);
  }

  printf("DONE!\n");
  return EXIT_SUCCESS;
}
