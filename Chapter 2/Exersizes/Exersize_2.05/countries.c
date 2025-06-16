/**
 * br(), ic()
 */
#include <stdio.h>
#include <stdlib.h>

char * br(void);
char * ic(void);

int main(void)
{
    printf("%s, %s\n", br(), ic());
    printf("%s,\n", ic());
    printf("%s\n", br());
    return EXIT_SUCCESS;
}

char * br (void)
{
  return "Brazil, Russia";
}

char * ic (void)
{
    return "India, China";
}