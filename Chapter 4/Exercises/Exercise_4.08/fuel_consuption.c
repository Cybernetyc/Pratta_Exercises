#include <stdio.h>
#include <stdlib.h>



int main(void)
{
  printf("Enter quantity of miles:");
  float miles = 0.f;
  scanf("%f", &miles);

  printf("Enter quantity of spent GAS:");
  float gallon_gas = 0.f;
  scanf("%f", &gallon_gas);

  const float miles_per_one_gallon =  miles /  gallon_gas;
  printf("The number of miles traveled by 1 gallons of GAS = %.1f\n\n", miles_per_one_gallon);

  const float volume_conversion_rate = 3.785f;
  const float distance_conversion_rate = 1.609f;

  const float liters_of_gas = gallon_gas * volume_conversion_rate; ///< Conversion gallons to liters
  const float kilometers = miles * distance_conversion_rate;       ///< Conversion miles to kilometers

  const float liters_by_100_km = liters_of_gas / kilometers * 100.f;

  printf("The volume of GAS required by 100 kilometer = %.1f liters", liters_by_100_km);

  return EXIT_SUCCESS;
}
