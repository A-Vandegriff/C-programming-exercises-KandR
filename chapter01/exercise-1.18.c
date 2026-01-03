#include <stdio.h>

#define MAXLINE 1000

int get_line(char arr[], int lim);

int main(void) {
  int len;
  char arr[MAXLINE];

  while ((len = get_line(arr, MAXLINE)) > 0) {
    if (len > 0 && arr[len - 1] == '\n') {
      arr[--len] = '\0';
    }
    while (len > 0 && (arr[len - 1] == '\t' || arr[len - 1] == ' ')) {
      arr[--len] = '\0';
    }
    if (len > 0 && arr[0] != '\n') {
      printf("%s\n", arr);
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
    s[i] = '\n';
    i++;
  }
  s[i] = '\0';
  return i;
}
