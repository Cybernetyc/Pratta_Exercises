/**
 * rows1.c -- Using invested cycles
 */

#include <stdio.h>
#include <stdlib.h>

#define ROWS  (6)
#define CHARS (10)

int main(void)
{
  int row;
  char ch;

  for (row = 0; row < ROWS; row++)             ///< 10
  {
    for (ch = 'A'; ch < ('A' + CHARS); ch++)   ///< 12
      printf("%c", ch);
    printf("\n");
  }
  return EXIT_SUCCESS;
}