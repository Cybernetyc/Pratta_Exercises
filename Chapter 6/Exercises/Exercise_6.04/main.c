#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int COUNTER = (6);
    char ch = 'A';
    for (int i = 1; i <= COUNTER; i++){
        for (int j = 0; j < i; j++) {
            printf("%c", ch);
            ch ++;
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
