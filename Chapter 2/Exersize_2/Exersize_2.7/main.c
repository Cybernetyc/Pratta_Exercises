/*
 * smile.c
 */
#include <stdio.h>
#include <stdlib.h>

char * smile (void);

int main(void)
{
    printf("%s%s%s\n", smile(),smile(),smile());
    printf("%s%s\n", smile(), smile());
    printf("%s\n", smile());
    return EXIT_SUCCESS;
}


char * smile (void)
{
    return "Smile!";
}