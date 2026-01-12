#include <stdio.h>


#define TABSTOP 8


int main(void){
int c;
int col;
int blanks;

while((c = getchar()) != EOF){
	if(c == '\n'){
		col = 0;
	}else if(c == ' '){
		while(c == ' '){
			blanks++;
			col++;
		}
	}else if(c == '\t'){
		
	}else{
		col++;
		printf("%c", c);
	}

}

return 0;
}
