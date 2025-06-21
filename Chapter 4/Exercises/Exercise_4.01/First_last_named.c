#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char first_name[50] = {};
  puts("Please enter your first name");
  scanf("%s", first_name);

  char last_name[50] = {};
  puts("Please enter your last name");
  scanf("%s", last_name);

  printf("%s,%s\n", last_name, first_name);

  return EXIT_SUCCESS;
}