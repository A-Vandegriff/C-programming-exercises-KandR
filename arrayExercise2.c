#include <stdio.h>

#define FIRST 33
#define LAST 127

int main(void) {

  int c, i, j;
  int chars[LAST - FIRST] = {0};

  while ((c = getchar()) != EOF) {
    if (c >= FIRST && c < LAST) {
      chars[c-FIRST]++;
    }
  }
  for (i = 0; i < LAST-FIRST; i++) {
    printf("%c:", i + FIRST);
    for (j = 0; j < chars[i]; j++) {
      printf("-");
    }
    printf("\n");
  }
}
