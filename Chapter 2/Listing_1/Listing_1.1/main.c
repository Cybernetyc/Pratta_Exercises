/**
* Listing 1.1
 * Example of source code on C lang
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int dogs = 0;

  printf("How many dogs are you have?\n");
  scanf("%d", &dogs);

  printf("So you have %d dogs. \n", dogs);
  return EXIT_SUCCESS;
}