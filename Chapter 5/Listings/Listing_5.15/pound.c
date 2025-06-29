/**
 * pound.c -- This program is designed for demonstration function with definition
 */

#include <stdio.h>
#include <stdlib.h>

void pound(int n); ///< Announce function prototype according to an ANSI standard

int main(void)
{
  int times = 5;
  char ch = '!';   ///< ASCI code = 33
  float f = 6.f;

  pound(times);    ///< Int type argument
  pound(ch);       ///< pound((int) ch) equialent
  pound((int)f);        ///< pound((int) f ) equialent

  return EXIT_SUCCESS;
}

void pound(int n)  ///< Function heading in ANSI style,
{                  ///< Which indicates that the function takes a single argument of type int
  while (n-- > 0)
    printf("#");
  printf("\n");
}
