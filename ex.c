#include <stdio.h>
#define CHARS 256
int main(void){

int c,i,j;
int freq[CHARS];

for(i = 0; i < CHARS; i++)
	freq[i] = 0;

while((c = getchar()) != EOF)
	freq[c]++;
for(i = 0; i < CHARS;i++){
	if(i >= 32 && i <= 126)
	printf("%c", i);

	for(j = 1; j <= freq[i];j++){
		printf("-");
	}
}
