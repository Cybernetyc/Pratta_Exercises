/*
 * charcode.c -- displays code value of symbol
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  const bool a = true;
  printf("%d\n", a);
  char ch;
  printf("Input a character: ");
  scanf("%c", &ch); ///< User are inputing a symbol
  printf("Code of symbol %c = %d\n",  ch, ch);
  return EXIT_SUCCESS;
}
