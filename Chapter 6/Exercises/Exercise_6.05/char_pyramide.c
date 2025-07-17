#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  printf("Enter a character: ");
  char ch;
  scanf("%c", &ch);

  int total_string = ch - 'A' + 1;

  for (int i = 0; i < total_string; i++)
  {
    char current_symbol = 'A' + i;

    ///< 1. Spaces
    for (int spaces = 0; spaces < total_string - i - 1; spaces++)
      printf(" ");

    for (int ch = 'A'; ch <= current_symbol; ch++)
      printf("%c", ch);

    for (int ch = current_symbol - 1; ch >= 'A'; ch--)
      printf("%c", ch);

    for (int spaces = 0; spaces < total_string - i - 1; spaces++)
      printf(" ");

    printf("\n");
  }
  return EXIT_SUCCESS;
}
