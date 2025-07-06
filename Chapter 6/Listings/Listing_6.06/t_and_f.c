/**
 * t_and_f.c -- True and false values in the C language
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int true_val, false_val;

  true_val = (10>2);   ///< Value of true attitude
  false_val = (10==2); ///< Value of false attitude


  printf("true = %d;\nfalse = %d;\n", true_val, false_val);

  return EXIT_SUCCESS;
}
