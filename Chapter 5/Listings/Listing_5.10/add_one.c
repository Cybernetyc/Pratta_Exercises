/**
 * Add_one.c -- This program is designed to show two forms of increment. Prefix form and postfix form.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int ultra = 0, super = 0;

  while (super < 5){

     super++;
     ++ultra;
    printf("super = %d, ultra = %d \n", super, ultra);
  }

  return EXIT_SUCCESS;
}
