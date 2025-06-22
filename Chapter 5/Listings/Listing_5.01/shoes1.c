/**
 * shoes1.c -- This program is convert the size of shoes to inches.
 * @brief   -- This program is designed for illustrating limitation\n
 *             programming without loops.
 */
#include <stdio.h>
#include <stdlib.h>

#define ADJUST (7.31)          ///< One of types of symbolic constant

int main(void)
{
  const double SCALE = 0.333;  ///< One more type of symbolic constant
  const double SHOE = 9.0;
  const double FOOT = SCALE * SHOE + ADJUST;

  printf("Size of shoe (man)    foot length\n");
  printf("%18.1f %8.2f inches\n", SHOE, FOOT);

  return EXIT_SUCCESS;
}
