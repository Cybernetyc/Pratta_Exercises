/**
  * years_to_second.c -- program that's converts input years to seconds.
  */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  const float sec_in_year = 3.156e7f;
  printf("Please enter your age  ");
  int age = 0;
  scanf("%i", &age);
  printf("Second equivalent = %.2f , %e\n", sec_in_year * (float)age, sec_in_year * (float)age);
  return EXIT_SUCCESS;
}
