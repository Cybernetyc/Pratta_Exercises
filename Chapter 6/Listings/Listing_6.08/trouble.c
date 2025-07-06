/**
 * trouble.c -- Incorrect using = operation leads to the looping
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  long num;
  long sum = 0L;
  int status;
  printf("Input a number to the next summing ");
  printf("(or q to complete the program): ");
  status = scanf("%ld", &num);
  while (status = 1)
  {
    sum = sum + num;
    printf("Input next integer number (or q to complete the program):");
    status = scanf("%ld", &num);
  }
  printf("Summ of input numbers is %ld.\n", sum);
  return EXIT_SUCCESS;
}