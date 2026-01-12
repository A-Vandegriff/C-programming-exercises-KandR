#include <stdio.h>


#define TABSTOP 8


int main(void){
int c;
int col;
int blanks;
int tabs;
tabs = 0;
blanks = 0;
col = 0;

while((c = getchar()) != EOF){
	if(c == '\n'){
		printf("\n");
		col = 0;
	}else if(c == ' '){
		while(c == ' '){
			blanks++;
			c = getchar();
		}
		if(blanks >= 8){
			tabs = blanks/8;
			col += tabs*8;
			while(tabs > 0){
				printf("\t");
				tabs--;
			}
		}
		while((blanks % TABSTOP) > 0){
			printf(" ");
			col++;
			blanks--;
		}
		if(c != '\t'){
			printf("%c", c);
		}
	}else if(c == '\t'){
		
	}else{
		col++;
		printf("%c", c);
	}

}

return 0;
}
