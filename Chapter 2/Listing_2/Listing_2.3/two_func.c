/**
 * Two_func.c -- A program that uses two functions in one module
*/

#include <stdio.h>
#include <stdlib.h>

/* Private prototype of functions */
void butler (void);

int main(void)
{
  printf("- I'm calling the butler.\n");
  butler();
  printf("- Yes. Bring me some tea.\n");
  return EXIT_SUCCESS;
}

void butler (void) ///< The beginning of the function definition
{
  printf("- Are you call me, sir?\n");
}