#include <stdio.h>

int main(){
	int numberList[4][4];
	int i,j;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			scanf("%d", &numberList[i][j]);
		}
	}
	int max = numberList[0][0];
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(max < numberList[i][j]){
				max = numberList[i][j];
			}
		}
	}
	printf("The max number is: %d\n", max);
}