/**
  * ASCII_code -- program that's serve to convert input int value to char according to ASCII table
  */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("Please enter an ASCII character code: ");

  int a = 0;
  scanf("%d", &a);
  printf("Presentation of the number %d of the ASCII code table = {%c}\n", a, a);

  return EXIT_SUCCESS;
}
