/**
 * modul_division.c -- This program is designed to demonstrate controlled modul division
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("This program is calculating modul division.\n");
  printf("Input an integer number, which will serve as the second operand:");
  int divisor = 0;
  scanf("%d", &divisor);

  printf("Now input the first operand:");
  int dividend = 0;

  while (scanf("%d", &dividend) == 1 && dividend > 0)
  {
    printf("%d %% %d = %d\n", dividend, divisor, dividend % divisor);
    printf("Input next number for first operand ( <= 0 to exit from program):");
  }
  printf("Done!\n");
  return EXIT_SUCCESS;
}