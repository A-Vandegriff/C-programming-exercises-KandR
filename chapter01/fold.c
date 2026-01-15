/*++****************************************************************************
  Write a program to "fold" long input lines into two or more shorter lines
  after the last non-blank character that occurs before the n-th column of
  input. Make sure your program does something intelligent with very long
  lines, and if there are no blanks or tabs before the specified column.
*******************************************************************************/
//after last non-blank means a space between two words located right after the last non-blank
//if the word (no blanks) passes through nth col, need to pick a fold spot (nth col)
//for super long inputs the program should keep folding

#include <stdio.h>

#define FOLD 15

int main(void){

int c;
int col; //check leftover char of line arr, move them to front of new line
int lastblank; //gets compared with prev blank, (make sure char is before blank)
int line[FOLD];//array for line
int i;
col = 0;
lastblank = 0;
i = 0;

//need to build line array WHILE calculating last blank
while((c = getchar()) != EOF){
	//if i = 14 "fold"
	if(i < 15){
	col++;
	line[i] = c;
		if(c == ' ' && i > 0){
			if(line[i-1] != ' '){
				lastblank = i;
			}
		}
	}

}else{
//fold
}

return 0;
}

