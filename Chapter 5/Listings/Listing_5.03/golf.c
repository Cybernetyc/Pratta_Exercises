/**
 * golf.c -- This program is designed for displays a table of golf tournament.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int jane, tarzan, cheeta;

  cheeta = jane = tarzan = 68;
  printf("                       cheeta,  tarzan,   jane\n");
  printf("Score of first round : %4d %8d %8d\n", cheeta, tarzan, jane);
  return EXIT_SUCCESS;
}
