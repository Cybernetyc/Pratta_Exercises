/**
 * cmpflt.c -- Compare numbers with floating point
 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  const double ANSWER = (3.14159);
  double response;

  printf("What is the meaning of the PI number?\n");
  scanf("%lf", &response);

  while (fabs(response - ANSWER) > 0.0001){
    printf("Enter the meaning of PI number one more:");
    scanf("%lf", &response);
  }

  printf("\nClose enough\n");
  return EXIT_SUCCESS;
}
