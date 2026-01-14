/* write a program entab that replaces strings of blanks by the
minimum number of tabs and blanks to acheive the same spacing*/
#include <stdio.h>

#define TABSTOP 8

int main(void)
{
char c;
int blanks;
int col;
int next_tab;
//need to make an input stream
while((c = getchar()) != EOF){
	if(c == ' '){
		blanks++;
	}else{
		//need to process potentially added blanks
		next_tab = TABSTOP - (col % TABSTOP);
		if(blanks >= next_tab && next_tab > 1){
			putchar('\t');
			col += next_tab;
			blanks -= next_tab;
		}else{
			while(blanks > 0){
				putchar(' ');
				col++;
				blanks--;
			}
		}
	}
	if(c == '\n'){
		col = 0;
		putchar('\n');
	}else if(c == '\t'){
		next_tab = TABSTOP - (col % TABSTOP);
		col += next_tab;
		putchar();
	}

}
    return 0;
}

/*hello####world
whats up#########?*/
