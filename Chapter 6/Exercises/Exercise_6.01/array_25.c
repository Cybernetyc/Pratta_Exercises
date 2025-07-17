#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int ARR_SIZE = (26);
    char array[ARR_SIZE] = {};

    // Array infil
    for (int i = 0 ; i < ARR_SIZE; i++)
        array[i] = 'A';

    // Array display
    for (int i = 0 ; i < ARR_SIZE; i++)
        printf("%c", array[i]);

    printf("\nDONE!");
    return EXIT_SUCCESS;
}
