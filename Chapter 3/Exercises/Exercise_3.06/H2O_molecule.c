/**
  * H2O_molecule -- This program are intended to calculate the number of water molecules in the quart
  */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  const float H20_molecule_in_liter = 3.35e25f;

  printf("Please enter volume of water in liters  ");
  int liters = 0;
  scanf("%d", &liters);

  const float H20_molecule_val = H20_molecule_in_liter * (float)liters ;

  printf("The number of molecule H2O in %d liters = %.2e\n", liters, H20_molecule_val);
  return EXIT_SUCCESS;
}
