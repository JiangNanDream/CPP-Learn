#include <stdio.h>

int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	printf("%ld", (long)a+b);
	return 0;
}


/*题目描述
大家好，熟悉的a+b又和大家见面了呢O(∩_∩)O。

大家赶紧动动手，A了我吧 ^_^

输入
共一组，每组两个数字a, b（a, b均在int范围内）

输出
输出一行，a+b的值

输入样例
1 2
输出样例
3
提示
题中没有限定a+b的范围，那a+b是不是有可能超过int范围呢？*/