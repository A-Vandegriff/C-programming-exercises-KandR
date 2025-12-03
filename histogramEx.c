#include <stdio.h>
#define MAXWORD 25
#define OUT 0
#define IN 1
int main(void){

int c, i, j, count, state;
int wc[MAXWORD];
count = 0;
state = OUT;
j = 0;
for(i = 0; i < MAXWORD; i++)
	wc[i] = 0;
while((c = getchar()) != EOF){
	if(c == '\t' || c == ' ' || c == '\n'){
		if(state == IN){
			state = OUT;
			if(count >= MAXWORD){
				count = MAXWORD-1;
			}
			wc[count]++;
			count = 0;
		}
	}else{
		if(state == OUT)
			state = IN;
		count++;
	}
}
if(state == IN){
	if(count >= MAXWORD){
		count = MAXWORD - 1;
	}
	wc[count]++;
}
for(i = 0; i < MAXWORD; i++){
	printf("%d: ", i);
	for(j = 1; j <= wc[i];j++){
		printf("-");
	}
	printf("\n");
}

}
