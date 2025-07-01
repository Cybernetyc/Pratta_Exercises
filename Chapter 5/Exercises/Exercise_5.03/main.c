/**
 * days_to_weeks.c -- This program is designed to convert input days to weeks and days
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  const int DAY_IN_WEEK = 7;
  printf("Please enter number of days.\n");
  printf("To exit enter value <= 0\n");

  int input;
  while (scanf("%d", &input) == 1 && input > 0)
  {
    int week = input / DAY_IN_WEEK;
    int remnant_days = input % DAY_IN_WEEK;
    printf("%d days equals %d weeks and %d days\n", input, week, remnant_days);
    printf("Please enter number of days.\n");
    printf("To exit enter value <= 0\n");
  }

  printf("Done.\n");
  return EXIT_SUCCESS;
}
