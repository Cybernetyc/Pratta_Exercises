#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char COUNTER = (5);
    for (char i = 0; i < COUNTER; i++) {
        for (char j = 0; j <= i; j++)
            printf("$");
        printf("\n");
    }
    return EXIT_SUCCESS;
}
