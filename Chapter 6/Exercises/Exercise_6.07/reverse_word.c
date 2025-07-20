#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <inttypes.h>  ///< Support portable types

#define ARR_SIZE 100
#define ARR_SIZE_SCANF "99"

int main(void)
{
  char arr[ARR_SIZE] = {};    ///< Null Terminate init

  printf("Enter a word (max %d symbols):\n", ARR_SIZE);
  scanf("%"ARR_SIZE_SCANF"s", arr);

  const int word_len = (int) strlen(arr);   ///< Cast for getting a negative range of values
  for (int i = word_len - 1; i >= 0; --i)
    printf("%c", arr[i]);

  printf("\n\nReverse is done!\n");
  return EXIT_SUCCESS;
}