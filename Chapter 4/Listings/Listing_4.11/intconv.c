/**
 * intconv.c -- Inconsistencies when converting integer types
 */

#include <stdio.h>
#include <stdlib.h>

#define  PAGES (336)
#define  WORDS (65618)

int main(void)
{
  const short num = PAGES;
  const short mnum = -PAGES;

  printf("num like a short and unsigned short type: %hd %hu\n", num, num);
  printf("-num like a short and unsigned short type: %hd %hu\n", mnum, mnum);
  printf("num like a int and char types: %d %c\n", num, num);
  printf("WORDS like a int, short and char types: %d, %hd, %c \n", WORDS, WORDS, WORDS);
  return EXIT_SUCCESS;
}
