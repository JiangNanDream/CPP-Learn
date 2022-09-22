/*使用 除2取余法 将十进制数转为二进制数*/

#include <stdio.h>
#include <conio.h>

main(){
	int i, n;
	int a[8];
	printf("Please input a number < 256:\n");
	scanf("%d", &n);
	printf("%d --->", n);
	for(i=7; i>=0; i--){
		a[i] = n%2;
		n = n/2;
	}
	for(i=0; i<8; i++){
		printf("%2d", a[i]);
	}
	printf("\n");
//	printf("Please click any key to continue...\n");
//	getchar();
//	getchar();
}