#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int ARR_LEN = (8);
    int arr[ARR_LEN] = {};

    printf("Enter %d numbers (array elements): ", ARR_LEN);
    for (int i = 0; i < ARR_LEN; i++)
        scanf("%d", arr + i);

    printf ("Reverse array: ");
    for (int i = ARR_LEN; i > 0; i--)
        printf("%d ", arr[i - 1]);

    printf("\n");
    printf("Done!");
    return EXIT_SUCCESS;
}
