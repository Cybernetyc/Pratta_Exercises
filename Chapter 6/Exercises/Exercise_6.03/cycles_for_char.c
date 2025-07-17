#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char COUNTER = (6);
    for (char i = 0; i < COUNTER; i++) {
        for (char j = 0; j <= i; j++)
            printf("%c", 'F'-j);
        printf("\n");
    }
    return EXIT_SUCCESS;
}
