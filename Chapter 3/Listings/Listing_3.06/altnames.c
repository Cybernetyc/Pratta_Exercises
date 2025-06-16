/*
 * altnames.c -- Portable names for integer types
 */
#include <stdio.h>
#include <inttypes.h>  ///< Support portable types
#include <stdlib.h>

int main(void)
{
  const int32_t me32 = 45933945;; ///< me32 -- 32-bit signed variable
  printf ("For the first let's assume that int32_t is int\n");
  printf("me32 = %d\n",  me32);
  printf("We won't make any further assumpions\n");
  printf("Let's use the makro from \"inttypes.h\"\n");
  printf("me32 = %" PRId32 "\n", me32);

  return EXIT_SUCCESS;
}
