/**
* rows2.c -- Using dependent invested cycles
 */

#include <stdio.h>
#include <stdlib.h>

#define ROWS  (6)
#define CHARS (6)

int main(void)
{
  int row;
  char ch;

  for (row = 0; row < ROWS; row++)             ///< 10
  {
    for (ch = 'A' + row; ch < ('A' + CHARS); ch++)   ///< 12
      printf("%c", ch);
    printf("\n");
  }
  return EXIT_SUCCESS;
}