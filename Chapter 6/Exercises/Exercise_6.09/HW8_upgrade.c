#include <stdio.h>
#include <stdlib.h>

void processing(double first_number, double second_number);

int main(void)
{
    printf("Enter a two (pair) numbers separated by space ( with floating point ):");

    double first_number  = 0;
    double second_number = 0;

    while (scanf("%lf", &first_number) && scanf("%lf", &second_number))
    {
        printf("First number  = %+6.2lf\n", first_number);
        printf("Second number = %+6.2lf\n", second_number);
        processing(first_number, second_number);
        printf("Enter next two numbers ( with floating point )\n");
        printf("(for exit enter any non numeric symbol)\n");
    }

    printf("Done!\n");

    return EXIT_SUCCESS;
}

void processing(const double first_number, const double second_number)
{
    const double difference = first_number - second_number;
    const double product = first_number * second_number;
    const double processing = difference / product;

    printf("Difference    = %+6.2lf\n", difference);
    printf("Multiplying   = %+6.2lf\n", product);
    printf("Processing    = %+6.2lf\n", processing);
}