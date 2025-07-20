#include <stdio.h>
#include <stdlib.h>


int main(void)
{
  printf("Enter upper limit (int number):");
  int up_limit = 0;
  scanf("%d", &up_limit);

  printf("Enter lower limit (int number):");
  int low_limit = 0;
  scanf("%d", &low_limit);

  if (low_limit > up_limit)     ///< Switch low to up if wrong input
  {
    const int temp = up_limit;
    up_limit = low_limit;
    low_limit = temp;
  }

  printf(" | Number | Square |   Cube   |\n");
  printf(" |--------|--------|----------|\n");

  for (int i = low_limit; i <= up_limit; i++)
    printf(" | %6d | %6d | %8d |\n", i, i * i, i * i * i);

  printf(" |----------------------------|\n");

  return EXIT_SUCCESS;
}