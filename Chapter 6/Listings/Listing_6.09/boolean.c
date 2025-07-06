/**
* boolean.c -- Using _Bool type variables
 */

#include <stdio.h>
#include <stdlib.h>



int main(void)
{
  long num;
  long sum = 0L;
  _Bool input_is_good;
  printf("Input a number to the next summing ");
  printf("(or q to complete the program): ");
  input_is_good = scanf("%ld", &num);

  while (input_is_good)
  {
    sum = sum + num;
    printf("Input next integer number (or q to complete the program):");
    input_is_good = scanf("%ld", &num) == 1;
  }
  printf("Summ of input numbers is %ld.\n", sum);
  return EXIT_SUCCESS;
}