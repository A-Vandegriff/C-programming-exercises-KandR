#include <stdio.h>

#define TABSTOP 8
#define MAXLENGTH 1000


/* realized I need to make a state machine to process
individual charaters from a stream instead of processing data from a buffer*/


int main(void){
char arr[MAXLENGTH];
int c;
int col;
int blank;


col = 0;
blank = 0;

while((c = getchar()) != EOF){
	if(c != '\t' && c != '\n'){
		printf("%d: ", col);
		printf("%c\n", c);
		col++;
	}
	if(c == '\n'){
	 col = 0;
	}

}
return 0;
}

