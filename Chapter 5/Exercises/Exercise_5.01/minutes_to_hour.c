#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  const int MIN_TO_HOUR = 60;
  int input_minutes = 0;
  int hours = 0;
  int remaining_minutes = 0;

  printf("Please enter the value of minutes:\n\n");
  printf("For quit input value <= 0\n");

  while (scanf("%d", &input_minutes) && input_minutes > 0)
  {
    hours = input_minutes / MIN_TO_HOUR;
    remaining_minutes = input_minutes % MIN_TO_HOUR;
    printf("Equivalent %d Hour : %d minutes\n\n", hours, remaining_minutes);

    printf("Please enter the value of minutes:\n\n");
    printf("For quit input value <= 0\n");
  }
  printf("Done!\n");

  return EXIT_SUCCESS;
}
