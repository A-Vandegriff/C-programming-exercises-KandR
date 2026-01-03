#include <stdio.h>

#define MAXLENGTH 1000

int get_line(char arr[], int lim);

int main(void) {
  int len;
  char line[MAXLENGTH];
  while ((len = get_line(line, MAXLENGTH)) > 0) {
    if (len > 80) {
      printf("%s", line);
    }
  }
  return 0;
}

int get_line(char s[], int lim) {
  int c, i;
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
  return i;
}
