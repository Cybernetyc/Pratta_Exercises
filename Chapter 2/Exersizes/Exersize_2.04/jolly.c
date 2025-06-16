/**
 * jolly.c
 */
#include <stdio.h>
#include <stdlib.h>

void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();
    return EXIT_SUCCESS;
}

void jolly(void)
{
  printf("He is cheerful!\n");
}

void deny(void)
{
  printf("No one can deny it!\n");
}