/**
 * printval -- Finding out the return value of the Printf () function;
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int bph2o = 212;
  int rv;

  rv = printf("Water boils at %d degrees Fahrenheit\n", bph2o);
  printf("Function printf() are return %d symbols.\n", rv);
  return EXIT_SUCCESS;
}
