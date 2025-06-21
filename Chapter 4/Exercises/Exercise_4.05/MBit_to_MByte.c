#include <stdio.h>
#include <stdlib.h>

#define ACCURACY (2)

int main(void)
{
  printf("Enter downloading speed in MBit/s: ");
  float bit_speed = 0.f;
  scanf("%f", &bit_speed);

  printf("Enter size of file im MBytes: ");
  float size_of_file = 0.f;
  scanf("%f", &size_of_file);

  const float seconds = size_of_file / bit_speed * 8.0f;

  printf("At %.*f MBit/s file size"
                     "%.*f are downloading in "
                       "%.*f second(s).\n",
                    ACCURACY, bit_speed,
                      ACCURACY, size_of_file,
                        ACCURACY, seconds)
  ;

  return EXIT_SUCCESS;
}
