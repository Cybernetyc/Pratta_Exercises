/*
 * definec.c -- This program using constant names from limits.h and float type.
 */
#include <stdio.h>
#include <stdlib.h>
#include <float.h>  ///< Limits for float numbers
#include <limits.h> ///< Limits for integer numbers

int main(void)
{
  printf("Some number limits for this system:\n");
  printf("Greatest meaning of int type: %d\n", INT_MAX);
  printf("Smallest meaning of long long type :%lld\n", LLONG_MIN);
  printf("In this system one byte = %d bit.\n", CHAR_BIT);
  printf("Greatest meaning of double type: %e\n", DBL_MAX);
  printf("Smallest normalize meaning foat type: %e\n", FLT_MIN);
  printf("Accuracy of float type: %d\n", FLT_DIG);
  printf("Difference between 1.00 and minimal meaning of float type, which bigger 1.00 = %.23lf\n", FLT_EPSILON);
  return EXIT_SUCCESS;
}
