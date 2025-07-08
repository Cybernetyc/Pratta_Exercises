/**
 * zeno.c -- The sum of the sequence
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int t_ct;           ///< The element counter
  double time, power_of_two;
  int limit;

  printf("Insert the desired number of elements of the sequence : ");
  scanf("%d", &limit);

  for (time = 0, power_of_two = 1, t_ct = 0;
       t_ct < limit;
       t_ct ++, power_of_two *= 2.0)
  {
    time += 1.0 / power_of_two;
    printf("Time = %f, when the numbers of elements = %d.\n", time, t_ct);
  }

  return EXIT_SUCCESS;
}
