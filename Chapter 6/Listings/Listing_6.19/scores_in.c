/**
 * scores_in.c -- using a cycles for array processing
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE (10)
#define PAR  (72)

int main(void)
{
  int index, score[SIZE];
  int sum = 0;
  float average;

  printf("Input %d results of golf game:\n", SIZE);

  for (index = 0; index < SIZE; ++index)
    scanf("%d", index+score);

  printf("You input nex values:\n");
    for (index = 0; index < SIZE; ++index)
      printf("%5d", score[index]);
  printf("\n");

  for (index = 0; index < SIZE; ++index)
    sum += score[index];                  ///< Addition of results
  average = (float)sum / SIZE;

  printf("Summ result = %d, average = %.2f\n", sum, average);
  printf("Handicap = %.0f.\n", average-PAR);

  return EXIT_SUCCESS;
}
