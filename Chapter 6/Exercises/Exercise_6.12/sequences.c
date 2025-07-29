#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a = 0;
  printf("Enter a number of elements of sequence: ");

  while (scanf("%d", &a) > 0 && a > 0) {
    double first_sequence = 0.0;
    double second_sequence = 0.0;

    for (int i = 1; i <= a; i++) {
      first_sequence  += 1.0 / i;
      second_sequence += (i % 2 == 0 ? -1.0 : 1.0) / i;
    }

    printf("first  sequence = %+.40lf\n", first_sequence);
    printf("second sequence = %+.40lf\n", second_sequence);
    printf("Enter a number of elements of sequence: ");
  }

  printf("Done!\n");
  return EXIT_SUCCESS;
}
