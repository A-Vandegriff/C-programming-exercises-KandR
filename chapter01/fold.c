/*++****************************************************************************
  Write a program to "fold" long input lines into two or more shorter lines
  after the last non-blank character that occurs before the n-th column of
  input. Make sure your program does something intelligent with very long
  lines, and if there are no blanks or tabs before the specified column.
*******************************************************************************/
// after last non-blank means a space between two words located right after the
// last non-blank if the word (no blanks) passes through nth col, need to pick a
// fold spot (nth col) for super long inputs the program should keep folding

#include <stdio.h>

#define FOLD_COL 80
#define MAXLINE 1000

int get_line(char line[], int max);
void fold_line(char line[], int len);

int main(void) {
  char line[MAXLINE];
  int len;

  while ((len = get_line(line, MAXLINE)) > 0) {
    fold_line(line, len);
  }

  return 0;
}

/* read a line into s, return length */
int get_line(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i++] = c;
  }

  s[i] = '\0';
  return i;
}

/* fold a line longer than FOLD_COL */
void fold_line(char line[], int len) {
  int i = 0;
  int last_blank = -1;
  int col = 0;

  while (i < len) {
    putchar(line[i]);

    if (line[i] == ' ' || line[i] == '\t') {
      last_blank = i;
    }

    col++;
    i++;

    if (col >= FOLD_COL) {
      if (last_blank != -1) {
        putchar('\n');
        i = last_blank + 1;
      } else {
        putchar('\n');
      }
      col = 0;
      last_blank = -1;
    }
  }
}
