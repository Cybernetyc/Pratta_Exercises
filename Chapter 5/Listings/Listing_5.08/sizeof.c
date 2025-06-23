/**
 * sizeof.c -- This program is designed for show to the use operation sizeof
 * In this exersice we are used special modifier %z (STD C99 or higher)
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n = 0;
  size_t intsize;
  intsize = sizeof(int);
  printf("n = %d;\n"
                "n is consist of %zd bytes;\n"
                "all int types are consist %zd bytes.\n",
                n, sizeof n, intsize);
  return EXIT_SUCCESS;
}
