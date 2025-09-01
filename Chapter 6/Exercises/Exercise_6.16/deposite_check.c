#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  double dafna_s_deposite = 10.;
  double deira_s_deposite = 100.;
  constexpr double Dafna_s_percentage = 0.1;
  constexpr double Deira_s_percentage = 0.05;

  int years = 0;
  while (dafna_s_deposite < deira_s_deposite)
  {
    dafna_s_deposite += dafna_s_deposite * Dafna_s_percentage;
    deira_s_deposite += deira_s_deposite * Deira_s_percentage;
    years++;

  }

  printf("years: %i\n", years);
  printf("Dafna_s_deposite is %.2f $\n", dafna_s_deposite);
  printf("Deira_s_deposite is %.2f $\n", deira_s_deposite);
  return EXIT_SUCCESS;
}
