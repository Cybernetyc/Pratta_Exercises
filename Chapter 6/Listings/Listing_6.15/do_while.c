/**
 * do_while.c -- cycle with post condition
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  const int SECRET_CODE = 13;
  int code_entered;

  do
  {
    printf("To enter, input secret code: ");
    scanf("%d", &code_entered);
  } while (code_entered != SECRET_CODE);

  printf("Done!\n");
  return EXIT_SUCCESS;
}
