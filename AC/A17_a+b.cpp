#include <stdio.h>

int main(){
	int n, a, b;
	scanf("%d", &n);
	while(n--){
		scanf("%d%d", &a, &b);
		printf("%d\n", a+b);
	}
	return 0;
}


/*题目描述
计算 A+B

输入
第一个数为数据组数n

接下来n行，每行2个整数A, B（保证A, B, A+B在int范围内）

输出
对于每组数据，输出一行，为A+B的值

输入样例
2
1 2
3 5
输出样例
3
8*/