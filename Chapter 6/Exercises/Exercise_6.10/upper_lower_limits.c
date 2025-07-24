#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Enter the combination of limits (lower and upper): ");
    int lower_limit = 0;
    int upper_limit = 0;
    scanf("%d %d", &lower_limit, &upper_limit);

    while (upper_limit > lower_limit)
    {
        long summ = 0;
        for (int count = lower_limit; count <= upper_limit; count++)
            summ += count*count;

        printf("Summ of squares numbers [%d : %d] = %ld\n", lower_limit, upper_limit, summ);
        printf("Enter the next combination of limits (lower and upper): ");
        scanf("%d %d", &lower_limit, &upper_limit);
    }

    printf("Done.\n");
    return EXIT_SUCCESS;
}
