#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  constexpr uint8_t ARR_LEN = 8;
  double arr_1 [ARR_LEN] = {0};
  double arr_2 [ARR_LEN] = {0};

  puts ("Please enter the 1 number of arr_1");

  for (uint8_t i = 0; i < ARR_LEN && scanf("%lf", &arr_1[i]) == 1; ++i)
    printf("Please enter the %d number of arr_1\n", i+2);

  double summ = 0;
  for (uint8_t i = 0; i < ARR_LEN; ++i){
    summ += arr_1[i];
    arr_2[i] = summ;
  }

  for (uint8_t i = 0; i < ARR_LEN; ++i)
    printf("%9.2f%c", arr_1[i],
                              i == ARR_LEN - 1 ? '\n' : ' ');

  for (uint8_t i = 0; i < ARR_LEN; ++i)
    printf("%9.2f ", arr_2[i]);

  return EXIT_SUCCESS;
}