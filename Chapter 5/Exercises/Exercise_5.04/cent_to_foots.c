#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float cm = 0;
  const float CM_PER_FOOT = 30.48f;
  const float INCH_PER_FOOT = 12.0f;

  printf("Input height in centimeters: ");
  while (scanf("%f", &cm) == 1 && cm > 0)
  {
    float feet_total   = cm / CM_PER_FOOT;               ///< Calculate foots and inches
    int   feet_integer = (int)feet_total;                ///< force cast float to int
    float inches       = (feet_total - feet_integer) * INCH_PER_FOOT;

    printf("%.1f cm = %d feet, %.1f inches\n",
                        cm,
                                feet_integer,
                                           inches)
    ;

    printf("Input height in centimeters (<=0 for exit): ");
  }

  printf("Done!\n");
  return EXIT_SUCCESS;
}