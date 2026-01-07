#include <stdio.h>

#define TABSTOP 8
#define MAXLENGTH 1000

/* realized I need to make a state machine to process
individual charaters from a stream instead of processing data from a buffer*/

int main(void) {
  int c;
  int col;
  int blanks;

  col = 0;
  blanks = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      blanks = TABSTOP - (col % TABSTOP);
      col += blanks;
      while (blanks > 0) {
        printf(" ");
        blanks--;
      }
    } else if (c == '\n') {
      col = 0;
      printf("\n");
    } else {
      printf("%c", c);
      col++;
    }
  }
  return 0;
}
