/**
 * pinout.c -- This program is used conversion specifiers
 */
#include <stdio.h>
#include <stdlib.h>

#define PI (3.1415926535897932384626433832795)

int main(void)
{
  int number = 7;
  float pies = 12.75f;
  int cost = 7800;

  printf("%d participant challenge are eat %f pies with cherry.\n",  number, pies);
  printf("The PI value = %.20g\n", PI);
  printf("Good bye! Your art is too expensive,\n");
  printf("%c%i", '$', cost * 2);
  return EXIT_SUCCESS;
}