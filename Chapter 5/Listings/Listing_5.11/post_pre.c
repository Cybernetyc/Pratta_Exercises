/**
 * Post_pre.c -- This program is designed for demonstrating forms of increment. Postfix and Prefix.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a = 1, b = 1;
  int a_post, pre_b;

  a_post = a++; ///< Value a++ during the stage of assigment
  pre_b = ++b;  ///< Value ++b during the stage of assigment
  printf("a  a_post   b   pre_b \n");
  printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);

  return EXIT_SUCCESS;
}