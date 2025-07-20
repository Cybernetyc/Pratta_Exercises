#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("Enter a two (pair) numbers separated by space ( with floating point ):");

  double first_number  = 0;
  double second_number = 0;
  double product    = 0;
  double difference     = 0;
  double processing    = 0;
  while (scanf("%lf", &first_number) && scanf("%lf", &second_number))
  {
    difference  = first_number - second_number;
    product = first_number * second_number;
    processing = difference / product;

    printf("First number  = %+6.2lf\n", first_number);
    printf("Second number = %+6.2lf\n", second_number);
    printf("Difference    = %+6.2lf\n", difference);
    printf("Multiplying   = %+6.2lf\n", product);
    printf("Processing    = %+6.2lf\n", processing);

    printf("Enter next two numbers ( with floating point )\n");
    printf("(for exit enter any non numeric symbol)\n");
  }

  printf("Done!\n");

  return EXIT_SUCCESS;
}
