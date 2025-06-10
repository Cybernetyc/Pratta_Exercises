/**
 * width.c -- This program is display different width fields
 */
#include <stdio.h>
#include <stdlib.h>

#define PAGES     (595)

int main(void)
{
  printf("*%d*\n", PAGES);
  printf("*%2d*\n", PAGES);
  printf("*%10d*\n", PAGES);
  printf("*%-10d*\n", PAGES);

  return EXIT_SUCCESS;
}
