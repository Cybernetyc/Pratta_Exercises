#include <stdio.h>
#include <stdlib.h>

#define MAX (100)

int main(void)
{
  int count = MAX + 1;
  count ? 1 : -1;
  while (--count >= 0)
  {
    printf("%d bottles of spring water on the shelf, "
                 "%d bottles of spring water!\n", count, count);
    printf("Take one bootle and let go in a circle,\n");
    printf("%d bottles of spring water\n\n", count-1);
  }

  return EXIT_SUCCESS;
}
