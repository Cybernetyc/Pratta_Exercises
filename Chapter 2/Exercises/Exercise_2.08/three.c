/*
 * three.c
 */

#include <stdio.h>
#include <stdlib.h>

void one_three (void);
char* two (void);

int main(void)
{
    printf("let's go:\n");
    one_three();
    printf("done!\n");
    return EXIT_SUCCESS;
}

void one_three (void)
{
    printf("one\n");
    printf("%s\n", two());
    printf("three\n");
}

char* two (void)
{
  return "two";
}