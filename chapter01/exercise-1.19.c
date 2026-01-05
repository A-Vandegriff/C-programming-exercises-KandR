#include <stdio.h>

#define MAXLENGTH 1000

void reverse(char arr[], int len);
int get_line(char arr[], int lim);

int main(void){
int len;
char arr[MAXLENGTH];

while((len = get_line(arr, MAXLENGTH)) > 0){
	if(len > 0 && arr[len-1] == '\n'){
		reverse(arr,len-1);
	}else{
		reverse(arr, len);
	}
	printf("%s", arr);
}

return 0;
}

void reverse(char s[], int len){
int i, temp;

for(i = 0; i < len; i++){
temp = s[i];
s[i] = s[len-1];
s[len-1] = temp;
len--;

}

}
int get_line(char s[], int lim){
int c, i;

for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++){
	s[i] = c;
}
	if(c == '\n'){
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}
