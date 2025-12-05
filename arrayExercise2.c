#include <stdio.h>

#define CHARS 256

int main(void){

int i;
int chars[CHARS];

	for(i = 0; i < CHARS; i++){
		chars[i] = 0;
	}
	for(i = 33; i < 127 ; i++){
		printf("%c: \n", i);
	}
}
