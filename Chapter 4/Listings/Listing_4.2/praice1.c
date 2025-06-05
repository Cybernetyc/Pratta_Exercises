/*
 * praice1.c -- This program uses various representation of strings
 */
#include <stdio.h>
#include <stdlib.h>

#define PRAISE ("You are outstanding personality")

int main(void)
{
  char name[40];
  printf("That's your name? ");
  scanf("%s", name);
  printf("Hello, %s. %s.\n", name, PRAISE);
  return EXIT_SUCCESS;
}
