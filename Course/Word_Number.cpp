#include <stdio.h>

int main(){
	char s[1000];
	gets(s);
	
	int i;
	int wordMark = 0, count = 0;
	for(i=0; s[i] != '\0'; i++){
		if(s[i] != ' '){
			wordMark = 1;
			continue;
		}else if(wordMark){
			count++;
			wordMark = 0;
		}
	}
	printf("Word number is: %d\n", count);
}