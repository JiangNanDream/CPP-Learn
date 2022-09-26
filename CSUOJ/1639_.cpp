#include <stdio.h>

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		printf("%.2f\n", (float)n*1.05);
	}
	return 0;
}


/*1639: 22-选择结构-1-计税
[命题人 : 219127]
时间限制 : 1.000 sec  内存限制 : 128 MB

题目描述
编写一个程序，要求用户输入一个钱数，然后显示出加了5%税率的相应金额。格式如下所示:
输入
多组样例，每个测试样例一行，一个正整数 n，表示钱数。
输出
每个样例一行，输出一个浮点数 m，表示加税后的钱。（输出结果保留两位小数）
样例输入 Copy
100
17
样例输出 Copy
105.00
17.85
来源/分类
 */