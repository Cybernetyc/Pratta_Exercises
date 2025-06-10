/**
  * talkback.c -- A curious informative program
  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DENSITY (62.4)

int main(void)
{
  float weight;
  char name[40]; ///< Name representes array of 40 character

  printf("Hello! That's your name ?\n");
  scanf("%s", name);
  printf("%s, your weight ?\n", name);
  scanf("%f", &weight);
  const int size = sizeof(name);
  const int letters = strlen(name);
  const float volume = weight / DENSITY;
  printf("Nice, %s, your volume is %2.2f cubic foot.\n", name, volume);
  printf("Besides your name consist of %d words,\n", letters);
  printf("Id addition, we have %d bytes for save it.\n",size);
  return EXIT_SUCCESS;
}