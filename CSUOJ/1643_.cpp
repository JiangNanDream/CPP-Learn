#include <stdio.h>

int main(){
	int a, b;
	while(scanf("%d%d", &a, &b) != EOF){
		printf("%d %d\n", a/b, a%b);
	}
	return 0;
}

/*题目描述
给定被除数a和除数b，求整数商及余数。
输入
多组样例，每个测试样例一行，每行为两个正整数a、b。（0<a, b<10^5）
输出
商 余数
样例输入 Copy
7 3
100 20
样例输出 Copy
2 1
5 0
来源/分类
简单 入门 */