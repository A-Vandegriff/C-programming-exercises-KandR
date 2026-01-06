#include <stdio.h>

#define TABSTOP 8
#define MAXLENGTH 1000

int get_line(char arr[], int lim);
int rm_tabs(char arr[], int len);

int main(void){
char arr[MAXLENGTH];
int len;
int col;

while((len = get_line(arr, MAXLENGTH))> 0){
col = rm_tabs(arr,len);
printf("%d\n", col);
}
return 0;
}

int get_line(char s[], int lim){
int i, c;

for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n';i++){
	s[i] = c;
}
if(c == '\n'){
	s[i] = c;
	i++;
}
s[i] = '\0';

return i;
}
int rm_tabs(char arr[], int len){
int col;
int i;
int blanks;
col = 0;
blanks = 0;

for(i = 0; i < len-1;i++){

col = (i % TABSTOP);
if(arr[i] == '\t'){
	
}

}
return col;
}
