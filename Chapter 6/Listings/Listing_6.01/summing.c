/**
 * shoes1.c -- This program is summing integer values interactive inputs
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  long num;
  long sum = 0L;
  int status;

  printf("Input the target number for later use ");
  printf("(or q to complete the program): ");
  status = scanf("%ld", &num);

  while (status == 1)
  {
    sum = sum + num;
    printf("Enter the next number (or q to compete the program): ");
    status = scanf("%ld", &num);
  }

  printf("Summ of input numbers is %ld\n", sum);
  printf("Done!");
  return EXIT_SUCCESS;
}
