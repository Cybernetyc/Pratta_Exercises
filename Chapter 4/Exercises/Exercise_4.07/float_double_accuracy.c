/**
 * float and double accuracy.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void)
{
  const double d_var = 1.0 / 12.0;

  const float f_var = 1.f / 12.f;

  printf("Accuracy = %d\nDouble variable %.*f, float variable %.*f\n\n", 4, 4, d_var, 4, f_var);
  printf("Accuracy = %d\nDouble variable %.*f, float variable %.*f\n\n", 12, 12, d_var, 12, f_var);
  printf("Accuracy = %d\nDouble variable %.*f, float variable %.*f\n\n", 16, 16, d_var, 16, f_var);

  printf("FLT_DIG = %d\nDBL_DIG = %d\n", FLT_DIG, DBL_DIG);
  ///< There is an agreement
  return EXIT_SUCCESS;
}
