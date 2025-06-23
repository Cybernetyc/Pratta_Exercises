/**
 * min_sec.c -- This program is designed for convert seconds to minutes and seconds.
 */
#include <stdio.h>
#include <stdlib.h>

#define SEC_PER_MIN (60)

int main(void)
{
  int sec , min , left;

  printf("Convert seconds to minutes and seconds!\n");
  printf("Enter the number of seconds (<=0 to EXIT):\n");
  scanf("%d" , &sec);  ///< Reading the number of seconds

  while (sec > 0)
  {
    min = sec / SEC_PER_MIN;  ///< A truncates numbers of seconf
    left = sec % SEC_PER_MIN; ///< The number of second in the rest
    printf("%d second - it's %d minutes and %d second(s).\n", sec, min, left);
    printf("Enter the next number of second (<=0 to EXIT)\n");
    scanf("%d" , &sec);
  }
  printf("Done!\n");

  return EXIT_SUCCESS;
}
