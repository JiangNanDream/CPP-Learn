#include <stdio.h>

int main(){
	int m, n;
	while(scanf("%d%d", &m, &n) != EOF){
		int sum1 = 0, sum2 = 0;
		for(;m<=n;m++){
			if(m%2 == 1) sum1 += m*m;
			else sum2 += m*m*m;
		}
		printf("%d %d\n", sum1, sum2);
	}
	return 0;
}


/*题目描述
给定两个整数m、n，分别求n 与 m之间（包括 n 和 m）所有奇数的平方和与所有偶数的立方和。
输入
多组样例，每个测试样例一行，两个正整数 m、n。（m < n）
输出
平方和 立方和（用空格分隔）
样例输入 Copy
1 3
2 5
样例输出 Copy
10 8
34 72
来源/分类
简单 入门 */