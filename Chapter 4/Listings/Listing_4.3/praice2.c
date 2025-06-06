/*
* praice2.c -- This program uses various representation of strings
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>  ///< Represent strlen() prototype

#define PRAISE ("You are outstanding personality")

int main(void)
{
  char name[40];
  printf("That's your name? ");
  scanf("%s", name);
  printf("Hello, %s. %s.\n", name, PRAISE);
  printf("Liberty phrase contain %zd symbols", strlen(PRAISE));
  printf("and occupies %zd memory cells.\n", sizeof(PRAISE));
  return EXIT_SUCCESS;
}
