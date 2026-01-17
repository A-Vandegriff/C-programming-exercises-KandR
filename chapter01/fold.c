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

#define TABSTOP 8
#define FOLD 15

int main(void){

int c;
int col; //check leftover char of line arr, move them to front of new line
int lastblank; //gets compared with prev blank, (make sure char is before blank)
char line[FOLD];//array for line
int to_tab;
int i;
i = 0;
col = 0;
lastblank = 0;
to_tab = 0;


//need to build line array WHILE calculating last blank
while((c = getchar()) != EOF){
	//if i = 14 "fold"
	//a blank at line[0] would not be after a char so dont count



}
return 0;
}

