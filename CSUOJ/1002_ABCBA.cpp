#include <stdio.h>

int main(){
	char a;
	while(scanf("%c", &a) != EOF){
		
	}
}


/*题目描述
回文数是从前往后和从后往前得到的数是相同的。小南接到老师布置的任务，就是对给定的正整数n，找到比n大的最小的那个回文数p。由于n（0 <n< 1010000）可能是一个很大的数，所以只能用字符串来处理。你能帮他编写一个程序实现吗？
输入
多组样例。每组样例输入一个正整数n（0 <n< 1010000），并且n不会有前导0。
输出
对于每组输入，输出比n大的最小的那个回文数p。每个结果占一行。
样例输入 Copy
44
3
175
9
99
1331
19991
样例输出 Copy
55
4
181
11
101
1441
20002*/