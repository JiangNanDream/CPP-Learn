#include <stdio.h>

int main(){
	int n, m;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &m);
		int sum = 0, a[m];
		for(int i=0;i<m;i++){
			scanf("%d", &a[i]);
			sum += a[i];
		}
		printf("%d\n\n", sum);
	}
	return 0;
}


/*题目描述
你的任务是计算多个数的和。
输入
第一行输入一个整数 N。接下来的 N 行，每行都以一个整数 M 开头，接下来的 M 个数位于同一行。
输出
对于输入的每组数据，你需要在一行内输出它们的和（同样的第一个数字M不算），且需要注意的是每组输出之间都要有一个空行。
样例输入 Copy
3
4 1 2 3 4
5 1 2 3 4 5
3 1 2 3
样例输出 Copy
10

15

6
来源/分类
 输入输出练习 */