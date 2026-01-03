#include <stdio.h>

#define IN 1
#define OUT 0
#define WORDLENGTH 25

int main(void) {

  int words[WORDLENGTH];
  int i, j, state, c, count;

  state = OUT;
  count = 0;

  for (i = 0; i < WORDLENGTH; i++) {
    words[i] = 0;
  }

  while ((c = getchar()) != EOF) {

    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        state = OUT;

        if (count >= WORDLENGTH)
          words[WORDLENGTH - 1]++;
        else
          words[count]++;

        count = 0;
      }
    } else {
      if (state == OUT) {
        state = IN;
      }
      count++;
    }
  }
  if (state == IN) {
    if (count >= WORDLENGTH) {
      words[WORDLENGTH - 1]++;
    } else {
      words[count]++;
    }
  }

  for (i = 1; i < WORDLENGTH; i++) {
    printf("%d: ", i);
    for (j = 0; j < words[i]; j++) {
      printf("-");
    }
    printf("\n");
  }
}
