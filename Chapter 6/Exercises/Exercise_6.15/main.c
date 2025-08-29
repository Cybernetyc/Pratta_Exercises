#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(void)
{
  constexpr uint16_t ARR_LEN = 256;
  char input_str[ARR_LEN] = {0};

  for (uint16_t i = 0; i < ARR_LEN; ++i)
    if (scanf("%c", &input_str[i]) != 1 || input_str[i] == '\n')
    {
      input_str[i] = '\0';
      break;
    }

  size_t chars_for_output = strlen(input_str);
  do
  {
    --chars_for_output;
    printf("%c", input_str[chars_for_output]);
  }
  while (chars_for_output != 0);

  return EXIT_SUCCESS;
}