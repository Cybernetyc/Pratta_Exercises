/**
 * name_and_height.c
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int height = 0;
  printf("Enter your height: ");
  scanf("%d", &height);

  char name[100] = {};
  printf("Please enter your name: ");
  scanf("%s", name);

  printf("%s your height is %.3f meters\n", name, (float)(height/100.f));

  return EXIT_SUCCESS;
}
