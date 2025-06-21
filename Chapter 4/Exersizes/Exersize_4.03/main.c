/**
 * float_displays.c
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float variable = 0.0f;
  scanf("%f", &variable);

  printf("%.1f\n", variable);
  printf("%.3e", variable);

  return EXIT_SUCCESS;
}
