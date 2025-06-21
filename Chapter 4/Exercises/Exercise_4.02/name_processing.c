/**
 * name_processing.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  printf("Please enter your first name: ");
  char first_name[100] = {};
  scanf("%s", first_name);

  printf("\"%s\"\n", first_name);       ///< Enclosing in quotation marks
  printf("\"%20s\"\n", first_name);     ///< Enclosing in quotation marks + field size = 20 + rigth allign
  printf("\"%-20s\"\n", first_name);    ///< Enclosing in quotation marks + field size = 20 + left allign
  printf("%*s\n",
    (int)(strlen(first_name)+3), first_name);  ///< field size = string length + 3

  return EXIT_SUCCESS;
}
