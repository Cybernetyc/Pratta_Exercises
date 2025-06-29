#include <stdio.h>
#include <stdlib.h>

const int S_PER_M = 60;         ///< The value seconds in one minutes
const int S_PER_H = 3600;       ///< The value seconds in one hour
const double M_PER_K = 0.62137; ///< The value miles in one kilometer

int main(void)
{
  double distk, distm; ///< Distantion in kilometers and miles
  double rate;         ///< Average speed in miles per hour
  int min, sec;        ///< Run time in minutes and seconds
  int time;            ///< Run time just in seconds
  double mtime;        ///< Run time one mile in seconds
  int mmin, msec;      ///< Run time one mile in minutes and seconds

  printf("This program is convert run time in metric system \n");
  printf("During a one-mile run and calculates the average\n");
  printf("speed in miles per hour\n\n");

  printf("Input the distance in kilometers.\n");
  scanf("%lf", &distk);                         ///< lf for double

  printf("Input the time in minutes and seconds.\n");

  printf("Start by entering minutes.\n");
  scanf("%d", &min);

  printf("At now entering seconds.\n");
  scanf("%d", &sec);

  ///< Convert time to seconds
  time = S_PER_M * min + sec;

  ///< Convert kilometers in miles
  distm = M_PER_K * distk;

  ///< Multiplication miles per seconds to seconds in hour are give the value miles per hour
  rate = distm / time * S_PER_H;

  ///< Division time to distance are give time milliage
  mtime = (double) time / distm;

  mmin = (int)mtime / S_PER_M; ///< Calculating total numbers of minutes
  msec = (int)mtime % S_PER_M; ///< Calculation remnant in seconds

  printf("You run %1.2f km (%1.2f miles) in %d minutes, %d seconds\n", distk, distm, min, sec);
  printf("This speed are complaince one mile run in %d min,", mmin);
  printf("%d sec.\nYour average speed is %1.2f miles per hour.\n", msec, rate);

  return EXIT_SUCCESS;
}
