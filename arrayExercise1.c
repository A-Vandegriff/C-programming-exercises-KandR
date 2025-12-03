#include <stdio.h>

#define IN 1
#define OUT 0
#define WORDLENGTH 25

int main(void) {

  int words[WORDLENGTH];
  int i, j, state, c, count, size;

  size = 0;
  state = OUT;

  for (i = 0; i < WORDLENGTH; i++) {
    words[i] = 0;
  }

  while ((c = getchar()) != EOF) {

    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        state = OUT;
        words[count]++;
        count = 0;
      }
    } else {
      if (state == OUT) {
        state = IN;
      }
      count++;
    }
    if (word[count] > WORDLENGTH) {
      word[count] = WORDLENGTH - 1;
    }
  }
  if (state == IN) {
    words[count]++;
  }

  for (i = 1; i <= WORDLENGTH; i++) {
    printf("%d: ", i);
    for (j = 1; j <= words[i]; j++) {
      printf("-");
    }
    printf("\n");
  }
}
