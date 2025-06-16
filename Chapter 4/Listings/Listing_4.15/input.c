/**
* input.c -- The situation when the symbol '&' will be used
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int age;             ///< Variable
  float assets;        ///< Variable
  char pet [30];       ///< String

  printf("Enter information about your age, "
               "the amount i the bank, "
               "and your favourite animals.\n");
  scanf("%d %f", &age, &assets); ///< The symbol '&' will be indicated here
  scanf("%s", pet);              ///< For a string array, the symbol '&' is not needed
  printf("%d $%.2f %s\n", age, assets, pet);

  return EXIT_SUCCESS;
}
