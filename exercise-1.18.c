#include <stdio.h>

#define MAXLINE 1000

int get_line(int s[], int lim);

int main(void){


return 0;
}

int get_line(int s[], int lim){
int c,i;

for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'){
	s[i] = c;
}
if(c == '\n'){
s[i] = '\n';
i++;
}
s[i] = '\0'
return i;
}
