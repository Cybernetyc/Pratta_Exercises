/*
 * typesize.c -- print size of types
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  /* The C99 standard for sizes provides for a specifier %ZD */
  printf("Type char has a size %zd bytes. \n", sizeof(char));
  printf("Type short has a size %zd bytes. \n", sizeof(short));
  printf("Type int has a size %zd bytes. \n", sizeof(int));
  printf("Type long has a size %zd bytes. \n", sizeof(long));
  printf("Type long long has a size %zd bytes. \n", sizeof(long long));
  printf("Type float has a size %zd bytes. \n", sizeof(float));
  printf("Type double has a size %zd bytes. \n", sizeof(double));
  printf("Type long double has a size %zd bytes. \n", sizeof(long double));
  return EXIT_SUCCESS;
}
