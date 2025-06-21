#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char age = 0;
  printf("Enter your age:  ");
  scanf("%d", &age);

  const int days_of_life = age * 365;
  printf("Days of life: %d\n", days_of_life);
  return EXIT_SUCCESS;
}
