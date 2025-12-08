#include <stdio.h>

#define CHARS 256

int main(void){

int c,i,j;
int chars[CHARS];

	for(i = 0; i < CHARS; i++){
		chars[i] = 0;
	}

	while((c = getchar()) != EOF){
		if(c >= 33 && c < 127){
			chars[c]++;
        	}
	}
	for(i = 33;i<127;i++){
		printf("%c:", i);
		for(j = 0; j<chars[i]; j++){
			printf("-");
		}
		printf("\n");
	}
}

