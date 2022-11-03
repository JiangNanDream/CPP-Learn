#include <stdio.h>

int main(){
	int i, j;
	for(i=10; i<=100; i++){
		for(j=2; j<=100; j++){
			if(i%j == 0) break;
		}
		if(i==j){
			printf("%d ", i);
		}
	}
}