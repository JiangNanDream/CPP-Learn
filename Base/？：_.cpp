#include <stdio.h>

int main(){
	int a=1, b=2, c=3, d=4;
	printf("%d\n", a>b ? a : c>d ? c : d);	//c:4
}