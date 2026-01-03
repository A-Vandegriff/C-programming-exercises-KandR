#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void conversion(int lower, int upper, int step);

int main(void) {
  conversion(LOWER, UPPER, STEP);
  return 0;
}

void conversion(int lower, int upper, int step) {

  int fahr;

  for (fahr = lower; fahr <= upper; fahr = fahr + step)
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
