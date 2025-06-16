/**
 * printl.c -- demonstrate some features of printf() function
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int ten = 10;
    const int two = 2;

    printf("Performed correctly: ");
    printf("%d minus %d = %d\n", ten, 2, ten - two);
    printf("Performs incorrectly: ");
    printf("%d minus %d = %d\n", ten);
    return EXIT_SUCCESS;
}
