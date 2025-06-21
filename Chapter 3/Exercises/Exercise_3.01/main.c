/*
 * overflow.c
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void signed_int_limits(void);
void unsigned_int_limits(void);

int main(void)
{
    unsigned char ch_2 = 0;
    size_t ch_2_len = sizeof(ch_2);

    signed_int_limits();
    puts("==============================");
    unsigned_int_limits();

    return EXIT_SUCCESS;
}

void signed_int_limits (void)
{
    const int int_1 = 0;
    const size_t int_2_len = sizeof(int_1);
    printf("Null ch_1 = %d\n", int_1);
    printf("Size of ch_1 = %zd\n", int_2_len);
    printf("Max val of int_1 = %d\n", (int)pow( 2, int_2_len * 8)-1);
    printf("Overflow of ch_1 = %d\n", ((int)pow(2, int_2_len * 8)));
}

void unsigned_int_limits(void)
{
    const unsigned int int_2 = 1;
    const size_t int_2_len = sizeof(int_2);
    printf("Null int_2 = %u\n", int_2);
    printf("Size of int_2 = %zd\n", int_2_len);
    printf("Max val of int_2 = %u\n", (int_2 << int_2_len * 8)-2);
    printf("Overflow of int_2 = %u\n", (int_2 << int_2_len * 8)-1);
}

