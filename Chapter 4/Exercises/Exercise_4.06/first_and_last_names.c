/**
 * first_and_last_names.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  printf("Enter your first name: ");
  char first_name[20] = {};
  scanf("%s", first_name);

  printf("Enter your last name: ");
  char last_name[20] = {};
  scanf("%s", last_name);

  printf("%*s %*s\n",                ///< Displays First and last name right allign
                  (int)strlen(first_name),
                  first_name,
                      (int)strlen(last_name),
                      last_name)
  ;

  printf("%*zu %*zu\n",             ///< Displays length on first and last name rigth allign
                (int)strlen(first_name),
                strlen(first_name),
                       (int)strlen(last_name),
                        strlen(last_name))
  ;

 printf("%-*s %-*s\n",                ///< Displays First and last name left allign
               (int)strlen(first_name),
                first_name,
                      (int)strlen(last_name),
                      last_name)
;

 printf("%-*zu %-*zu",             ///< Displays length on first and last name left allign
               (int)strlen(first_name),
                strlen(first_name),
                       (int)strlen(last_name),
                       strlen(last_name))
 ;

  return EXIT_SUCCESS;
}
