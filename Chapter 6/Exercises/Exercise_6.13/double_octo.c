#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  constexpr int ARR_SIZE = 8;
  int arr[ARR_SIZE] = {0}; ///< Null terminate array

  int power = 1;
  for (int i = 0; i < ARR_SIZE; ++i){
    arr[i] = power;
    power <<= 1;
  }

  int print_counter = 0;
  do
  {
    printf("%d\n", arr[print_counter]);
    print_counter++;
  }
  while (print_counter < ARR_SIZE);
  return EXIT_SUCCESS;
}