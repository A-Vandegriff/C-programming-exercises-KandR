#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main(void) {

  char line[MAXLINE];
  char longest[MAXLINE];
  int curLen;
  int maxLen;
  int len;
  maxLen = 0;
  // represents the length of a single line
  while ((len = get_line(line, MAXLINE)) > 0) {
    curLen += len;
    // if there is a newline, the line ends
    if (line[len - 1] == '\n') {
      // Dont count the \n
      curLen--;

      if (curLen > maxLen) {
        maxLen = curLen;
        copy(longest, line);
      }
      // since the currLine ends, curLen = 0
      curLen = 0;
    }
  }
  if (maxLen > 0)
    printf("%s\n", longest);
  printf("length: %d\n", maxLen);
  return 0;
}

int get_line(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    i++;
  }

  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0') {
    i++;
  }
}
