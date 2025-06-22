/**
 * shoes2.c -- This program is calculating the size of foot for several sizes of shoes.
 * @brief   -- This program is designed for illustrating programming with loops.
 */
#include <stdio.h>
#include <stdlib.h>

#define ADJUST (7.31)          ///< One of types of symbolic constant

int main(void) {
  double shoe = 3.0;
  printf("Size of shoe (man)    foot length\n");

  while (shoe < 18.5)    ///< While loop begin
  {                      ///< Start of the block

    const double SCALE = 0.333;

    const double FOOT = SCALE * shoe + ADJUST;
    printf("%17.1f %8.2f inches\n", shoe, FOOT);
    shoe = shoe + 1.0;
  }                      ///< End of the block

  printf("If the shoes fit. Wear it");
  return EXIT_SUCCESS;
}
