#include <stdio.h>

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		while(n--){
			printf("*");
		}
		printf("\n\n");
	}
	return 0;
}


/*题目描述
给定一个整数n，输出一行用“*”组成的图形。
输入
多样例输入。每个样例输入一行，包括一个正整数n（1≤n≤10）。
输出
对于每个样例，输出一行由n个“*”组成图形。每个样例的输出占一行，不同样例的输出之间空一行。
样例输入 Copy
2
5
样例输出 Copy
**

******/