#include <stdio.h>

int main(){
	int n, a[20] = {1, 1};
	for(n=2; n<20; n++){
		a[n] = a[n-1] + a[n-2];
	}
	for(n=0; n<20; n++){
		printf("%d, ", a[n]);
	}
}